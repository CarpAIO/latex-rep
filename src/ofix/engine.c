
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <ctype.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/tcp.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

#include "err.h"
#include "engine.h"
#include "dtime.h"
#include "store.h"
#include "session.h"
#include "tag.h"
#include "private.h"

typedef struct _EngSession {
    struct _EngSession	*next;
    struct _ofixSession	session;
} *EngSession;

typedef struct _Auth {
    struct _Auth	*next;
    // fields are part of auth_data of engine
    char		*comp_id;
    char		*user;
    char		*password;
} *Auth;

struct _ofixEngine {
    char		*id;
    char		*ipaddr;
    int			port;
    ofixVersionSpec	spec;
    char 		*store_dir;
    char		*auth_data;
    Auth		auths;
    int 		heartbeat_interval;
    bool		done;
    bool		closed;
    EngSession		sessions;
    pthread_mutex_t	session_mutex;
    ofixRecvCallback	recv_cb;
    void		*recv_ctx;
    ofixLogOn		log_on;
    ofixLog		log;
    void		*log_ctx;
};

static bool
log_on(void *ctx, ofixLogLevel level) {
    return (level <= OFIX_INFO);
}

static void
log(void *ctx, ofixLogLevel level, const char *format, ...) {
    if (level <= OFIX_INFO) {
	va_list	ap;

	va_start(ap, format);
	vprintf(format, ap);
	va_end(ap);
    }
}

static EngSession
session_create(ofixErr err, struct _ofixEngine *eng, int sock) {
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    EngSession	es = (EngSession)malloc(sizeof(struct _EngSession));

    if (NULL == es) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to allocate memory for session.");
	}
	return NULL;
    }
    if (0 != pthread_mutex_init(&es->session.send_mutex, 0)) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to initialize mutex.");
	}
	free(es);
	return NULL;
    }
    _ofix_session_init(err, &es->session, eng->id, NULL, NULL, eng->spec, eng->recv_cb, eng->recv_ctx);
    es->session.eng = eng;
    es->session.sock = sock;
    es->session.spec = eng->spec;
    es->session.log_on = eng->log_on;
    es->session.log = eng->log;
    es->session.log_ctx = eng->log_ctx;
    es->session.heartbeat_interval = eng->heartbeat_interval;
    strncpy(es->session.store_dir, eng->store_dir, sizeof(es->session.store_dir));
    es->session.store_dir[sizeof(es->session.store_dir) - 1] = '\0';

    return es;
}

static void
session_destroy(ofixErr err, EngSession session) {
    if (NULL != session) {
	EngSession	es;
	EngSession	prev = NULL;
	ofixEngine	eng = session->session.eng;

	pthread_mutex_lock(&eng->session_mutex);
	for (es = eng->sessions; NULL != es; es = es->next) {
	    if (es == session) {
		if (NULL == prev) {
		    eng->sessions = es->next;
		} else {
		    prev->next = es->next;
		}
		break;
	    }
	    prev = es;
	}
	pthread_mutex_unlock(&eng->session_mutex);

	_ofix_session_free(&session->session);
	free(session);
    }
}

static char*
skip_space(char *s) {
    for (; isspace(*s); s++) {
	if ('\0' == *s) {
	    return NULL;
	}
    }
    return s;
}

static char*
skip_comment(char *s) {
    if ('#' != *s) {
	return s;
    }
    for (; '\n' != *s; s++) {
	if ('\0' == *s) {
	    return NULL;
	}
    }
    s++;
    return s;
}

static Auth
read_auth(char **sp) {
    char	*s = *sp;
    Auth	auth;
    char	*cid;
    char	*u = NULL;
    char	*p = NULL;

    while (NULL != (s = skip_space(s)) &&
	   NULL != (s = skip_comment(s))) {
	if (!isspace(*s)) {
	    break;
	}
    }
    cid = s;
    for (; ':' != *s; s++) {
	// TBD check error
	if ('\0' == *s || '\n' == *s) {
	    return NULL;
	}
    }
    *s++ = '\0';
    for (; ' ' == *s; s++) {
    }
    u = s;
    for (; '@' != *s; s++) {
	// TBD check error
	if ('\0' == *s || '\n' == *s) {
	    return NULL;
	}
    }
    *s++ = '\0';
    p = s;
    for (; '\n' != *s; s++) {
	if ('\0' == *s) {
	    return NULL;
	}
    }
    *s++ = '\0';
    if (NULL == (auth = (Auth)malloc(sizeof(struct _Auth)))) {
	// TBD error
	return NULL;
    }
    auth->next = NULL;
    auth->comp_id = cid;
    auth->user = (('*' == *u && '\0' == u[1]) ? NULL : u);
    auth->password = (('*' == *p && '\0' == p[1]) ? NULL : p);
    *sp = s;

    return auth;
}

// File format is one entry per line. Blank lines or lines that start with # are
// ignored. The line format is <component id>:<user>@<password>
static void
load_auth(ofixErr err, ofixEngine eng, const char *filename) {
    FILE	*f;
    Auth	auth;
    long	size;
    char	*s;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == (f = fopen(filename, "r"))) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to open auth file '%s'. %s",
		     filename, strerror(errno));
	}
	return;
    }
    if (0 > fseek(f, 0, SEEK_END) || 0 > (size = ftell(f)) || 0 > fseek(f, 0, SEEK_SET)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to read auth file '%s'. %s",
		     filename, strerror(errno));
	}
	fclose(f);
	return;
    }
    if (NULL == (eng->auth_data = (char*)malloc(size + 1))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for file '%s'.", filename);
	}
	fclose(f);
	return;
    }
    if (size != fread(eng->auth_data, 1, size, f)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to read auth file '%s'. %s",
		     filename, strerror(errno));
	}
	fclose(f);
	return;
    }