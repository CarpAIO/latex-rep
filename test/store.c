
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "test.h"
#include "ofix/store.h"
#include "ofix/engine.h"
#include "ofix/role.h"

static void
empty_test() {
    struct _ofixErr	err = OFIX_ERR_INIT;
    Store		s;
    char		*expect = "sender: Client\n\n";
    char		actual[1024];
    FILE		*f;
    size_t		cnt;
    const char		*store_filename = "storage.fix";

    s = ofix_store_create(&err, store_filename, "Client");
    if (OFIX_OK != err.code || NULL == s) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    if (NULL == (f = fopen(store_filename, "r"))) {
	test_print("Failed to open storage file at '%s'\n", store_filename);
	test_fail();
	return;
    }
    ofix_store_destroy(s);

    cnt = fread(actual, 1, sizeof(actual), f);
    actual[cnt] = '\0';
    fclose(f);

    test_same(expect, actual);
}

static void
add_get_test() {
    const char		*expected = "8=FIX.4.4^9=116^35=D^49=Client^56=Server^34=42^52=20071031-17:42:33.123^11=order-123^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=101^";
    char		*mstr = strdup(expected);
    char		*actual;
    struct _ofixErr	err = OFIX_ERR_INIT;
    Store		s;
    ofixMsg		msg;
    const char		*store_filename = "storage.fix";

    for (char *c = mstr; '\0' != *c; c++) {
	if ('^' == *c) {
	    *c = '\1';
	}
    }
    msg = ofix_msg_parse(&err, mstr, strlen(mstr));
    //ofix_msg_set_changed(msg);

    free(mstr);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    s = ofix_store_create(&err, store_filename, "Client");
    if (OFIX_OK != err.code || NULL == s) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_store_add(&err, s, 42, OFIX_IODIR_SEND, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    msg = ofix_store_get(&err, s, 42, OFIX_IODIR_SEND);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    actual = ofix_msg_to_str(&err, msg);
    test_same(expected, actual);
    free(actual);

    msg = ofix_store_get(&err, s, 43, OFIX_IODIR_SEND);
    test_true(NULL == msg);
    test_true(OFIX_OK == err.code);
    msg = ofix_store_get(&err, s, 1, OFIX_IODIR_SEND);
    test_true(NULL == msg);
    msg = ofix_store_get(&err, s, 42, OFIX_IODIR_RECV);
    test_true(NULL == msg);

    ofix_store_destroy(s);
}

static void
multi_test() {
    const char		*expected[] = {
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=1^52=20071031-17:42:33.123^11=order-1^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=200^",
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=3^52=20071031-17:42:33.123^11=order-3^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=204^",
	"8=FIX.4.4^9=037^35=0^49=Server^56=Client^34=1^108=30^10=066^",
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=4^52=20071031-17:42:33.123^11=order-4^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=206^",
	NULL
    };
    char		*mstr;
    char		*cstr;
    char		*actual;
    struct _ofixErr	err = OFIX_ERR_INIT;
    const char		*store_filename = "storage.fix";
    Store		s = ofix_store_create(&err, store_filename, "Client");
    ofixMsg		msg;

    if (OFIX_OK != err.code || NULL == s) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (const char **x = expected; NULL != *x; x++) {
	mstr = strdup(*x);
	for (char *c = mstr; '\0' != *c; c++) {
	    if ('^' == *c) {
		*c = '\1';
	    }
	}
	msg = ofix_msg_parse(&err, mstr, strlen(mstr));
	//ofix_msg_set_changed(msg);
	free(mstr);
	if (OFIX_OK != err.code || NULL == msg) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	    return;
	}
	cstr = ofix_msg_get_str(&err, msg, 49);
	if (0 == strcasecmp("client", cstr)) {
	    ofix_store_add(&err, s, ofix_msg_get_int(&err, msg, 34), OFIX_IODIR_SEND, msg);
	} else {
	    ofix_store_add(&err, s, ofix_msg_get_int(&err, msg, 34), OFIX_IODIR_RECV, msg);
	}
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	    return;
	}
    }
    msg = ofix_store_get(&err, s, 1, OFIX_IODIR_SEND);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    actual = ofix_msg_to_str(&err, msg);
    test_same(expected[0], actual);
    free(actual);

    msg = ofix_store_get(&err, s, 1, OFIX_IODIR_RECV);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    actual = ofix_msg_to_str(&err, msg);
    test_same(expected[2], actual);
    free(actual);

    msg = ofix_store_get(&err, s, 2, OFIX_IODIR_SEND);
    test_true(NULL == msg);
    test_true(OFIX_OK == err.code);

    msg = ofix_store_get(&err, s, 3, OFIX_IODIR_SEND);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    actual = ofix_msg_to_str(&err, msg);
    test_same(expected[1], actual);
    free(actual);

    msg = ofix_store_get(&err, s, 4, OFIX_IODIR_SEND);
    if (OFIX_OK != err.code || NULL == msg) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    actual = ofix_msg_to_str(&err, msg);
    test_same(expected[3], actual);
    free(actual);

    ofix_store_destroy(s);
}

static bool
iterate_cb(ofixMsg msg, void *ctx) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    char		*s = ofix_msg_to_str(&err, msg);
    
    strcat(strcat((char*)ctx, s), "\n");
    free(s);

    return true;
}

static void
iterate_test() {
    const char		*msgs[] = {
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=1^52=20071031-17:42:33.123^11=order-1^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=200^",
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=3^52=20071031-17:42:33.123^11=order-3^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=204^",
	"8=FIX.4.4^9=037^35=0^49=Server^56=Client^34=1^108=30^10=066^",
	"8=FIX.4.4^9=113^35=D^49=Client^56=Server^34=4^52=20071031-17:42:33.123^11=order-4^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=206^",
	NULL
    };
    char		*mstr;
    char		expect[1024];
    char		actual[1024];
    char		*cstr;
    struct _ofixErr	err = OFIX_ERR_INIT;
    const char		*store_filename = "storage.fix";
    Store		s = ofix_store_create(&err, store_filename, "Client");
    ofixMsg		msg;

    if (OFIX_OK != err.code || NULL == s) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    *expect = '\0';
    for (const char **mp = msgs; NULL != *mp; mp++) {
	mstr = strdup(*mp);
	for (char *c = mstr; '\0' != *c; c++) {
	    if ('^' == *c) {
		*c = '\1';
	    }
	}
	strcat(strcat(expect, *mp), "\n");
	msg = ofix_msg_parse(&err, mstr, strlen(mstr));
	ofix_msg_set_changed(msg);
	free(mstr);
	if (OFIX_OK != err.code || NULL == msg) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	    return;
	}
	cstr = ofix_msg_get_str(&err, msg, 49);
	if (0 == strcasecmp("client", cstr)) {
	    ofix_store_add(&err, s, ofix_msg_get_int(&err, msg, 34), OFIX_IODIR_SEND, msg);
	} else {
	    ofix_store_add(&err, s, ofix_msg_get_int(&err, msg, 34), OFIX_IODIR_RECV, msg);
	}
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	    return;
	}
    }
    *actual = '\0';
    ofix_store_iterate(&err, s, iterate_cb, actual);
    test_same(expect, actual);

    ofix_store_destroy(s);
}

void
append_store_tests(Test tests) {
    system("rm -rf storage"); // clear out old results
    test_append(tests, "store.empty", empty_test);
    test_append(tests, "store.add_get", add_get_test);
    test_append(tests, "store.multiple", multi_test);
    test_append(tests, "store.iterate", iterate_test);
}