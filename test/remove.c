
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

#include "test.h"
#include "ofix/ofix.h"

static void
field_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=017^35=0^108=30^34=7^10=028^\n\
8=FIX.4.4^9=017^35=0^34=7^10=028^\n\
8=FIX.4.4^9=017^35=0^10=028^\n\
Tag 35 can not be removed from message.\n\
8=FIX.4.4^9=017^35=0^10=028^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "0", 4, 4, 2))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_append_mode(msg, true);
    ofix_msg_set_int(&err, msg, OFIX_HeartBtIntTAG, 30);
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 7);
    if (OFIX_OK != err.code) {
	test_print("set int of %d failed: [%d] %s\n", err.code, err.msg);
	test_fail();
	ofix_err_clear(&err);
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);

    ofix_msg_remove(&err, msg, OFIX_HeartBtIntTAG);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);

    ofix_msg_remove(&err, msg, OFIX_MsgSeqNumTAG);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);

    ofix_msg_remove(&err, msg, OFIX_MsgTypeTAG);
    if (OFIX_OK != err.code) {
	a += sprintf(a, "%s\n", err.msg);
	ofix_err_clear(&err);
    } else {
	test_print("expected an error trying to remove MsgType.");
	test_fail();
	return;
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);

    ofix_msg_destroy(msg);
    
    test_same(expected, actual);
}

void
append_remove_tests(Test tests) {
    test_append(tests, "remove.field", field_test);
}