// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_MSGSPEC_H__
#define __OFIX_MSGSPEC_H__

#include <stdint.h>

#include "groupspec.h"

#define OFIX_TAG_SEQ_ARRAY_SIZE	1000

typedef struct _ofixVersionSpec	*ofixVersionSpec;

/**
 * 
 */
typedef struct _ofixMsgSpec {
    ofixVersionSpec	version;
    int			tid;
    char		*type;
    char		*name;
    uint16_t		tag_seq[OFIX_TAG_SEQ_ARRAY_SIZE];
    ofixGroupSpec	*groups;
    struct _ofixTagReq	tags[];
} *ofixMsgSpec;

extern int	ofix_msg_spec_tag_seq(ofixMsgSpec spec, int tag);

#endif /* __OFIX_MSGSPEC_H__ */
