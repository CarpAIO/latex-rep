// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_DATE_H__
#define __OFIX_DATE_H__

#include <stdint.h>
#include <stdbool.h>

typedef enum {
    OFIX_TIMESTAMP,	// UTCTimestamp with all fields valid
    OFIX_TIMEONLY,	// hour, minute, sec, and msec
    OFIX_DATEONLY,	// date, year, month, and day
    OFIX_YYYYMM,	// year and month
    OFIX_YYYYMMWW,	// year, month, and week
    OFIX_TIME		// all fields except msec
} ofixDateType;
    
typedef struct _ofixDate {
 