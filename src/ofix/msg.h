
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_MSG_H__
#define __OFIX_MSG_H__

#include <stdbool.h>
#include <stdint.h>

#include "err.h"
#include "msgspec.h"
#include "date.h"

/**
 * @file msg.h
 *
 * This file defines the functions used to create and work with FIX messages.
 */

/**
 * The ofixMsg structure is the representation of a FIX messages for the
 * library. Most of the functions in the library act on the ofixMsg structure.
 */
typedef struct _ofixMsg	*ofixMsg;

/**
 * The ofixMsgIterator is used to iterate the fields in a ofixMsg. Typically the
 * structure is initialized and then ofix_msg_terator_next_tag() is called to
 * get the message tags one at a time from the message. The members of the
 * structure should not be modified directly. The only reason they are visible
 * is to allow the structure to be allocated on the stack by declaring a
 * variable of type struct _ofixMsgIterator.
 */
typedef struct _ofixMsgIterator {
    ofixMsg	msg;
    void	*context;
} *ofixMsgIterator;

/**
 * Creates a new message of the specified type and version. The field_cnt is
 * used as a hint to preallocate space for fields in the message.
 *
 * @param err pointer to error struct or NULL
 * @param type message type as either the letter identifier or the name fo the message type
 * @param major the major version number e.g., 4 for version 4.3
 * @param minor the minor version number e.g., 3 for version 4.3
 * @param field_cnt initial field allocation
 * @return Returns a new message or NULL on error.
 */
extern ofixMsg	ofix_msg_create(ofixErr err, const char *type, int major, int minor, int field_cnt);

/**
 * Creates a new message based on the message specification provided. The
 * field_cnt is used as a hint to preallocate space for fields in the message.
 *
 * @param err pointer to error struct or NULL
 * @param spec the message specification retrieved from a ofixVersionSpec
 * @param field_cnt initial field allocation
 * @return Returns a new message or NULL on error.
 */
extern ofixMsg	ofix_msg_create_from_spec(ofixErr err, ofixMsgSpec spec, int fieldCnt);

/**
 * Creates a new message from the string provided by parsing the string.
 *
 * @param err pointer to error struct or NULL
 * @param str FIX message as an array of characters
 * @param len the number of characters in the FIX message
 * @return Returns a new message or NULL on error.
 */
extern ofixMsg	ofix_msg_parse(ofixErr err, const char *str, int len);

/**
 * Destroy a message and free up any memory it was using.
 *
 * @param msg the ofixMsg to destroy and free up memory from
 */
extern void	ofix_msg_destroy(ofixMsg msg);

/**
 * Returns the size of the oFIX message string.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 */
extern int	ofix_msg_size(ofixErr err, ofixMsg msg);

/**
 * Returns the expected size of the FIX message string that would be generated
 * by the provided msg argument.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on or NULL if the message is not complete
 */
extern int	ofix_msg_expected_size(ofixErr err, ofixMsg msg);

/**
 * Returns the expected size of the FIX message string. The msg must be at least
 * 16 characters long.
 *
 * @param msg the ofixMsg to operate on or 0 if the message is not complete
 */
extern int	ofix_msg_expected_buf_size(const char *msg);

/**
 * Returns the String representation of the instance.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 */
extern const char	*ofix_msg_FIX_str(ofixErr err, ofixMsg msg);

/**
 * Sets the append mode for the message. While in append mode fields are
 * appended to the end of the message without checking for duplicates. It also
 * improves the performance of message creation.
 *
 * @param msg the ofixMsg to operate on
 * @param mode state to set the append mode to
 */
extern void		ofix_msg_set_append_mode(ofixMsg msg, bool mode);

/**
 * Returns the type for the message.
 *
 * @param msg the ofixMsg to operate on
 */
extern const char	*ofix_msg_type(ofixMsg msg);

/**
 * Returns the name for the message type.
 *
 * @param msg the ofixMsg to operate on
 */
extern const char	*ofix_msg_name(ofixMsg msg);

/**
 * Returns the string representation of the instance with field separators
 * (SOH) replaced by the '^' character. The returned string must be freed when
 * no longer needed to avoid memory leaks.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 */
extern char*	ofix_msg_to_str(ofixErr err, ofixMsg msg);

/**
 * Returns a nicely formated representation of the message. The returned
 * string must be freed when no longer needed to avoid memory leaks.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to create the string for
 */
extern char*	ofix_msg_to_pretty(ofixErr err, ofixMsg msg);

/**
 * Returns true if the specified tag exists in the message. It checks only
 * tags directly contained, not tags in sub-groups.
 *
 * @param msg the ofixMsg to operate on
 * @param tag tag to search for
 */
extern bool	ofix_msg_tag_exists(ofixMsg msg, int tag);

/**
 * Attempts to read an integer value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @return an integer value of the tag.
 */
extern int64_t	ofix_msg_get_int(ofixErr err, ofixMsg msg, int tag);

/**
 * Returns a pointer to the characters in the field identified by a tag. The
 * length of the field value is returned in the integer pointed to by the lenp
 * parameter.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param valuep a pointer to a char* to be filled to the value of the field
 * @param lenp a pointer to a integer to be set to the length of the data
 */
extern void	ofix_msg_get_data(ofixErr err, ofixMsg msg, int tag, char **valuep, int *lenp);

/**
 * Attempts to read a character value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @return the character value of the tag.
 */
extern char	ofix_msg_get_char(ofixErr err, ofixMsg msg, int tag);

/**
 * Attempts to read a boolean value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @return the boolean value of the tag.
 */
extern bool	ofix_msg_get_bool(ofixErr err, ofixMsg msg, int tag);

/**
 * Attempts to read a string value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful. The
 * returned string should be freed when no longer needed.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @return the string value of the tag.
 */
extern char*	ofix_msg_get_str(ofixErr err, ofixMsg msg, int tag);

/**
 * Attempts to read a string value from the field identified by a tag and
 * copy of that string into the value buffer.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a char* to fill with the value of the field
 * @param maxLen the maximum characters to copy
 * @return the value argument.
 */
extern char*	ofix_msg_copy_str(ofixErr err, ofixMsg msg, int tag, char *value, int maxLen);

/**
 * Attempts to read a double value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @return the float value of the tag.
 */
extern double	ofix_msg_get_float(ofixErr err, ofixMsg msg, int tag);

/**
 * Attempts to read a timestamp value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_timestamp(ofixErr err, ofixMsg msg, int tag, ofixDate value);

/**
 * Attempts to read a time value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_time(ofixErr err, ofixMsg msg, int tag, ofixDate value);

/**
 * Attempts to read a time_only value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_time_only(ofixErr err, ofixMsg msg, int tag, ofixDate value);

/**
 * Attempts to read a date_only value from the field identified by a tag. The
 * err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_date_only(ofixErr err, ofixMsg msg, int tag, ofixDate value);

/**
 * Attempts to read a YearMonth (YYYYMM) value from the field identified by a
 * tag. The err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_yyyymm(ofixErr err, ofixMsg msg, int tag, ofixDate value);

/**
 * Attempts to read a Week (YYYYMMWW) value from the field identified by a
 * tag. The err.code should be checked to determine if the get was successful.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a pointer to a struct _ofixDate to be set to the value of the field
 */
extern void	ofix_msg_get_yyyymmww(ofixErr err, ofixMsg msg, int tag, ofixDate value);

// TBD multi char and multi string
// TBD repeating group

/**
 * Attempts to set an integer value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value an integer to set to the value of the field to
 */
extern void	ofix_msg_set_int(ofixErr err, ofixMsg msg, int tag, int32_t value);

/**
 * Attempts to set a character value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a character to set to the value of the field to
 */
extern void	ofix_msg_set_char(ofixErr err, ofixMsg msg, int tag, char value);

/**
 * Attempts to set a boolean value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a boolean to set to the value of the field to
 */
extern void	ofix_msg_set_bool(ofixErr err, ofixMsg msg, int tag, bool value);

/**
 * Attempts to set a string value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a string to set to the value of the field to
 */
extern void	ofix_msg_set_str(ofixErr err, ofixMsg msg, int tag, const char *value);

/**
 * Attempts to set a character array value on the field identified by a
 * tag and also sets the associated length tag for that data.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a string to set to the value of the field to
 * @param len the length of the substring
 */
extern void	ofix_msg_set_data(ofixErr err, ofixMsg msg, int tag, const char *value, int len);

/**
 * Attempts to set a character array value on the field identified by a
 * tag but does not set the associated length tag for that data.
 * Attempts to set a string value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a string to set to the value of the field to
 * @param len the length of the substring
 */
extern void	ofix_msg_set_data_only(ofixErr err, ofixMsg msg, int tag, const char *value, int len);

/**
 * Attempts to set a double value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a double to set to the value of the field to
 * @param fracDigits number of digits in the fractional part of the float
 */
extern void	ofix_msg_set_float(ofixErr err, ofixMsg msg, int tag, double value, int fracDigits);

/**
 * Attempts to set a ofixDate value on the field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 * @param value a ofixDate to set to the value of the field to
 */
extern void	ofix_msg_set_date(ofixErr err, ofixMsg msg, int tag, ofixDate value);

// TBD sets for different times without creating ofixDate structure, maybe not worth it

// TBD set repeating fields

/**
 * Attempts to remove a field identified by a tag.
 *
 * @param err pointer to error struct or NULL
 * @param msg the ofixMsg to operate on
 * @param tag the tag that identifies of field
 */
extern void	ofix_msg_remove(ofixErr err, ofixMsg msg, int tag);

/**
 * Initializes an iterator. After intialization the ofixMsgIterator_nextTag()
 * can be called to iterate through all the tags in a message. The fields
 * associated with the tags are cached to improve performance.
 *
 * @param iter interator to initialize
 * @param msg message the iterator will iterate across
 */
static inline void
ofix_msg_iterator_init(ofixMsgIterator iter, ofixMsg msg) {
    iter->msg = msg;
    iter->context = 0;
}

/**
 * Returns the next tag in the message or zero when there are no more tags in
 * the message.
 *
 * @param iter the iterator to get the next tag from
 */
extern int	ofix_msg_iterator_next_tag(ofixMsgIterator iter);

/**
 * Forces the recalculation of the body length and checksum.
 */
extern void	ofix_msg_set_changed(ofixMsg msg);

#endif /* __OFIX_MSG_H__ */