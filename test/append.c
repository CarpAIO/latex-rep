
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>

#include "test.h"
#include "ofix/ofix.h"

static void
basic_test() {
    char		actual[1024];
    char		*expected = "\
Message type: 0 (Heartbeat)\n\
Message: 8=FIX.4.4^9=012^35=0^108=30^10=059^";
    char		*a = actual;
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
    a += sprintf(a, "Message type: %s (%s)\n", ofix_msg_type(msg), ofix_msg_name(msg));
    a += sprintf(a, "Message: %s", str);
    free(str);
    ofix_msg_destroy(msg);
    
    test_same(expected, actual);
}

static void
after_update_test() {
    char		*expected = "8=FIX.4.4^9=012^35=A^108=30^10=076^";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 2))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    free(ofix_msg_to_str(&err, msg));
    ofix_msg_set_int(&err, msg, OFIX_HeartBtIntTAG, 30);
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
    ofix_msg_destroy(msg);

    test_same(expected, str);
    free(str);
}

static void
type_set_test() {
    char		*expected = "8=FIX.4.4^9=129^35=A^108=30^95=4^96=Data^1000=-23^1001=Bytes^1002=String^1003=C^1004=20071031-17:42:33.123^1005=Y^1006=10.01^1007=-20.230^1008=5^10=193^";
    struct _ofixErr	err = OFIX_ERR_INIT;
    struct _ofixDate	date = { 2007, 10, 0, 31, 17, 42, 33, 123, OFIX_TIMESTAMP };
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 10))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg, 108, 30);
    ofix_msg_set_data(&err, msg, 96, "Data", 4);
    ofix_msg_set_int(&err, msg, 1000, -23);
    ofix_msg_set_str(&err, msg, 1001, "Bytes");
    ofix_msg_set_str(&err, msg, 1002, "String");
    ofix_msg_set_char(&err, msg, 1003, 'C');
    ofix_msg_set_date(&err, msg, 1004, &date);
    ofix_msg_set_bool(&err, msg, 1005, true);
    ofix_msg_set_float(&err, msg, 1006, 10.0123, 2);
    ofix_msg_set_float(&err, msg, 1007, -20.23, 3);
    ofix_msg_set_float(&err, msg, 1008, 5.0, 2);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    str = ofix_msg_to_str(&err, msg);
    ofix_msg_destroy(msg);

    test_same(expected, str);
    free(str);
}

static void
body_length_test() {
    char		*expected = "8=FIX.4.4^9=012^35=A^108=30^10=076^";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 2))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg, OFIX_HeartBtIntTAG, 30);
    ofix_msg_set_int(&err, msg, OFIX_BodyLengthTAG, 3);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    str = ofix_msg_to_str(&err, msg);
    ofix_msg_destroy(msg);

    test_same(expected, str);
    free(str);
}

static void
check_sum_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
[97] CheckSum field can not be set.\n\
8=FIX.4.4^9=012^35=A^108=30^10=076^";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 2))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg, OFIX_HeartBtIntTAG, 30);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg, OFIX_CheckSumTAG, 3);
    if (OFIX_OK == err.code) {
	test_print("expected and error when setting the checksum tag\n");
	test_fail();
	return;
    }
    a += sprintf(a, "[%d] %s\n", err.code, err.msg);
    ofix_err_clear(&err);
    str = ofix_msg_to_str(&err, msg);
    a += sprintf(a, "%s", str);
    free(str);
    ofix_msg_destroy(msg);

    test_same(expected, actual);
}

void
append_append_tests(Test tests) {
    test_append(tests, "append.basic", basic_test);
    test_append(tests, "append.after_update", after_update_test);
    test_append(tests, "append.type_set", type_set_test);
    test_append(tests, "append.body_length", body_length_test);
    test_append(tests, "append.check_sum", check_sum_test);
}