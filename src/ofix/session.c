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
    s