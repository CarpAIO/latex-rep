// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>

#include "store.h"
#include "engine.h"

#define LOCS_INC	4096

Store
ofix_store_create(ofixErr err, const char *path, const char *id) {
    char	buf[1024];
    Store	s;

    if (NULL != err && OFIX_OK != err->code) {
	return NULL;
    }
    if (NULL == id) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "NULL sender identifier argument to session store creation is not valid.");
	}
	return NULL;
    }
    if (NULL == path) {
	time_t		now = time(NULL);
	struct tm	*tm = gmtime(&now);

	snprintf(buf, sizeof(buf), "%s-%04d%02d%02d.%02d%02d%02d",
		 id, tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
	path = buf;
    }
    if (NULL == (s = (Store)malloc(sizeof(struct _Store)))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to allocate memory for session storage.");
	}
	return NULL;
    }
    s->sindex.size = LOCS_INC;
    s->rindex.size = LOCS_INC;
    if (NULL == (s->sindex.locs = (Loc)malloc(sizeof(struct _Loc) * LOCS_INC))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to allocate memory for session store index.");
	}
	free(s);
	return NULL;
    }
    if (NULL == (s->rindex.locs = (Loc)malloc(sizeof(struct _Loc) * LOCS_INC))) {
	if (NULL != err) {
	    err->code = OFIX_MEMORY_ERR;
	    strcpy(err->msg, "Failed to allocate memory for session store index.");
	}
	free(s->sindex.locs);
	free(s);
	return NULL;
    }
    if (NULL == (s->file = fopen(path, "w+"))) {
	if (NULL != err) {
	    err->code = OFIX_WRITE_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to create file '%s'. %s",
		     path, strerror(errno));
	}
	free(s->sindex.locs);
	free(s);
	return NULL;
    }
    s->where = fprintf(s->file, "sender: %s\n\n", id);
    if (0 >= s->where) {
	if (NULL != err) {
	    err->code = OFIX_WRITE_ERR;
	    strcpy(err->msg, "Failed to write header.");
	}
	free(s->sindex.locs);
	free(s);
	return NULL;
    }
    return s;
}

void
ofix_store_destroy(Store store) {
    if (NULL != store) {
	if (NULL != store->file) {
	    fclose(store->file);
	}
	if (NULL != store->sindex.locs) {
	    free(store->sindex.locs);
	}
	if (NULL != store->rindex.locs) {
	    free(store->rindex.locs);
	}
	free(store);
    }
}

static void
index_add(ofixErr err, Index index, int64_t seq, off_t where, off_t len) {
    Loc	loc;

    if (index->size <= seq) {
	int64_t	new_size = index->size + LOCS_INC;
	
	if (new_size - 100 <= seq) {
	    new_size = seq + LOCS_INC;
	}
	if (NULL == (index->locs = (Loc)realloc(index->locs, sizeof(struct _Loc) * new_size))) {
	    if (NULL != err) {
		err->code = OFIX_MEMORY_ERR;
		strcpy(err->msg, "Failed to allocate memory for session store index.");
	    }
	    return;
	}
	memset(index->locs + index->size, 0, sizeof(struct _Loc) * (new_size - index->size));
    }
    loc = index->locs + seq;
    loc->start = where;
    loc->size = len;
}

void
ofix_store_add(ofixErr err, Store store, int64_t seq, IoDir dir, ofixMsg msg) {
    const char*	mstr = NULL;
    off_t	mlen = 0;

    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (NULL == store) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "NULL store in call to staore add.");
	}
	return;
    }
    if (NULL == msg) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "NULL mesage argument to store add.");
	}
	return;
    }
    if (NULL == store->file) {
	if (NULL != err) {
	    err->code = OFIX_ARG_ERR;
	    strcpy(err->msg, "No storage setup for session.");
	}
	return;
    }
    mlen = ofix_msg_size(err, msg);
    mstr = ofix_msg_FIX_str(err, msg);
    if (NULL != err && OFIX_OK != err->code) {
	return;
    }
    if (mlen != fwrite(mstr, 1, mlen, store->file) ||
	1 != fwrite("\n", 1, 1, store->file)) {
	fclose(store->file);
	store->file = NULL;
	if (NULL != err) {
	    err->code = OFIX_WRITE_ERR;
	    strcpy(err->msg, "Failed to store message.");
	}
	return;
    }
    switch (dir) {
    case OFIX_IODIR_SEND:
	index_add(err, &store->sindex, seq, store->where, mlen);
	break;
    case OFIX_IODIR_RECV:
	index_add(err, &store->rindex, seq, store->where, mlen);
	break;
    default:
	// error
	break;
    }
    store->where += mlen + 1;
}

ofixMsg
ofix_store_get(ofixErr err, Store store, int64_t seq, IoDir dir) {
    ofixMsg	msg = NULL;
    Loc		loc = NULL;
    char	buf[4096];
    char	*mstr = buf;
    
    switch (dir) {
    case OFIX_IODIR_SEND:
	if (seq < store->sindex.size) {
	    loc = store->sindex.locs + seq;
	}
	break;
    case OFIX_IODIR_RECV:
	if (seq < store->rindex.size) {
	    loc = store->rindex.locs + seq;
	}
	break;
    default:
	if (seq < store->sindex.size) {
	    loc = store->sindex.locs + seq;
	} else if (seq < store->rindex.size) {
	    loc = store->rindex.locs + seq;
	}
	break;
    }
    if (NULL == loc || 0 == loc->start || 0 == loc->size) {
	return NULL;
    }
    if (0 != fseek(store->file, loc->start, SEEK_SET)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to find message. %s", strerror(errno));
	}
	return NULL;
    }
    if (sizeof(buf) <= loc->size) {
	if (NULL == (mstr = (char*)malloc(loc->size + 1))) {
	    if (NULL != err) {
		err->code = OFIX_MEMORY_ERR;
		strcpy(err->msg, "Failed to allocate memory for message.");
	    }
	    return NULL;
	}
    }
    if (loc->size != fread(mstr, 1, loc->size, store->file)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to read message. %s", strerror(errno));
	}
	return NULL;
    }
    msg = ofix_msg_parse(err, mstr, loc->size);
    if (0 != fseek(store->file, store->where, SEEK_SET)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to reset storage. %s", strerror(errno));
	}
    }
    if (buf != mstr) {
	free(mstr);
    }
    return msg;
}

void
ofix_store_iterate(ofixErr err, Store store, bool (*cb)(ofixMsg msg, void *ctx), void *ctx) {
    if (0 != fseek(store->file, 0, SEEK_SET)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to read storage. %s", strerror(errno));
	}
	return;
    }
    ofix_store_fiterate(err, store->file, cb, ctx);
    if (0 != fseek(store->file, store->where, SEEK_SET)) {
	if (NULL != err) {
	    err->code = OFIX_READ_ERR;
	    snprintf(err->msg, sizeof(err->msg), "Failed to reset storage. %s", strerror(errno));
	}
    }
}

void
ofix_store_fiterate(ofixErr err, FILE *f, bool (*cb)(ofixMsg msg, void *ctx), void *ctx) {
    ofixMsg	msg;
    char	buf[4096];
    char	*b;
    char	*end = buf;
    size_t	cnt;
    int		rcnt = 0;

    for (b = buf; 2 > rcnt; b++) {
	if (end <= b) {
	    if (0 == (cnt = fread(buf, 1, sizeof(buf), f))) {
		// short
		return;
	    }
	    b = buf;
	    end = buf + cnt;
	}
	if ('\n' == *b) {
	    rcnt++;
	} else {
	    rcnt = 0;
	}
    }
    while (true) {
	// need at least 22 bytes to read the expected message length
	if (22 > end - b) {
	    cnt = end - b;
	    memmove(buf, b, cnt);
	    end = buf + cnt;
	    b = buf;
	    if (0 == (cnt = fread(end, 1, sizeof(buf) - cnt, f))) {
		return;
	    }
	    end += cnt;
	}
	cnt = ofix_msg_expected_buf_size(b);
	if (end - b < cnt + 1) {
	    // If the buf is not big enough then error out for now.
	    if (sizeof(buf) < cnt + 1) {
		if (NULL != err) {
		    err->code = OFIX_OVERFLOW_ERR;
		    strcpy(err->msg, "Not enough space to read message.");
		}
		return;
	    }
	    if (sizeof(buf) < (b - buf) + cnt + 1) {
		rcnt = end - b;
		memmove(buf, b, rcnt);
		end = buf + rcnt;
		b = buf;
	    }
	    if (0 == (rcnt = fread(end, 1, sizeof(buf) - (end - buf), f))) {
		return;
	    }
	    end += rcnt;
	}
	if (NULL == (msg = ofix_msg_parse(err, b, cnt))) {
	    return;
	}
	if (cb(msg, ctx)) {
	    ofix_msg_destroy(msg);
	}
	b += cnt;
	b++; // past \n
    }
}
