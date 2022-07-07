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
