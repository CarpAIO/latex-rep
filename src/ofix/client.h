// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_CLIENT_H__
#define __OFIX_CLIENT_H__

#include <stdint.h>

#include "err.h"
#include "msg.h"
#include "role.h"
#include "session.h"
#include "versionspec.h"

struct _ofixEngine;

/**
 * @file client.h
 *
 * This file defines the functions used to work with a FIX client.
 */

/**
 * The ofixClient structure is the 