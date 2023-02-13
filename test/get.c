
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <inttypes.h>

#include "test.h"
#include "ofix/ofix.h"

static void
get_int_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=077^35=A^5000=0^5001=-1^5002=1^5003=10^5004=-99^5005=2147483647^5006=-2147483648^10=080^\n\
0 -1 1 10 -99 2147483647 -2147483648 ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    int			values[] = { 0, -1, 1, 10, -99, 2147483647, INT32_MIN };
    int			*ip;
    int			*end = (int*)((char*)values + sizeof(values));
    int			i, tag;
    int32_t		v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_int(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set int of %d failed: [%d] %s\n", tag, err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	v = ofix_msg_get_int(&err, msg, i);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get int %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    a += sprintf(a, "%d ", v);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_char_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=019^35=A^5000=0^5001=X^10=168^\n\
0 X ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		values[] = { '0', 'X' };
    char		*ip;
    char		*end = (char*)((char*)values + sizeof(values));
    int			i, tag;
    char		v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_char(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set char of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	v = ofix_msg_get_char(&err, msg, i);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get char %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    a += sprintf(a, "%c ", v);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_boolean_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=026^35=A^5000=0^5001=Y^5002=N^10=250^\n\
get bool 5000 failed: The value '0' for tag 5000 (Unknown) is not a boolean value (Y or N).true false ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		values[] = { '0', 'Y', 'N' };
    char		*ip;
    char		*end = (char*)((char*)values + sizeof(values));
    int			i, tag;
    bool		v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_char(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set char of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	v = ofix_msg_get_bool(&err, msg, i);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get bool %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    a += sprintf(a, "%s ", v ? "true" : "false");
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_float_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=082^35=A^5000=0^5001=-1^5002=5.01^5003=123456789.012345^5004=0.0420^5005=-99999.99999^10=127^\n\
0.000000 -1.000000 5.010000 123456789.012345 0.042000 -99999.999990 ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*values[] = { "0", "-1", "5.01", "123456789.012345", "0.0420", "-99999.99999" };
    char		**ip;
    char		**end = (char**)((char*)values + sizeof(values));
    int			i, tag;
    double		v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_str(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set string of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	v = ofix_msg_get_float(&err, msg, i);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get float %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    a += sprintf(a, "%0.6f ", v);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_data_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=029^35=A^5000=Some bytes^5001=42^10=098^\n\
[10]Some bytes [2]42 ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*values[] = { "Some bytes", "42" };
    char		**ip;
    char		**end = (char**)((char*)values + sizeof(values));
    int			i, tag;
    char		*v;
    int32_t		vlen;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_str(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set string of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	ofix_msg_get_data(&err, msg, i, &v, &vlen);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get data %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    char	buf[64];
	    
	    strncpy(buf, v, vlen);
	    buf[vlen] = '\0';
	    a += sprintf(a, "[%d]%s ", vlen, buf);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_string_test() {
    char		actual[1024];
    char		*a = actual;
    char		*expected = "\
8=FIX.4.4^9=029^35=A^5000=Some bytes^5001=42^10=098^\n\
Some bytes 42 ";
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		*values[] = { "Some bytes", "42" };
    char		**ip;
    char		**end = (char**)((char*)values + sizeof(values));
    int			i, tag;
    char		*v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_str(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set string of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	v = ofix_msg_get_str(&err, msg, i);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get string %d failed: %s", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    a += sprintf(a, "%s ", v);
	    free(v);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
date_test(char **values, int vlen, char *expected, void (func)(ofixErr err, ofixMsg msg, int tag, ofixDate value)) {
    char		actual[1024];
    char		*a = actual;
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    char		**ip;
    char		**end = values + vlen;
    int			i, tag;
    struct _ofixDate	v;
    char		*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    for (ip = values, tag = 5000; ip < end; ip++, tag++) {
	ofix_msg_set_str(&err, msg, tag, *ip);
	if (OFIX_OK != err.code) {
	    test_print("set string of %d failed: [%d] %s\n", err.code, err.msg);
	    test_fail();
	    ofix_err_clear(&err);
	}
    }
    str = ofix_msg_to_str(&err, msg);
    if (OFIX_OK != err.code) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    a += sprintf(a, "%s\n", str);
    free(str);
    for (i = 5000; i < tag; i++) {
	bzero(&v, sizeof(v));
	func(&err, msg, i, &v);
	if (OFIX_OK != err.code) {
	    a += sprintf(a, "get %d failed: %s\n", i, err.msg);
	    ofix_err_clear(&err);
	} else {
	    char	*str = ofix_date_to_str(&v);
	    
	    a += sprintf(a, "%s\n", str);
	    free(str);
	}
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
get_timestamp_test() {
    char	*expected = "\
8=FIX.4.4^9=119^35=A^5000=20071130^5001=20071130-19:44:33.123^5002=20071130-19:44:33^5003=00000101-00:00:00^5004=99991231-23:59:59.999^10=252^\n\
get 5000 failed: The string 20071130 for tag 5000 (Unknown) can not be parsed as a timestamp.\n\
20071130-19:44:33.123\n\
20071130-19:44:33.000\n\
00000101-00:00:00.000\n\
99991231-23:59:59.999\n";
    char	*values[] = { "20071130", "20071130-19:44:33.123", "20071130-19:44:33", "00000101-00:00:00", "99991231-23:59:59.999" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_timestamp);
}

static void
get_timeonly_test() {
    char	*expected = "\
8=FIX.4.4^9=087^35=A^5000=12:37:45.123 ^5001=12:37:45.12^5002=19:44:33^5003=00:00:00^5004=23:59:59.999^10=206^\n\
get 5000 failed: The string 12:37:45.123  for tag 5000 (Unknown) can not be parsed as a time only.\n\
get 5001 failed: The string 12:37:45.12 for tag 5001 (Unknown) can not be parsed as a time only.\n\
19:44:33.000\n\
00:00:00.000\n\
23:59:59.999\n";
    char	*values[] = { "12:37:45.123 ", "12:37:45.12", "19:44:33", "00:00:00", "23:59:59.999" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_time_only);
}

static void
get_dateonly_test() {
    char	*expected = "\
8=FIX.4.4^9=075^35=A^5000=20070105 ^5001=2007015^5002=20071130^5003=00000101^5004=99991231^10=253^\n\
get 5000 failed: The string 20070105  for tag 5000 (Unknown) can not be parsed as a timestamp.\n\
get 5001 failed: The string 2007015 for tag 5001 (Unknown) can not be parsed as a timestamp.\n\
20071130\n\
00000101\n\
99991231\n";
    char	*values[] = { "20070105 ", "2007015", "20071130", "00000101", "99991231" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_date_only);
}

static void
get_yyyymm_test() {
    char	*expected = "\
8=FIX.4.4^9=066^35=A^5000=20071 ^5001=200701 ^5002=200711^5003=000001^5004=999912^10=043^\n\
get 5000 failed: The string 20071  for tag 5000 (Unknown) can not be parsed as a YYYYMM.\n\
get 5001 failed: The string 200701  for tag 5001 (Unknown) can not be parsed as a YYYYMM.\n\
200711\n\
000001\n\
999912\n";
    char	*values[] = { "20071 ", "200701 ", "200711", "000001", "999912" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_yyyymm);
}

static void
get_yyyymmww_test() {
    char	*expected = "\
8=FIX.4.4^9=089^35=A^5000=20070105^5001=200701w^5002=200701w2 ^5003=200711w2^5004=000001w1^5005=999912w5^10=244^\n\
get 5000 failed: The string 20070105 for tag 5000 (Unknown) can not be parsed as a YYYYMMwW.\n\
get 5001 failed: The string 200701w for tag 5001 (Unknown) can not be parsed as a YYYYMMwW.\n\
get 5002 failed: The string 200701w2  for tag 5002 (Unknown) can not be parsed as a YYYYMMwW.\n\
200711w2\n\
000001w1\n\
999912w5\n";
    char	*values[] = { "20070105", "200701w", "200701w2 ", "200711w2", "000001w1", "999912w5" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_yyyymmww);
}

static void
get_time_test() {
    char	*expected = "\
8=FIX.4.4^9=115^35=A^5000=20071130^5001=20071130-19:44:33.123^5002=20071130-19:44:33^5003=00000101-00:00:00^5004=99991231-23:59:59^10=031^\n\
get 5000 failed: The string 20071130 for tag 5000 (Unknown) can not be parsed as a time.\n\
get 5001 failed: The string 20071130-19:44:33.123 for tag 5001 (Unknown) can not be parsed as a time.\n\
20071130-19:44:33\n\
00000101-00:00:00\n\
99991231-23:59:59\n";
    char	*values[] = { "20071130", "20071130-19:44:33.123", "20071130-19:44:33", "00000101-00:00:00", "99991231-23:59:59" };

    date_test(values, sizeof(values) / sizeof(*values), expected, ofix_msg_get_time);
}

void
append_get_tests(Test tests) {
    test_append(tests, "get.int", get_int_test);
    test_append(tests, "get.char", get_char_test);
    test_append(tests, "get.boolean", get_boolean_test);
    test_append(tests, "get.float", get_float_test);
    test_append(tests, "get.data", get_data_test);
    test_append(tests, "get.string", get_string_test);
    test_append(tests, "get.timestamp", get_timestamp_test);
    test_append(tests, "get.timeonly", get_timeonly_test);
    test_append(tests, "get.dateonly", get_dateonly_test);
    test_append(tests, "get.yyyymm", get_yyyymm_test);
    test_append(tests, "get.yyyymmww", get_yyyymmww_test);
    test_append(tests, "get.time", get_time_test);
}