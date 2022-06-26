// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include <netdb.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

#include "dtime.h"
#include "session.h"
#include "engine.h"
#include "store.h"
#include "tag.h"
#include "versionspec.h"
#include "private.h"

#define HEARTBEAT_TOLERANCE	2.0
#define HEARTBEAT_GIVEUP	2.0

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

void
_ofix_session_init(ofixErr err,
		   ofixSession s,
		   const char *sid,
		   const char *tid,
		   const char *store_path,
		   ofixVersionSpec spec,
		   ofixRecvCallback cb,
		   void *ctx) {
    double	now = dtime();

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == sid) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "NULL sender identifier argument to session create is not valid.");
	}
	return;
    }
    s->spec = spec;
    if (NULL == spec) {
	*s->version_str = '\0';
    } else {
	snprintf(s->version_str, sizeof(s->version_str), "FIX.%d.%d", spec->major, spec->minor);
	s->version_str[sizeof(s->version_str) - 1] = '\0';
    }
    s->eng = NULL;
    s->sent_seq = 0;
    s->recv_seq = 0;
    s->sock = 0;
    s->recv_cb = cb;
    s->recv_ctx = ctx;
    s->heartbeat_interval = 30;
    s->heartbeat_next_send = (double)s->heartbeat_interval + now;
    s->heartbeat_expect_recv = 0.0;
    *s->store_dir = '\0';
    s->log_on = log_on;
    s->log = log;

    if (0 != pthread_mutex_init(&s->send_mutex, 0)) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to initialize mutex.");
	}
	free(s);
	return;
    }
    if (NULL == store_path) {
	s->store = NULL;
    } else if (NULL == (s->store = ofix_store_create(err, store_path, sid))) {
	free(s);
	return;
    }
    s->sid = strdup(sid);
    if (NULL == tid) {
	s->tid = NULL;
    } else {
	s->tid = strdup(tid);
    }
    s->done = true;
    s->closed = true;
    s->logon_sent = false;
    s->logon_recv = false;
    s->test_req_sent = false;
    s->logout_sent = 0.0;
}

void
_ofix_session_free(ofixSession session) {
    double	give_up = dtime() + 2.0;

    session->done = true;
    while (dtime() < give_up && !session->closed) {
	dsleep(0.1);
    }
    if (0 < session->sock) {
	close(session->sock);
	session->sock = 0;
    }
    if (NULL != session->store) {
	ofix_store_destroy(session->store);
	session->store = NULL;
    }
    free(session->sid);
    free(session->tid);
}

ofixMsg
ofix_session_create_msg(ofixErr err, ofixSession session, const char *type) {
    ofixMsgSpec	mspec = ofix_version_spec_get_msg_spec_from_version(err, type, session->spec);

    if (NULL == mspec) {
	return NULL;
    }
    return ofix_msg_create_from_spec(err, mspec, 20);
}

static void
reset_target_heartbeat(ofixSession session, double now) {
    session->heartbeat_expect_recv = now + (double)session->target_heartbeat_interval + HEARTBEAT_TOLERANCE;
    session->test_req_sent = false;
}

static bool
resend(ofixErr err, ofixSession session, int64_t seq) {
    int		cnt;
    const char	*str;
    ofixMsg	msg = ofix_store_get(err, session->store, seq, OFIX_IODIR_SEND);

    if (NULL != err && OFIX_OK != err->code) {
	return false;
    }
    ofix_msg_set_bool(err, msg, OFIX_PossDupFlagTAG, true);
    cnt = ofix_msg_size(err, msg);
    str = ofix_msg_FIX_str(err, msg);
    pthread_mutex_lock(&session->send_mutex);
    if (cnt != send(session->sock, str, cnt, 0)) {
	if (NULL != err) {
	    err->code = OFIX_WRITE_ERR;
	    snprintf(err->msg, sizeof(err->msg),
		     "Failed to send message. error [%d] %s", errno, strerror(errno));
	}
    }
    pthread_mutex_unlock(&session->send_mutex);
    if (session->log_on(session->log_ctx, OFIX_DEBUG)) {
	char	*s = ofix_msg_to_str(err, msg);

	session->log(session->log_ctx, OFIX_DEBUG, "Resent %s", s);
	free(s);
    }
    session->heartbeat_next_send = (double)session->heartbeat_interval + dtime();

    return true;
}

static void
s