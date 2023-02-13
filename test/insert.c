
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test.h"
#include "ofix/ofix.h"

static const char	*result = "8=FIX.4.4^9=146^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^5000=53^5001=54^93=5^89=Peter^10=199^";
static struct _ofixDate	senderTime = { 2007, 10, 0, 31, 17, 42, 33, 123, OFIX_TIMESTAMP };
static struct _ofixDate	transTime = { 2007, 10, 0, 31, 17, 42, 11, 321, OFIX_TIMESTAMP };
static const char	*sig = "Peter";

static void
in_order_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "D", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &senderTime);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order1234");
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &transTime);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');
    ofix_msg_set_int(&err, msg, 5000, 53);
    ofix_msg_set_int(&err, msg, 5001, 54);
    ofix_msg_set_data(&err, msg, OFIX_SignatureTAG, sig, strlen(sig));

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

    test_same(result, str);
    free(str);
}

static void
not_body_order_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "D", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &senderTime);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_int(&err, msg, 5000, 53);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order1234");
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &transTime);
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_int(&err, msg, 5001, 54);
    ofix_msg_set_data(&err, msg, OFIX_SignatureTAG, sig, strlen(sig));

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

    test_same(result, str);
    free(str);
}

static void
invert_trailer_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "D", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &senderTime);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_int(&err, msg, 5000, 53);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order1234");
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &transTime);
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_int(&err, msg, 5001, 54);
    ofix_msg_set_str(&err, msg, OFIX_SignatureTAG, sig);
    ofix_msg_set_int(&err, msg, OFIX_SignatureLengthTAG, strlen(sig));

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

    test_same(result, str);
    free(str);
}

static void
shuffle_header_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "D", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &senderTime);
    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_int(&err, msg, 5000, 53);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order1234");
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &transTime);
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_int(&err, msg, 5001, 54);
    ofix_msg_set_data(&err, msg, OFIX_SignatureTAG, sig, strlen(sig));

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

    test_same(result, str);
    free(str);
}

static void
shuffle_all_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "D", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &senderTime);
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');
    ofix_msg_set_data(&err, msg, OFIX_SignatureTAG, sig, strlen(sig));
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_int(&err, msg, 5000, 53);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order1234");
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &transTime);
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_int(&err, msg, 5001, 54);

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

    test_same(result, str);
    free(str);
}

void
append_insert_tests(Test tests) {
    test_append(tests, "insert.in_order", in_order_test);
    test_append(tests, "insert.not_body_order", not_body_order_test);
    test_append(tests, "insert.invert_trailer", invert_trailer_test);
    test_append(tests, "insert.shuffle_header", shuffle_header_test);
    test_append(tests, "insert.shuffle_all", shuffle_all_test);
}