
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
    fclose(f);
    eng->auth_data[size] = '\0';
    s = eng->auth_data;
    while (NULL != (auth = read_auth(&s))) {
	auth->next = eng->auths;
	eng->auths = auth;
    }
}

ofixEngine
ofix_engine_create(ofixErr err,
		   const char *id,
		   int port,
		   const char *auth_file,
		   const char *store_dir,
		   ofixVersionSpec spec,
		   int heartbeat_interval) {
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    ofixEngine	eng = (ofixEngine)malloc(sizeof(struct _ofixEngine));

    if (NULL == eng) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to allocate memory for engine.");
	}
	return NULL;
    }
    if (NULL == id) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "NULL session identifier argument to engine create is not valid.");
	}
	free(eng);
	return NULL;
    }
    eng->sessions = NULL;
    if (0 != pthread_mutex_init(&eng->session_mutex, 0)) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to initialize mutex.");
	}
	free(eng);
	return NULL;
    }
    eng->id = strdup(id);
    eng->done = true;
    eng->closed = true;
    eng->ipaddr = NULL;
    eng->port = port;
    eng->spec = spec;
    eng->log_on = log_on;
    eng->log = log;
    eng->log_ctx = NULL;
    eng->auth_data = NULL;
    eng->auths = NULL;
    if (NULL != auth_file) {
	load_auth(err, eng, auth_file);
    }
    if (NULL == store_dir) {
	eng->store_dir = strdup(".");
    } else {
	char	cmd[1024];

	eng->store_dir = strdup(store_dir);
	snprintf(cmd, sizeof(cmd), "mkdir -p %s", eng->store_dir);
	if (0 != system(cmd)) {
	    if (NULL != err) {
		err->code = OFIX_WRITE_ERR;
		snprintf(err->msg, sizeof(err->msg), "Failed to create directory '%s'.", eng->store_dir);
	    }
	    free(eng);
	    return NULL;
	}
    }
    eng->heartbeat_interval = heartbeat_interval;

    return eng;
}

void
ofix_engine_destroy(ofixErr err, ofixEngine eng) {
    if (NULL != eng) {
	EngSession	sessions;
	EngSession	es;
	double		give_up;
	Auth		auth;

	pthread_mutex_lock(&eng->session_mutex);
	sessions = eng->sessions;
	eng->sessions = NULL;
	pthread_mutex_unlock(&eng->session_mutex);

	while (NULL != (es = sessions)) {
	    sessions = sessions->next;
	    session_destroy(err, es);
	}
	eng->done = true;
	give_up = dtime() + 2.0;
	while (dtime() < give_up && !eng->closed) {
	    dsleep(0.1);
	}
	free(eng->id);
	free(eng->ipaddr);
	free(eng->store_dir);
	while (NULL != (auth = eng->auths)) {
	    eng->auths = eng->auths->next;
	    free(auth);
	}
	free(eng->auth_data);
	free(eng);
    }
}

bool
ofix_engine_running(ofixEngine eng) {
    return (!eng->closed && !eng->done);
}

void
ofix_engine_on_recv(ofixEngine eng, ofixRecvCallback cb, void *ctx) {
    eng->recv_cb = cb;
    eng->recv_ctx = ctx;
}

const char*
ofix_engine_id(ofixEngine eng) {
    return eng->id;
}

const char*
ofix_engine_ipaddr(ofixEngine eng) {
    return eng->ipaddr;
}

const char*
ofix_engine_store_dir(ofixEngine eng) {
    return eng->store_dir;
}

int
ofix_engine_heartbeat_interval(ofixEngine eng) {
    return eng->heartbeat_interval;
}

int
ofix_engine_port(ofixEngine eng) {
    return eng->port;
}

void
ofix_engine_start(ofixErr err, ofixEngine eng) {
    struct sockaddr_in	server_addr;
    struct sockaddr_in	client_addr;
    struct sockaddr_in	saddr;
    struct timeval	to;
    fd_set		xfds;
    fd_set		rfds;
    socklen_t		addr_len = sizeof(client_addr);
    int			csock;
    int			ssock;
    int			cnt;

    if (-1 == (ssock = socket(AF_INET, SOCK_STREAM, 0))) {
	if (NULL != err) {
	    err->code = OFIX_NETWORK_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to create socket. %s.", strerror(errno));
	}
	return;
    }
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(eng->port);
    if (0 != bind(ssock, (struct sockaddr*)&server_addr, sizeof(server_addr))) {
	if (NULL != err) {
	    err->code = OFIX_NETWORK_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Bind failed on socket. %s.", strerror(errno));
	}
	return;
    }
    if (0 != listen(ssock, 1)) {
	if (NULL != err) {
	    err->code = OFIX_NETWORK_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Listen failed on socket. %s.", strerror(errno));
	}
	return;
    }
    eng->done = false;
    eng->closed = false;
    while (!eng->done) {
	to.tv_sec = 1;
	to.tv_usec = 0;
	FD_ZERO(&rfds);
	FD_ZERO(&xfds);
	FD_SET(ssock, &rfds);
	FD_SET(ssock, &xfds);
	if (0 < (cnt = select(ssock + 1, &rfds, 0, &xfds, &to))) {
	    if (FD_ISSET(ssock, &rfds)) {
		EngSession	session = NULL;

		if (0 > (csock = accept(ssock, (struct sockaddr*)&client_addr, &addr_len))) {
		    csock = 0;
		    eng->log(eng->log_ctx, OFIX_WARN, "Failed to accept a client connection.");
		    continue;
		}
		getpeername(csock, (struct sockaddr*)&saddr, &addr_len);
		saddr.sin_addr.s_addr = htonl(saddr.sin_addr.s_addr);

		eng->log(eng->log_ctx, OFIX_INFO, "Connection established from %d.%d.%d.%d on socket %d",
			 saddr.sin_addr.s_addr >> 24,
			 (saddr.sin_addr.s_addr >> 16) & 0xFF,
			 (saddr.sin_addr.s_addr >> 8) & 0xFF,
			 saddr.sin_addr.s_addr & 0xFF,
			 csock);

		session = session_create(err, eng, csock);
		if (NULL == session) {
		    if (NULL != err) {
			eng->log(eng->log_ctx, OFIX_WARN, "Failed to start session. %s", err->msg);
		    }
		    close(csock);
		} else {
		    session->next = eng->sessions;
		    eng->sessions = session;
		    _ofix_session_start(err, &session->session, false);
		    if (NULL != err && OFIX_OK != err->code) {
			eng->log(eng->log_ctx, OFIX_WARN, "Failed to start session. %s", err->msg);
			close(csock);
		    }
		}
	    } else if (FD_ISSET(ssock, &xfds)) {
		if (NULL != err) {
		    err->code = OFIX_NETWORK_ERR;
		    snprintf(err->msg, sizeof(err->msg), "Error on server socket.");
		}
		break;
	    }
	}
    }
    close(ssock);
    eng->closed = true;
}

ofixSession
ofix_engine_get_session(ofixErr err, ofixEngine eng, const char *cid) {
    EngSession	es;
    ofixSession	session = NULL;

    pthread_mutex_lock(&eng->session_mutex);
    for (es = eng->sessions; NULL != es; es = es->next) {
	if (0 == strcmp(cid, es->session.tid)) {
	    session = &es->session;
	    break;
	}
    }
    pthread_mutex_unlock(&eng->session_mutex);

    return session;
}

static bool
log_on_false(void *ctx, ofixLogLevel level) {
    return false;
}

static void
log_noop(void *ctx, ofixLogLevel level, const char *format, ...) {
}

void
ofix_engine_set_log(ofixEngine eng, ofixLogOn log_on, ofixLog log, void *ctx) {
    if (NULL == log_on) {
	eng->log_on = log_on_false;
    } else {
	eng->log_on = log_on;
    }
    if (NULL == log) {
	eng->log = log_noop;
    } else {
	eng->log = log;
    }
    eng->log_ctx = ctx;
}

bool
ofix_engine_authorized(ofixEngine eng, const char *cid, const char *user, const char *password) {
    Auth	a = eng->auths;

    for (; NULL != a; a = a->next) {
	if (0 == strcmp(a->comp_id, cid) &&
	    (NULL == a->user || (NULL != user && 0 == strcmp(a->user, user))) &&
	    (NULL == a->password || (NULL != password && 0 == strcmp(a->password, password)))) {
	    return true;
	}
    }
    // If no auths loaded so assume all are okay else return false.
    return (NULL == eng->auths);
}

void
ofix_engine_set_heartbeat(ofixEngine eng, int interval) {
    eng->heartbeat_interval = interval;
}