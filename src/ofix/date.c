
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <string.h>
#include <stdio.h>
#include <time.h>

#include "date.h"

bool
ofix_date_is_valid(ofixDate date) {
    bool	checkDay = false;

    switch (date->type) {
    case OFIX_TIMEONLY:
	if (23 < date->hour ||
	    59 < date->minute ||
	    59 < date->sec ||
	    999 < date->msec) {
	    return false;
	}
	break;
    case OFIX_DATEONLY:
	if (date->month < 1 || 12 < date->month) {
	    return false;
	}
	checkDay = true;
	break;
    case OFIX_YYYYMM:
	if (date->month < 1 || 12 < date->month) {
	    return false;
	}
	break;
    case OFIX_YYYYMMWW:
	if (date->month < 1 || 12 < date->month ||
	    date->week < 1 || 5 < date->week) {
	    return false;
	}
	break;
    case OFIX_TIME:
	if (date->month < 1 || 12 < date->month ||
	    23 < date->hour ||
	    59 < date->minute ||
	    59 < date->sec) {
	    return false;
	}
	checkDay = true;
	break;
    case OFIX_TIMESTAMP:
    default:
	if (date->month < 1 || 12 < date->month ||
	    23 < date->hour ||
	    59 < date->minute ||
	    59 < date->sec ||
	    999 < date->msec) {
	    return false;
	}
	checkDay = true;
	break;
    }
    if (checkDay) {
	int	maxDays[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (date->day < 1 || maxDays[date->month - 1] < date->day) {
	    return false;
	}
	if (29 == date->day && 2 == date->month) {
	    if (0 != date->year % 4 ||
		(0 == date->year % 100 &&
		 0 != date->year % 400)) {
		return false;
	    }
	}
    }
    return true;
}

char*
ofix_date_to_str(ofixDate date) {
    char	buf[32];

    switch (date->type) {
    case OFIX_TIMEONLY:
	sprintf(buf, "%02d:%02d:%02d.%03d", date->hour, date->minute, date->sec, date->msec);
	break;
    case OFIX_DATEONLY:
	sprintf(buf, "%04d%02d%02d", date->year, date->month, date->day);
	break;
    case OFIX_YYYYMM:
	sprintf(buf, "%04d%02d", date->year, date->month);
	break;
    case OFIX_YYYYMMWW:
	sprintf(buf, "%04d%02dw%d", date->year, date->month, date->week);
	break;
    case OFIX_TIME:
	sprintf(buf, "%04d%02d%02d-%02d:%02d:%02d",
		date->year, date->month, date->day, date->hour, date->minute, date->sec);
	break;
    case OFIX_TIMESTAMP:
    default:
	sprintf(buf, "%04d%02d%02d-%02d:%02d:%02d.%03d",
		date->year, date->month, date->day, date->hour, date->minute, date->sec, date->msec);
	break;
    }
    return strdup(buf);
}

void
ofix_date_set_timestamp(ofixDate ts, uint64_t usec) {
    time_t	t = usec / 1000000ULL;
    struct tm	*tm = gmtime(&t);

    usec = usec - usec / 86400000000ULL * 86400000000ULL;
    ts->year = tm->tm_year + 1900;
    ts->month = tm->tm_mon + 1;
    ts->day = tm->tm_mday;

    ts->hour = usec / 3600000000ULL;
    usec = usec - ts->hour * 3600000000ULL;
    ts->minute = usec / 60000000ULL;
    usec = usec - ts->minute * 60000000ULL;
    ts->sec = usec / 1000000ULL;
    usec = usec - ts->sec * 1000000ULL;
    ts->msec = usec / 1000ULL;
    ts->type = OFIX_TIMESTAMP;
}