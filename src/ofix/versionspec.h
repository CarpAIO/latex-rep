// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_VERSIONSPEC_H__
#define __OFIX_VERSIONSPEC_H__

#include <stdbool.h>

#include "err.h"
#include "tagspec.h"
#include "msgspec.h"

#define OFIX_TAG_TABLE_SIZE	1000

struct _ofixVersionSpec {
    int		major;
    int		minor;
    const char	*id;
    bool	ready;
    ofixTagSpec	tags;
    ofixTagSpec	tag_table[OFIX_TAG_TABLE_SIZE];
    ofixMsgSpec	msgs[];
};

extern void		ofix_version_spec_prepare(ofixErr err, ofixVersionSpec spec);
extern void		ofix_version_spec_destroy(ofixVersionSpec spec);

extern ofixMsgSpec	ofix_version_spec_get_msg_spec(ofixErr err, const char *type, int major, int minor);
extern ofixMsgSpec	ofix_version_spec_get_msg_spec_from_version(ofixErr err, const char *type, ofixVersionSpec vspec);
extern ofixTagSpec	ofix_version_spec_get_tag_spec(ofixErr err, ofixVersionSpec vspec, int tag, bool create);

#endif /* __OFIX_VERSIONSPEC_H__ */
