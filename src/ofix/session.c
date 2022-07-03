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
send_heartbeat(ofixErr err, ofixSession session, const char *id) {
    ofixMsg	msg = ofix_session_create_msg(err, session, "0");

    if (NULL == msg) {
	return;
    }
    if (NULL != id && '\0' != *id) {
	ofix_msg_set_str(err, msg, OFIX_TestReqIDTAG, id);
    }
    session->heartbeat_next_send = dtime() + (double)session->heartbeat_interval;
    ofix_session_send(err, session, msg);
}

static void
send_test_request(ofixErr err, ofixSession session) {
    ofixMsg		msg = ofix_session_create_msg(err, session, "1");
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*id;

    session->test_req_sent = true;
    if (NULL == msg) {
	return;
    }
    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    id = ofix_date_to_str(&now);
    ofix_msg_set_str(err, msg, OFIX_TestReqIDTAG, id);
    free(id);
    ofix_session_send(err, session, msg);
}

static void
send_resend_request(ofixErr err, ofixSession session, int64_t begin, int64_t end) {
    ofixMsg	msg = ofix_session_create_msg(err, session, "2");

    if (NULL == msg || (NULL != err && OFIX_OK != err->code)) {
	return;
    }
    ofix_msg_set_int(err, msg, OFIX_BeginSeqNoTAG, begin);
    ofix_msg_set_int(err, msg, OFIX_EndSeqNoTAG, end);
    ofix_session_send(err, session, msg);
}

static void
send_reject(ofixErr err,
	    ofixSession session,
	    int64_t seq,
	    const char *msg_type,
	    int64_t tag,
	    int64_t reason,
	    const char *text) {
    ofixMsg	msg = ofix_session_create_msg(err, session, "3");

    if (NULL == msg) {
	return;
    }
    ofix_msg_set_int(err, msg, OFIX_RefSeqNumTAG, seq);
    if (NULL != msg_type && '\0' != *msg_type) {
	ofix_msg_set_str(err, msg, OFIX_RefMsgTypeTAG, msg_type);
    }
    if (0 < tag) {
	ofix_msg_set_int(err, msg, OFIX_RefTagIDTAG, tag);
    }
    if (0 <= reason) {
	ofix_msg_set_int(err, msg, OFIX_SessionRejectReasonTAG, reason);
    }
    if (NULL != text && '\0' != *text) {
	ofix_msg_set_str(err, msg, OFIX_TextTAG, text);
    }
    ofix_session_send(err, session, msg);
}

static void
handle_logon(ofixErr err, ofixSession session, ofixMsg msg) {
    char	buf[16]; // longer than 32 is an error
    char	*user;
    char	*password;
    double	now;

    ofix_msg_copy_str(err, msg, OFIX_BeginStringTAG, buf, sizeof(buf));
    if (0 != strcmp(session->version_str, buf)) {
	char		err_msg[256];
	struct _ofixErr	ignore = OFIX_ERR_INIT;

	snprintf(err_msg, sizeof(err_msg),
		 "Wrong FIX version. Expected %s. Recieved %s.", session->version_str, buf);
	send_reject(&ignore, session, 0, "A", OFIX_EncryptMethodTAG, OFIX_REASON_BAD_VALUE, err_msg);
	ofix_session_logout(err, session, "%s", err_msg);
	return;
    }
    if (0 != ofix_msg_get_int(err, msg, OFIX_EncryptMethodTAG)) {
	struct _ofixErr	ignore = OFIX_ERR_INIT;

	send_reject(&ignore, session, 0, "A", OFIX_EncryptMethodTAG, OFIX_REASON_DECRYPT,
		    "Encryption is not supported.");
	ofix_session_logout(err, session, "Encryption is not supported.");
	return;
    }
    user = ofix_msg_get_str(NULL, msg, OFIX_UsernameTAG);
    password = ofix_msg_get_str(NULL, msg, OFIX_PasswordTAG);
    if (NULL != session->eng &&
	!ofix_engine_authorized(session->eng, session->tid, user, password)) {
	struct _ofixErr	ignore = OFIX_ERR_INIT;

	free(user);
	free(password);
	send_reject(&ignore, session, 0, "A", 0, OFIX_REASON_SIGNATURE, "Invalid credentials.");
	ofix_session_logout(err, session, "Invalid credentials.");
	return;
    }
    free(user);
    free(password);
    now = dtime();
    // TBD verify sequence number (if there is some predefined start number)
    session->target_heartbeat_interval = (int)ofix_msg_get_int(err, msg, OFIX_HeartBtIntTAG);
    if (!session->logon_sent) {
	ofixMsg	reply = ofix_session_create_msg(err, session, "A");

	if (NULL == reply) {
	    return;
	}
	ofix_msg_set_int(err, reply, OFIX_EncryptMethodTAG, 0); // not encrypted
	ofix_msg_set_int(err, reply, OFIX_HeartBtIntTAG, session->heartbeat_interval);
	ofix_session_send(err, session, reply);
	session->heartbeat_next_send = (double)session->heartbeat_interval + now;
    }
    session->logon_recv = true;
}

static void
handle_logout(ofixErr err, ofixSession session, ofixMsg msg) {
    ofixMsg	reply;

    if (0.0 < session->logout_sent) {
	session->done = true;
	return;
    }
    if (NULL != (reply = ofix_session_create_msg(err, session, "5"))) {
	ofix_session_send(err, session, reply);
    }
    // Even if failed to send, set the loutout_sent time so that the socket will
    // get closed.
    session->logout_sent = dtime();
}

static void
handle_heartbeat(ofixErr err, ofixSession session, ofixMsg msg) {
    // Got a message so timer can be reset, TestReqId doesn't matter really.
}

static void
handle_test_request(ofixErr err, ofixSession session, ofixMsg msg) {
    char	*id = ofix_msg_get_str(NULL, msg, OFIX_TestReqIDTAG);

    send_heartbeat(err, session, id);
    free(id);
}

static void
handle_resend_request(ofixErr err, ofixSession session, ofixMsg msg) {
    int64_t	begin = ofix_msg_get_int(err, msg, OFIX_BeginSeqNoTAG);
    int64_t	end;

    if (OFIX_OK != err->code) {
	int64_t	seq = ofix_msg_get_int(err, msg, OFIX_MsgSeqNumTAG);

	session->log(session->log_ctx, OFIX_WARN, err->msg);
	send_reject(err, session, seq, "2", OFIX_BeginSeqNoTAG, OFIX_REASON_MISSING_TAG, err->msg);
	return;
    }
    end = ofix_msg_get_int(err, msg, OFIX_EndSeqNoTAG);
    if (OFIX_OK != err->code) {
	int64_t	seq = ofix_msg_get_int(err, msg, OFIX_MsgSeqNumTAG);

	session->log(session->log_ctx, OFIX_WARN, err->msg);
	send_reject(err, session, seq, "2", OFIX_EndSeqNoTAG, OFIX_REASON_MISSING_TAG, err->msg);
	return;
    }
    if (begin <= end) {
	for (; begin <= end; begin++) {
	    if (!resend(err, session, begin)) {
		break;
	    }
	}
    } else {
	for (; true; begin++) {
	    if (!resend(err, session, begin)) {
		break;
	    }
	}
    }
}

static void
handle_sequence_reset(ofixErr err, ofixSession session, ofixMsg msg) {
    int64_t	seq = ofix_msg_get_int(err, msg, OFIX_NewSeqNoTAG);

    if (session->recv_seq < seq) {
	session->recv_seq = seq - 1; // one less so we expect new seq next
    }
}


static void
handle_reject(ofixErr err, ofixSession session, ofixMsg msg) {
    if (!session->logon_recv) {
	session->logon_recv = true;
	// logout is coming
    } else {
	session->recv_cb(session, msg, session->recv_ctx);
    }
}

static bool
handle_session_msg(ofixErr err, ofixSession session, const char *mt, ofixMsg msg, int64_t seq) {
    if ('\0' != mt[1]) {
	return false;
    }
    switch (*mt) {
    case 'A': // Logon
	handle_logon(err, session, msg);
	break;
    case '0': // Heartbeat
	handle_heartbeat(err, session, msg);
	break;
    case '1': // TestRequest
	handle_test_request(err, session, msg);
	break;
    case '2': // ResendRequest
	handle_resend_request(err, session, msg);
	break;
    case '3': // Reject
	handle_reject(err, session, msg);
	break;
    case '4': // SequenceReset
	handle_sequence_reset(err, session, msg);
	break;
    case '5': // Logout
	handle_logout(err, session, msg);
	break;
    default:
	return false;
    }
    return true;
}

// If true is returned then do not delete the message.
static bool
process_msg(ofixErr err, ofixSession session, ofixMsg msg) {
    bool	keep = false;
    int64_t	seq = ofix_msg_get_int(err, msg, OFIX_MsgSeqNumTAG);
    const char	*mt = ofix_msg_get_str(err, msg, OFIX_MsgTypeTAG);
    const char	*sid = ofix_msg_get_str(err, msg, OFIX_SenderCompIDTAG);
    const char	*tid = ofix_msg_get_str(err, msg, OFIX_TargetCompIDTAG);

    // Errors handled later based on returned values.
    ofix_err_clear(err);
    if (NULL == session->store) {
	// Server just got it's first message on this session.
	char		path[1024];
	time_t		now = time(NULL);
	struct tm	*tm = gmtime(&now);
	const char	*err_msg = "Message did not contain a sender identifier. Closing session.";

	if (NULL == sid) {
	    session->log(session->log_ctx, OFIX_WARN, err_msg);
	    session->recv_seq = seq;
	    send_reject(err, session, seq, mt, OFIX_SenderCompIDTAG, OFIX_REASON_COMP_ID, err_msg);

	    return false;
	}
	session->tid = strdup(sid);
	snprintf(path, sizeof(path), "%s/%s-%04d%02d%02d.%02d%02d%02d.fix",
		 session->store_dir, session->tid,
		 tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday,
		 tm->tm_hour, tm->tm_min, tm->tm_sec);
	session->store = ofix_store_create(err, path, session->tid);
	if (OFIX_OK != err->code) {
	    return false;
	}
    }
    ofix_store_add(err, session->store, seq, OFIX_IODIR_RECV, msg);
    if (0.0 < session->logout_sent) {
	if (0 == strcmp("5", mt)) {
	    handle_session_msg(err, session, mt, msg, seq);
	    session->recv_seq = seq;
	}
    } else if (NULL == sid || 0 != strcmp(session->tid, sid)) {
	char	err_buf[1024];

	snprintf(err_buf, sizeof(err_buf), "Expected sender of '%s'. Received '%s'.",
		 session->tid, (NULL == sid ? "<null>" : sid));

	session->log(session->log_ctx, OFIX_WARN, "%s", err_buf);
	session->recv_seq = seq;
	send_reject(err, session, seq, mt, OFIX_SenderCompIDTAG, OFIX_REASON_COMP_ID, err_buf);
    } else if (NULL == tid || 0 != strcmp(session->sid, tid)) {
	char	err_buf[1024];

	snprintf(err_buf, sizeof(err_buf), "Expected target of '%s'. Received '%s'.",
		 session->sid, (NULL == tid ? "<null>" : tid));
	session->log(session->log_ctx, OFIX_WARN, "%s", err_buf);
	session->recv_seq = seq;
	send_reject(err, session, seq, mt, OFIX_TargetCompIDTAG, OFIX_REASON_COMP_ID, err_buf);
    } else if (session->recv_seq >= seq) {
	struct _ofixErr	derr = OFIX_ERR_INIT;
	bool		dup = ofix_msg_get_bool(&derr, msg, OFIX_PossDupFlagTAG);

	if (OFIX_OK != derr.code || !dup) {
	    char	err_buf[1024];

	    snprintf(err_buf, sizeof(err_buf),
		     "Duplicate message %lld from '%s' not flagged as duplicate.",
		     (long long)seq, (NULL == tid ? "<null>" : tid));
	    session->log(session->log_ctx, OFIX_WARN, "%s", err_buf);
	    send_reject(err, session, seq, mt, OFIX_MsgSeqNumTAG, OFIX_REASON_OTHER, err_buf);
	    ofix_ses