
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test.h"
#include "ofix/ofix.h"

static void
run_test(char *msg_str, char *expected) {
    char		actual[4096];
    char		msg_buf[4096];
    char		*a = actual;
    char		*b;
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*str;

    for (str = msg_str, b = msg_buf; '\0' != *str; str++, b++) {
	if ('^' == *str) {
	    *b = '\1';
	} else {
	    *b = *str;
	}
    }
    *b = '\0';
    msg = ofix_msg_parse(&err, msg_buf, strlen(msg_buf));
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

    str = ofix_msg_to_pretty(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s", str);
    free(str);

    ofix_msg_destroy(msg);
    
    test_same(expected, actual);
}

static void
basic_test() {
    run_test("8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=087^",
"8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=087^\n\
NewOrderSingle (D) [139]\n\
    8: FIX.4.4 (String) @2\n\
    9: 116 (Length) @12\n\
   35: D (String) @19\n\
   49: Sender (String) @24\n\
   56: Target (String) @34\n\
   34: 42 (SeqNum) @44\n\
   52: 20071031-17:42:33.123 (UTCTimestamp) @50\n\
   11: order-123 (String) @75\n\
   21: 1 (Char) @88\n\
   55: IBM (String) @93\n\
   54: 2 (Char) @100\n\
   60: 20071031-17:42:11.321 (UTCTimestamp) @105\n\
   40: 7 (Char) @130\n\
   10: 087 (String) @135\n");
}

static void
with_data_test() {
    run_test("8=FIX.4.4^9=134^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^212=7^213=abcdefg^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=241^",
"8=FIX.4.4^9=134^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^212=7^213=abcdefg^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=241^\n\
NewOrderSingle (D) [157]\n\
    8: FIX.4.4 (String) @2\n\
    9: 134 (Length) @12\n\
   35: D (String) @19\n\
   49: Sender (String) @24\n\
   56: Target (String) @34\n\
   34: 42 (SeqNum) @44\n\
   52: 20071031-17:42:33.123 (UTCTimestamp) @50\n\
  212: 7 (Length) @76\n\
  213: abcdefg (Data) @82\n\
   11: order-123 (String) @93\n\
   21: 1 (Char) @106\n\
   55: IBM (String) @111\n\
   54: 2 (Char) @118\n\
   60: 20071031-17:42:11.321 (UTCTimestamp) @123\n\
   40: 7 (Char) @148\n\
   10: 241 (String) @153\n");
}

static void
with_SOH_test() {
    run_test("8=FIX.4.4^9=139^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^212=11^213={ SOH=\"^\" }^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=009^",
	    "8=FIX.4.4^9=139^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^212=11^213={ SOH=\"^\" }^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=009^\n\
NewOrderSingle (D) [162]\n\
    8: FIX.4.4 (String) @2\n\
    9: 139 (Length) @12\n\
   35: D (String) @19\n\
   49: Sender (String) @24\n\
   56: Target (String) @34\n\
   34: 42 (SeqNum) @44\n\
   52: 20071031-17:42:33.123 (UTCTimestamp) @50\n\
  212: 11 (Length) @76\n\
  213: { SOH=\"^\" } (Data) @83\n\
   11: order-123 (String) @98\n\
   21: 1 (Char) @111\n\
   55: IBM (String) @116\n\
   54: 2 (Char) @123\n\
   60: 20071031-17:42:11.321 (UTCTimestamp) @128\n\
   40: 7 (Char) @153\n\
   10: 009 (String) @158\n");
}

#if 0
static void
random_test() {
    run_test("8=FIX.4.2^9=221^35=D^34=220^49=GENFIN2^52=20150625-13:49:01.205^56=MSCO2^1=038302816^11=1435240141204-4^15=USD^18=1^21=2^38=74^40=2^44=67.1^50=JV_73fecf0913881ff5^54=1^55=D^57=SORT^59=0^60=20150625-13:49:01.204^126=20150625-13:49:51.204^10=157^",
	    "zzzz");
}
#endif

void
append_parse_tests(Test tests) {
    test_append(tests, "parse.basic", basic_test);
    test_append(tests, "parse.with_data", with_data_test);
    test_append(tests, "parse.with_SOH", with_SOH_test);
    //test_append(tests, "parse.random", random_test);
}