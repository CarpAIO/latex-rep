
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <string.h>

#include "ofix/dtime.h"
#include "ofix/ofix.h"

static struct _ofixDate	sender_time = { 2007, 12, 0, 31, 15, 33, 51, 123, OFIX_TIMESTAMP };

static ofixMsg
make_msg(ofixMsgSpec spec) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;

    if (NULL == (msg = ofix_msg_create_from_spec(&err, spec, 10))) {
	printf("Create message failed: [%d] %s\n", err.code, err.msg);
	return NULL;
    }
    ofix_msg_set_append_mode(msg, true);

    ofix_msg_set_str(&err, msg, OFIX_SenderCompIDTAG, "Sender");
    ofix_msg_set_str(&err, msg, OFIX_TargetCompIDTAG, "Target");
    ofix_msg_set_int(&err, msg, OFIX_MsgSeqNumTAG, 42);
    ofix_msg_set_date(&err, msg, OFIX_SendingTimeTAG, &sender_time);
    ofix_msg_set_str(&err, msg, OFIX_ClOrdIDTAG, "order-123");
    ofix_msg_set_char(&err, msg, OFIX_HandlInstTAG, '1');
    ofix_msg_set_str(&err, msg, OFIX_SymbolTAG, "IBM");
    ofix_msg_set_char(&err, msg, OFIX_SideTAG, '2');
    ofix_msg_set_date(&err, msg, OFIX_TransactTimeTAG, &sender_time);
    ofix_msg_set_char(&err, msg, OFIX_OrdTypeTAG, '7');

    ofix_msg_set_append_mode(msg, false);
    if (OFIX_OK != err.code) {
	printf("[%d] %s\n", err.code, err.msg);
	return NULL;
    }
    //printf("*** %s\n", ofix_msg_to_str(&err, msg));
    return msg;
}

static double
create(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    double		start;
    int			i;
    ofixMsgSpec		spec;

    if (NULL == (spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4))) {
	printf("get version failed: [%d] %s\n", err.code, err.msg);
	return 0.0;
    }
    start = dtime();
    for (i = iter; 0 < i; i--) {
	ofix_msg_destroy(make_msg(spec));
    }
    return dtime() - start;
}

static double
gui_create(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    double		start;
    int			i;
    ofixMsgSpec		spec;
    ofixMsg		msg;

    if (NULL == (spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4))) {
	printf("get version failed: [%d] %s\n", err.code, err.msg);
	return 0.0;
    }
    start = dtime();
    for (i = iter; 0 < i; i--) {
	msg = make_msg(spec);
	ofix_msg_FIX_str(&err, msg);
	ofix_msg_destroy(msg);
    }
    return dtime() - start;
}

static double
to_FIX_str(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    ofixMsgSpec		spec;

    if (NULL == (spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4))) {
	printf("get version failed: [%d] %s\n", err.code, err.msg);
	return 0.0;
    }
    msg = make_msg(spec);
    start = dtime();
    for (i = iter; 0 < i; i--) {
	ofix_msg_FIX_str(&err, msg);
	ofix_msg_set_changed(msg);
    }
    t = dtime() - start;
    ofix_msg_destroy(msg);
    return t;
}

static double
repeat(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    ofixMsgSpec		spec;

    if (NULL == (spec = ofix_version_spec_get_msg_spec(&err, "D", 4, 4))) {
	printf("get version failed: [%d] %s\n", err.code, err.msg);
	return 0.0;
    }
    msg = make_msg(spec);
    start = dtime();
    for (i = iter; 0 < i; i--) {
	ofix_msg_FIX_str(&err, msg);
    }
    t = dtime() - start;
    ofix_msg_destroy(msg);
    return t;
}

static double
parse(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    const char		*msg_str = "8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=94^";
    char		msg_buf[1024];
    const char		*s;
    char		*b;
    int			len = strlen(msg_str);

    for (s = msg_str, b = msg_buf; '\0' != *s; s++, b++) {
	if ('^' == *s) {
	    *b = '\1';
	} else {
	    *b = *s;
	}
    }
    *b = '\0';
    start = dtime();
    for (i = iter; 0 < i; i--) {
	msg = ofix_msg_parse(&err, msg_buf, len);
	ofix_msg_destroy(msg);
    }
    t = dtime() - start;

    return t;
}

static double
display(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    const char		*msg_str = "8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=94^";
    char		msg_buf[1024];
    const char		*s;
    char		*b;
    int			len = strlen(msg_str);
    char		*str;
    int			iv;
    struct _ofixDate	date;

    for (s = msg_str, b = msg_buf; '\0' != *s; s++, b++) {
	if ('^' == *s) {
	    *b = '\1';
	} else {
	    *b = *s;
	}
    }
    *b = '\0';
    start = dtime();
    for (i = iter; 0 < i; i--) {
	msg = ofix_msg_parse(&err, msg_buf, len);
	ofix_msg_get_data(&err, msg, OFIX_SenderCompIDTAG, &str, &iv);
	ofix_msg_get_data(&err, msg, OFIX_TargetCompIDTAG, &str, &iv);
	ofix_msg_get_int(&err, msg, OFIX_MsgSeqNumTAG);
	ofix_msg_get_timestamp(&err, msg, OFIX_SendingTimeTAG, &date);
	ofix_msg_get_data(&err, msg, OFIX_ClOrdIDTAG, &str, &iv);
	ofix_msg_get_char(&err, msg, OFIX_HandlInstTAG);
	ofix_msg_get_data(&err, msg, OFIX_SymbolTAG, &str, &iv);
	ofix_msg_get_char(&err, msg, OFIX_SideTAG);
	ofix_msg_get_timestamp(&err, msg, OFIX_TransactTimeTAG, &date);
	ofix_msg_get_char(&err, msg, OFIX_OrdTypeTAG);
	ofix_msg_get_data(&err, msg, OFIX_CheckSumTAG, &str, &iv);
	ofix_msg_destroy(msg);
    }
    t = dtime() - start;

    return t;
}

static double
route(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    const char		*msg_str = "8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=94^";
    char		msg_buf[1024];
    const char		*s;
    char		*b;
    int			len = strlen(msg_str);
    char		*str;
    int			iv;

    for (s = msg_str, b = msg_buf; '\0' != *s; s++, b++) {
	if ('^' == *s) {
	    *b = '\1';
	} else {
	    *b = *s;
	}
    }
    *b = '\0';
    start = dtime();
    for (i = iter; 0 < i; i--) {
	msg = ofix_msg_parse(&err, msg_buf, len);
	ofix_msg_get_data(&err, msg, OFIX_MsgTypeTAG, &str, &iv);
	ofix_msg_get_int(&err, msg, OFIX_MsgSeqNumTAG);
	ofix_msg_destroy(msg);
    }
    t = dtime() - start;

    return t;
}

static double
update(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    const char		*msg_str = "8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=94^";
    char		msg_buf[1024];
    const char		*s;
    char		*b;
    int			len = strlen(msg_str);
    int			j;

    for (s = msg_str, b = msg_buf; '\0' != *s; s++, b++) {
	if ('^' == *s) {
	    *b = '\1';
	} else {
	    *b = *s;
	}
    }
    *b = '\0';
    start = dtime();
    for (i = iter / 10; 0 < i; i--) {
	msg = ofix_msg_parse(&err, msg_buf, len);
	ofix_msg_get_int(&err, msg, OFIX_MsgSeqNumTAG);
	for (j = 10; 0 < j; j--) {
	    ofix_msg_get_int(&err, msg, OFIX_MsgSeqNumTAG);
	    ofix_msg_FIX_str(&err, msg);
	}
	ofix_msg_destroy(msg);
    }
    t = dtime() - start;

    return t;
}

static double
enhance(int iter) {
    struct _ofixErr	err = OFIX_ERR_INIT;
    ofixMsg		msg;
    double		t, start;
    int			i;
    const char		*msg_str = "8=FIX.4.4^9=116^35=D^49=Sender^56=Target^34=42^52=20071031-17:42:33.123^11=order1234^21=1^55=IBM^54=2^60=20071031-17:42:11.321^40=7^10=94^";
    char		msg_buf[1024];
    const char		*s;
    char		*b;
    int			len = strlen(msg_str);
    char		*str;
    int			iv;
    struct _ofixDate	date = { 2007, 12, 0, 31, 15, 33, 51, 123, OFIX_TIMESTAMP };

    for (s = msg_str, b = msg_buf; '\0' != *s; s++, b++) {
	if ('^' == *s) {
	    *b = '\1';
	} else {
	    *b = *s;
	}
    }
    *b = '\0';
    start = dtime();
    for (i = iter; 0 < i; i--) {
	msg = ofix_msg_parse(&err, msg_buf, len);
	ofix_msg_get_data(&err, msg, OFIX_SymbolTAG, &str, &iv);
	ofix_msg_set_date(&err, msg, OFIX_ExpireTimeTAG, &date);
	ofix_msg_destroy(msg);
    }
    t = dtime() - start;

    return t;
}

void
benchmark(int iter) {
    printf("Create:      %0.3f nsec/msg\n", create(iter) * 1000000000.0 / (double)iter);
    printf("GUI Create:  %0.3f nsec/msg\n", gui_create(iter) * 1000000000.0 / (double)iter);
    printf("to_FIX_str:  %0.3f nsec/msg\n", to_FIX_str(iter) * 1000000000.0 / (double)iter);
    printf("Repeat:      %0.3f nsec/msg\n", repeat(iter) * 1000000000.0 / (double)iter);
    printf("Parse:       %0.3f nsec/msg\n", parse(iter) * 1000000000.0 / (double)iter);
    printf("Display:     %0.3f nsec/msg\n", display(iter) * 1000000000.0 / (double)iter);
    printf("Route:       %0.3f nsec/msg\n", route(iter) * 1000000000.0 / (double)iter);
    printf("Update:      %0.3f nsec/msg\n", update(iter) * 1000000000.0 / (double)iter);
    printf("Enhance:     %0.3f nsec/msg\n", enhance(iter) * 1000000000.0 / (double)iter);
}