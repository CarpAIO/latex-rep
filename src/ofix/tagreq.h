// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_TAGREQ_H__
#define __OFIX_TAGREQ_H__

#include <stdbool.h>

typedef struct _ofixTagReq {
    int		tag;
    bool	required;
} *ofixTagReq;

#endif /* __OFIX_TAGREQ_H__ */
