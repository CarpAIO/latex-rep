
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <inttypes.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "msg.h"
#include "tag.h"
#include "msgspec.h"
#include "versionspec.h"

#define MSG_CAP_INC		1024
#define SOH			'\1'
#define INIT_PRETTY_SIZE	4096


typedef struct _Field {
    ofixTagSpec	ref;
    int		vpos;
    int		vlen;
} *Field;

struct _ofixMsg {
    char		*raw;
    Field		cached_field;
    ofixMsgSpec		spec;
    //fixRepeatingGroup	parent;
    int			raw_len;
    int			msg_len;
    int			field_cnt;
    int			alloc_field_cnt;
    struct _Field	check_sum_field;
    Field		fields;
    bool		append_mode;
    bool		changed;
};

extern ofixVersionSpec	ofix_get_spec(ofixErr err, int major, int minor);

static ofixMsg	alloc_msg(ofixErr err, int field_cnt);
static void	grow_fields(ofixErr err, ofixMsg msg, int field_cnt);
static Field	append(ofixErr err, ofixMsg msg, int tag, bool appMode);

static void	slide_fields(ofixMsg msg, Field f, int dif);
static Field	get_field(ofixMsg msg, int tag);

static struct _ofixTagSpec	begin_string_spec = { 8, OFIX_String, OFIX_Header, 0, 2, "8=", "BeginString" };
static struct _ofixTagSpec	check_sum_spec = { 10, OFIX_String, OFIX_Trailer, 0, 3, "10=", "CheckSum" };

static inline int
field_end(Field f) {
    return f->vpos + f->vlen;
}

static inline Field
last_field(ofixMsg msg) {
    if (0 < msg->field_cnt) {
	return msg->fields + msg->field_cnt - 1;
    }
    return 0;
}

static Field
get_tag_field(ofixMsg msg, int tag) {
    Field	f;
    Field	found = 0;
    int		i;
    
    if (0 != msg->cached_field && tag == msg->cached_field->ref->tag) {
	return msg->cached_field;
    }
    for (i = msg->field_cnt, f = msg->fields; 0 < i; i--, f++) {
	if (tag == f->ref->tag) {
	    found = f;
	    break;
	}
    }
    if (0 != found) {
	msg->cached_field = found;
    } else if (OFIX_CheckSumTAG == tag && 0 != msg->check_sum_field.vpos) {
	found = &msg->check_sum_field;
    }
    return found;
}

static Field
get_tag_field_or_error(ofixErr err, ofixMsg msg, int tag) {
    Field	f;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (NULL == (f = get_tag_field(msg, tag))) {
	ofixTagSpec	ref;
	
	if (NULL == (ref = ofix_version_spec_get_tag_spec(err, msg->spec->version, tag, false))) {
	    if (NULL != err) {
		err->code = OFIX_NOT_FOUND_ERR;
		snprintf(err->msg, sizeof(err->msg), "Tag %d not found.", tag);
	    }
	}
    }
    return f;
}

static inline Field
get_field(ofixMsg msg, int tag) {
    Field	f;
    int		i;
    
    for (i = msg->field_cnt, f = msg->fields; 0 < i; i--, f++) {
	if (tag == f->ref->tag) {
	    break;
	}
    }
    return f;
}

static void
slide(ofixErr err, ofixMsg msg, int start, int dist) {
    int	newEnd = msg->msg_len + dist;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (msg->raw_len < newEnd) {
	msg->raw = (char*)realloc(msg->raw, msg->raw_len + MSG_CAP_INC);
	if (0 == msg->raw) {
	    if (NULL != err) {
		err->code = OFIX_MEMORY_ERR;
		snprintf(err->msg, sizeof(err->msg), "Missing message data.");
	    }
	    return;
	}
	msg->raw_len += MSG_CAP_INC;
    }
    if (start < msg->msg_len) {
	memmove(msg->raw + start + dist, msg->raw + start, msg->msg_len - start);
    }
    if (0 < msg->check_sum_field.vpos) {
	msg->check_sum_field.vpos += dist;
    }
    msg->msg_len = newEnd;
}	    

static void
grow_fields(ofixErr err, ofixMsg msg, int field_cnt) {
    if (0 == (msg->fields = (Field)realloc(msg->fields, sizeof(struct _Field) * field_cnt))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for message fields.");
	}
	return;
    }
    bzero(msg->fields + msg->alloc_field_cnt, sizeof(struct _Field) * (field_cnt - msg->alloc_field_cnt));
    /* slightly slower
    Field	f;
    int		i;
    
    for (i = field_cnt - msg->alloc_field_cnt, f = msg->fields + msg->alloc_field_cnt; 0 < i; i--, f++) {
	f->ref = 0;
	f->vpos = 0;
	f->vlen = 0;
    }
    */
    msg->alloc_field_cnt = field_cnt;
    msg->cached_field = 0;
}

static ofixMsg
alloc_msg(ofixErr err, int field_cnt) {
    ofixMsg	msg;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (0 == field_cnt) {
	field_cnt = 40; // some default number to start with
    }
    field_cnt += 3;	// required header fields
    if (NULL == (msg = (ofixMsg)malloc(sizeof(struct _ofixMsg)))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for an ofixMsg.");
	}
	return NULL;
    }
    msg->fields = NULL;
    msg->alloc_field_cnt = 0;
    grow_fields(err, msg, field_cnt);
    if (OFIX_OK != err->code) {
	free(msg);
	return NULL;
    }
    msg->raw = NULL;
    msg->raw_len = 0;
    msg->field_cnt = 0;
    msg->spec = NULL;
    msg->msg_len = 0;
    msg->changed = true;
    msg->append_mode = true;
    msg->check_sum_field.ref = &check_sum_spec;
    msg->check_sum_field.vpos = 0;
    msg->check_sum_field.vlen = 0;

    return msg;
}

static Field
append(ofixErr err, ofixMsg msg, int tag, bool appMode) {
    Field	f = NULL;
    ofixTagSpec	ref;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (OFIX_CheckSumTAG == tag) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    snprintf(err->msg, sizeof(err->msg), "CheckSum field can not be set.");
	}
	return NULL;
    }
    if (NULL == (ref = ofix_version_spec_get_tag_spec(err, msg->spec->version, tag, true))) {
	return NULL;
    }
    if (msg->alloc_field_cnt <= msg->field_cnt) {
	grow_fields(err, msg, msg->alloc_field_cnt * 3 / 2);
	if ((NULL != err && OFIX_OK != err->code) || msg->alloc_field_cnt <= msg->field_cnt) {
	    return NULL;
	}
    }
    if (0 == msg->fields->ref) { // empty
	f = msg->fields;
	f->vpos = 0;
    } else if (appMode) { // append but not empty so first is set already
	f = msg->fields + msg->field_cnt;
	f->vpos = field_end(msg->fields + msg->field_cnt - 1) + 1;
    } else {
	ofixMsgSpec	spec = msg->spec;
	Field		last = last_field(msg);
	int		seq = ofix_msg_spec_tag_seq(spec, tag);
	int		endSeq = ofix_msg_spec_tag_seq(spec, last->ref->tag);
	int		pos;

	if ((0 != endSeq && endSeq < seq) ||
	    (0 == seq && OFIX_Trailer != last->ref->where) ||
	    (0 == endSeq && OFIX_Trailer == ref->where)) { // append

	    f = msg->fields + msg->field_cnt;
	    f->vpos = field_end(msg->fields + msg->field_cnt - 1) + 1;
	} else { // insert
	    int		i;

	    if (0 == seq) {
		// find pos just before trailer
		for (i = msg->field_cnt, f = msg->fields; 0 < i; i--, f++) {
		    if (OFIX_Trailer == f->ref->where) {
			f++;
			break;
		    }
		}
		f--;
	    } else {
		int	fseq;

		for (i = msg->field_cnt, f = msg->fields; 0 < i; i--, f++) {
		    fseq = ofix_msg_spec_tag_seq(spec, f->ref->tag);
		    if ((0 == fseq && OFIX_Trailer != ref->where) || fseq > seq) {
			f++;
			break;
		    }
		}
		f--;
	    }
	    pos = f->vpos - f->ref->tag_byte_len;
	    memmove(f + 1, f, sizeof(struct _Field) * (msg->field_cnt - (f - msg->fields)));
	    f->vpos = pos;
	}
    }
    f->ref = ref;
    f->vlen = 0;
    msg->field_cnt++;

    return f;
}

static void
slide_fields(ofixMsg msg, Field f, int dif) {
    if (0 != dif) {
	int	i;
	
	for (i = msg->field_cnt - (f - msg->fields); 0 < i; i--, f++) {
	    f->vpos += dif;
	}
    }
}

static void
update(ofixErr err, ofixMsg msg) {
    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (msg->changed) {
	Field	f = get_field(msg, OFIX_BodyLengthTAG);
	char	*b;
	int	blen;
	int	vcnt = 0;
	int	e = 1;
	int	i;

	if (0 == msg->check_sum_field.vpos) {
	    blen = msg->msg_len - field_end(f) - 1;
	} else {
	    blen = msg->check_sum_field.vpos - msg->check_sum_field.ref->tag_byte_len - field_end(f) - 1;
	}
	for (; vcnt < 10 && e < blen; vcnt++, e *= 10) {
	}
	if (f->vlen < vcnt) {
	    slide(err, msg, f->vpos + f->vlen, vcnt - f->vlen);
	    if ((NULL != err && OFIX_OK != err->code) || f->vlen < vcnt) {
		return;
	    }
	}
	b = msg->raw + field_end(f) - 1;
	for (i = f->vlen; 0 < i; i--, blen /= 10) {
	    *b-- = '0' + (blen - blen / 10 * 10);
	}
	uint8_t	checkSum = 0;
	char	*end = msg->raw + field_end(msg->fields + msg->field_cnt - 1);

	b = msg->raw;
	// The rollover of the single byte will keep the checkSum modulo
	// 256. Count all characters except the checksum itself.
	for (b = msg->raw; b <= end; b++) {
	    checkSum += *b;
	}
	// if the CheckSum field is not set, add it
	if (0 == msg->check_sum_field.vpos) {
	    int	tagLen;
	    int	size;

	    msg->check_sum_field.vpos = 0;
	    msg->check_sum_field.vlen = 3;
	    tagLen = msg->check_sum_field.ref->tag_byte_len;
	    msg->check_sum_field.vpos = msg->msg_len + tagLen;
	    size = tagLen + 4; // tag plus 3 digits plus SOH
	    if (msg->raw_len < msg->msg_len + size + 1) {
		if (0 == (msg->raw = (char*)realloc(msg->raw, msg->msg_len + size + 1))) {
		    if (NULL != err) {
			err->code = OFIX_MEMORY_ERR;
			snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for a ofixMsg data.");
		    }
		    return;
		}
	    }
	    memcpy(msg->raw + msg->msg_len, msg->check_sum_field.ref->tag_bytes, tagLen);
	    msg->msg_len = msg->check_sum_field.vpos + 4;
	    msg->raw[msg->msg_len - 1] = SOH;
	    msg->raw[msg->msg_len] = '\0';
	}
	b = msg->raw + msg->check_sum_field.vpos + 2;
	for (i = msg->check_sum_field.vlen; 0 < i; i--, checkSum /= 10) {
	    *b-- = '0' + (checkSum - checkSum / 10 * 10);
	}
	msg->changed = false;
    }
}

/////////////////////////////////////////////////////////////////////

ofixMsg
ofix_msg_create(ofixErr err, const char *type, int major, int minor, int field_cnt) {
    ofixMsgSpec	spec;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (NULL == (spec = ofix_version_spec_get_msg_spec(err, type, major, minor))) {
	return NULL;
    }
    return ofix_msg_create_from_spec(err, spec, field_cnt);
}

ofixMsg
ofix_msg_create_from_spec(ofixErr err, ofixMsgSpec spec, int field_cnt) {
    ofixMsg	msg;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (NULL == (msg = alloc_msg(err, field_cnt))) {
	return NULL;
    }
    msg->spec = spec;
    if (NULL == (msg->raw = (char*)malloc(MSG_CAP_INC))) {
	free(msg->fields);
	free(msg);
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for ofixMsg data.");
	}
	return NULL;
    }
    *msg->raw = '\0';
    msg->raw_len = MSG_CAP_INC;
    ofix_msg_set_str(err, msg, OFIX_BeginStringTAG, spec->version->id);
    ofix_msg_set_int(err, msg, OFIX_BodyLengthTAG, 999); // force the reserve of digits for bodylength
    ofix_msg_set_str(err, msg, OFIX_MsgTypeTAG, spec->type);
    if (NULL != err && OFIX_OK != err->code) {
	free(msg->raw);
	free(msg->fields);
	free(msg);
	return NULL;
    }
    msg->append_mode = false;
    
    return msg;
}

static void
set_parse_error(ofixErr err, const char *mt, int64_t seq, int tag, ofixReason reason, const char *fmt, ...) {
    if (NULL == err) {
	return;
    }
    va_list	ap;

    va_start(ap, fmt);
    err->code = OFIX_PARSE_ERR;
    err->reason = reason;
    err->tag = tag;
    err->seq = seq;
    if (NULL == mt || '\0' == *mt) {
	*err->msg_type = '\0';
    } else {
	strncpy(err->msg_type, mt, sizeof(err->msg_type));
	err->msg_type[sizeof(err->msg_type) - 1] = '\0';
    }
    vsnprintf(err->msg, sizeof(err->msg), fmt, ap);
    va_end(ap);
}

ofixMsg
ofix_msg_parse(ofixErr err, const char *str, int len) {
    char		type[8];
    const char		*b = str;
    const char		*end = str + len;
    char		*r, *raw;
    ofixMsg		msg;
    ofixVersionSpec	versionSpec = 0;
    Field		f;
    int			field_cnt = 0;
    int			tag;
    int			nextTag = 0;
    int			cnt = 0;
    int64_t		seq = 0;
    bool		neg;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    *type = '\0';
    if (NULL == (raw = (char*)malloc(len + 1))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for ofixMsg data.");
	}
	return NULL;
    }
    for (b = str, r = raw; b < end; b++, r++) {
	if (SOH == *b) {
	    field_cnt++;
	}
	*r = *b;
    }
    *r = '\0';
    if (NULL == (msg = alloc_msg(err, field_cnt - 3))) {
	return NULL;
    }
    msg->raw = raw;
    msg->raw_len = len;
    msg->msg_len = len;
    f = msg->fields;
    b = str;
    do {
	// parse number up to =
	tag = 0;
	if ('-' == *b) {
	    neg = true;
	    b++;
	} else {
	    neg = false;
	}
	for (; b < end; b++) {
	    if ('0' <= *b && *b <= '9') {
		tag = tag * 10 + (*b - '0');
	    } else {
		break;
	    }
	}
	if ('=' != *b) {
	    set_parse_error(err, type, seq, 0, OFIX_REASON_INVALID_TAG,
			    "Invalid tag at position %ld.", (b - str));
	    ofix_msg_destroy(msg);
	    return NULL;
	}
	if (neg) {
	    tag = -tag;
	}
	b++; // move past =
	// tag set, look up tag in tag table
	if (OFIX_CheckSumTAG == tag) {
	    f = &msg->check_sum_field;
	} else if (&msg->check_sum_field == f) {
	    set_parse_error(err, type, seq, tag, OFIX_REASON_ORDER_TAG,
			    "CheckSum is not the last tag at position %ld.", (b - str));
	    ofix_msg_destroy(msg);
	    return NULL;
	}
	if (OFIX_BeginStringTAG == tag) {
	    f->ref = &begin_string_spec;
	} else if (0 == versionSpec) {
	    set_parse_error(err, type, seq, tag, OFIX_REASON_ORDER_TAG, "BeginString tag not first.");
	    ofix_msg_destroy(msg);
	    return NULL;
	} else if (NULL == (f->ref = ofix_version_spec_get_tag_spec(err, versionSpec, tag, true))) {
	    set_parse_error(err, type, seq, tag, OFIX_REASON_UNDEFINED_TAG,
			    "Undefined tag %d at position %ld.", tag, (b - str));
	    ofix_msg_destroy(msg);
	    return NULL;
	}
	f->vpos = b - str;
	switch (f->ref->type) {
	case OFIX_Length:
	    nextTag = f->ref->related_tag;
	    cnt = 0;
	    for (; SOH != *b; b++) {
		if (end <= b) {
		    set_parse_error(err, type, seq, tag, OFIX_REASON_OTHER, "Unexpected end of message.");
		    ofix_msg_destroy(msg);
		    return NULL;
		}
		cnt = cnt * 10 + (*b - '0');
	    }
	    f->vlen = (b - str) - f->vpos;
	    b++;
	    break;
	case OFIX_Data:
	    if (nextTag != tag) {
		set_parse_error(err, type, seq, tag, OFIX_REASON_ORDER_TAG,
				"Tag %d out of order at position %d. Expected Data tag %d.",
				tag, f->vpos, nextTag);
		ofix_msg_destroy(msg);
		return NULL;
	    }
	    if (len < f->vpos + cnt + 1) {
		set_parse_error(err, type, seq, tag, OFIX_REASON_OTHER, "Unexpected end of message.");
		ofix_msg_destroy(msg);
		return NULL;
	    }
	    f->vlen = cnt;
	    b += cnt;
	    b++;
	    cnt = 0;
	    nextTag = 0;
	    break;
	case OFIX_NumInGroup:
	default:
	    for (; SOH != *b; b++) {
		if (end <= b) {
		    set_parse_error(err, type, seq, tag, OFIX_REASON_OTHER, "Unexpected end of message.");
		    ofix_msg_destroy(msg);
		    return NULL;
		}
	    }
	    f->vlen = (b - str) - f->vpos;
	    b++;
	    if (OFIX_BeginStringTAG == tag) {
		const char	*vstr = str + f->vpos;

		if (7 != f->vlen) {
		    set_parse_error(err, type, seq, tag, OFIX_REASON_BAD_FORMAT, "Incorrect format.");
		    ofix_msg_destroy(msg);
		    return NULL;
		}
		if (NULL == (versionSpec = ofix_get_spec(err, *(vstr + 4) - '0', *(vstr + 6) - '0'))) {
		    set_parse_error(err, type, seq, tag, OFIX_REASON_BAD_VALUE,
				    "FIX version %c.%c not supported.", *(vstr + 4), *(vstr + 6));
		    ofix_msg_destroy(msg);
		    return NULL;
		}
	    } else if (OFIX_MsgTypeTAG == tag) {
		if (sizeof(type) <= f->vlen) {
		    set_parse_error(err, type, seq, tag, OFIX_REASON_BAD_FORMAT, "Incorrect format.");
		    ofix_msg_destroy(msg);
		    return NULL;
		}
		memcpy(type, str + f->vpos, f->vlen);
		type[f->vlen] = '\0';
		if (NULL == (msg->spec = ofix_version_spec_get_msg_spec_from_version(err, type, versionSpec))) {
		    ofix_msg_destroy(msg);
		    return NULL;
		}
	    } else if (OFIX_MsgSeqNumTAG == tag) {
		seq = (int64_t)strtoll(str + f->vpos, NULL, 10);
	    }
	}
	if (f != &msg->check_sum_field) {
	    msg->field_cnt++;
	} else {
	    end = str + field_end(f) + 1;
	}
	f++;
    } while (b < end);
    msg->append_mode = false;
    
    return msg;
}

void
ofix_msg_destroy(ofixMsg msg) {
    if (0 != msg->fields) {
	free(msg->fields);
    }
    if (0 != msg->raw) {
	free(msg->raw);
    }
    free(msg);
}

int
ofix_msg_size(ofixErr err, ofixMsg msg) {
    update(err, msg);
    if (NULL != err && OFIX_OK != err->code) {
	return 0;
    }
    return msg->msg_len;
}

int
ofix_msg_expected_size(ofixErr err, ofixMsg msg) {
    Field	f = get_tag_field(msg, OFIX_BodyLengthTAG);
    int32_t	len;

    if (NULL == f) {
	return 0;
    }
    len = ofix_msg_get_int(err, msg, OFIX_BodyLengthTAG);

    return len + field_end(f) + 8;
}

// does not do any validation
int
ofix_msg_expected_buf_size(const char *msg) {
    const char	*b = msg + 11; // move past 8=FIX.4.x^9=
    const char	*end = b + 10;
    int		num = 0;
    
    for (; SOH != *b; b++) {
	if ('0' <= *b && *b <= '9') {
	    num = num * 10 + (*b - '0');
	}
	if (end < b) {
	    // error parsing
	    return 0;
	}
    }
    return num + (b - msg) + 8; // bytes before plus checksum
}

const char*
ofix_msg_FIX_str(ofixErr err, ofixMsg msg) {
    update(err, msg);
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (msg->raw_len <= msg->msg_len) {
	if (0 == (msg->raw = (char*)realloc(msg->raw, msg->raw_len + 1))) {
	    if (NULL != err) {
		err->code = OFIX_MEMORY_ERR;
		snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for a FIX string.");
	    }
	    return NULL;
	}
    }
    msg->raw[msg->msg_len] = '\0';
    
    return msg->raw;
}

void
ofix_msg_set_append_mode(ofixMsg msg, bool mode) {
    msg->append_mode = mode;
}

const char*
ofix_msg_type(ofixMsg msg) {
    return msg->spec->type;
}

const char*
ofix_msg_name(ofixMsg msg) {
    return msg->spec->name;
}

char*
ofix_msg_to_str(ofixErr err, ofixMsg msg) {
    char	*str;
    char	*s;

    str = strdup(ofix_msg_FIX_str(err, msg));
    if (NULL == str) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for FIX string.");
	}
	return NULL;
    }
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    for (s = str; '\0' != *s; s++) {
	if (SOH == *s) {
	    *s = '^';
	}
    }
    return str;
}

// TBD should check for overflow
static char*
append_pretty_field(char *raw, Field f, char *b, int indent) {
    const char	*type = ofix_tag_spec_type_str(f->ref);
    char	*v;
    int		i;
    char	c;
    
    // indent
    for (; 0 < indent; indent--) {
	*b++ = ' ';
    }
    // tag
    b += sprintf(b, "%3d: ", f->ref->tag);
    // value
    for (i = f->vlen, v = raw + f->vpos; 0 < i; i--, v++) {
	c = *v;
	if (1 == c) {
	    *b++ = '^';
	} else if (' ' <= c && c < 127) {
	    *b++ = c;
	} else {
	    int	d;
		
	    *b++ = '\\';
	    d = (0x0F & (c >> 4));
	    if (9 < d) {
		*b++ = 'a' + (d - 10);
	    } else {
		*b++ = '0' + d;
	    }
	    d = (0x0F & c);
	    if (9 < d) {
		*b++ = 'a' + (d - 10);
	    } else {
		*b++ = '0' + d;
	    }
	}
    }
    if (OFIX_NumInGroup == f->ref->type) {
	// TBD fixRepeatingGroup
    } else {
	b += sprintf(b, " (%s) @%d\n", type, f->vpos);
    }
    return b;
}

static char*
append_pretty(ofixErr err, ofixMsg msg, char *buf, char *b, char *end, int indent, int indent2) {
    Field	f = msg->fields;
    int		field_cnt = msg->field_cnt;
    const char	*type;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    for (; 0 < field_cnt; field_cnt--, f++) {
	type = ofix_tag_spec_type_str(f->ref);
	if (end <= b + indent + 60 + 3 * f->vlen + strlen(type)) {
	    int	size = end - buf + INIT_PRETTY_SIZE + f->vlen;
	    int	pos = b - buf;
	    
	    if (0 == (buf = realloc(buf, size))) {
		if (NULL != err) {
		    err->code = OFIX_MEMORY_ERR;
		    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for a FIX string");
		}
		return NULL;
	    }
	    b = buf + pos;
	    end = buf + size;
	}
	b = append_pretty_field(msg->raw, f, b, indent);
    }
    b = append_pretty_field(msg->raw, &msg->check_sum_field, b, indent);
    
    return buf;
}

char*
ofix_msg_to_pretty(ofixErr err, ofixMsg msg) {
    char	*buf;
    char	*end;
    char	*b;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    buf = (char*)malloc(INIT_PRETTY_SIZE);
    if (NULL == buf) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for FIX string.");
	}
	return NULL;
    }
    update(err, msg);
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    end = buf + INIT_PRETTY_SIZE;
    b = buf;

    b += snprintf(b, end - buf, "%s (%s) [%d]\n", msg->spec->name, msg->spec->type, msg->msg_len);

    return append_pretty(err, msg, buf, b, end, 2, 2);
}

bool
ofix_msg_tag_exists(ofixMsg msg, int tag) {
    Field	f;

    for (f = msg->fields; 0 != f->ref; f++) {
	if (tag == f->ref->tag) {
	    return true;
	}
    }
    return false;
}

int64_t
ofix_msg_get_int(ofixErr err, ofixMsg msg, int tag) {
    Field	f;
    int64_t	num = 0;
    char	*b;
    char	*start;
    char	*end;
    bool	neg = false;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return 0;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return 0;
    }
    start = msg->raw + f->vpos;
    end = start + f->vlen;
    for (b = start; b < end; b++) {
	if ('-' == *b) {
	    if (b != start) {
		bad = true;
		break;
	    }
	    neg = true;
	} else if (*b < '0' || '9' < *b) {
	    bad = true;
	    break;
	} else {
	    num = num * 10 + (*b - '0');
	}
    }
    if (bad) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as an integer.", buf, tag, f->ref->name);
	return 0;
    }
    if (neg) {
	num = -num;
    }
    return num;
}

void
ofix_msg_get_data(ofixErr err, ofixMsg msg, int tag, char **valuep, int *lenp) {
    Field	f;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    *valuep = msg->raw + f->vpos;
    *lenp = f->vlen;
}

char
ofix_msg_get_char(ofixErr err, ofixMsg msg, int tag) {
    Field	f;

    if (NULL != err && OFIX_OK != err->code) {
	return '\0';
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return '\0';
    }
    return *(msg->raw + f->vpos);
}

bool
ofix_msg_get_bool(ofixErr err, ofixMsg msg, int tag) {
    Field	f;
    bool	v = false;

    if (NULL != err && OFIX_OK != err->code) {
	return false;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return false;
    }
    switch (*(msg->raw + f->vpos)) {
    case 'Y':	v = true;	break;
    case 'N':	v = false;	break;
    default:
	{
	    char	mt[8];

	    set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			    ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			    tag, OFIX_REASON_BAD_VALUE,
			    "'%c' for tag %d (%s) is not a boolean value (Y or N).",
			    *(msg->raw + f->vpos), tag, f->ref->name);
	    break;
	}
    }
    return v;
}

char*
ofix_msg_get_str(ofixErr err, ofixMsg msg, int tag) {
    Field	f;
    char	*str;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return NULL;
    }
    if (NULL == (str = (char*)malloc(f->vlen + 1))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    snprintf(err->msg, sizeof(err->msg),
		     "Memory allocation for tag %d (%s) string failed", tag, f->ref->name);
	}
	return NULL;
    }
    strncpy(str, msg->raw + f->vpos, f->vlen);
    str[f->vlen] = '\0';
    return str;
}

char*
ofix_msg_copy_str(ofixErr err, ofixMsg msg, int tag, char *value, int maxLen) {
    Field	f;

    if (NULL != err && OFIX_OK != err->code) {
	*value = '\0';
	return value;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	*value = '\0';
	return value;
    }
    maxLen--;
    if (f->vlen < maxLen) {
	maxLen = f->vlen;
    }
    strncpy(value, msg->raw + f->vpos, maxLen);
    value[maxLen] = '\0';

    return value;
}

double
ofix_msg_get_float(ofixErr err, ofixMsg msg, int tag) {
    Field	f;
    double	num;
    char	*start;
    char	*end;

    if (NULL != err && OFIX_OK != err->code) {
	return 0.0;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return 0.0;
    }
    start = msg->raw + f->vpos;
    num = strtod(start, &end);
    if (end != start + f->vlen) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a float.", buf, tag, f->ref->name);
	return 0.0;
    }
    return num;
}

void
ofix_msg_get_timestamp(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (17 != f->vlen && 21 != f->vlen) {
	bad = true;
    } else {
	int	i;
	
	b = msg->raw + f->vpos;
	value->year = 0;
	for (i = 0; i < 4; i++) {
	    value->year = value->year * 10 + (*b++ - '0');
	}
	value->month = (*b++ - '0') * 10;
	value->month += *b++ - '0';
	value->day = (*b++ - '0') * 10;
	value->day += *b++ - '0';
	b++; // skip -
	value->hour = (*b++ - '0') * 10;
	value->hour += *b++ - '0';
	b++; // skip :
	value->minute = (*b++ - '0') * 10;
	value->minute += *b++ - '0';
	b++; // skip :
	value->sec = (*b++ - '0') * 10;
	value->sec += *b++ - '0';
	if (21 == f->vlen) {
	    b++; // skip .
	    value->msec = (*b++ - '0') * 100;
	    value->msec += (*b++ - '0') * 10;
	    value->msec += *b++ - '0';
	}
	value->type = OFIX_TIMESTAMP;
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a timestamp.", buf, tag, f->ref->name);
    }
}

void
ofix_msg_get_time(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (17 != f->vlen) {
	bad = true;
    } else {
	int	i;
	
	b = msg->raw + f->vpos;
	value->year = 0;
	for (i = 0; i < 4; i++) {
	    value->year = value->year * 10 + (*b++ - '0');
	}
	value->month = (*b++ - '0') * 10;
	value->month += *b++ - '0';
	value->day = (*b++ - '0') * 10;
	value->day += *b++ - '0';
	b++; // skip -
	value->hour = (*b++ - '0') * 10;
	value->hour += *b++ - '0';
	b++; // skip :
	value->minute = (*b++ - '0') * 10;
	value->minute += *b++ - '0';
	b++; // skip :
	value->sec = (*b++ - '0') * 10;
	value->sec += *b++ - '0';
	value->type = OFIX_TIME;
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a time.", buf, tag, f->ref->name);
    }
}

void
ofix_msg_get_time_only(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (8 != f->vlen && 12 != f->vlen) {
	bad = true;
    } else {
	b = msg->raw + f->vpos;
	value->year = 0;
	value->hour = (*b++ - '0') * 10;
	value->hour += *b++ - '0';
	b++; // skip :
	value->minute = (*b++ - '0') * 10;
	value->minute += *b++ - '0';
	b++; // skip :
	value->sec = (*b++ - '0') * 10;
	value->sec += *b++ - '0';
	if (12 == f->vlen) {
	    b++; // skip .
	    value->msec = (*b++ - '0') * 100;
	    value->msec += (*b++ - '0') * 10;
	    value->msec += *b++ - '0';
	}
	value->type = OFIX_TIMEONLY;
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a time only.", buf, tag, f->ref->name);
    }
}

void
ofix_msg_get_date_only(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (8 != f->vlen) {
	bad = true;
    } else {
	int	i;
	
	b = msg->raw + f->vpos;
	value->year = 0;
	for (i = 0; i < 4; i++) {
	    value->year = value->year * 10 + (*b++ - '0');
	}
	value->month = (*b++ - '0') * 10;
	value->month += *b++ - '0';
	value->day = (*b++ - '0') * 10;
	value->day += *b++ - '0';
	value->type = OFIX_DATEONLY;
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a date only.", buf, tag, f->ref->name);
    }
}

void
ofix_msg_get_yyyymm(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (6 != f->vlen) {
	bad = true;
    } else {
	int	i;
	
	b = msg->raw + f->vpos;
	value->year = 0;
	for (i = 0; i < 4; i++) {
	    value->year = value->year * 10 + (*b++ - '0');
	}
	value->month = (*b++ - '0') * 10;
	value->month += *b++ - '0';
	value->type = OFIX_YYYYMM;
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a YYYYMM.", buf, tag, f->ref->name);
    }
}

void
ofix_msg_get_yyyymmww(ofixErr err, ofixMsg msg, int tag, ofixDate value) {
    Field	f;
    char	*b;
    bool	bad = false;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (0 == (f = get_tag_field_or_error(err, msg, tag))) {
	return;
    }
    if (8 != f->vlen) {
	bad = true;
    } else {
	int	i;
	
	b = msg->raw + f->vpos;
	value->year = 0;
	for (i = 0; i < 4; i++) {
	    value->year = value->year * 10 + (*b++ - '0');
	}
	value->month = (*b++ - '0') * 10;
	value->month += *b++ - '0';
	if ('w' != *b++) {
	    bad = true;
	} else {
	    value->week += *b++ - '0';
	    value->type = OFIX_YYYYMMWW;
	}
    }
    if (bad || !ofix_date_is_valid(value)) {
	char	buf[64];
	char	mt[8];

	if (f->vlen < sizeof(buf) - 1) {
	    strncpy(buf, msg->raw + f->vpos, f->vlen);
	    buf[f->vlen] = '\0';
	} else {
	    strncpy(buf, msg->raw + f->vpos, sizeof(buf) - 1);
	    buf[sizeof(buf) - 1] = '\0';
	}
	set_parse_error(err, ofix_msg_copy_str(NULL, msg, OFIX_MsgTypeTAG, mt, sizeof(mt)),
			ofix_msg_get_int(NULL, msg, OFIX_MsgSeqNumTAG),
			tag, OFIX_REASON_BAD_FORMAT,
			"'%s' for tag %d (%s) can not be parsed as a YYYYMMWW.", buf, tag, f->ref->name);
    }
}


// TBD multi char and multi string
// TBD repeating group

static char	MIN_INT_BYTES[] = "-2147483648";

static int
set_int(ofixErr err, ofixMsg msg, Field f, int value) {
    int	start;
    int	vcnt = 0; // minimum size
    int	neg = 0;
    int	e = 1;
    int	shift = 0;

    if (NULL != err && OFIX_OK != err->code) {
	return 0;
    }
    // determine the length of the field
    if (0 == value) {
	vcnt = 1;
    } else if (INT32_MIN == value) { // special case as the sign can not be changed
	vcnt = sizeof(MIN_INT_BYTES) - 1;
    } else {
	if (0 > value) {
	    value = -value;
	    neg = 1;
	}
	for (; vcnt < 10 && e <= value; vcnt++, e *= 10) {
	}
    }
    if (0 == f->vlen) {
	int	tagLen = f->ref->tag_byte_len;
	
	start = f->vpos;
	shift = tagLen + neg + vcnt + 1;
	slide(err, msg, start, shift);
	if (NULL != err && OFIX_OK != err->code) {
	    return 0;
	}
	memcpy(msg->raw + start, f->ref->tag_bytes, tagLen);
	f->vpos = start + tagLen;
	f->vlen = vcnt + neg;
	msg->raw[f->vpos + f->vlen] = SOH;
    } else if (f->vlen < vcnt + neg) { // need to grow field
	shift = vcnt + neg - f->vlen;
	slide(err, msg, f->vpos + f->vlen, shift);
	if (NULL != err && OFIX_OK != err->code) {
	    return 0;
	}
	f->vlen = vcnt + neg;
    } else if (vcnt + neg < f->vlen) {
	vcnt = f->vlen - neg;
    }
    // copy the value into the msg
    if (INT32_MIN == value) {
	memcpy(msg->raw + f->vpos, MIN_INT_BYTES, vcnt);
    } else {
	char	*b = msg->raw + f->vpos + f->vlen - 1;
	char	*end = msg->raw + f->vpos + neg;

	for (; end <= b; b--, value /= 10) {
	    *b = '0' + (value - value / 10 * 10);
	}
	if (0 < neg) {
	    *b = '-';
	}
    }
    msg->changed = true;

    return shift;
}

void
ofix_msg_set_int(ofixErr err, ofixMsg msg, int tag, int32_t value) {
    Field	f = NULL;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (!msg->append_mode) {
	f = get_tag_field(msg, tag);
    }
    if (NULL == f) {
	// TBD use err here
	// sets f.pos to beginning, tricks slide() into doing the right thing
	if (NULL == (f = append(err, msg, tag, msg->append_mode))) {
	    return;
	}
    }
    slide_fields(msg, f + 1, set_int(err, msg, f, value));
    msg->changed = true;
}

static int
set_char(ofixErr err, ofixMsg msg, Field f, char value) {
    int	start;
    int	shift = 0;

    if (0 == f->vlen) {
	int	tagLen = f->ref->tag_byte_len;
	
	start = f->vpos;
	shift = tagLen + 2;
	slide(err, msg, start, shift);
	if (NULL != err && OFIX_OK != err->code) {
	    return 0;
	}
	memcpy(msg->raw + start, f->ref->tag_bytes, tagLen);
	f->vpos = start + tagLen;
	f->vlen = 1;
	msg->raw[f->vpos + 1] = SOH;
    }
    msg->raw[f->vpos] = value;
    msg->changed = true;

    return shift;
}

void
ofix_msg_set_char(ofixErr err, ofixMsg msg, int tag, char value) {
    Field	f = NULL;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (!msg->append_mode) {
	f = get_tag_field(msg, tag);
    }
    if (NULL == f) {
	// sets f.pos to beginning, tricks slide() into doing the right thing
	if (NULL == (f = append(err, msg, tag, msg->append_mode))) {
	    return;
	}
    }	    
    slide_fields(msg, f + 1, set_char(err, msg, f, value));
}

void
ofix_msg_set_bool(ofixErr err, ofixMsg msg, int tag, bool value) {
    ofix_msg_set_char(err, msg, tag, value ? 'Y' : 'N');
}

static int
set_data(ofixErr err, ofixMsg msg, Field f, const char *value, int len) {
    int	start;
    int	shift = 0;

    if (0 == f->vlen) {
	int	tagLen = f->ref->tag_byte_len;
	
	start = f->vpos;
	shift = tagLen + len + 1;
	slide(err, msg, start, shift);
	if (NULL != err && OFIX_OK != err->code) {
	    return 0;
	}
	memcpy(msg->raw + start, f->ref->tag_bytes, tagLen);
	f->vpos = start + tagLen;
    } else if (f->vlen != len) { // need to change field size
	shift = len - f->vlen;
	slide(err, msg, f->vpos + f->vlen, shift);
	if (NULL != err && OFIX_OK != err->code) {
	    return 0;
	}
    }
    f->vlen = len;
    // copy the value into the msg
    memcpy(msg->raw + f->vpos, value, len);
    msg->raw[f->vpos + f->vlen] = SOH;
    msg->changed = true;

    return shift;
}

void
ofix_msg_set_str(ofixErr err, ofixMsg msg, int tag, const char *value) {
    Field	f = NULL;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == value || '\0' == *value) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    snprintf(err->msg, sizeof(err->msg),
		     "NULL or zero length string is not a valid value for ofix_msg_set_str().");
	}
	return;
    }
    if (!msg->append_mode) {
	f = get_tag_field(msg, tag);
    }
    if (NULL == f) {
	// sets f->pos to beginning, tricks slide() into doing the right thing
	if (NULL == (f = append(err, msg, tag, msg->append_mode))) {
	    return;
	}
    }
    slide_fields(msg, f + 1, set_data(err, msg, f, value, strlen(value)));
    msg->changed = true;
}

void
ofix_msg_set_data_only(ofixErr err, ofixMsg msg, int tag, const char *value, int len) {
    Field	f = NULL;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == value || 0 == len) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    snprintf(err->msg, sizeof(err->msg),
		     "NULL or zero length array is not a valid value for ofix_msg_set_data_only()");
	}
	return;
    }
    if (!msg->append_mode) {
	f = get_tag_field(msg, tag);
    }
    if (NULL == f) {
	// sets f->pos to beginning, tricks slide() into doing the right thing
	if (NULL == (f = append(err, msg, tag, msg->append_mode))) {
	    return;
	}
    }
    slide_fields(msg, f + 1, set_data(err, msg, f, value, len));
    msg->changed = true;
}

void
ofix_msg_set_data(ofixErr err, ofixMsg msg, int tag, const char *value, int len) {
    ofixTagSpec	ref;
    int		len_tag;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == (ref = ofix_version_spec_get_tag_spec(err, msg->spec->version, tag, true))) {
	return;
    }
    if (0 == (len_tag = ref->related_tag)) {