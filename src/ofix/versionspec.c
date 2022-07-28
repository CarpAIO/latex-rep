
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

#include "versionspec.h"

extern ofixVersionSpec	ofix_get_spec(ofixErr err, int major, int minor);

static ofixTagSpec	create_dummy_tag_spec(int tag);

static ofixTagSpec	*unknown_tags = 0;
static int		unknown_tags_len = 0;

/**
 * 
 */
void
ofix_version_spec_prepare(ofixErr err, ofixVersionSpec spec) {
    ofixTagSpec	ts;
    ofixTagSpec	*tsp;
    int		i;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == spec) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    snprintf(err->msg, sizeof(err->msg), "NULL spec argument to ofix_version_spec_prepare.");
	}
	return;
    }
    for (i = OFIX_TAG_TABLE_SIZE, tsp = spec->tag_table; 0 < i; i--, tsp++) {
	*tsp = NULL;
    }
    for (ts = spec->tags; 0 != ts->tag; ts++) {
	if (0 < ts->tag && ts->tag < OFIX_TAG_TABLE_SIZE) {
	    spec->tag_table[ts->tag] = ts;
	}
    }
    spec->ready = true;
}

void
ofix_version_spec_destroy(ofixVersionSpec spec) {
    if (NULL == spec || !spec->ready) {
	// not initialized
	return;
    }
    // delete any memory created, assume static for everything code generated
    if (NULL != unknown_tags) {
	ofixTagSpec	*ts;
	int		i;

	for (i = unknown_tags_len, ts = unknown_tags; 0 < i; i--, ts++) {
	    free((*ts)->tag_bytes);
	    free(*ts);
	    *ts = 0;
	}
	free(unknown_tags);
	unknown_tags = NULL;
	unknown_tags_len = 0;
    }
}

ofixMsgSpec
ofix_version_spec_get_msg_spec_from_version(ofixErr err, const char *type, ofixVersionSpec vspec) {
    ofixMsgSpec	*ms;
    
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    // look for the spec by type first
    for (ms = vspec->msgs; 0 != *ms; ms++) {
	if (0 == strcmp((*ms)->type, type)) {
	    return *ms;
	}
    }
    // not found to try the msg name instead
    for (ms = vspec->msgs; 0 != *ms; ms++) {
	if (0 == strcmp((*ms)->name, type)) {
	    return *ms;
	}
    }
    if (NULL != err) {
	err->code = OFIX_NOT_FOUND_ERR;
	snprintf(err->msg, sizeof(err->msg), "FIX specification for %s in version %d.%d not found",
		 type, vspec->major, vspec->minor);
    }
    return NULL;
}

ofixMsgSpec
ofix_version_spec_get_msg_spec(ofixErr err, const char *type, int major, int minor) {
    ofixVersionSpec	vspec;
    ofixMsgSpec		*ms;
        
    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (NULL == (vspec = ofix_get_spec(err, major, minor))) {
	return NULL;
    }
    // look for the spec by type first
    for (ms = vspec->msgs; 0 != *ms; ms++) {
	if (0 == strcmp((*ms)->type, type)) {
	    return *ms;
	}
    }
    // not found to try the msg name instead
    for (ms = vspec->msgs; 0 != *ms; ms++) {
	if (0 == strcmp((*ms)->name, type)) {
	    return *ms;
	}
    }
    if (NULL != err) {
	err->code = OFIX_NOT_FOUND_ERR;
	snprintf(err->msg, sizeof(err->msg), "FIX specification for %s in version %d.%d not found",
		 type, major, minor);
    }
    return NULL;
}

static ofixTagSpec
create_dummy_tag_spec(int tag) {
    ofixTagSpec	spec;
    char	buf[16];

    unknown_tags_len++;
    if (NULL == (unknown_tags = (ofixTagSpec*)realloc(unknown_tags, sizeof(ofixTagSpec) * unknown_tags_len)) ||
	NULL == (spec = (ofixTagSpec)malloc(sizeof(struct _ofixTagSpec)))) {
	return NULL;
    }
    unknown_tags[unknown_tags_len - 1] = spec;
    spec->tag = tag;
    spec->type = OFIX_UnknownType;
    spec->where = OFIX_Body;
    spec->related_tag = 0;
    sprintf(buf, "%d=", tag);
    if (NULL == (spec->tag_bytes = strdup(buf))) {
	spec->tag_bytes = "0=";
    }
    spec->tag_byte_len = strlen(spec->tag_bytes);
    spec->name = "Unknown";

    return spec;
}

ofixTagSpec
ofix_version_spec_get_tag_spec(ofixErr err, ofixVersionSpec vspec, int tag, bool create) {
    ofixTagSpec	spec = NULL;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (0 < tag && tag < OFIX_TAG_TABLE_SIZE) {
	spec = vspec->tag_table[tag];
	if (NULL == spec) {
	    if (NULL == (spec = create_dummy_tag_spec(tag))) {
		if (NULL != err) {
		    err->code = OFIX_MEMORY_ERR;
		    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for a TagSpec.");
		}
		return NULL;
	    }
	    vspec->tag_table[tag] = spec;
	}
    } else {
	ofixTagSpec	ts;
	ofixTagSpec	*tsp;
	int		i;

	for (ts = vspec->tags; 0 != ts->tag; ts++) {
	    if (tag == ts->tag) {
		return ts;
	    }
	}
	for (tsp = unknown_tags, i = unknown_tags_len; 0 < i; i--, tsp++) {
	    if (tag == (*tsp)->tag) {
		return *tsp;
	    }
	}
	if (create) {
	    if (NULL == (spec = create_dummy_tag_spec(tag))) {
		if (NULL != err) {
		    err->code = OFIX_MEMORY_ERR;
		    snprintf(err->msg, sizeof(err->msg), "Failed to allocate memory for a TagSpec.");
		}
	    }
	} else {
	    if (NULL != err) {
		err->code = OFIX_NOT_FOUND_ERR;
		snprintf(err->msg, sizeof(err->msg), "Tag %d not found in %d.%d.", tag, vspec->major, vspec->minor);
	    }
	}
    }
    return spec;
}