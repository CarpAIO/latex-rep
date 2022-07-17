// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_STORE_H__
#define __OFIX_STORE_H__

#include <stdio.h>
#include <stdint.h>

#include "err.h"
#include "iodir.h"
#include "msg.h"
#include "role.h"

// location of message in store
typedef struct _Loc {
    off_t	start;
    off_t	size;
} *Loc;

typedef struct _Index {
    int64_t	size;
    Loc		locs;
} *Index;

typedef struct _Store {
    FILE		*file;
    off_t		where;
    struct _Index	sindex;
    struct _Index	rindex;
} *Store;

extern Store		ofix_store_create(ofixErr err, const char *path, const char *id);
extern void		ofix_store_destroy(Store store);

extern void		ofix_store_add(ofixErr err, Store store, int64_t seq, IoDir dir, ofixMsg msg);
extern ofixMsg		ofix_store_get(ofixErr err, Store store, int64_t seq, IoDir dir);

// if cb returns true then msg is destroyed after callback
extern void		ofix_store_iterate(ofixErr err, Store store, bool (*cb)(ofixMsg msg, void *ctx), void *ctx);
extern void		ofix_store_fiterate(ofixErr err, FILE *f, bool (*cb)(ofixMsg msg, void *ctx), void *ctx);

#endif /* __OFIX_STORE_H__ */
