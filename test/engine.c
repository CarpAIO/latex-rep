
 // Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <pthread.h>

#include "test.h"
#include "ofix/client.h"
#include "ofix/dtime.h"
#include "ofix/engine.h"
#include "ofix/err.h"
#include "ofix/msg.h"
#include "ofix/role.h"
#include "ofix/store.h"
#include "ofix/tag.h"
#include "ofix/versionspec.h"

extern ofixVersionSpec	ofix_get_spec(ofixErr err, int major, int minor);
extern void		_ofix_client_raw_send(ofixErr err, ofixClient client, ofixMsg msg);
extern ofixSession	_ofix_client_get_session(ofixClient client);

static const char	*client_storage = "client_storage.fix";

static char*
load_fix_file(const char *filename) {
    char	*contents = test_load_file(filename);

    for (char *s = contents; '\0' != *s; s++) {
	if ('\1' == *s) {
	    *s = '^';
	}
    }
    return contents;
}

static bool
log_on(void *ctx, ofixLogLevel level) {
    return false;
}

static void
log(void *ctx, ofixLogLevel level, const char *format, ...) {
    if (log_on(ctx, level)) {
	va_list	ap;
    
	va_start(ap, format);
	vfprintf((FILE*)ctx, format, ap);
	fputc('\n', (FILE*)ctx);
	va_end(ap);
    }
}

static void*
start_engine(void *arg) {
    struct _ofixErr	err = OFIX_ERR_INIT;

    ofix_engine_start(&err, (ofixEngine)arg);

    return NULL;
}

static bool
server_cb(ofixSession session, ofixMsg msg, void *ctx) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec;
    ofixMsg		reply;
    char		*s;
    char		xid[16];
    int64_t		qty;
    const char		*mt;

    spec = ofix_version_spec_get_msg_spec(&err, "8", 4, 4);
    if (OFIX_OK != err.code || NULL == spec) {
	printf("Failed to find message spec for '8' [%d] %s\n", err.code, err.msg);
	return true;
    }
    if (0 == (mt = ofix_msg_get_str(&err, msg, OFIX_MsgTypeTAG)) ||
	0 != strcmp("D", mt)) {
	//printf("*** Received a %s message.\n", mt);
	return true;
    }
    reply = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == reply) {
	printf("Failed to create message [%d] %s\n", err.code, err.msg);
	return true;
    }
    s = ofix_msg_get_str(&err, msg, OFIX_ClOrdIDTAG);
    ofix_msg_set_str(&err, reply, OFIX_OrderIDTAG, s);
    sprintf(xid, "x-%s", s);
    free(s);
    s = ofix_msg_get_str(&err, msg, OFIX_SymbolTAG);
    ofix_msg_set_str(&err, reply, OFIX_SymbolTAG, s);
    free(s);
    ofix_msg_set_char(&err, reply, OFIX_SideTAG, ofix_msg_get_char(&err, msg, OFIX_SideTAG));
    ofix_msg_set_str(&err, reply, OFIX_ExecIDTAG, xid);
    ofix_msg_set_char(&err, reply, OFIX_ExecTypeTAG, '0');
    ofix_msg_set_char(&err, reply, OFIX_OrdStatusTAG, '0');
    qty = ofix_msg_get_int(&err, msg, OFIX_OrderQtyTAG);
    ofix_msg_set_int(&err, reply, OFIX_LeavesQtyTAG, qty);
    ofix_msg_set_int(&err, reply, OFIX_CumQtyTAG, qty);
    ofix_msg_set_float(&err, reply, OFIX_AvgPxTAG, 0.0, 4);

    if (OFIX_OK != err.code) {
	printf("Error setting tag %d values. [%d] %s\n", err.tag, err.code, err.msg);
	return true;
    }
    ofix_session_send(&err, session, reply);

    return true;
}

static bool
client_cb(ofixSession session, ofixMsg msg, void *ctx) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    char		*s = ofix_msg_to_str(&err, msg);

    //printf("*** client callback: %s\n", s);
    free(s);
    return true;
}

static bool
create_client_server(ofixErr err,
		     ofixEngine *server,
		     ofixClient *client,
		     int port,
		     const char *cid,
		     const char *user,
		     const char *password,
		     int minor,
		     int hb_interval) {
    const char		*client_storage = "client_storage.fix";
    ofixVersionSpec	vspec = ofix_get_spec(err, 4, 4);
    ofixVersionSpec	cspec = ofix_get_spec(err, 4, minor);
    pthread_t		server_thread;
    double		giveup;
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);

    *server = ofix_engine_create(err, "Server", port, "auth.txt", "server_storage", vspec, hb_interval);
    if (OFIX_OK != err->code || NULL == *server) {
	test_print("Failed to create server [%d] %s\n", err->code, err->msg);
	test_fail();
	return false;
    }
    ofix_engine_on_recv(*server, server_cb, NULL);
    ofix_engine_set_log(*server, log_on, log, stdout);

    // throw server into a separate thread
    if (0 != pthread_create(&server_thread, 0, start_engine, *server)) {
	test_print("failed to start engine thread\n");
	test_fail();
	return false;
    }

    *client = ofix_client_create(err, cid, "Server", client_storage, cspec, client_cb, NULL);
    if (OFIX_OK != err->code || NULL == *client) {
	test_print("Failed to create client [%d] %s\n", err->code, err->msg);
	test_fail();
	return false;
    }
    ofix_client_set_log(*client, log_on, log, stdout);
    ofix_client_set_credentials(*client, user, password);
    ofix_client_set_heartbeat(*client, hb_interval);
    // wait for engine to start
    giveup = dtime() + 1.0;
    while (!ofix_engine_running(*server)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for engine to start.\n");
	    test_fail();
	    return false;
	}
    }

    ofix_client_connect(err, *client, "localhost", port, 1.0);
    if (OFIX_OK != err->code) {
	test_print("Connect failed [%d] %s\n", err->code, err->msg);
	test_fail();
	return false;
    }
    return true;
}

static void
run_test(ofixMsg *msgs, bool raw, int server_seq, int port) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;

    if (!create_client_server(&err, &server, &client, port, "Client", NULL, NULL, 4, 30)) {
	return;
    }

    for (; NULL != *msgs; msgs++) {
	if (raw) {
	    _ofix_client_raw_send(&err, client, *msgs);
	} else {
	    ofix_client_send(&err, client, *msgs);
	}
    }

    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (server_seq > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    ofix_client_destroy(&err, client);
	    ofix_engine_destroy(&err, server);
	    return;
	}
	dsleep(0.01);
    }

    ofix_client_logout(&err, client, "bye bye");

    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
}

static void
normal_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msg2;
    ofixMsg		msgs[3];
    const char		*s;
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }

    if (NULL == (s = ofix_msg_FIX_str(&err, msg1)) ||
	NULL == (msg2 = ofix_msg_parse(&err, s, strlen(s))) ||
	OFIX_OK != err.code) {
	test_print("Error cloning message.\n");
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg2, OFIX_ClOrdIDTAG, "order-124");
    msgs[0] = msg1;
    msgs[1] = msg2;
    msgs[2] = NULL;

    run_test(msgs, false, 3, 6161);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=3^52=$-$:$:$.$^11=order-124^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=2^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=3^52=$-$:$:$.$^37=order-124^17=x-order-124^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=066^35=5^49=Client^56=Server^34=4^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=4^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_sender_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msgs[2];
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_SenderCompIDTAG, "Bad");
    ofix_msg_set_str(&err, msg1, OFIX_TargetCompIDTAG, "Server");
    ofix_msg_set_int(&err, msg1, OFIX_MsgSeqNumTAG, 2);

    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msgs[0] = msg1;
    msgs[1] = NULL;

    run_test(msgs, true, 2, 6162);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=114^35=D^49=Bad^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=127^35=3^49=Server^56=Client^34=2^52=$-$:$:$.$^45=2^371=49^372=D^373=9^58=Expected sender of 'Client'. Received 'Bad'.^10=$^\n\
8=FIX.4.4^9=066^35=5^49=Client^56=Server^34=3^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=3^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_target_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msgs[2];
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_SenderCompIDTAG, "Client");
    ofix_msg_set_str(&err, msg1, OFIX_TargetCompIDTAG, "Bad");
    ofix_msg_set_int(&err, msg1, OFIX_MsgSeqNumTAG, 2);

    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msgs[0] = msg1;
    msgs[1] = NULL;

    run_test(msgs, true, 2, 6163);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=114^35=D^49=Client^56=Bad^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=127^35=3^49=Server^56=Client^34=2^52=$-$:$:$.$^45=2^371=56^372=D^373=9^58=Expected target of 'Server'. Received 'Bad'.^10=$^\n\
8=FIX.4.4^9=066^35=5^49=Client^56=Server^34=3^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=3^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_msgtype_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msgs[2];
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_MsgTypeTAG, "BAD");
    ofix_msg_set_str(&err, msg1, OFIX_SenderCompIDTAG, "Client");
    ofix_msg_set_str(&err, msg1, OFIX_TargetCompIDTAG, "Server");
    ofix_msg_set_int(&err, msg1, OFIX_MsgSeqNumTAG, 2);

    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msgs[0] = msg1;
    msgs[1] = NULL;

    run_test(msgs, true, 2, 6164);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=119^35=BAD^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=120^35=3^49=Server^56=Client^34=2^52=$-$:$:$.$^45=2^373=0^58=FIX specification for BAD in version 4.4 not found^10=$^\n\
8=FIX.4.4^9=066^35=5^49=Client^56=Server^34=3^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=3^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_dup_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msgs[3];
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_SenderCompIDTAG, "Client");
    ofix_msg_set_str(&err, msg1, OFIX_TargetCompIDTAG, "Server");
    ofix_msg_set_int(&err, msg1, OFIX_MsgSeqNumTAG, 2);

    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msgs[0] = msg1;
    msgs[1] = msg1;
    msgs[2] = NULL;

    run_test(msgs, true, 4, 6165);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=2^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=143^35=3^49=Server^56=Client^34=3^52=$-$:$:$.$^45=2^371=34^372=D^373=99^58=Duplicate message 2 from 'Server' not flagged as duplicate.^10=$^\n\
8=FIX.4.4^9=118^35=5^49=Server^56=Client^34=4^52=$-$:$:$.$^58=Duplicate message 2 from 'Server' not flagged as duplicate.^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Client^56=Server^34=3^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
dup_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msg2;
    ofixMsg		msgs[3];
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;
    const char		*s;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_SenderCompIDTAG, "Client");
    ofix_msg_set_str(&err, msg1, OFIX_TargetCompIDTAG, "Server");
    ofix_msg_set_int(&err, msg1, OFIX_MsgSeqNumTAG, 2);

    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    if (NULL == (s = ofix_msg_FIX_str(&err, msg1)) ||
	NULL == (msg2 = ofix_msg_parse(&err, s, strlen(s))) ||
	OFIX_OK != err.code) {
	test_print("Error cloning message.\n");
	test_fail();
	return;
    }
    ofix_msg_set_bool(&err, msg2, OFIX_PossDupFlagTAG, true);
    msgs[0] = msg1;
    msgs[1] = msg2;
    msgs[2] = NULL;

    run_test(msgs, true, 3, 6166);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=122^35=D^49=Client^56=Server^34=2^43=Y^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=2^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=3^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=066^35=5^49=Client^56=Server^34=3^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=4^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_comp_id_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6167, "Zooz", NULL, NULL, 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Zooz\n\
\n\
8=FIX.4.4^9=071^35=A^49=Zooz^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=094^35=3^49=Server^56=Zooz^34=1^52=$-$:$:$.$^45=0^372=A^373=8^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=077^35=5^49=Server^56=Zooz^34=2^52=$-$:$:$.$^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=053^35=5^49=Zooz^56=Server^34=2^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_fix_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6168, "Acme", "fred", "secret", 2, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Acme\n\
\n\
8=FIX.4.2^9=091^35=A^49=Acme^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^553=fred^554=secret^10=$^\n\
8=FIX.4.4^9=135^35=3^49=Server^56=Acme^34=1^52=$-$:$:$.$^45=0^371=98^372=A^373=5^58=Wrong FIX version. Expected FIX.4.4. Recieved FIX.4.2.^10=$^\n\
8=FIX.4.4^9=111^35=5^49=Server^56=Acme^34=2^52=$-$:$:$.$^58=Wrong FIX version. Expected FIX.4.4. Recieved FIX.4.2.^10=$^\n\
8=FIX.4.2^9=053^35=5^49=Acme^56=Server^34=2^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_user_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6169, "Acme", "wilma", "secret", 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Acme\n\
\n\
8=FIX.4.4^9=092^35=A^49=Acme^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^553=wilma^554=secret^10=$^\n\
8=FIX.4.4^9=094^35=3^49=Server^56=Acme^34=1^52=$-$:$:$.$^45=0^372=A^373=8^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=077^35=5^49=Server^56=Acme^34=2^52=$-$:$:$.$^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=053^35=5^49=Acme^56=Server^34=2^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
bad_password_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6170, "Acme", "fred", "password", 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Acme\n\
\n\
8=FIX.4.4^9=093^35=A^49=Acme^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^553=fred^554=password^10=$^\n\
8=FIX.4.4^9=094^35=3^49=Server^56=Acme^34=1^52=$-$:$:$.$^45=0^372=A^373=8^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=077^35=5^49=Server^56=Acme^34=2^52=$-$:$:$.$^58=Invalid credentials.^10=$^\n\
8=FIX.4.4^9=053^35=5^49=Acme^56=Server^34=2^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
after_logout_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    double		giveup;
    char		*actual;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsg		msg = ofix_msg_create_from_spec(&err, spec, 16);
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }

    if (!create_client_server(&err, &server, &client, 6171, "Acme", "fred", "secret", 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (1 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive logon response.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    // Use session logout so client does not wait for a response.
    ofix_session_logout(&err, _ofix_client_get_session(client), "bye bye");
    ofix_client_send(&err, client, msg);

    giveup = dtime() + 1.0;
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive logout response.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Acme\n\
\n\
8=FIX.4.4^9=091^35=A^49=Acme^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^553=fred^554=secret^10=$^\n\
8=FIX.4.4^9=065^35=A^49=Server^56=Acme^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=064^35=5^49=Acme^56=Server^34=2^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=115^35=D^49=Acme^56=Server^34=3^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=053^35=5^49=Server^56=Acme^34=2^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
heartbeat_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    ofixSession		session;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6172, "Client", NULL, NULL, 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (1 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    ofix_client_set_heartbeat(client, 2);
    session = ofix_engine_get_session(&err, server, "Client");
    ofix_session_set_heartbeat(session, 3);
    dsleep(5.0);
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=055^35=0^49=Client^56=Server^34=2^52=$-$:$:$.$^10=$^\n\
8=FIX.4.4^9=055^35=0^49=Server^56=Client^34=2^52=$-$:$:$.$^10=$^\n\
8=FIX.4.4^9=055^35=0^49=Client^56=Server^34=3^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
test_request_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixEngine		server;
    ofixClient		client;
    ofixSession		session;
    double		giveup;
    char		*actual;

    if (!create_client_server(&err, &server, &client, 6173, "Client", NULL, NULL, 4, 2)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (1 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    //ofix_client_set_heartbeat(client, 2);
    session = ofix_engine_get_session(&err, server, "Client");
    ofix_session_set_heartbeat(session, 30);
    dsleep(5.0);
    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=072^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=2^141=Y^10=$^\n\
8=FIX.4.4^9=066^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=2^10=$^\n\
8=FIX.4.4^9=055^35=0^49=Client^56=Server^34=2^52=$-$:$:$.$^10=$^\n\
8=FIX.4.4^9=055^35=0^49=Client^56=Server^34=3^52=$-$:$:$.$^10=$^\n\
8=FIX.4.4^9=081^35=1^49=Client^56=Server^34=4^52=$-$:$:$.$^112=$-$:$:$.$^10=$^\n\
8=FIX.4.4^9=081^35=0^49=Server^56=Client^34=2^52=$-$:$:$.$^112=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

static void
resend_request_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsgSpec		resend_spec = ofix_version_spec_get_msg_spec(&err, "2", 4, 4);
    ofixEngine		server;
    ofixClient		client;
    ofixMsg		msg;
    ofixMsg		rmsg;
    double		giveup;
    char		*actual;
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);

    if (!create_client_server(&err, &server, &client, 6174, "Client", NULL, NULL, 4, 30)) {
	return;
    }
    // wait for exchanges to complete
    giveup = dtime() + 1.0;
    while (1 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    msg = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_client_send(&err, client, msg);
    while (2 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    // second message
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order-124");
    ofix_client_send(&err, client, msg);
    while (3 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }
    // send resend request
    rmsg = ofix_msg_create_from_spec(&err, resend_spec, 10);
    if (OFIX_OK != err.code || NULL == rmsg) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, rmsg, OFIX_BeginSeqNoTAG, 2);
    ofix_msg_set_int(&err, rmsg, OFIX_EndSeqNoTAG, 2);
    ofix_client_send(&err, client, rmsg);

    // third message to verify seq number is correct
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order-125");
    ofix_client_send(&err, client, msg);

    while (4 > ofix_client_recv_seqnum(client)) {
	if (giveup < dtime()) {
	    test_print("Timed out waiting for client to receive responses.\n");
	    test_fail();
	    return;
	}
	dsleep(0.01);
    }

    ofix_client_destroy(&err, client);
    ofix_engine_destroy(&err, server);
    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=2^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=3^52=$-$:$:$.$^11=order-124^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=3^52=$-$:$:$.$^37=order-124^17=x-order-124^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=064^35=2^49=Client^56=Server^34=4^52=$-$:$:$.$^7=2^16=2^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=5^52=$-$:$:$.$^11=order-125^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=130^35=8^49=Server^56=Client^34=2^43=Y^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=4^52=$-$:$:$.$^37=order-125^17=x-order-125^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n",
	      actual);
    free(actual);
}

static void
sequence_reset_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsgSpec		spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4);
    ofixMsgSpec		seq_spec = ofix_version_spec_get_msg_spec(&err, "4", 4, 4);
    ofixMsg		msg1;
    ofixMsg		msg2;
    ofixMsg		msg3;
    ofixMsg		msgs[4];
    const char		*s;
    struct timeval	tv;
    struct timezone	tz;
    struct _ofixDate	now;
    char		*actual;

    gettimeofday(&tv, &tz);
    ofix_date_set_timestamp(&now, (uint64_t)tv.tv_sec * 1000000LL + (uint64_t)tv.tv_usec);
    
    // Create an single order message.
    // First get the message spec.
    if (OFIX_OK != err.code || NULL == spec) {
	test_print("Failed to find message spec for 'D' [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg1 = ofix_msg_create_from_spec(&err, spec, 16);
    if (OFIX_OK != err.code || NULL == msg1) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg1, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_str(&err, msg1, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg1, OFIX_SideTAG, '1'); // buy
    ofix_msg_set_int(&err, msg1, OFIX_OrderQtyTAG, 250);
    ofix_msg_set_date(&err, msg1, OFIX_TransactTimeTAG, &now);
    ofix_msg_set_char(&err, msg1, OFIX_OrdTypeTAG, '1'); // market order
    if (OFIX_OK != err.code) {
	test_print("Error while setting fields in message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }

    if (NULL == (s = ofix_msg_FIX_str(&err, msg1)) ||
	NULL == (msg3 = ofix_msg_parse(&err, s, strlen(s))) ||
	OFIX_OK != err.code) {
	test_print("Error cloning message.\n");
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg3, OFIX_ClOrdIDTAG, "order-124");

    msg2 = ofix_msg_create_from_spec(&err, seq_spec, 10);
    if (OFIX_OK != err.code || NULL == msg2) {
	test_print("Failed to create message [%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg2, OFIX_NewSeqNoTAG, 10);

    msgs[0] = msg1;
    msgs[1] = msg2;
    msgs[2] = msg3;
    msgs[3] = NULL;

    run_test(msgs, false, 3, 6175);

    actual = load_fix_file(client_storage);
    test_same("sender: Client\n\
\n\
8=FIX.4.4^9=073^35=A^49=Client^56=Server^34=1^52=$-$:$:$.$^98=0^108=30^141=Y^10=$^\n\
8=FIX.4.4^9=067^35=A^49=Server^56=Client^34=1^52=$-$:$:$.$^98=0^108=30^10=$^\n\
8=FIX.4.4^9=117^35=D^49=Client^56=Server^34=2^52=$-$:$:$.$^11=order-123^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=061^35=4^49=Client^56=Server^34=9^52=$-$:$:$.$^36=10^10=$^\n\
8=FIX.4.4^9=118^35=D^49=Client^56=Server^34=10^52=$-$:$:$.$^11=order-124^55=IBM^54=1^60=$-$:$:$.$^38=250^40=1^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=2^52=$-$:$:$.$^37=order-123^17=x-order-123^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=125^35=8^49=Server^56=Client^34=3^52=$-$:$:$.$^37=order-124^17=x-order-124^150=0^39=0^55=IBM^54=1^151=250^14=250^6=0^10=$^\n\
8=FIX.4.4^9=067^35=5^49=Client^56=Server^34=11^52=$-$:$:$.$^58=bye bye^10=$^\n\
8=FIX.4.4^9=055^35=5^49=Server^56=Client^34=4^52=$-$:$:$.$^10=$^\n",
	      actual);
    free(actual);
}

void
append_engine_tests(Test tests) {
    test_append(tests, "engine.normal", normal_test);
    test_append(tests, "engine.bad_sender", bad_sender_test);
    test_append(tests, "engine.bad_target", bad_target_test);
    test_append(tests, "engine.bad_msgtype", bad_msgtype_test);
    test_append(tests, "engine.bad_dup", bad_dup_test);
    test_append(tests, "engine.dup", dup_test);
    test_append(tests, "engine.bad_comp_id", bad_comp_id_test);
    test_append(tests, "engine.bad_fix", bad_fix_test);
    test_append(tests, "engine.bad_user", bad_user_test);
    test_append(tests, "engine.bad_password", bad_password_test);
    test_append(tests, "engine.after_logout", after_logout_test);
    test_append(tests, "engine.heartbeat", heartbeat_test);
    test_append(tests, "engine.test_request", test_request_test);
    test_append(tests, "engine.resend_request", resend_request_test);
    test_append(tests, "engine.sequence_reset", sequence_reset_test);
}