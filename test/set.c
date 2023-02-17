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
	    str = ofix_msg_to_str(&err, msg