
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_GROUPSPEC_H__
#define __OFIX_GROUPSPEC_H__

#include "tagreq.h"

typedef struct _ofixGroupSpec {
    int			num_tag;
    struct _ofixTagReq	tags[];
} *ofixGroupSpec;

#endif /* __OFIX_GROUPSPEC_H__ */