// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdlib.h>
#include <stdio.h>

#include "test.h"
#include "ofix/ofix.h"

static void
msg_test() {
    char			actual[1024];
    char			*a = actual;
    char			*expected = "\
8=FIX.4.4^9=010^35=A^34=7^10=236^\n\
8:FIX.4.4\n\
9:010\n\
35:A\n\
34:7\n\
10:236\n";
    struct _ofixErr		err = OFIX_ERR_INIT;
    ofixMsg			msg;
    int				tag;
    struct _ofixMsgIterator	iter;
    char			*str;

    if (NULL == (msg = ofix_msg_create(&err, "A", 4, 4, 14))) {
	test_print("[%d] %s\n", err.code, err.msg);
	test_fail();
	return;
    }
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 7);
    if (OFIX_OK != err.code) {
	test_print("set int of %d failed: [%d] %s\n", err.code, err.msg);
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

    ofix_msg_iterator_init(&iter, msg);
    for (tag = ofix_msg_iterator_next_tag(&iter); 0 != tag; tag = ofix_msg_iterator_next_tag(&iter)) {
	str = ofix_msg_get_str(&err, msg, tag);
	if (OFIX_OK != err.code) {
	    test_print("get string of %d failed: [%d] %s\n", tag, err.code, err.msg);
	    test_fail();
	    return;
	}
	a += sprintf(a, "%d:%s\n", tag, str);
	free(str);
    }
    ofix_msg_destroy(msg);
    test_same(expected, actual);
}

static void
parsed_test() {
}

static void
group_test() {
}

void
append_iterator_tests(Test tests) {
    test_append(tests, "iterator.msg", msg_test);
    test_append(tests, "iterator.parsed", parsed_test);
    test_append(tests, "iterator.group", group_test);
}
