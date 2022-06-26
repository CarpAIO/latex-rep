
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_ERR_H__
#define __OFIX_ERR_H__

#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#define OFIX_ERR_INIT	{ 0, 0, 0, 0, { 0 }, { 0 } }

/**
 * Error codes for the __code__ field in __ofixErr__ structs.
 * @see ofixErr
 */
typedef enum {
    /** okay, no error */
    OFIX_OK		= 0,
    /** parse error */
    OFIX_PARSE_ERR	= 'p',
    /** buffer overflow error */
    OFIX_OVERFLOW_ERR	= 'o',
    /** write error */
    OFIX_WRITE_ERR	= 'w',
    /** memory error */
    OFIX_MEMORY_ERR	= 'm',
    /** argument error */
    OFIX_ARG_ERR	= 'a',
    /** not found */
    OFIX_NOT_FOUND_ERR	= 'f',
    /** read error */
    OFIX_READ_ERR	= 'r',
    /** denied */
    OFIX_DENIED_ERR	= 'd',
    /** network error */
    OFIX_NETWORK_ERR	= 'n',
    /** logon error */
    OFIX_LOGON_ERR	= 'l',
    /** thread error */
    OFIX_THREAD_ERR	= 't',
} ofixErrCode;

typedef enum {
    /** Error level */
    OFIX_ERROR	= 0,
    /** Warn level */
    OFIX_WARN	= 1,
    /** Info level */
    OFIX_INFO	= 2,
    /** Info level */
    OFIX_DEBUG	= 3,
} ofixLogLevel;

typedef enum {
    /** no reason */
    OFIX_REASON_NONE = -1,
    /** Invalid Tag Number */
    OFIX_REASON_INVALID_TAG = 0,
    /** Required Tag Missing */
    OFIX_REASON_MISSING_TAG = 1,
    /** Tag not defined for this message type */
    OFIX_REASON_WRONG_TAG = 2,
    /** Undefined tag */
    OFIX_REASON_UNDEFINED_TAG = 3,
    /** Tag specified without a value */
    OFIX_REASON_NO_VALUE = 4,
    /** Value is incorrect (out of range) for this tag */
    OFIX_REASON_BAD_VALUE = 5,
    /** Incorrect data format for value */
    OFIX_REASON_BAD_FORMAT = 6,
    /** Decryption problem */
    OFIX_REASON_DECRYPT = 7,
    /** Signature problem */
    OFIX_REASON_SIGNATURE = 8,
    /** CompID problem */
    OFIX_REASON_COMP_ID = 9,
    /** SendingTime Accuracy Problem */
    OFIX_REASON_SEND_TIME = 10,
    /** Invalid MsgType */
    OFIX_REASON_BAD_MSGTYPE = 11,
    /** XML Validation Error */
    OFIX_REASON_XML = 12,
    /** Tag appears more than once */
    OFIX_REASON_DUP_TAG = 13,
    /** Tag specified out of required order */
    OFIX_REASON_ORDER_TAG = 14,
    /** Repeating group fields out of order */
    OFIX_REASON_GROUP_ORDER = 15,
    /** Incorrect NumInGroup count for repeating group */
    OFIX_REASON_NUM_GROUP = 16,
    /** Non "Data" value includes field delimiter ( character) */
    OFIX_REASON_NON_DATA = 17,
    /** Other */
    OFIX_REASON_OTHER = 99,
} ofixReason;

/**
 * The struct used to report errors or status after a function returns. The
 * struct must be initialized before use as most calls that take an err argument
 * will return immediately if an error has already occurred.
 *
 * @see ofixErrCode
 */
typedef struct _ofixErr {
    /** Error code identifying the type of error. */
    int		code;
    /** Reason code for error. */
    int		reason;
    /** Tag associated with the error or 0 if not tag associated with the error. */
    int		tag;
    /** sequence number of the message if known otherwise 0 */
    int64_t	seq;
    /** message type associated with the error or empty if unknown. */
    char	msg_type[8];
    /** Error message associated with a failure if the code is not __OFIX_OK__. */
    char	msg[256];
} *ofixErr;

static inline void ofix_err_clear(ofixErr err) {
    err->code = OFIX_OK;
    err->reason = OFIX_REASON_NONE;
    err->tag = 0;
    err->seq = 0;
    *err->msg_type = '\0';
    *err->msg = '\0';
}

typedef bool	(*ofixLogOn)(void *ctx, ofixLogLevel level);
typedef void	(*ofixLog)(void *ctx, ofixLogLevel level, const char *format, ...);

#endif /* __OFIX_ERR_H__ */