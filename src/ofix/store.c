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
	struct tm	*t