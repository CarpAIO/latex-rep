// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_ENGINE_H__
#define __OFIX_ENGINE_H__

#include <stdbool.h>
#include <stdint.h>

#include "err.h"
#include "session.h"

/**
 * @file engine.h
 *
 * This file defines the functions used to create and work with a FIX engine.
 */

/**
 * The ofixEngine structure is the representation of a FIX engine for the
 * library.
 */
typedef struct _ofixEngine	*ofixEngine;

/**
 *
 *
 * @param err pointer to error struct or NULL
 *
 * @return Returns a new engine or NULL on error.
 */
extern ofixEngine	ofix_engine_create(ofixErr err,
					   const char *id,
					   int port,
					   const char *auth_file,
					   const char *store_dir,
					   ofixVersionSpec spec,
					   int heartbeat_interval);

extern void		ofix_engine_on_recv(ofixEngine eng, ofixRecvCallback cb, void *ctx);
extern const char*	ofix_engine_id(ofixEngine eng);
extern const char*	ofix_engine_ipaddr(ofixEngine eng);
extern const char*	ofix_engine_store_dir(ofixEngine eng);
extern int		ofix_engine_heartbeat_interval(ofixEngine eng);
extern int		ofix_engine_port(ofixEngine eng);
extern void		ofix_engine_set_heartbeat(ofixEngine eng, int interval);

/**
 *
 *
 * @param err pointer to error struct or NULL
 */
extern void		ofix_engine_start(ofixErr err, ofixEngine eng);

/**
 *
 *
 * @param err pointer to error struct or NULL
 *
 * @return Returns a new session or NULL on error.
 */
extern ofixSession	ofix_engine_get_session(ofixErr err, ofixEngine eng, const char *cid);

extern bool		ofix_engine_running(ofixEngine eng);

/**
 *
 *
 * @param err pointer to error struct or NULL
 */
extern void		ofix_engine_destroy(ofixErr err, ofixEngine eng);

extern void		ofix_engine_set_log(ofixEngine eng, ofixLogOn log_on, ofixLog log, void *ctx);

extern bool		ofix_engine_authorized(ofixEngine eng,
					       const char *cid,
					       const char *user,
					       const char *password);

#endif /* __OFIX_ENGINE_H__ */
