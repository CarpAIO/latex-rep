// Copyright 2009 by Peter Ohler, All Rights Reserved

#include <stdio.h>

#include "ofix/versionspec.h"

extern struct _ofixVersionSpec	fix40Spec;
extern struct _ofixVersionSpec	fix41Spec;
extern struct _ofixVersionSpec	fix42Spec;
extern struct _ofixVersionSpec	fix43Spec;
extern struct _ofixVersionSpec	fix44Spec;

static ofixVersionSpec	specs[] = {
    &fix40Spec,
    &fix41Spec,
    &fix42Spec,
    &fix43Spec,
    &fix44Spec,
    0
};
    
ofixVersionSpec
ofix_get_spec(ofixErr err, int major, int minor) {
    ofixVersionSpec	*s;
    
    for (s = specs; 0 != s; s++) {
	if (major == (*s)->major && minor == (*s)->minor) {
	    if (!(*s)->ready) {
		ofix_version_spec_prepare(err, *s);
		if (NULL != err && OFIX_OK != err->code) {
		    return NULL;
		}
	    }
	    return *s;
	}
    }
    if (NULL != err) {
	err->code = OFIX_NOT_FOUND_ERR;
	snprintf(err->msg, sizeof(err->msg), "FIX version spec %d.%d not found.", major, minor);
    }
    return NULL;
}

void
ofix_destroy_specs() {
    ofix_version_spec_destroy(&fix40Spec);
    ofix_version_spec_destroy(&fix41Spec);
    ofix_version_spec_destroy(&fix42Spec);
    ofix_version_spec_destroy(&fix43Spec);
    ofix_version_spec_destroy(&fix44Spec);
}
