// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_DTIME_H__
#define __OFIX_DTIME_H__

/**
 * @file dtime.h
 *
 * The dtime.h file is the header file for the double based sleep and wait
 * functions.
 */

/**
 * Returns the current time in seconds as a double.
 */
extern double	dtime(void);

/**
 * Sleeps for the specified time in seconds. If the call returns early the
 * remaining number of seconds is returned. The call uses nanosleep() and not
 * usleep() so it should be safe to use in a multithreaded environment. If the
 * sleep time is shorter than the smallest sleep resolution the function may
 * sleep longer.
 *
 * @param t time to sleep
 * @return Returns the number of seconds left or 0.0 if sleep was not
 * interrupted.
 */
extern double	dsleep(double t);

/**
 * Sleeps for the specified time in seconds. If the call returns early the
 * remaining number of seconds is returned. The call uses nanosleep() and not
 * usleep() so it should be safe to use in a multithreaded environment. If the
 * sleep time is shorter than the smallest sleep resolution the function will
 * spin until the specified time has elapsed.
 *
 * @param t time to wait
 * @return Returns the number of seconds left or 0.0 if sleep was not
 * interrupted.
 */
extern double	dwait(double t);

#endif /* __OFIX_DTIME_H__ */
