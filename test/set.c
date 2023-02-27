// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include "test.h"
#include "ofix/ofix.h"

static void
set_int_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=011^35=A^108=0^10=024^\n\
8=FIX.4.4^9=013^35=A^108=100^10=123^\n\
8=FIX.4.4^9=013^35=A^108=010^10=123^\n\
8=FIX.4.4^9=013^35=A^108=-99^10=137^\n\
8=FIX.4.4^9=020^35=A^108=2147483647^10=246^\n\
8=FIX.4.4^9=021^35=A^108=-2147483648^10=037^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    int			values[] = { 0, 100, 10, -99, 2147483647, INT32_MIN };
    int			*ip;
    int			*end = (int*)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values; ip < end; ip++) {
	ofix_msg_set_int(&err, msg, 108, *ip);
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
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_neg_tag_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=013^35=A^-5000=7^10=122^\n\
8=FIX.4.4^9=014^35=A^-5000=99^10=182^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    int			values[] = { 7, 99 };
    int			*vp;
    int			*end = (int*)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_int(&err, msg, -5000, *vp);
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
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_char_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=012^35=A^5000=0^10=069^\n\
8=FIX.4.4^9=012^35=A^5000=X^10=109^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		values[] = { '0', 'X' };
    char		*vp;
    char		*end = (char*)values + sizeof(values);
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_char(&err, msg, 5000, *vp);
	if (OFIX_OK != err.code) {
	    test_print("set char of %d failed: [%d] %s\n", err.code, err.msg);
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
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_boolean_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=012^35=A^5000=Y^10=110^\n\
8=FIX.4.4^9=012^35=A^5000=N^10=099^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    bool		values[] = { true, false };
    bool		*vp;
    bool		*end = (bool*)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_bool(&err, msg, 5000, *vp);
	if (OFIX_OK != err.code) {
	    test_print("set bool of %d failed: [%d] %s\n", err.code, err.msg);
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
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

typedef struct _DubVal {
    double	value;
    int		fracDigits;
} *DubVal;

static void
set_float_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=012^35=A^5000=0^10=069^\n\
8=FIX.4.4^9=012^35=A^5000=5^10=074^\n\
8=FIX.4.4^9=015^35=A^5000=5.01^10=220^\n\
8=FIX.4.4^9=016^35=A^5000=-4.99^10=026^\n\
8=FIX.4.4^9=027^35=A^5000=123456789.012345^10=085^\n\
8=FIX.4.4^9=017^35=A^5000=0.0420^10=062^\n\
8=FIX.4.4^9=013^35=A^5000=21^10=121^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _DubVal	values[] = { { 0.0, 1 },
				     { 5.01, 0 },
				     { 5.01, 2 },
				     { -4.99, 2 },
				     { 123456789.012345, 6 },
				     { 0.042, 4 },
				     { 21.001, 2 } };
    DubVal		vp;
    DubVal		end = (DubVal)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_float(&err, msg, 5000, vp->value, vp->fracDigits);
	if (OFIX_OK != err.code) {
	    test_print("set float of %d failed: [%d] %s\n", err.code, err.msg);
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
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_data_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=015^35=A^5000=tiny^10=220^\n\
8=FIX.4.4^9=017^35=A^5000=larger^10=151^\n\
8=FIX.4.4^9=016^35=A^5000=small^10=050^\n\
NULL or zero length array is not a valid value for ofix_msg_set_data_only()\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*values[] = { "tiny", "larger", "small", NULL };
    char		**vp;
    char		**end = (char**)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	if (NULL == *vp) {
	    ofix_msg_set_data_only(&err, msg, 5000, 0, 0);
	    a += sprintf(a, "%s\n", err.msg);
	    ofix_err_clear(&err);
	} else {
	    ofix_msg_set_data_only(&err, msg, 5000, *vp, strlen(*vp));
	    if (OFIX_OK != err.code) {
		test_print("set data of %d failed: [%d] %s\n", err.code, err.msg);
		test_fail();
		ofix_err_clear(&err);
	    }
	    str = ofix_msg_to_str(&err, msg);
	    if (OFIX_OK != err.code) {
		test_print("[%d] %s\n", err.code, err.msg);
		test_fail();
	    }
	    a += sprintf(a, "%s\n", str);
	    free(str);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_string_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=015^35=A^5000=tiny^10=220^\n\
8=FIX.4.4^9=017^35=A^5000=larger^10=151^\n\
8=FIX.4.4^9=016^35=A^5000=small^10=050^\n\
NULL or zero length string is not a valid value for ofix_msg_set_str().\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*values[] = { "tiny", "larger", "small", 0 };
    char		**vp;
    char		**end = (char**)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	if (NULL == *vp) {
	    ofix_msg_set_str(&err, msg, 5000, 0);
	    a += sprintf(a, "%s\n", err.msg);
	    ofix_err_clear(&err);
	} else {
	    ofix_msg_set_str(&err, msg, 5000, *vp);
	    if (OFIX_OK != err.code) {
		test_print("set string of %d failed: [%d] %s\n", err.code, err.msg);
		test_fail();
		ofix_err_clear(&err);
	    }
	    str = ofix_msg_to_str(&err, msg);
	    if (OFIX_OK != err.code) {
		test_print("[%d] %s\n", err.code, err.msg);
		test_fail();
	    }
	    a += sprintf(a, "%s\n", str);
	    free(str);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_timestamp_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=028^35=A^5000=20071130-19:44:33^10=131^\n\
8=FIX.4.4^9=032^35=A^5000=20080101-23:59:59.999^10=094^\n\
8=FIX.4.4^9=032^35=A^5000=00000101-00:00:00.000^10=024^\n\
8=FIX.4.4^9=032^35=A^5000=99991231-23:59:59.999^10=125^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 2007, 11, 0, 30, 19, 44, 33, 0, OFIX_TIMESTAMP },
	{ 2008, 1, 0, 1, 23, 59, 59, 999, OFIX_TIMESTAMP },
	{ 0, 1, 0, 1, 0, 0, 0, 0, OFIX_TIMESTAMP },
	{ 9999, 12, 0, 31, 23, 59, 59, 999, OFIX_TIMESTAMP } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_timeonly_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=019^35=A^5000=19:44:33^10=200^\n\
8=FIX.4.4^9=023^35=A^5000=23:59:59.999^10=165^\n\
8=FIX.4.4^9=023^35=A^5000=00:00:00.000^10=105^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 0, 0, 0, 0, 19, 44, 33, 0, OFIX_TIMEONLY },
	{ 0, 0, 0, 0, 23, 59, 59, 999, OFIX_TIMEONLY },
	{ 0, 0, 0, 0, 0, 0, 0, 0, OFIX_TIMEONLY } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_dateonly_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=019^35=A^5000=20071130^10=170^\n\
8=FIX.4.4^9=019^35=A^5000=99991231^10=199^\n\
8=FIX.4.4^9=019^35=A^5000=00000101^10=158^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 2007, 11, 0, 30, 0, 0, 0, 0, OFIX_DATEONLY },
	{ 9999, 12, 0, 31, 0, 0, 0, 0, OFIX_DATEONLY },
	{ 0, 1, 0, 1, 0, 0, 0, 0, OFIX_DATEONLY } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_yyyymm_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=017^35=A^5000=200711^10=069^\n\
8=FIX.4.4^9=017^35=A^5000=999912^10=097^\n\
8=FIX.4.4^9=017^35=A^5000=000001^10=059^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 2007, 11, 0, 0, 0, 0, 0, 0, OFIX_YYYYMM },
	{ 9999, 12, 0, 0, 0, 0, 0, 0, OFIX_YYYYMM },
	{ 0, 1, 0, 0, 0, 0, 0, 0, OFIX_YYYYMM } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_yyyymmww_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=019^35=A^5000=200711w2^10=240^\n\
8=FIX.4.4^9=019^35=A^5000=999912w5^10=015^\n\
8=FIX.4.4^9=019^35=A^5000=000001w1^10=229^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 2007, 11, 2, 0, 0, 0, 0, 0, OFIX_YYYYMMWW },
	{ 9999, 12, 5, 0, 0, 0, 0, 0, OFIX_YYYYMMWW },
	{ 0, 1, 1, 0, 0, 0, 0, 0, OFIX_YYYYMMWW } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
set_time_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=028^35=A^5000=20071130-19:44:33^10=131^\n\
8=FIX.4.4^9=028^35=A^5000=20080101-23:59:59^10=138^\n\
8=FIX.4.4^9=028^35=A^5000=00000101-00:00:00^10=095^\n\
8=FIX.4.4^9=028^35=A^5000=99991231-23:59:59^10=169^\n";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    struct _ofixDate	values[] = {
	{ 2007, 11, 0, 30, 19, 44, 33, 0, OFIX_TIME },
	{ 2008, 1, 0, 1, 23, 59, 59, 999, OFIX_TIME },
	{ 0, 1, 0, 1, 0, 0, 0, 0, OFIX_TIME },
	{ 9999, 12, 0, 31, 23, 59, 59, 999, OFIX_TIME } };
    ofixDate		vp;
    ofixDate		end = (ofixDate)((char*)values + sizeof(values));
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (vp = values; vp < end; vp++) {
	ofix_msg_set_date(&err, msg, 5000, vp);
	if (OFIX_OK != err.code) {
	    test_print("set date of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
	str = ofix_msg_to_str(&err, msg);
	if (OFIX_OK != err.code) {
	    test_print("[%d] %s\n", err.code, err.msg);
	    test_fail();
	}
	a += sprintf(a, "%s\n", str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

void
append_set_tests(Test tests) {
    test_append(tests, "set.int", set_int_test);
    test_append(tests, "set.neg_tag", set_neg_tag_test);
    test_append(tests, "set.char", set_char_test);
    test_append(tests, "set.boolean", set_boolean_test);
    test_append(tests, "set.float", set_float_test);
    test_append(tests, "set.data", set_data_test);
    test_append(tests, "set.string", set_string_test);
    test_append(tests, "set.timestamp", set_timestamp_test);
    test_append(tests, "set.timeonly", set_timeonly_test);
    test_append(tests, "set.dateonly", set_dateonly_test);
    test_append(tests, "set.yyyymm", set_yyyymm_test);
    test_append(tests, "set.yyyymmww", set_yyyymmww_test);
    test_append(tests, "set.time", set_time_test);
}
