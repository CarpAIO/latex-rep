
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_SESSION_H__
#define __OFIX_SESSION_H__

#include <stdint.h>

#include "err.h"
#include "msg.h"

struct _ofixEngine;

/**
 * @file session.h
 *
 * This file defines the functions used to work with a FIX session.
 */

/**
 * The ofixSession structure is the representation of a FIX engine for the
 * library.
 */
typedef struct _ofixSession	*ofixSession;

/**
 * This type is used for receiving message callbacks.
 */
typedef bool	(*ofixRecvCallback)(ofixSession session, ofixMsg msg, void *ctx);

/**
 *
 *
 * @param err pointer to error struct or NULL
 */
extern void	ofix_session_send(ofixErr err, ofixSession session, ofixMsg msg);

extern void	ofix_session_logout(ofixErr err, ofixSession session, const char *txt, ...);

/**
 *
 *
 * @param err pointer to error struct or NULL
 *
 * @return Returns a sent message or NULL on error or not found.
 */
extern ofixMsg	ofix_session_get_msg(ofixErr err, ofixSession session, int64_t seq_num);

extern int64_t	ofix_session_send_seqnum(ofixSession session);
extern int64_t	ofix_session_recv_seqnum(ofixSession session);
extern ofixMsg	ofix_session_create_msg(ofixErr err, ofixSession session, const char *type);
extern void	ofix_session_set_heartbeat(ofixSession session, int interval);

#endif /* __OFIX_SESSION_H__ */