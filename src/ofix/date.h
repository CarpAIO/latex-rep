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
    int16_t		year;
    uint8_t		month;
    uint8_t		week;
    uint8_t		day;
    uint8_t		hour;
    uint8_t		minute;
    uint8_t		sec;
    uint16_t		msec;
    ofixDateType	type;
} *ofixDate;

extern bool	ofix_date_is_valid(ofixDate date);
extern char*	ofix_date_to_str(ofixDate date);
extern void	ofix_date_set_timestamp(ofixDate ts, uint64_t usec);

#endif /* __OFIX_DATE_H__ */
