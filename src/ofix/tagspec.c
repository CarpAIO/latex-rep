// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include "tagspec.h"

const char *ofix_tag_spec_type_str(ofixTagSpec spec) {
    switch (spec->type) {
    case OFIX_Int:			return "Int";
    case OFIX_Length:			return "Length";
    case OFIX_NumInGroup:		return "NumInGroup";
    case OFIX_SeqNum:			return "SeqNum";
    case OFIX_DayOfMonth:		return "DayOfMonth";
    case OFIX_Float:			return "Float";
    case OFIX_Qty:			return "Qty";
    case OFIX_Price:			return "Price";
    case OFIX_PriceOffset:		return "PriceOffset";
    case OFIX_Amt:			return "Amt";
    case OFIX_Percentage:		return "Percentage";
    case OFIX_Char:			return "Char";
    case OFIX_Boolean:			return "Boolean";
    case OFIX_String:			return "String";
    case OFIX_MultipleValueString:	return "MultipleValueString";
    case OFIX_Country:			return "Country";
    case OFIX_Currency:			return "Currency";
    case OFIX_Exchange:			return "Exchange";
    case OFIX_MonthYear:		return "MonthYear";
    case OFIX_UTCTimestamp:		return "UTCTimestamp";
    case OFIX_UTCTimeOnly:		return "UTCTimeOnly";
    case OFIX_UTCDateOnly:		return "UTCDateOnly";
    case OFIX_LocalMktDate:		return "LocalMktDate";
    case OFIX_Time:			return "Time";
    case OFIX_Data:			return "Data";
    case OFIX_UnknownType:
    default:				break;
    }
    return "UnknownType";
}

