
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_TAGSPEC_H__
#define __OFIX_TAGSPEC_H__

/**
 * The tag type is denoted by one of these values.
 */
typedef enum {
    OFIX_Int,			// the FIX Int which is an integer
    OFIX_Length,		// the FIX Length which is an integer
    OFIX_NumInGroup,		// the FIX NumInGroup which is an integer
    OFIX_SeqNum,		// the FIX SeqNum which is an integer
    OFIX_DayOfMonth,		// the FIX DayOfMonth which is an integer
    OFIX_Float,			// the FIX Float which is a float
    OFIX_Qty,			// the FIX Qty which is a float
    OFIX_Price,			// the FIX Price which is a float
    OFIX_PriceOffset,		// the FIX PriceOffset which is a float
    OFIX_Amt,			// the FIX Amt which is a float
    OFIX_Percentage,		// the FIX Percentage which is a float
    OFIX_Char,			// the FIX Char which is a char
    OFIX_Boolean,		// the FIX Boolean which is a char
    OFIX_String,		// the FIX String which is a String
    OFIX_MultipleValueString,	// the FIX MultipleValueString which is a String
    OFIX_Country,		// the FIX Country which is a String
    OFIX_Currency,		// the FIX Currency which is a String
    OFIX_Exchange,		// the FIX Exchange which is a String
    OFIX_MonthYear,		// the FIX MonthYear which is a String
    OFIX_UTCTimestamp,		// the FIX UTCTimestamp which is a String
    OFIX_UTCTimeOnly,		// the FIX UTCTimeOnly which is a String
    OFIX_UTCDateOnly,		// the FIX UTCDateOnly which is a String
    OFIX_LocalMktDate,		// the FIX LocalMktDate which is a String
    OFIX_Time,			// the FIX Time which is a String
    OFIX_Data,			// the FIX Data which is a byte[]
    OFIX_UnknownType		// indicates the type has not be specified
} ofixTagType;

/**
 * The location of a tag is denoted by one of these values.
 */
typedef enum {
    OFIX_Header,	// A Header tag
    OFIX_Body,		// A Body tag
    OFIX_Trailer	// A Trailer tag
} ofixTagWhere;

typedef struct _ofixTagSpec {
    int			tag;
    ofixTagType		type;
    ofixTagWhere	where;
    int			related_tag;
    int			tag_byte_len;
    char		*tag_bytes;
    char		*name;
} *ofixTagSpec;

extern const char*	ofix_tag_spec_type_str(ofixTagSpec spec);

#endif /* __OFIX_TAGSPEC_H__ */