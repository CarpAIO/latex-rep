
// This file is auto-generated from ref/FIX43.xml and should not be modified.

#include "ofix/tagspec.h"
#include "ofix/tagreq.h"
#include "ofix/msgspec.h"
#include "ofix/versionspec.h"

extern struct _ofixVersionSpec	fix43Spec;

// ----- Tags -----
static struct _ofixTagSpec	tags[] = {
    { 1, OFIX_String, OFIX_Body, 0, 2, "1=", "Account" },
    { 2, OFIX_String, OFIX_Body, 0, 2, "2=", "AdvId" },
    { 3, OFIX_String, OFIX_Body, 0, 2, "3=", "AdvRefID" },
    { 4, OFIX_Char, OFIX_Body, 0, 2, "4=", "AdvSide" },
    { 5, OFIX_String, OFIX_Body, 0, 2, "5=", "AdvTransType" },
    { 6, OFIX_Price, OFIX_Body, 0, 2, "6=", "AvgPx" },
    { 7, OFIX_SeqNum, OFIX_Body, 0, 2, "7=", "BeginSeqNo" },
    { 8, OFIX_String, OFIX_Header, 0, 2, "8=", "BeginString" },
    { 9, OFIX_Length, OFIX_Header, 0, 2, "9=", "BodyLength" },
    { 10, OFIX_String, OFIX_Trailer, 0, 3, "10=", "CheckSum" },
    { 11, OFIX_String, OFIX_Body, 0, 3, "11=", "ClOrdID" },
    { 12, OFIX_Amt, OFIX_Body, 0, 3, "12=", "Commission" },
    { 13, OFIX_Char, OFIX_Body, 0, 3, "13=", "CommType" },
    { 14, OFIX_Qty, OFIX_Body, 0, 3, "14=", "CumQty" },
    { 15, OFIX_Currency, OFIX_Body, 0, 3, "15=", "Currency" },
    { 16, OFIX_SeqNum, OFIX_Body, 0, 3, "16=", "EndSeqNo" },
    { 17, OFIX_String, OFIX_Body, 0, 3, "17=", "ExecID" },
    { 18, OFIX_MultipleValueString, OFIX_Body, 0, 3, "18=", "ExecInst" },
    { 19, OFIX_String, OFIX_Body, 0, 3, "19=", "ExecRefID" },
    { 20, OFIX_Char, OFIX_Body, 0, 3, "20=", "ExecTransType" },
    { 21, OFIX_Char, OFIX_Body, 0, 3, "21=", "HandlInst" },
    { 22, OFIX_String, OFIX_Body, 0, 3, "22=", "SecurityIDSource" },
    { 23, OFIX_String, OFIX_Body, 0, 3, "23=", "IOIid" },
    { 25, OFIX_Char, OFIX_Body, 0, 3, "25=", "IOIQltyInd" },
    { 26, OFIX_String, OFIX_Body, 0, 3, "26=", "IOIRefID" },
    { 27, OFIX_String, OFIX_Body, 0, 3, "27=", "IOIQty" },
    { 28, OFIX_Char, OFIX_Body, 0, 3, "28=", "IOITransType" },
    { 29, OFIX_Char, OFIX_Body, 0, 3, "29=", "LastCapacity" },
    { 30, OFIX_Exchange, OFIX_Body, 0, 3, "30=", "LastMkt" },
    { 31, OFIX_Price, OFIX_Body, 0, 3, "31=", "LastPx" },
    { 32, OFIX_Qty, OFIX_Body, 0, 3, "32=", "LastQty" },
    { 33, OFIX_NumInGroup, OFIX_Body, 0, 3, "33=", "LinesOfText" },
    { 34, OFIX_SeqNum, OFIX_Header, 0, 3, "34=", "MsgSeqNum" },
    { 35, OFIX_String, OFIX_Header, 0, 3, "35=", "MsgType" },
    { 36, OFIX_SeqNum, OFIX_Body, 0, 3, "36=", "NewSeqNo" },
    { 37, OFIX_String, OFIX_Body, 0, 3, "37=", "OrderID" },
    { 38, OFIX_Qty, OFIX_Body, 0, 3, "38=", "OrderQty" },
    { 39, OFIX_Char, OFIX_Body, 0, 3, "39=", "OrdStatus" },
    { 40, OFIX_Char, OFIX_Body, 0, 3, "40=", "OrdType" },
    { 41, OFIX_String, OFIX_Body, 0, 3, "41=", "OrigClOrdID" },
    { 42, OFIX_UTCTimestamp, OFIX_Body, 0, 3, "42=", "OrigTime" },
    { 43, OFIX_Boolean, OFIX_Header, 0, 3, "43=", "PossDupFlag" },
    { 44, OFIX_Price, OFIX_Body, 0, 3, "44=", "Price" },
    { 45, OFIX_SeqNum, OFIX_Body, 0, 3, "45=", "RefSeqNum" },
    { 46, OFIX_String, OFIX_Body, 0, 3, "46=", "RelatdSym" },
    { 47, OFIX_Char, OFIX_Body, 0, 3, "47=", "Rule80A" },
    { 48, OFIX_String, OFIX_Body, 0, 3, "48=", "SecurityID" },
    { 49, OFIX_String, OFIX_Header, 0, 3, "49=", "SenderCompID" },
    { 50, OFIX_String, OFIX_Header, 0, 3, "50=", "SenderSubID" },
    { 51, OFIX_LocalMktDate, OFIX_Body, 0, 3, "51=", "SendingDate" },
    { 52, OFIX_UTCTimestamp, OFIX_Header, 0, 3, "52=", "SendingTime" },
    { 53, OFIX_Qty, OFIX_Body, 0, 3, "53=", "Quantity" },
    { 54, OFIX_Char, OFIX_Body, 0, 3, "54=", "Side" },
    { 55, OFIX_String, OFIX_Body, 0, 3, "55=", "Symbol" },
    { 56, OFIX_String, OFIX_Header, 0, 3, "56=", "TargetCompID" },
    { 57, OFIX_String, OFIX_Header, 0, 3, "57=", "TargetSubID" },
    { 58, OFIX_String, OFIX_Body, 0, 3, "58=", "Text" },
    { 59, OFIX_Char, OFIX_Body, 0, 3, "59=", "TimeInForce" },
    { 60, OFIX_UTCTimestamp, OFIX_Body, 0, 3, "60=", "TransactTime" },
    { 61, OFIX_Char, OFIX_Body, 0, 3, "61=", "Urgency" },
    { 62, OFIX_UTCTimestamp, OFIX_Body, 0, 3, "62=", "ValidUntilTime" },
    { 63, OFIX_Char, OFIX_Body, 0, 3, "63=", "SettlmntTyp" },
    { 64, OFIX_LocalMktDate, OFIX_Body, 0, 3, "64=", "FutSettDate" },
    { 65, OFIX_String, OFIX_Body, 0, 3, "65=", "SymbolSfx" },
    { 66, OFIX_String, OFIX_Body, 0, 3, "66=", "ListID" },
    { 67, OFIX_Int, OFIX_Body, 0, 3, "67=", "ListSeqNo" },
    { 68, OFIX_Int, OFIX_Body, 0, 3, "68=", "TotNoOrders" },
    { 69, OFIX_String, OFIX_Body, 0, 3, "69=", "ListExecInst" },
    { 70, OFIX_String, OFIX_Body, 0, 3, "70=", "AllocID" },
    { 71, OFIX_Char, OFIX_Body, 0, 3, "71=", "AllocTransType" },
    { 72, OFIX_String, OFIX_Body, 0, 3, "72=", "RefAllocID" },
    { 73, OFIX_NumInGroup, OFIX_Body, 0, 3, "73=", "NoOrders" },
    { 74, OFIX_Int, OFIX_Body, 0, 3, "74=", "AvgPrxPrecision" },
    { 75, OFIX_LocalMktDate, OFIX_Body, 0, 3, "75=", "TradeDate" },
    { 76, OFIX_String, OFIX_Body, 0, 3, "76=", "ExecBroker" },
    { 77, OFIX_Char, OFIX_Body, 0, 3, "77=", "PositionEffect" },
    { 78, OFIX_NumInGroup, OFIX_Body, 0, 3, "78=", "NoAllocs" },
    { 79, OFIX_String, OFIX_Body, 0, 3, "79=", "AllocAccount" },
    { 80, OFIX_Qty, OFIX_Body, 0, 3, "80=", "AllocQty" },
    { 81, OFIX_Char, OFIX_Body, 0, 3, "81=", "ProcessCode" },
    { 82, OFIX_NumInGroup, OFIX_Body, 0, 3, "82=", "NoRpts" },
    { 83, OFIX_Int, OFIX_Body, 0, 3, "83=", "RptSeq" },
    { 84, OFIX_Qty, OFIX_Body, 0, 3, "84=", "CxlQty" },
    { 85, OFIX_Int, OFIX_Body, 0, 3, "85=", "NoDlvyInst" },
    { 86, OFIX_String, OFIX_Body, 0, 3, "86=", "DlvyInst" },
    { 87, OFIX_Int, OFIX_Body, 0, 3, "87=", "AllocStatus" },
    { 88, OFIX_Int, OFIX_Body, 0, 3, "88=", "AllocRejCode" },
    { 89, OFIX_Data, OFIX_Trailer, 93, 3, "89=", "Signature" },
    { 90, OFIX_Length, OFIX_Header, 91, 3, "90=", "SecureDataLen" },
    { 91, OFIX_Data, OFIX_Header, 90, 3, "91=", "SecureData" },
    { 92, OFIX_String, OFIX_Body, 0, 3, "92=", "BrokerOfCredit" },
    { 93, OFIX_Length, OFIX_Trailer, 89, 3, "93=", "SignatureLength" },
    { 94, OFIX_Char, OFIX_Body, 0, 3, "94=", "EmailType" },
    { 95, OFIX_Length, OFIX_Body, 96, 3, "95=", "RawDataLength" },
    { 96, OFIX_Data, OFIX_Body, 95, 3, "96=", "RawData" },
    { 97, OFIX_Boolean, OFIX_Header, 0, 3, "97=", "PossResend" },
    { 98, OFIX_Int, OFIX_Body, 0, 3, "98=", "EncryptMethod" },
    { 99, OFIX_Price, OFIX_Body, 0, 3, "99=", "StopPx" },
    { 100, OFIX_Exchange, OFIX_Body, 0, 4, "100=", "ExDestination" },
    { 102, OFIX_Int, OFIX_Body, 0, 4, "102=", "CxlRejReason" },
    { 103, OFIX_Int, OFIX_Body, 0, 4, "103=", "OrdRejReason" },
    { 104, OFIX_Char, OFIX_Body, 0, 4, "104=", "IOIQualifier" },
    { 105, OFIX_String, OFIX_Body, 0, 4, "105=", "WaveNo" },
    { 106, OFIX_String, OFIX_Body, 0, 4, "106=", "Issuer" },
    { 107, OFIX_String, OFIX_Body, 0, 4, "107=", "SecurityDesc" },
    { 108, OFIX_Int, OFIX_Body, 0, 4, "108=", "HeartBtInt" },
    { 109, OFIX_String, OFIX_Body, 0, 4, "109=", "ClientID" },
    { 110, OFIX_Qty, OFIX_Body, 0, 4, "110=", "MinQty" },
    { 111, OFIX_Qty, OFIX_Body, 0, 4, "111=", "MaxFloor" },
    { 112, OFIX_String, OFIX_Body, 0, 4, "112=", "TestReqID" },
    { 113, OFIX_Boolean, OFIX_Body, 0, 4, "113=", "ReportToExch" },
    { 114, OFIX_Boolean, OFIX_Body, 0, 4, "114=", "LocateReqd" },
    { 115, OFIX_String, OFIX_Header, 0, 4, "115=", "OnBehalfOfCompID" },
    { 116, OFIX_String, OFIX_Header, 0, 4, "116=", "OnBehalfOfSubID" },
    { 117, OFIX_String, OFIX_Body, 0, 4, "117=", "QuoteID" },
    { 118, OFIX_Amt, OFIX_Body, 0, 4, "118=", "NetMoney" },
    { 119, OFIX_Amt, OFIX_Body, 0, 4, "119=", "SettlCurrAmt" },
    { 120, OFIX_Currency, OFIX_Body, 0, 4, "120=", "SettlCurrency" },
    { 121, OFIX_Boolean, OFIX_Body, 0, 4, "121=", "ForexReq" },
    { 122, OFIX_UTCTimestamp, OFIX_Header, 0, 4, "122=", "OrigSendingTime" },
    { 123, OFIX_Boolean, OFIX_Body, 0, 4, "123=", "GapFillFlag" },
    { 124, OFIX_NumInGroup, OFIX_Body, 0, 4, "124=", "NoExecs" },
    { 125, OFIX_Char, OFIX_Body, 0, 4, "125=", "CxlType" },
    { 126, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "126=", "ExpireTime" },
    { 127, OFIX_Char, OFIX_Body, 0, 4, "127=", "DKReason" },
    { 128, OFIX_String, OFIX_Header, 0, 4, "128=", "DeliverToCompID" },
    { 129, OFIX_String, OFIX_Header, 0, 4, "129=", "DeliverToSubID" },
    { 130, OFIX_Boolean, OFIX_Body, 0, 4, "130=", "IOINaturalFlag" },
    { 131, OFIX_String, OFIX_Body, 0, 4, "131=", "QuoteReqID" },
    { 132, OFIX_Price, OFIX_Body, 0, 4, "132=", "BidPx" },
    { 133, OFIX_Price, OFIX_Body, 0, 4, "133=", "OfferPx" },
    { 134, OFIX_Qty, OFIX_Body, 0, 4, "134=", "BidSize" },
    { 135, OFIX_Qty, OFIX_Body, 0, 4, "135=", "OfferSize" },
    { 136, OFIX_NumInGroup, OFIX_Body, 0, 4, "136=", "NoMiscFees" },
    { 137, OFIX_Amt, OFIX_Body, 0, 4, "137=", "MiscFeeAmt" },
    { 138, OFIX_Currency, OFIX_Body, 0, 4, "138=", "MiscFeeCurr" },
    { 139, OFIX_Char, OFIX_Body, 0, 4, "139=", "MiscFeeType" },
    { 140, OFIX_Price, OFIX_Body, 0, 4, "140=", "PrevClosePx" },
    { 141, OFIX_Boolean, OFIX_Body, 0, 4, "141=", "ResetSeqNumFlag" },
    { 142, OFIX_String, OFIX_Header, 0, 4, "142=", "SenderLocationID" },
    { 143, OFIX_String, OFIX_Header, 0, 4, "143=", "TargetLocationID" },
    { 144, OFIX_String, OFIX_Header, 0, 4, "144=", "OnBehalfOfLocationID" },
    { 145, OFIX_String, OFIX_Header, 0, 4, "145=", "DeliverToLocationID" },
    { 146, OFIX_NumInGroup, OFIX_Body, 0, 4, "146=", "NoRelatedSym" },
    { 147, OFIX_String, OFIX_Body, 0, 4, "147=", "Subject" },
    { 148, OFIX_String, OFIX_Body, 0, 4, "148=", "Headline" },
    { 149, OFIX_String, OFIX_Body, 0, 4, "149=", "URLLink" },
    { 150, OFIX_Char, OFIX_Body, 0, 4, "150=", "ExecType" },
    { 151, OFIX_Qty, OFIX_Body, 0, 4, "151=", "LeavesQty" },
    { 152, OFIX_Qty, OFIX_Body, 0, 4, "152=", "CashOrderQty" },
    { 153, OFIX_Price, OFIX_Body, 0, 4, "153=", "AllocAvgPx" },
    { 154, OFIX_Amt, OFIX_Body, 0, 4, "154=", "AllocNetMoney" },
    { 155, OFIX_Float, OFIX_Body, 0, 4, "155=", "SettlCurrFxRate" },
    { 156, OFIX_Char, OFIX_Body, 0, 4, "156=", "SettlCurrFxRateCalc" },
    { 157, OFIX_Int, OFIX_Body, 0, 4, "157=", "NumDaysInterest" },
    { 158, OFIX_Percentage, OFIX_Body, 0, 4, "158=", "AccruedInterestRate" },
    { 159, OFIX_Amt, OFIX_Body, 0, 4, "159=", "AccruedInterestAmt" },
    { 160, OFIX_Char, OFIX_Body, 0, 4, "160=", "SettlInstMode" },
    { 161, OFIX_String, OFIX_Body, 0, 4, "161=", "AllocText" },
    { 162, OFIX_String, OFIX_Body, 0, 4, "162=", "SettlInstID" },
    { 163, OFIX_Char, OFIX_Body, 0, 4, "163=", "SettlInstTransType" },
    { 164, OFIX_String, OFIX_Body, 0, 4, "164=", "EmailThreadID" },
    { 165, OFIX_Char, OFIX_Body, 0, 4, "165=", "SettlInstSource" },
    { 166, OFIX_String, OFIX_Body, 0, 4, "166=", "SettlLocation" },
    { 167, OFIX_String, OFIX_Body, 0, 4, "167=", "SecurityType" },
    { 168, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "168=", "EffectiveTime" },
    { 169, OFIX_Int, OFIX_Body, 0, 4, "169=", "StandInstDbType" },
    { 170, OFIX_String, OFIX_Body, 0, 4, "170=", "StandInstDbName" },
    { 171, OFIX_String, OFIX_Body, 0, 4, "171=", "StandInstDbID" },
    { 172, OFIX_Int, OFIX_Body, 0, 4, "172=", "SettlDeliveryType" },
    { 173, OFIX_String, OFIX_Body, 0, 4, "173=", "SettlDepositoryCode" },
    { 174, OFIX_String, OFIX_Body, 0, 4, "174=", "SettlBrkrCode" },
    { 175, OFIX_String, OFIX_Body, 0, 4, "175=", "SettlInstCode" },
    { 176, OFIX_String, OFIX_Body, 0, 4, "176=", "SecuritySettlAgentName" },
    { 177, OFIX_String, OFIX_Body, 0, 4, "177=", "SecuritySettlAgentCode" },
    { 178, OFIX_String, OFIX_Body, 0, 4, "178=", "SecuritySettlAgentAcctNum" },
    { 179, OFIX_String, OFIX_Body, 0, 4, "179=", "SecuritySettlAgentAcctName" },
    { 180, OFIX_String, OFIX_Body, 0, 4, "180=", "SecuritySettlAgentContactName" },
    { 181, OFIX_String, OFIX_Body, 0, 4, "181=", "SecuritySettlAgentContactPhone" },
    { 182, OFIX_String, OFIX_Body, 0, 4, "182=", "CashSettlAgentName" },
    { 183, OFIX_String, OFIX_Body, 0, 4, "183=", "CashSettlAgentCode" },
    { 184, OFIX_String, OFIX_Body, 0, 4, "184=", "CashSettlAgentAcctNum" },
    { 185, OFIX_String, OFIX_Body, 0, 4, "185=", "CashSettlAgentAcctName" },
    { 186, OFIX_String, OFIX_Body, 0, 4, "186=", "CashSettlAgentContactName" },
    { 187, OFIX_String, OFIX_Body, 0, 4, "187=", "CashSettlAgentContactPhone" },
    { 188, OFIX_Price, OFIX_Body, 0, 4, "188=", "BidSpotRate" },
    { 189, OFIX_PriceOffset, OFIX_Body, 0, 4, "189=", "BidForwardPoints" },
    { 190, OFIX_Price, OFIX_Body, 0, 4, "190=", "OfferSpotRate" },
    { 191, OFIX_PriceOffset, OFIX_Body, 0, 4, "191=", "OfferForwardPoints" },
    { 192, OFIX_Qty, OFIX_Body, 0, 4, "192=", "OrderQty2" },
    { 193, OFIX_LocalMktDate, OFIX_Body, 0, 4, "193=", "FutSettDate2" },
    { 194, OFIX_Price, OFIX_Body, 0, 4, "194=", "LastSpotRate" },
    { 195, OFIX_PriceOffset, OFIX_Body, 0, 4, "195=", "LastForwardPoints" },
    { 196, OFIX_String, OFIX_Body, 0, 4, "196=", "AllocLinkID" },
    { 197, OFIX_Int, OFIX_Body, 0, 4, "197=", "AllocLinkType" },
    { 198, OFIX_String, OFIX_Body, 0, 4, "198=", "SecondaryOrderID" },
    { 199, OFIX_NumInGroup, OFIX_Body, 0, 4, "199=", "NoIOIQualifiers" },
    { 200, OFIX_MonthYear, OFIX_Body, 0, 4, "200=", "MaturityMonthYear" },
    { 201, OFIX_Int, OFIX_Body, 0, 4, "201=", "PutOrCall" },
    { 202, OFIX_Price, OFIX_Body, 0, 4, "202=", "StrikePrice" },
    { 203, OFIX_Int, OFIX_Body, 0, 4, "203=", "CoveredOrUncovered" },
    { 204, OFIX_Int, OFIX_Body, 0, 4, "204=", "CustomerOrFirm" },
    { 205, OFIX_DayOfMonth, OFIX_Body, 0, 4, "205=", "MaturityDay" },
    { 206, OFIX_Char, OFIX_Body, 0, 4, "206=", "OptAttribute" },
    { 207, OFIX_Exchange, OFIX_Body, 0, 4, "207=", "SecurityExchange" },
    { 208, OFIX_Boolean, OFIX_Body, 0, 4, "208=", "NotifyBrokerOfCredit" },
    { 209, OFIX_Int, OFIX_Body, 0, 4, "209=", "AllocHandlInst" },
    { 210, OFIX_Qty, OFIX_Body, 0, 4, "210=", "MaxShow" },
    { 211, OFIX_PriceOffset, OFIX_Body, 0, 4, "211=", "PegDifference" },
    { 212, OFIX_Length, OFIX_Header, 213, 4, "212=", "XmlDataLen" },
    { 213, OFIX_Data, OFIX_Header, 212, 4, "213=", "XmlData" },
    { 214, OFIX_String, OFIX_Body, 0, 4, "214=", "SettlInstRefID" },
    { 215, OFIX_NumInGroup, OFIX_Body, 0, 4, "215=", "NoRoutingIDs" },
    { 216, OFIX_Int, OFIX_Body, 0, 4, "216=", "RoutingType" },
    { 217, OFIX_String, OFIX_Body, 0, 4, "217=", "RoutingID" },
    { 218, OFIX_PriceOffset, OFIX_Body, 0, 4, "218=", "Spread" },
    { 219, OFIX_Char, OFIX_Body, 0, 4, "219=", "Benchmark" },
    { 220, OFIX_Currency, OFIX_Body, 0, 4, "220=", "BenchmarkCurveCurrency" },
    { 221, OFIX_String, OFIX_Body, 0, 4, "221=", "BenchmarkCurveName" },
    { 222, OFIX_String, OFIX_Body, 0, 4, "222=", "BenchmarkCurvePoint" },
    { 223, OFIX_Percentage, OFIX_Body, 0, 4, "223=", "CouponRate" },
    { 224, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "224=", "CouponPaymentDate" },
    { 225, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "225=", "IssueDate" },
    { 226, OFIX_Int, OFIX_Body, 0, 4, "226=", "RepurchaseTerm" },
    { 227, OFIX_Percentage, OFIX_Body, 0, 4, "227=", "RepurchaseRate" },
    { 228, OFIX_Float, OFIX_Body, 0, 4, "228=", "Factor" },
    { 229, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "229=", "TradeOriginationDate" },
    { 230, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "230=", "ExDate" },
    { 231, OFIX_Float, OFIX_Body, 0, 4, "231=", "ContractMultiplier" },
    { 232, OFIX_NumInGroup, OFIX_Body, 0, 4, "232=", "NoStipulations" },
    { 233, OFIX_String, OFIX_Body, 0, 4, "233=", "StipulationType" },
    { 234, OFIX_String, OFIX_Body, 0, 4, "234=", "StipulationValue" },
    { 235, OFIX_String, OFIX_Body, 0, 4, "235=", "YieldType" },
    { 236, OFIX_Percentage, OFIX_Body, 0, 4, "236=", "Yield" },
    { 237, OFIX_Amt, OFIX_Body, 0, 4, "237=", "TotalTakedown" },
    { 238, OFIX_Amt, OFIX_Body, 0, 4, "238=", "Concession" },
    { 239, OFIX_Int, OFIX_Body, 0, 4, "239=", "RepoCollateralSecurityType" },
    { 240, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "240=", "RedemptionDate" },
    { 241, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "241=", "UnderlyingCouponPaymentDate" },
    { 242, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "242=", "UnderlyingIssueDate" },
    { 243, OFIX_Int, OFIX_Body, 0, 4, "243=", "UnderlyingRepoCollateralSecurityType" },
    { 244, OFIX_Int, OFIX_Body, 0, 4, "244=", "UnderlyingRepurchaseTerm" },
    { 245, OFIX_Percentage, OFIX_Body, 0, 4, "245=", "UnderlyingRepurchaseRate" },
    { 246, OFIX_Float, OFIX_Body, 0, 4, "246=", "UnderlyingFactor" },
    { 247, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "247=", "UnderlyingRedemptionDate" },
    { 248, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "248=", "LegCouponPaymentDate" },
    { 249, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "249=", "LegIssueDate" },
    { 250, OFIX_Int, OFIX_Body, 0, 4, "250=", "LegRepoCollateralSecurityType" },
    { 251, OFIX_Int, OFIX_Body, 0, 4, "251=", "LegRepurchaseTerm" },
    { 252, OFIX_Percentage, OFIX_Body, 0, 4, "252=", "LegRepurchaseRate" },
    { 253, OFIX_Float, OFIX_Body, 0, 4, "253=", "LegFactor" },
    { 254, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "254=", "LegRedemptionDate" },
    { 255, OFIX_String, OFIX_Body, 0, 4, "255=", "CreditRating" },
    { 256, OFIX_String, OFIX_Body, 0, 4, "256=", "UnderlyingCreditRating" },
    { 257, OFIX_String, OFIX_Body, 0, 4, "257=", "LegCreditRating" },
    { 258, OFIX_Boolean, OFIX_Body, 0, 4, "258=", "TradedFlatSwitch" },
    { 259, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "259=", "BasisFeatureDate" },
    { 260, OFIX_Price, OFIX_Body, 0, 4, "260=", "BasisFeaturePrice" },
    { 262, OFIX_String, OFIX_Body, 0, 4, "262=", "MDReqID" },
    { 263, OFIX_Char, OFIX_Body, 0, 4, "263=", "SubscriptionRequestType" },
    { 264, OFIX_Int, OFIX_Body, 0, 4, "264=", "MarketDepth" },
    { 265, OFIX_Int, OFIX_Body, 0, 4, "265=", "MDUpdateType" },
    { 266, OFIX_Boolean, OFIX_Body, 0, 4, "266=", "AggregatedBook" },
    { 267, OFIX_NumInGroup, OFIX_Body, 0, 4, "267=", "NoMDEntryTypes" },
    { 268, OFIX_NumInGroup, OFIX_Body, 0, 4, "268=", "NoMDEntries" },
    { 269, OFIX_Char, OFIX_Body, 0, 4, "269=", "MDEntryType" },
    { 270, OFIX_Price, OFIX_Body, 0, 4, "270=", "MDEntryPx" },
    { 271, OFIX_Qty, OFIX_Body, 0, 4, "271=", "MDEntrySize" },
    { 272, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "272=", "MDEntryDate" },
    { 273, OFIX_UTCTimeOnly, OFIX_Body, 0, 4, "273=", "MDEntryTime" },
    { 274, OFIX_Char, OFIX_Body, 0, 4, "274=", "TickDirection" },
    { 275, OFIX_Exchange, OFIX_Body, 0, 4, "275=", "MDMkt" },
    { 276, OFIX_MultipleValueString, OFIX_Body, 0, 4, "276=", "QuoteCondition" },
    { 277, OFIX_MultipleValueString, OFIX_Body, 0, 4, "277=", "TradeCondition" },
    { 278, OFIX_String, OFIX_Body, 0, 4, "278=", "MDEntryID" },
    { 279, OFIX_Char, OFIX_Body, 0, 4, "279=", "MDUpdateAction" },
    { 280, OFIX_String, OFIX_Body, 0, 4, "280=", "MDEntryRefID" },
    { 281, OFIX_Char, OFIX_Body, 0, 4, "281=", "MDReqRejReason" },
    { 282, OFIX_String, OFIX_Body, 0, 4, "282=", "MDEntryOriginator" },
    { 283, OFIX_String, OFIX_Body, 0, 4, "283=", "LocationID" },
    { 284, OFIX_String, OFIX_Body, 0, 4, "284=", "DeskID" },
    { 285, OFIX_Char, OFIX_Body, 0, 4, "285=", "DeleteReason" },
    { 286, OFIX_MultipleValueString, OFIX_Body, 0, 4, "286=", "OpenCloseSettleFlag" },
    { 287, OFIX_Int, OFIX_Body, 0, 4, "287=", "SellerDays" },
    { 288, OFIX_String, OFIX_Body, 0, 4, "288=", "MDEntryBuyer" },
    { 289, OFIX_String, OFIX_Body, 0, 4, "289=", "MDEntrySeller" },
    { 290, OFIX_Int, OFIX_Body, 0, 4, "290=", "MDEntryPositionNo" },
    { 291, OFIX_MultipleValueString, OFIX_Body, 0, 4, "291=", "FinancialStatus" },
    { 292, OFIX_MultipleValueString, OFIX_Body, 0, 4, "292=", "CorporateAction" },
    { 293, OFIX_Qty, OFIX_Body, 0, 4, "293=", "DefBidSize" },
    { 294, OFIX_Qty, OFIX_Body, 0, 4, "294=", "DefOfferSize" },
    { 295, OFIX_NumInGroup, OFIX_Body, 0, 4, "295=", "NoQuoteEntries" },
    { 296, OFIX_NumInGroup, OFIX_Body, 0, 4, "296=", "NoQuoteSets" },
    { 297, OFIX_Int, OFIX_Body, 0, 4, "297=", "QuoteStatus" },
    { 298, OFIX_Int, OFIX_Body, 0, 4, "298=", "QuoteCancelType" },
    { 299, OFIX_String, OFIX_Body, 0, 4, "299=", "QuoteEntryID" },
    { 300, OFIX_Int, OFIX_Body, 0, 4, "300=", "QuoteRejectReason" },
    { 301, OFIX_Int, OFIX_Body, 0, 4, "301=", "QuoteResponseLevel" },
    { 302, OFIX_String, OFIX_Body, 0, 4, "302=", "QuoteSetID" },
    { 303, OFIX_Int, OFIX_Body, 0, 4, "303=", "QuoteRequestType" },
    { 304, OFIX_Int, OFIX_Body, 0, 4, "304=", "TotQuoteEntries" },
    { 305, OFIX_String, OFIX_Body, 0, 4, "305=", "UnderlyingSecurityIDSource" },
    { 306, OFIX_String, OFIX_Body, 0, 4, "306=", "UnderlyingIssuer" },
    { 307, OFIX_String, OFIX_Body, 0, 4, "307=", "UnderlyingSecurityDesc" },
    { 308, OFIX_Exchange, OFIX_Body, 0, 4, "308=", "UnderlyingSecurityExchange" },
    { 309, OFIX_String, OFIX_Body, 0, 4, "309=", "UnderlyingSecurityID" },
    { 310, OFIX_String, OFIX_Body, 0, 4, "310=", "UnderlyingSecurityType" },
    { 311, OFIX_String, OFIX_Body, 0, 4, "311=", "UnderlyingSymbol" },
    { 312, OFIX_String, OFIX_Body, 0, 4, "312=", "UnderlyingSymbolSfx" },
    { 313, OFIX_MonthYear, OFIX_Body, 0, 4, "313=", "UnderlyingMaturityMonthYear" },
    { 314, OFIX_DayOfMonth, OFIX_Body, 0, 4, "314=", "UnderlyingMaturityDay" },
    { 315, OFIX_Int, OFIX_Body, 0, 4, "315=", "UnderlyingPutOrCall" },
    { 316, OFIX_Price, OFIX_Body, 0, 4, "316=", "UnderlyingStrikePrice" },
    { 317, OFIX_Char, OFIX_Body, 0, 4, "317=", "UnderlyingOptAttribute" },
    { 318, OFIX_Currency, OFIX_Body, 0, 4, "318=", "UnderlyingCurrency" },
    { 319, OFIX_Qty, OFIX_Body, 0, 4, "319=", "RatioQty" },
    { 320, OFIX_String, OFIX_Body, 0, 4, "320=", "SecurityReqID" },
    { 321, OFIX_Int, OFIX_Body, 0, 4, "321=", "SecurityRequestType" },
    { 322, OFIX_String, OFIX_Body, 0, 4, "322=", "SecurityResponseID" },
    { 323, OFIX_Int, OFIX_Body, 0, 4, "323=", "SecurityResponseType" },
    { 324, OFIX_String, OFIX_Body, 0, 4, "324=", "SecurityStatusReqID" },
    { 325, OFIX_Boolean, OFIX_Body, 0, 4, "325=", "UnsolicitedIndicator" },
    { 326, OFIX_Int, OFIX_Body, 0, 4, "326=", "SecurityTradingStatus" },
    { 327, OFIX_Char, OFIX_Body, 0, 4, "327=", "HaltReason" },
    { 328, OFIX_Boolean, OFIX_Body, 0, 4, "328=", "InViewOfCommon" },
    { 329, OFIX_Boolean, OFIX_Body, 0, 4, "329=", "DueToRelated" },
    { 330, OFIX_Qty, OFIX_Body, 0, 4, "330=", "BuyVolume" },
    { 331, OFIX_Qty, OFIX_Body, 0, 4, "331=", "SellVolume" },
    { 332, OFIX_Price, OFIX_Body, 0, 4, "332=", "HighPx" },
    { 333, OFIX_Price, OFIX_Body, 0, 4, "333=", "LowPx" },
    { 334, OFIX_Int, OFIX_Body, 0, 4, "334=", "Adjustment" },
    { 335, OFIX_String, OFIX_Body, 0, 4, "335=", "TradSesReqID" },
    { 336, OFIX_String, OFIX_Body, 0, 4, "336=", "TradingSessionID" },
    { 337, OFIX_String, OFIX_Body, 0, 4, "337=", "ContraTrader" },
    { 338, OFIX_Int, OFIX_Body, 0, 4, "338=", "TradSesMethod" },
    { 339, OFIX_Int, OFIX_Body, 0, 4, "339=", "TradSesMode" },
    { 340, OFIX_Int, OFIX_Body, 0, 4, "340=", "TradSesStatus" },
    { 341, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "341=", "TradSesStartTime" },
    { 342, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "342=", "TradSesOpenTime" },
    { 343, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "343=", "TradSesPreCloseTime" },
    { 344, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "344=", "TradSesCloseTime" },
    { 345, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "345=", "TradSesEndTime" },
    { 346, OFIX_Int, OFIX_Body, 0, 4, "346=", "NumberOfOrders" },
    { 347, OFIX_String, OFIX_Header, 0, 4, "347=", "MessageEncoding" },
    { 348, OFIX_Length, OFIX_Body, 349, 4, "348=", "EncodedIssuerLen" },
    { 349, OFIX_Data, OFIX_Body, 348, 4, "349=", "EncodedIssuer" },
    { 350, OFIX_Length, OFIX_Body, 351, 4, "350=", "EncodedSecurityDescLen" },
    { 351, OFIX_Data, OFIX_Body, 350, 4, "351=", "EncodedSecurityDesc" },
    { 352, OFIX_Length, OFIX_Body, 353, 4, "352=", "EncodedListExecInstLen" },
    { 353, OFIX_Data, OFIX_Body, 352, 4, "353=", "EncodedListExecInst" },
    { 354, OFIX_Length, OFIX_Body, 355, 4, "354=", "EncodedTextLen" },
    { 355, OFIX_Data, OFIX_Body, 354, 4, "355=", "EncodedText" },
    { 356, OFIX_Length, OFIX_Body, 357, 4, "356=", "EncodedSubjectLen" },
    { 357, OFIX_Data, OFIX_Body, 356, 4, "357=", "EncodedSubject" },
    { 358, OFIX_Length, OFIX_Body, 359, 4, "358=", "EncodedHeadlineLen" },
    { 359, OFIX_Data, OFIX_Body, 358, 4, "359=", "EncodedHeadline" },
    { 360, OFIX_Length, OFIX_Body, 361, 4, "360=", "EncodedAllocTextLen" },
    { 361, OFIX_Data, OFIX_Body, 360, 4, "361=", "EncodedAllocText" },
    { 362, OFIX_Length, OFIX_Body, 363, 4, "362=", "EncodedUnderlyingIssuerLen" },
    { 363, OFIX_Data, OFIX_Body, 362, 4, "363=", "EncodedUnderlyingIssuer" },
    { 364, OFIX_Length, OFIX_Body, 365, 4, "364=", "EncodedUnderlyingSecurityDescLen" },
    { 365, OFIX_Data, OFIX_Body, 364, 4, "365=", "EncodedUnderlyingSecurityDesc" },
    { 366, OFIX_Price, OFIX_Body, 0, 4, "366=", "AllocPrice" },
    { 367, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "367=", "QuoteSetValidUntilTime" },
    { 368, OFIX_Int, OFIX_Body, 0, 4, "368=", "QuoteEntryRejectReason" },
    { 369, OFIX_SeqNum, OFIX_Header, 0, 4, "369=", "LastMsgSeqNumProcessed" },
    { 370, OFIX_UTCTimestamp, OFIX_Header, 0, 4, "370=", "OnBehalfOfSendingTime" },
    { 371, OFIX_Int, OFIX_Body, 0, 4, "371=", "RefTagID" },
    { 372, OFIX_String, OFIX_Body, 0, 4, "372=", "RefMsgType" },
    { 373, OFIX_Int, OFIX_Body, 0, 4, "373=", "SessionRejectReason" },
    { 374, OFIX_Char, OFIX_Body, 0, 4, "374=", "BidRequestTransType" },
    { 375, OFIX_String, OFIX_Body, 0, 4, "375=", "ContraBroker" },
    { 376, OFIX_String, OFIX_Body, 0, 4, "376=", "ComplianceID" },
    { 377, OFIX_Boolean, OFIX_Body, 0, 4, "377=", "SolicitedFlag" },
    { 378, OFIX_Int, OFIX_Body, 0, 4, "378=", "ExecRestatementReason" },
    { 379, OFIX_String, OFIX_Body, 0, 4, "379=", "BusinessRejectRefID" },
    { 380, OFIX_Int, OFIX_Body, 0, 4, "380=", "BusinessRejectReason" },
    { 381, OFIX_Amt, OFIX_Body, 0, 4, "381=", "GrossTradeAmt" },
    { 382, OFIX_NumInGroup, OFIX_Body, 0, 4, "382=", "NoContraBrokers" },
    { 383, OFIX_Length, OFIX_Body, 0, 4, "383=", "MaxMessageSize" },
    { 384, OFIX_NumInGroup, OFIX_Body, 0, 4, "384=", "NoMsgTypes" },
    { 385, OFIX_Char, OFIX_Body, 0, 4, "385=", "MsgDirection" },
    { 386, OFIX_NumInGroup, OFIX_Body, 0, 4, "386=", "NoTradingSessions" },
    { 387, OFIX_Qty, OFIX_Body, 0, 4, "387=", "TotalVolumeTraded" },
    { 388, OFIX_Char, OFIX_Body, 0, 4, "388=", "DiscretionInst" },
    { 389, OFIX_PriceOffset, OFIX_Body, 0, 4, "389=", "DiscretionOffset" },
    { 390, OFIX_String, OFIX_Body, 0, 4, "390=", "BidID" },
    { 391, OFIX_String, OFIX_Body, 0, 4, "391=", "ClientBidID" },
    { 392, OFIX_String, OFIX_Body, 0, 4, "392=", "ListName" },
    { 393, OFIX_Int, OFIX_Body, 0, 4, "393=", "TotalNumSecurities" },
    { 394, OFIX_Int, OFIX_Body, 0, 4, "394=", "BidType" },
    { 395, OFIX_Int, OFIX_Body, 0, 4, "395=", "NumTickets" },
    { 396, OFIX_Amt, OFIX_Body, 0, 4, "396=", "SideValue1" },
    { 397, OFIX_Amt, OFIX_Body, 0, 4, "397=", "SideValue2" },
    { 398, OFIX_NumInGroup, OFIX_Body, 0, 4, "398=", "NoBidDescriptors" },
    { 399, OFIX_Int, OFIX_Body, 0, 4, "399=", "BidDescriptorType" },
    { 400, OFIX_String, OFIX_Body, 0, 4, "400=", "BidDescriptor" },
    { 401, OFIX_Int, OFIX_Body, 0, 4, "401=", "SideValueInd" },
    { 402, OFIX_Percentage, OFIX_Body, 0, 4, "402=", "LiquidityPctLow" },
    { 403, OFIX_Percentage, OFIX_Body, 0, 4, "403=", "LiquidityPctHigh" },
    { 404, OFIX_Amt, OFIX_Body, 0, 4, "404=", "LiquidityValue" },
    { 405, OFIX_Percentage, OFIX_Body, 0, 4, "405=", "EFPTrackingError" },
    { 406, OFIX_Amt, OFIX_Body, 0, 4, "406=", "FairValue" },
    { 407, OFIX_Percentage, OFIX_Body, 0, 4, "407=", "OutsideIndexPct" },
    { 408, OFIX_Amt, OFIX_Body, 0, 4, "408=", "ValueOfFutures" },
    { 409, OFIX_Int, OFIX_Body, 0, 4, "409=", "LiquidityIndType" },
    { 410, OFIX_Percentage, OFIX_Body, 0, 4, "410=", "WtAverageLiquidity" },
    { 411, OFIX_Boolean, OFIX_Body, 0, 4, "411=", "ExchangeForPhysical" },
    { 412, OFIX_Amt, OFIX_Body, 0, 4, "412=", "OutMainCntryUIndex" },
    { 413, OFIX_Percentage, OFIX_Body, 0, 4, "413=", "CrossPercent" },
    { 414, OFIX_Int, OFIX_Body, 0, 4, "414=", "ProgRptReqs" },
    { 415, OFIX_Int, OFIX_Body, 0, 4, "415=", "ProgPeriodInterval" },
    { 416, OFIX_Int, OFIX_Body, 0, 4, "416=", "IncTaxInd" },
    { 417, OFIX_Int, OFIX_Body, 0, 4, "417=", "NumBidders" },
    { 418, OFIX_Char, OFIX_Body, 0, 4, "418=", "TradeType" },
    { 419, OFIX_Char, OFIX_Body, 0, 4, "419=", "BasisPxType" },
    { 420, OFIX_NumInGroup, OFIX_Body, 0, 4, "420=", "NoBidComponents" },
    { 421, OFIX_Country, OFIX_Body, 0, 4, "421=", "Country" },
    { 422, OFIX_Int, OFIX_Body, 0, 4, "422=", "TotNoStrikes" },
    { 423, OFIX_Int, OFIX_Body, 0, 4, "423=", "PriceType" },
    { 424, OFIX_Qty, OFIX_Body, 0, 4, "424=", "DayOrderQty" },
    { 425, OFIX_Qty, OFIX_Body, 0, 4, "425=", "DayCumQty" },
    { 426, OFIX_Price, OFIX_Body, 0, 4, "426=", "DayAvgPx" },
    { 427, OFIX_Int, OFIX_Body, 0, 4, "427=", "GTBookingInst" },
    { 428, OFIX_NumInGroup, OFIX_Body, 0, 4, "428=", "NoStrikes" },
    { 429, OFIX_Int, OFIX_Body, 0, 4, "429=", "ListStatusType" },
    { 430, OFIX_Int, OFIX_Body, 0, 4, "430=", "NetGrossInd" },
    { 431, OFIX_Int, OFIX_Body, 0, 4, "431=", "ListOrderStatus" },
    { 432, OFIX_LocalMktDate, OFIX_Body, 0, 4, "432=", "ExpireDate" },
    { 433, OFIX_Char, OFIX_Body, 0, 4, "433=", "ListExecInstType" },
    { 434, OFIX_Char, OFIX_Body, 0, 4, "434=", "CxlRejResponseTo" },
    { 435, OFIX_Percentage, OFIX_Body, 0, 4, "435=", "UnderlyingCouponRate" },
    { 436, OFIX_Float, OFIX_Body, 0, 4, "436=", "UnderlyingContractMultiplier" },
    { 437, OFIX_Qty, OFIX_Body, 0, 4, "437=", "ContraTradeQty" },
    { 438, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "438=", "ContraTradeTime" },
    { 439, OFIX_String, OFIX_Body, 0, 4, "439=", "ClearingFirm" },
    { 440, OFIX_String, OFIX_Body, 0, 4, "440=", "ClearingAccount" },
    { 441, OFIX_Int, OFIX_Body, 0, 4, "441=", "LiquidityNumSecurities" },
    { 442, OFIX_Char, OFIX_Body, 0, 4, "442=", "MultiLegReportingType" },
    { 443, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "443=", "StrikeTime" },
    { 444, OFIX_String, OFIX_Body, 0, 4, "444=", "ListStatusText" },
    { 445, OFIX_Length, OFIX_Body, 446, 4, "445=", "EncodedListStatusTextLen" },
    { 446, OFIX_Data, OFIX_Body, 445, 4, "446=", "EncodedListStatusText" },
    { 447, OFIX_Char, OFIX_Body, 0, 4, "447=", "PartyIDSource" },
    { 448, OFIX_String, OFIX_Body, 0, 4, "448=", "PartyID" },
    { 449, OFIX_UTCDateOnly, OFIX_Body, 0, 4, "449=", "TotalVolumeTradedDate" },
    { 450, OFIX_UTCTimeOnly, OFIX_Body, 0, 4, "450=", "TotalVolumeTradedTime" },
    { 451, OFIX_PriceOffset, OFIX_Body, 0, 4, "451=", "NetChgPrevDay" },
    { 452, OFIX_Int, OFIX_Body, 0, 4, "452=", "PartyRole" },
    { 453, OFIX_NumInGroup, OFIX_Body, 0, 4, "453=", "NoPartyIDs" },
    { 454, OFIX_NumInGroup, OFIX_Body, 0, 4, "454=", "NoSecurityAltID" },
    { 455, OFIX_String, OFIX_Body, 0, 4, "455=", "SecurityAltID" },
    { 456, OFIX_String, OFIX_Body, 0, 4, "456=", "SecurityAltIDSource" },
    { 457, OFIX_NumInGroup, OFIX_Body, 0, 4, "457=", "NoUnderlyingSecurityAltID" },
    { 458, OFIX_String, OFIX_Body, 0, 4, "458=", "UnderlyingSecurityAltID" },
    { 459, OFIX_String, OFIX_Body, 0, 4, "459=", "UnderlyingSecurityAltIDSource" },
    { 460, OFIX_Int, OFIX_Body, 0, 4, "460=", "Product" },
    { 461, OFIX_String, OFIX_Body, 0, 4, "461=", "CFICode" },
    { 462, OFIX_Int, OFIX_Body, 0, 4, "462=", "UnderlyingProduct" },
    { 463, OFIX_String, OFIX_Body, 0, 4, "463=", "UnderlyingCFICode" },
    { 464, OFIX_Boolean, OFIX_Body, 0, 4, "464=", "TestMessageIndicator" },
    { 465, OFIX_Int, OFIX_Body, 0, 4, "465=", "QuantityType" },
    { 466, OFIX_String, OFIX_Body, 0, 4, "466=", "BookingRefID" },
    { 467, OFIX_String, OFIX_Body, 0, 4, "467=", "IndividualAllocID" },
    { 468, OFIX_Char, OFIX_Body, 0, 4, "468=", "RoundingDirection" },
    { 469, OFIX_Float, OFIX_Body, 0, 4, "469=", "RoundingModulus" },
    { 470, OFIX_Country, OFIX_Body, 0, 4, "470=", "CountryOfIssue" },
    { 471, OFIX_String, OFIX_Body, 0, 4, "471=", "StateOrProvinceOfIssue" },
    { 472, OFIX_String, OFIX_Body, 0, 4, "472=", "LocaleOfIssue" },
    { 473, OFIX_NumInGroup, OFIX_Body, 0, 4, "473=", "NoRegistDtls" },
    { 474, OFIX_String, OFIX_Body, 0, 4, "474=", "MailingDtls" },
    { 475, OFIX_Country, OFIX_Body, 0, 4, "475=", "InvestorCountryOfResidence" },
    { 476, OFIX_String, OFIX_Body, 0, 4, "476=", "PaymentRef" },
    { 477, OFIX_Int, OFIX_Body, 0, 4, "477=", "DistribPaymentMethod" },
    { 478, OFIX_Currency, OFIX_Body, 0, 4, "478=", "CashDistribCurr" },
    { 479, OFIX_Currency, OFIX_Body, 0, 4, "479=", "CommCurrency" },
    { 480, OFIX_Char, OFIX_Body, 0, 4, "480=", "CancellationRights" },
    { 481, OFIX_Char, OFIX_Body, 0, 4, "481=", "MoneyLaunderingStatus" },
    { 482, OFIX_String, OFIX_Body, 0, 4, "482=", "MailingInst" },
    { 483, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "483=", "TransBkdTime" },
    { 484, OFIX_Char, OFIX_Body, 0, 4, "484=", "ExecPriceType" },
    { 485, OFIX_Float, OFIX_Body, 0, 4, "485=", "ExecPriceAdjustment" },
    { 486, OFIX_LocalMktDate, OFIX_Body, 0, 4, "486=", "DateOfBirth" },
    { 487, OFIX_Char, OFIX_Body, 0, 4, "487=", "TradeReportTransType" },
    { 488, OFIX_String, OFIX_Body, 0, 4, "488=", "CardHolderName" },
    { 489, OFIX_String, OFIX_Body, 0, 4, "489=", "CardNumber" },
    { 490, OFIX_LocalMktDate, OFIX_Body, 0, 4, "490=", "CardExpDate" },
    { 491, OFIX_String, OFIX_Body, 0, 4, "491=", "CardIssNo" },
    { 492, OFIX_Int, OFIX_Body, 0, 4, "492=", "PaymentMethod" },
    { 493, OFIX_String, OFIX_Body, 0, 4, "493=", "RegistAcctType" },
    { 494, OFIX_String, OFIX_Body, 0, 4, "494=", "Designation" },
    { 495, OFIX_Int, OFIX_Body, 0, 4, "495=", "TaxAdvantageType" },
    { 496, OFIX_String, OFIX_Body, 0, 4, "496=", "RegistRejReasonText" },
    { 497, OFIX_Char, OFIX_Body, 0, 4, "497=", "FundRenewWaiv" },
    { 498, OFIX_String, OFIX_Body, 0, 4, "498=", "CashDistribAgentName" },
    { 499, OFIX_String, OFIX_Body, 0, 4, "499=", "CashDistribAgentCode" },
    { 500, OFIX_String, OFIX_Body, 0, 4, "500=", "CashDistribAgentAcctNumber" },
    { 501, OFIX_String, OFIX_Body, 0, 4, "501=", "CashDistribPayRef" },
    { 502, OFIX_String, OFIX_Body, 0, 4, "502=", "CashDistribAgentAcctName" },
    { 503, OFIX_LocalMktDate, OFIX_Body, 0, 4, "503=", "CardStartDate" },
    { 504, OFIX_LocalMktDate, OFIX_Body, 0, 4, "504=", "PaymentDate" },
    { 505, OFIX_String, OFIX_Body, 0, 4, "505=", "PaymentRemitterID" },
    { 506, OFIX_Char, OFIX_Body, 0, 4, "506=", "RegistStatus" },
    { 507, OFIX_Int, OFIX_Body, 0, 4, "507=", "RegistRejReasonCode" },
    { 508, OFIX_String, OFIX_Body, 0, 4, "508=", "RegistRefID" },
    { 509, OFIX_String, OFIX_Body, 0, 4, "509=", "RegistDetls" },
    { 510, OFIX_NumInGroup, OFIX_Body, 0, 4, "510=", "NoDistribInsts" },
    { 511, OFIX_String, OFIX_Body, 0, 4, "511=", "RegistEmail" },
    { 512, OFIX_Percentage, OFIX_Body, 0, 4, "512=", "DistribPercentage" },
    { 513, OFIX_String, OFIX_Body, 0, 4, "513=", "RegistID" },
    { 514, OFIX_Char, OFIX_Body, 0, 4, "514=", "RegistTransType" },
    { 515, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "515=", "ExecValuationPoint" },
    { 516, OFIX_Percentage, OFIX_Body, 0, 4, "516=", "OrderPercent" },
    { 517, OFIX_Char, OFIX_Body, 0, 4, "517=", "OwnershipType" },
    { 518, OFIX_NumInGroup, OFIX_Body, 0, 4, "518=", "NoContAmts" },
    { 519, OFIX_Int, OFIX_Body, 0, 4, "519=", "ContAmtType" },
    { 520, OFIX_Float, OFIX_Body, 0, 4, "520=", "ContAmtValue" },
    { 521, OFIX_Currency, OFIX_Body, 0, 4, "521=", "ContAmtCurr" },
    { 522, OFIX_Int, OFIX_Body, 0, 4, "522=", "OwnerType" },
    { 523, OFIX_String, OFIX_Body, 0, 4, "523=", "PartySubID" },
    { 524, OFIX_String, OFIX_Body, 0, 4, "524=", "NestedPartyID" },
    { 525, OFIX_Char, OFIX_Body, 0, 4, "525=", "NestedPartyIDSource" },
    { 526, OFIX_String, OFIX_Body, 0, 4, "526=", "SecondaryClOrdID" },
    { 527, OFIX_String, OFIX_Body, 0, 4, "527=", "SecondaryExecID" },
    { 528, OFIX_Char, OFIX_Body, 0, 4, "528=", "OrderCapacity" },
    { 529, OFIX_MultipleValueString, OFIX_Body, 0, 4, "529=", "OrderRestrictions" },
    { 530, OFIX_Char, OFIX_Body, 0, 4, "530=", "MassCancelRequestType" },
    { 531, OFIX_Char, OFIX_Body, 0, 4, "531=", "MassCancelResponse" },
    { 532, OFIX_Char, OFIX_Body, 0, 4, "532=", "MassCancelRejectReason" },
    { 533, OFIX_Int, OFIX_Body, 0, 4, "533=", "TotalAffectedOrders" },
    { 534, OFIX_Int, OFIX_Body, 0, 4, "534=", "NoAffectedOrders" },
    { 535, OFIX_String, OFIX_Body, 0, 4, "535=", "AffectedOrderID" },
    { 536, OFIX_String, OFIX_Body, 0, 4, "536=", "AffectedSecondaryOrderID" },
    { 537, OFIX_Int, OFIX_Body, 0, 4, "537=", "QuoteType" },
    { 538, OFIX_Int, OFIX_Body, 0, 4, "538=", "NestedPartyRole" },
    { 539, OFIX_NumInGroup, OFIX_Body, 0, 4, "539=", "NoNestedPartyIDs" },
    { 540, OFIX_Amt, OFIX_Body, 0, 4, "540=", "TotalAccruedInterestAmt" },
    { 541, OFIX_LocalMktDate, OFIX_Body, 0, 4, "541=", "MaturityDate" },
    { 542, OFIX_LocalMktDate, OFIX_Body, 0, 4, "542=", "UnderlyingMaturityDate" },
    { 543, OFIX_String, OFIX_Body, 0, 4, "543=", "InstrRegistry" },
    { 544, OFIX_Char, OFIX_Body, 0, 4, "544=", "CashMargin" },
    { 545, OFIX_String, OFIX_Body, 0, 4, "545=", "NestedPartySubID" },
    { 546, OFIX_MultipleValueString, OFIX_Body, 0, 4, "546=", "Scope" },
    { 547, OFIX_Boolean, OFIX_Body, 0, 4, "547=", "MDImplicitDelete" },
    { 548, OFIX_String, OFIX_Body, 0, 4, "548=", "CrossID" },
    { 549, OFIX_Int, OFIX_Body, 0, 4, "549=", "CrossType" },
    { 550, OFIX_Int, OFIX_Body, 0, 4, "550=", "CrossPrioritization" },
    { 551, OFIX_String, OFIX_Body, 0, 4, "551=", "OrigCrossID" },
    { 552, OFIX_NumInGroup, OFIX_Body, 0, 4, "552=", "NoSides" },
    { 553, OFIX_String, OFIX_Body, 0, 4, "553=", "Username" },
    { 554, OFIX_String, OFIX_Body, 0, 4, "554=", "Password" },
    { 555, OFIX_NumInGroup, OFIX_Body, 0, 4, "555=", "NoLegs" },
    { 556, OFIX_Currency, OFIX_Body, 0, 4, "556=", "LegCurrency" },
    { 557, OFIX_Int, OFIX_Body, 0, 4, "557=", "TotalNumSecurityTypes" },
    { 558, OFIX_NumInGroup, OFIX_Body, 0, 4, "558=", "NoSecurityTypes" },
    { 559, OFIX_Int, OFIX_Body, 0, 4, "559=", "SecurityListRequestType" },
    { 560, OFIX_Int, OFIX_Body, 0, 4, "560=", "SecurityRequestResult" },
    { 561, OFIX_Qty, OFIX_Body, 0, 4, "561=", "RoundLot" },
    { 562, OFIX_Qty, OFIX_Body, 0, 4, "562=", "MinTradeVol" },
    { 563, OFIX_Int, OFIX_Body, 0, 4, "563=", "MultiLegRptTypeReq" },
    { 564, OFIX_Char, OFIX_Body, 0, 4, "564=", "LegPositionEffect" },
    { 565, OFIX_Int, OFIX_Body, 0, 4, "565=", "LegCoveredOrUncovered" },
    { 566, OFIX_Price, OFIX_Body, 0, 4, "566=", "LegPrice" },
    { 567, OFIX_Int, OFIX_Body, 0, 4, "567=", "TradSesStatusRejReason" },
    { 568, OFIX_String, OFIX_Body, 0, 4, "568=", "TradeRequestID" },
    { 569, OFIX_Int, OFIX_Body, 0, 4, "569=", "TradeRequestType" },
    { 570, OFIX_Boolean, OFIX_Body, 0, 4, "570=", "PreviouslyReported" },
    { 571, OFIX_String, OFIX_Body, 0, 4, "571=", "TradeReportID" },
    { 572, OFIX_String, OFIX_Body, 0, 4, "572=", "TradeReportRefID" },
    { 573, OFIX_Char, OFIX_Body, 0, 4, "573=", "MatchStatus" },
    { 574, OFIX_String, OFIX_Body, 0, 4, "574=", "MatchType" },
    { 575, OFIX_Boolean, OFIX_Body, 0, 4, "575=", "OddLot" },
    { 576, OFIX_Int, OFIX_Body, 0, 4, "576=", "NoClearingInstructions" },
    { 577, OFIX_Int, OFIX_Body, 0, 4, "577=", "ClearingInstruction" },
    { 578, OFIX_String, OFIX_Body, 0, 4, "578=", "TradeInputSource" },
    { 579, OFIX_String, OFIX_Body, 0, 4, "579=", "TradeInputDevice" },
    { 580, OFIX_Int, OFIX_Body, 0, 4, "580=", "NoDates" },
    { 581, OFIX_Int, OFIX_Body, 0, 4, "581=", "AccountType" },
    { 582, OFIX_Int, OFIX_Body, 0, 4, "582=", "CustOrderCapacity" },
    { 583, OFIX_String, OFIX_Body, 0, 4, "583=", "ClOrdLinkID" },
    { 584, OFIX_String, OFIX_Body, 0, 4, "584=", "MassStatusReqID" },
    { 585, OFIX_Int, OFIX_Body, 0, 4, "585=", "MassStatusReqType" },
    { 586, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "586=", "OrigOrdModTime" },
    { 587, OFIX_Char, OFIX_Body, 0, 4, "587=", "LegSettlmntTyp" },
    { 588, OFIX_LocalMktDate, OFIX_Body, 0, 4, "588=", "LegFutSettDate" },
    { 589, OFIX_Char, OFIX_Body, 0, 4, "589=", "DayBookingInst" },
    { 590, OFIX_Char, OFIX_Body, 0, 4, "590=", "BookingUnit" },
    { 591, OFIX_Char, OFIX_Body, 0, 4, "591=", "PreallocMethod" },
    { 592, OFIX_Country, OFIX_Body, 0, 4, "592=", "UnderlyingCountryOfIssue" },
    { 593, OFIX_String, OFIX_Body, 0, 4, "593=", "UnderlyingStateOrProvinceOfIssue" },
    { 594, OFIX_String, OFIX_Body, 0, 4, "594=", "UnderlyingLocaleOfIssue" },
    { 595, OFIX_String, OFIX_Body, 0, 4, "595=", "UnderlyingInstrRegistry" },
    { 596, OFIX_Country, OFIX_Body, 0, 4, "596=", "LegCountryOfIssue" },
    { 597, OFIX_String, OFIX_Body, 0, 4, "597=", "LegStateOrProvinceOfIssue" },
    { 598, OFIX_String, OFIX_Body, 0, 4, "598=", "LegLocaleOfIssue" },
    { 599, OFIX_String, OFIX_Body, 0, 4, "599=", "LegInstrRegistry" },
    { 600, OFIX_String, OFIX_Body, 0, 4, "600=", "LegSymbol" },
    { 601, OFIX_String, OFIX_Body, 0, 4, "601=", "LegSymbolSfx" },
    { 602, OFIX_String, OFIX_Body, 0, 4, "602=", "LegSecurityID" },
    { 603, OFIX_String, OFIX_Body, 0, 4, "603=", "LegSecurityIDSource" },
    { 604, OFIX_String, OFIX_Body, 0, 4, "604=", "NoLegSecurityAltID" },
    { 605, OFIX_String, OFIX_Body, 0, 4, "605=", "LegSecurityAltID" },
    { 606, OFIX_String, OFIX_Body, 0, 4, "606=", "LegSecurityAltIDSource" },
    { 607, OFIX_Int, OFIX_Body, 0, 4, "607=", "LegProduct" },
    { 608, OFIX_String, OFIX_Body, 0, 4, "608=", "LegCFICode" },
    { 609, OFIX_String, OFIX_Body, 0, 4, "609=", "LegSecurityType" },
    { 610, OFIX_MonthYear, OFIX_Body, 0, 4, "610=", "LegMaturityMonthYear" },
    { 611, OFIX_LocalMktDate, OFIX_Body, 0, 4, "611=", "LegMaturityDate" },
    { 612, OFIX_Price, OFIX_Body, 0, 4, "612=", "LegStrikePrice" },
    { 613, OFIX_Char, OFIX_Body, 0, 4, "613=", "LegOptAttribute" },
    { 614, OFIX_Float, OFIX_Body, 0, 4, "614=", "LegContractMultiplier" },
    { 615, OFIX_Percentage, OFIX_Body, 0, 4, "615=", "LegCouponRate" },
    { 616, OFIX_Exchange, OFIX_Body, 0, 4, "616=", "LegSecurityExchange" },
    { 617, OFIX_String, OFIX_Body, 0, 4, "617=", "LegIssuer" },
    { 618, OFIX_Length, OFIX_Body, 619, 4, "618=", "EncodedLegIssuerLen" },
    { 619, OFIX_Data, OFIX_Body, 618, 4, "619=", "EncodedLegIssuer" },
    { 620, OFIX_String, OFIX_Body, 0, 4, "620=", "LegSecurityDesc" },
    { 621, OFIX_Length, OFIX_Body, 622, 4, "621=", "EncodedLegSecurityDescLen" },
    { 622, OFIX_Data, OFIX_Body, 621, 4, "622=", "EncodedLegSecurityDesc" },
    { 623, OFIX_Float, OFIX_Body, 0, 4, "623=", "LegRatioQty" },
    { 624, OFIX_Char, OFIX_Body, 0, 4, "624=", "LegSide" },
    { 625, OFIX_String, OFIX_Body, 0, 4, "625=", "TradingSessionSubID" },
    { 626, OFIX_Int, OFIX_Body, 0, 4, "626=", "AllocType" },
    { 627, OFIX_NumInGroup, OFIX_Header, 0, 4, "627=", "NoHops" },
    { 628, OFIX_String, OFIX_Header, 0, 4, "628=", "HopCompID" },
    { 629, OFIX_UTCTimestamp, OFIX_Header, 0, 4, "629=", "HopSendingTime" },
    { 630, OFIX_SeqNum, OFIX_Header, 0, 4, "630=", "HopRefID" },
    { 631, OFIX_Price, OFIX_Body, 0, 4, "631=", "MidPx" },
    { 632, OFIX_Percentage, OFIX_Body, 0, 4, "632=", "BidYield" },
    { 633, OFIX_Percentage, OFIX_Body, 0, 4, "633=", "MidYield" },
    { 634, OFIX_Percentage, OFIX_Body, 0, 4, "634=", "OfferYield" },
    { 635, OFIX_String, OFIX_Body, 0, 4, "635=", "ClearingFeeIndicator" },
    { 636, OFIX_Boolean, OFIX_Body, 0, 4, "636=", "WorkingIndicator" },
    { 637, OFIX_Price, OFIX_Body, 0, 4, "637=", "LegLastPx" },
    { 638, OFIX_Int, OFIX_Body, 0, 4, "638=", "PriorityIndicator" },
    { 639, OFIX_PriceOffset, OFIX_Body, 0, 4, "639=", "PriceImprovement" },
    { 640, OFIX_Price, OFIX_Body, 0, 4, "640=", "Price2" },
    { 641, OFIX_PriceOffset, OFIX_Body, 0, 4, "641=", "LastForwardPoints2" },
    { 642, OFIX_PriceOffset, OFIX_Body, 0, 4, "642=", "BidForwardPoints2" },
    { 643, OFIX_PriceOffset, OFIX_Body, 0, 4, "643=", "OfferForwardPoints2" },
    { 644, OFIX_String, OFIX_Body, 0, 4, "644=", "RFQReqID" },
    { 645, OFIX_Price, OFIX_Body, 0, 4, "645=", "MktBidPx" },
    { 646, OFIX_Price, OFIX_Body, 0, 4, "646=", "MktOfferPx" },
    { 647, OFIX_Qty, OFIX_Body, 0, 4, "647=", "MinBidSize" },
    { 648, OFIX_Qty, OFIX_Body, 0, 4, "648=", "MinOfferSize" },
    { 649, OFIX_String, OFIX_Body, 0, 4, "649=", "QuoteStatusReqID" },
    { 650, OFIX_Boolean, OFIX_Body, 0, 4, "650=", "LegalConfirm" },
    { 651, OFIX_Price, OFIX_Body, 0, 4, "651=", "UnderlyingLastPx" },
    { 652, OFIX_Qty, OFIX_Body, 0, 4, "652=", "UnderlyingLastQty" },
    { 653, OFIX_Int, OFIX_Body, 0, 4, "653=", "SecDefStatus" },
    { 654, OFIX_String, OFIX_Body, 0, 4, "654=", "LegRefID" },
    { 655, OFIX_String, OFIX_Body, 0, 4, "655=", "ContraLegRefID" },
    { 656, OFIX_Float, OFIX_Body, 0, 4, "656=", "SettlCurrBidFxRate" },
    { 657, OFIX_Float, OFIX_Body, 0, 4, "657=", "SettlCurrOfferFxRate" },
    { 658, OFIX_Int, OFIX_Body, 0, 4, "658=", "QuoteRequestRejectReason" },
    { 659, OFIX_String, OFIX_Body, 0, 4, "659=", "SideComplianceID" },
    { 0 }
};

// ----- Messages -----
// Heartbeat [0]

static struct _ofixGroupSpec	HeartbeatGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	HeartbeatGroups[] = {
    &HeartbeatGroup627,
    0
};

static struct _ofixMsgSpec	Heartbeat = {
    &fix43Spec, // version
    48, // tid
    "0", // type
    "Heartbeat", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    HeartbeatGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 112, false }, // TestReqID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TestRequest [1]

static struct _ofixGroupSpec	TestRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	TestRequestGroups[] = {
    &TestRequestGroup627,
    0
};

static struct _ofixMsgSpec	TestRequest = {
    &fix43Spec, // version
    49, // tid
    "1", // type
    "TestRequest", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TestRequestGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 112, true }, // TestReqID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ResendRequest [2]

static struct _ofixGroupSpec	ResendRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	ResendRequestGroups[] = {
    &ResendRequestGroup627,
    0
};

static struct _ofixMsgSpec	ResendRequest = {
    &fix43Spec, // version
    50, // tid
    "2", // type
    "ResendRequest", // name
    {0,0,0,0,0,0,0,29,1,2,33,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ResendRequestGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 7, true }, // BeginSeqNo
	{ 16, true }, // EndSeqNo
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Reject [3]

static struct _ofixGroupSpec	RejectGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	RejectGroups[] = {
    &RejectGroup627,
    0
};

static struct _ofixMsgSpec	Reject = {
    &fix43Spec, // version
    51, // tid
    "3", // type
    "Reject", // name
    {0,0,0,0,0,0,0,0,1,2,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,29,0,0,0,4,11,0,21,0,0,0,5,13,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,30,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RejectGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 45, true }, // RefSeqNum
	{ 371, false }, // RefTagID
	{ 372, false }, // RefMsgType
	{ 373, false }, // SessionRejectReason
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SequenceReset [4]

static struct _ofixGroupSpec	SequenceResetGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	SequenceResetGroups[] = {
    &SequenceResetGroup627,
    0
};

static struct _ofixMsgSpec	SequenceReset = {
    &fix43Spec, // version
    52, // tid
    "4", // type
    "SequenceReset", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,30,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,29,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SequenceResetGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 123, false }, // GapFillFlag
	{ 36, true }, // NewSeqNo
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Logout [5]

static struct _ofixGroupSpec	LogoutGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	LogoutGroups[] = {
    &LogoutGroup627,
    0
};

static struct _ofixMsgSpec	Logout = {
    &fix43Spec, // version
    53, // tid
    "5", // type
    "Logout", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    LogoutGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// IndicationOfInterest [6]

static struct _ofixGroupSpec	IndicationOfInterestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup199 = {
    199, // NoIOIQualifiers
    {
	{ 104, false }, // IOIQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup215 = {
    215, // NoRoutingIDs
    {
	{ 216, false }, // RoutingType
	{ 217, false }, // RoutingID
	{ 0, false }
    }
};

static ofixGroupSpec	IndicationOfInterestGroups[] = {
    &IndicationOfInterestGroup627,
    &IndicationOfInterestGroup454,
    &IndicationOfInterestGroup199,
    &IndicationOfInterestGroup215,
    0
};

static struct _ofixMsgSpec	IndicationOfInterest = {
    &fix43Spec, // version
    54, // tid
    "6", // type
    "IndicationOfInterest", // name
    {0,0,0,0,0,0,0,0,1,2,88,0,0,0,0,70,0,0,0,0,0,0,35,29,0,72,31,67,30,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,69,0,0,0,34,4,11,0,21,0,65,32,5,13,75,0,78,0,71,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,8,9,0,86,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,73,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,40,0,54,0,0,0,55,58,0,0,0,0,23,24,0,80,0,0,81,85,82,83,84,57,42,43,45,46,47,0,0,56,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,76,77,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,66,0,0,0,0,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    IndicationOfInterestGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 23, true }, // IOIid
	{ 28, true }, // IOITransType
	{ 26, false }, // IOIRefID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 54, true }, // Side
	{ 465, false }, // QuantityType
	{ 27, true }, // IOIQty
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 15, false }, // Currency
	{ 62, false }, // ValidUntilTime
	{ 25, false }, // IOIQltyInd
	{ 130, false }, // IOINaturalFlag
	{ 199, false }, // NoIOIQualifiers
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 60, false }, // TransactTime
	{ 149, false }, // URLLink
	{ 215, false }, // NoRoutingIDs
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 219, false }, // Benchmark
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Advertisement [7]

static struct _ofixGroupSpec	AdvertisementGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	AdvertisementGroups[] = {
    &AdvertisementGroup627,
    &AdvertisementGroup454,
    0
};

static struct _ofixMsgSpec	Advertisement = {
    &fix43Spec, // version
    55, // tid
    "7", // type
    "Advertisement", // name
    {0,0,29,31,65,30,0,0,1,2,80,0,0,0,0,68,0,0,0,0,0,0,35,0,0,0,0,0,0,0,75,0,0,0,10,3,0,0,0,0,0,0,0,19,67,0,0,0,34,4,11,0,21,66,0,32,5,13,71,0,70,0,0,0,0,33,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,79,8,9,0,78,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,54,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,42,43,45,46,47,0,0,56,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,72,73,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,0,0,0,0,0,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AdvertisementGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 2, true }, // AdvId
	{ 5, true }, // AdvTransType
	{ 3, false }, // AdvRefID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 4, true }, // AdvSide
	{ 53, true }, // Quantity
	{ 44, false }, // Price
	{ 15, false }, // Currency
	{ 75, false }, // TradeDate
	{ 60, false }, // TransactTime
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 149, false }, // URLLink
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ExecutionReport [8]

static struct _ofixGroupSpec	ExecutionReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup382 = {
    382, // NoContraBrokers
    {
	{ 375, false }, // ContraBroker
	{ 337, false }, // ContraTrader
	{ 437, false }, // ContraTradeQty
	{ 438, false }, // ContraTradeTime
	{ 655, false }, // ContraLegRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup518 = {
    518, // NoContAmts
    {
	{ 519, false }, // ContAmtType
	{ 520, false }, // ContAmtValue
	{ 521, false }, // ContAmtCurr
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup555 = {
    555, // NoLegs
    {
	{ 600, true }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 610, false }, // LegMaturityMonthYear
	{ 611, false }, // LegMaturityDate
	{ 248, false }, // LegCouponPaymentDate
	{ 249, false }, // LegIssueDate
	{ 250, false }, // LegRepoCollateralSecurityType
	{ 251, false }, // LegRepurchaseTerm
	{ 252, false }, // LegRepurchaseRate
	{ 253, false }, // LegFactor
	{ 257, false }, // LegCreditRating
	{ 599, false }, // LegInstrRegistry
	{ 596, false }, // LegCountryOfIssue
	{ 597, false }, // LegStateOrProvinceOfIssue
	{ 598, false }, // LegLocaleOfIssue
	{ 254, false }, // LegRedemptionDate
	{ 612, false }, // LegStrikePrice
	{ 613, false }, // LegOptAttribute
	{ 614, false }, // LegContractMultiplier
	{ 615, false }, // LegCouponRate
	{ 616, false }, // LegSecurityExchange
	{ 617, false }, // LegIssuer
	{ 618, false }, // EncodedLegIssuerLen
	{ 619, false }, // EncodedLegIssuer
	{ 620, false }, // LegSecurityDesc
	{ 621, false }, // EncodedLegSecurityDescLen
	{ 622, false }, // EncodedLegSecurityDesc
	{ 623, false }, // LegRatioQty
	{ 624, false }, // LegSide
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlmntTyp
	{ 588, false }, // LegFutSettDate
	{ 637, false }, // LegLastPx
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	ExecutionReportGroups[] = {
    &ExecutionReportGroup627,
    &ExecutionReportGroup453,
    &ExecutionReportGroup382,
    &ExecutionReportGroup454,
    &ExecutionReportGroup232,
    &ExecutionReportGroup518,
    &ExecutionReportGroup555,
    &ExecutionReportGroup604,
    &ExecutionReportGroup539,
    0
};

static struct _ofixMsgSpec	ExecutionReport = {
    &fix43Spec, // version
    56, // tid
    "8", // type
    "ExecutionReport", // name
    {0,50,0,0,0,0,131,0,1,2,190,33,139,140,130,107,0,43,114,44,0,164,62,0,0,0,0,0,0,128,125,121,119,0,10,3,0,29,95,46,100,34,0,19,102,0,0,118,61,4,11,0,21,0,92,59,5,13,169,110,137,0,0,55,56,60,39,0,0,0,0,0,0,0,0,136,0,167,0,0,0,0,0,0,0,0,0,0,0,189,8,9,0,188,0,0,0,20,0,103,0,0,0,48,0,0,86,89,0,0,165,166,0,138,0,6,15,0,159,160,161,0,22,0,0,0,113,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,45,129,96,0,0,162,163,150,152,153,0,0,0,0,0,0,0,66,111,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,173,172,123,124,0,0,30,0,67,0,81,0,0,0,82,85,0,0,168,104,23,24,0,0,0,0,143,0,144,145,146,84,69,70,72,73,74,37,151,83,93,0,0,147,148,158,157,71,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,154,155,156,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,25,87,88,90,91,0,0,170,171,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,108,109,49,0,0,149,38,0,0,0,0,0,105,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,101,132,133,134,135,0,0,0,0,112,0,0,0,0,0,0,0,0,0,175,0,0,0,0,0,0,0,0,0,0,36,63,0,0,0,0,0,64,65,0,0,0,94,0,0,98,99,77,78,79,0,0,0,0,0,0,141,176,177,0,180,182,183,0,0,0,0,0,0,0,0,179,0,0,142,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,178,0,181,97,0,186,0,0,0,0,0,0,0,31,32,115,116,0,0,0,0,0,0,0,0,0,0,0,68,0,76,57,0,0,0,40,42,0,41,0,0,0,187,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,117,35,0,0,0,0,0,52,53,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,28,0,0,0,0,0,0,0,58,47,0,184,185,0,174,0,0,0,0,0,0,0,0,0,122,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ExecutionReportGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 527, false }, // SecondaryExecID
	{ 11, false }, // ClOrdID
	{ 41, false }, // OrigClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 382, false }, // NoContraBrokers
	{ 66, false }, // ListID
	{ 548, false }, // CrossID
	{ 551, false }, // OrigCrossID
	{ 549, false }, // CrossType
	{ 17, true }, // ExecID
	{ 19, false }, // ExecRefID
	{ 150, true }, // ExecType
	{ 39, true }, // OrdStatus
	{ 636, false }, // WorkingIndicator
	{ 103, false }, // OrdRejReason
	{ 378, false }, // ExecRestatementReason
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 54, true }, // Side
	{ 232, false }, // NoStipulations
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 40, false }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 59, false }, // TimeInForce
	{ 168, false }, // EffectiveTime
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 18, false }, // ExecInst
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 47, false }, // Rule80A
	{ 32, false }, // LastQty
	{ 652, false }, // UnderlyingLastQty
	{ 31, false }, // LastPx
	{ 651, false }, // UnderlyingLastPx
	{ 194, false }, // LastSpotRate
	{ 195, false }, // LastForwardPoints
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 29, false }, // LastCapacity
	{ 151, true }, // LeavesQty
	{ 14, true }, // CumQty
	{ 6, true }, // AvgPx
	{ 424, false }, // DayOrderQty
	{ 425, false }, // DayCumQty
	{ 426, false }, // DayAvgPx
	{ 427, false }, // GTBookingInst
	{ 75, false }, // TradeDate
	{ 60, false }, // TransactTime
	{ 113, false }, // ReportToExch
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 381, false }, // GrossTradeAmt
	{ 157, false }, // NumDaysInterest
	{ 230, false }, // ExDate
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 258, false }, // TradedFlatSwitch
	{ 259, false }, // BasisFeatureDate
	{ 260, false }, // BasisFeaturePrice
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, false }, // NetMoney
	{ 119, false }, // SettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 21, false }, // HandlInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 77, false }, // PositionEffect
	{ 210, false }, // MaxShow
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 641, false }, // LastForwardPoints2
	{ 442, false }, // MultiLegReportingType
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 483, false }, // TransBkdTime
	{ 515, false }, // ExecValuationPoint
	{ 484, false }, // ExecPriceType
	{ 485, false }, // ExecPriceAdjustment
	{ 638, false }, // PriorityIndicator
	{ 639, false }, // PriceImprovement
	{ 518, false }, // NoContAmts
	{ 555, false }, // NoLegs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderCancelReject [9]

static struct _ofixGroupSpec	OrderCancelRejectGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelRejectGroups[] = {
    &OrderCancelRejectGroup627,
    0
};

static struct _ofixMsgSpec	OrderCancelReject = {
    &fix43Spec, // version
    57, // tid
    "9", // type
    "OrderCancelReject", // name
    {0,39,0,0,0,0,0,0,1,2,50,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,0,35,0,34,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,45,0,42,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,8,9,0,48,0,0,0,20,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,46,47,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,33,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderCancelRejectGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 11, true }, // ClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 41, true }, // OrigClOrdID
	{ 39, true }, // OrdStatus
	{ 636, false }, // WorkingIndicator
	{ 586, false }, // OrigOrdModTime
	{ 66, false }, // ListID
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 229, false }, // TradeOriginationDate
	{ 60, false }, // TransactTime
	{ 434, true }, // CxlRejResponseTo
	{ 102, false }, // CxlRejReason
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Logon [A]

static struct _ofixGroupSpec	LogonGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	LogonGroup384 = {
    384, // NoMsgTypes
    {
	{ 372, false }, // RefMsgType
	{ 385, false }, // MsgDirection
	{ 0, false }
    }
};

static ofixGroupSpec	LogonGroups[] = {
    &LogonGroup627,
    &LogonGroup384,
    0
};

static struct _ofixMsgSpec	Logon = {
    &fix43Spec, // version
    65, // tid
    "A", // type
    "Logon", // name
    {0,0,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,31,32,20,29,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,33,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    LogonGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 98, true }, // EncryptMethod
	{ 108, true }, // HeartBtInt
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 141, false }, // ResetSeqNumFlag
	{ 383, false }, // MaxMessageSize
	{ 384, false }, // NoMsgTypes
	{ 464, false }, // TestMessageIndicator
	{ 553, false }, // Username
	{ 554, false }, // Password
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// DerivativeSecurityList [AA]

static struct _ofixGroupSpec	DerivativeSecurityListGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup146 = {
    146, // NoRelatedSym
    {
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup555 = {
    555, // NoLegs
    {
	{ 600, true }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 610, false }, // LegMaturityMonthYear
	{ 611, false }, // LegMaturityDate
	{ 248, false }, // LegCouponPaymentDate
	{ 249, false }, // LegIssueDate
	{ 250, false }, // LegRepoCollateralSecurityType
	{ 251, false }, // LegRepurchaseTerm
	{ 252, false }, // LegRepurchaseRate
	{ 253, false }, // LegFactor
	{ 257, false }, // LegCreditRating
	{ 599, false }, // LegInstrRegistry
	{ 596, false }, // LegCountryOfIssue
	{ 597, false }, // LegStateOrProvinceOfIssue
	{ 598, false }, // LegLocaleOfIssue
	{ 254, false }, // LegRedemptionDate
	{ 612, false }, // LegStrikePrice
	{ 613, false }, // LegOptAttribute
	{ 614, false }, // LegContractMultiplier
	{ 615, false }, // LegCouponRate
	{ 616, false }, // LegSecurityExchange
	{ 617, false }, // LegIssuer
	{ 618, false }, // EncodedLegIssuerLen
	{ 619, false }, // EncodedLegIssuer
	{ 620, false }, // LegSecurityDesc
	{ 621, false }, // EncodedLegSecurityDescLen
	{ 622, false }, // EncodedLegSecurityDesc
	{ 623, false }, // LegRatioQty
	{ 624, false }, // LegSide
	{ 556, false }, // LegCurrency
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	DerivativeSecurityListGroups[] = {
    &DerivativeSecurityListGroup627,
    &DerivativeSecurityListGroup457,
    &DerivativeSecurityListGroup146,
    &DerivativeSecurityListGroup454,
    &DerivativeSecurityListGroup555,
    &DerivativeSecurityListGroup604,
    0
};

static struct _ofixMsgSpec	DerivativeSecurityList = {
    &fix43Spec, // version
    16705, // tid
    "AA", // type
    "DerivativeSecurityList", // name
    {0,0,0,0,0,0,0,0,1,2,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,8,9,0,68,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,43,44,45,46,47,53,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,60,63,59,34,39,32,33,40,0,54,55,56,0,0,29,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,62,64,65,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,37,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,51,52,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    DerivativeSecurityListGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 320, true }, // SecurityReqID
	{ 322, true }, // SecurityResponseID
	{ 560, true }, // SecurityRequestResult
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 313, false }, // UnderlyingMaturityMonthYear
	{ 542, false }, // UnderlyingMaturityDate
	{ 241, false }, // UnderlyingCouponPaymentDate
	{ 242, false }, // UnderlyingIssueDate
	{ 243, false }, // UnderlyingRepoCollateralSecurityType
	{ 244, false }, // UnderlyingRepurchaseTerm
	{ 245, false }, // UnderlyingRepurchaseRate
	{ 246, false }, // UnderlyingFactor
	{ 256, false }, // UnderlyingCreditRating
	{ 595, false }, // UnderlyingInstrRegistry
	{ 592, false }, // UnderlyingCountryOfIssue
	{ 593, false }, // UnderlyingStateOrProvinceOfIssue
	{ 594, false }, // UnderlyingLocaleOfIssue
	{ 247, false }, // UnderlyingRedemptionDate
	{ 315, false }, // UnderlyingPutOrCall
	{ 316, false }, // UnderlyingStrikePrice
	{ 317, false }, // UnderlyingOptAttribute
	{ 436, false }, // UnderlyingContractMultiplier
	{ 435, false }, // UnderlyingCouponRate
	{ 308, false }, // UnderlyingSecurityExchange
	{ 306, false }, // UnderlyingIssuer
	{ 362, false }, // EncodedUnderlyingIssuerLen
	{ 363, false }, // EncodedUnderlyingIssuer
	{ 307, false }, // UnderlyingSecurityDesc
	{ 364, false }, // EncodedUnderlyingSecurityDescLen
	{ 365, false }, // EncodedUnderlyingSecurityDesc
	{ 393, false }, // TotalNumSecurities
	{ 146, false }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NewOrderMultileg [AB]

static struct _ofixGroupSpec	NewOrderMultilegGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup555 = {
    555, // NoLegs
    {
	{ 600, true }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 610, false }, // LegMaturityMonthYear
	{ 611, false }, // LegMaturityDate
	{ 248, false }, // LegCouponPaymentDate
	{ 249, false }, // LegIssueDate
	{ 250, false }, // LegRepoCollateralSecurityType
	{ 251, false }, // LegRepurchaseTerm
	{ 252, false }, // LegRepurchaseRate
	{ 253, false }, // LegFactor
	{ 257, false }, // LegCreditRating
	{ 599, false }, // LegInstrRegistry
	{ 596, false }, // LegCountryOfIssue
	{ 597, false }, // LegStateOrProvinceOfIssue
	{ 598, false }, // LegLocaleOfIssue
	{ 254, false }, // LegRedemptionDate
	{ 612, false }, // LegStrikePrice
	{ 613, false }, // LegOptAttribute
	{ 614, false }, // LegContractMultiplier
	{ 615, false }, // LegCouponRate
	{ 616, false }, // LegSecurityExchange
	{ 617, false }, // LegIssuer
	{ 618, false }, // EncodedLegIssuerLen
	{ 619, false }, // EncodedLegIssuer
	{ 620, false }, // LegSecurityDesc
	{ 621, false }, // EncodedLegSecurityDescLen
	{ 622, false }, // EncodedLegSecurityDesc
	{ 623, false }, // LegRatioQty
	{ 624, false }, // LegSide
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlmntTyp
	{ 588, false }, // LegFutSettDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderMultilegGroups[] = {
    &NewOrderMultilegGroup627,
    &NewOrderMultilegGroup453,
    &NewOrderMultilegGroup78,
    &NewOrderMultilegGroup386,
    &NewOrderMultilegGroup454,
    &NewOrderMultilegGroup555,
    &NewOrderMultilegGroup604,
    &NewOrderMultilegGroup539,
    0
};

static struct _ofixMsgSpec	NewOrderMultileg = {
    &fix43Spec, // version
    16706, // tid
    "AB", // type
    "NewOrderMultileg", // name
    {0,33,0,0,0,0,0,0,1,2,134,29,108,109,0,98,0,0,44,0,0,43,54,101,0,0,0,0,0,0,0,0,0,0,10,3,0,0,89,0,94,0,0,19,96,0,0,0,53,4,11,0,21,0,50,51,5,13,117,103,87,0,0,39,40,52,0,0,0,0,0,0,0,0,0,0,0,120,38,0,0,49,0,0,0,0,0,0,0,133,8,9,0,132,0,0,0,20,0,97,47,0,0,0,0,0,78,81,0,0,45,46,0,0,86,6,15,102,131,0,116,115,22,0,0,0,106,0,7,17,0,0,0,0,0,0,0,0,0,0,84,0,12,14,16,18,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,0,73,121,0,0,74,77,0,0,122,123,23,24,0,0,0,0,0,0,0,0,0,76,61,62,64,65,66,0,0,75,0,0,0,0,0,0,0,63,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,79,80,82,83,0,0,118,119,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,99,100,0,0,0,0,0,0,0,0,48,0,124,125,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,107,0,0,0,0,105,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,55,0,0,0,0,0,56,57,0,0,0,88,0,0,92,93,69,70,71,0,0,0,0,0,0,110,126,127,0,0,0,0,0,0,0,0,0,0,0,0,129,0,0,111,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,91,0,0,0,0,0,0,0,0,0,30,0,112,113,0,0,0,0,0,0,0,0,0,0,0,60,0,68,41,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,114,31,0,0,0,0,0,35,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NewOrderMultilegGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 21, true }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 81, false }, // ProcessCode
	{ 54, true }, // Side
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 140, false }, // PrevClosePx
	{ 555, false }, // NoLegs
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 40, true }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 23, false }, // IOIid
	{ 117, false }, // QuoteID
	{ 59, false }, // TimeInForce
	{ 168, false }, // EffectiveTime
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 427, false }, // GTBookingInst
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 563, false }, // MultiLegRptTypeReq
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MultilegOrderCancelReplaceRequest [AC]

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup555 = {
    555, // NoLegs
    {
	{ 600, true }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 610, false }, // LegMaturityMonthYear
	{ 611, false }, // LegMaturityDate
	{ 248, false }, // LegCouponPaymentDate
	{ 249, false }, // LegIssueDate
	{ 250, false }, // LegRepoCollateralSecurityType
	{ 251, false }, // LegRepurchaseTerm
	{ 252, false }, // LegRepurchaseRate
	{ 253, false }, // LegFactor
	{ 257, false }, // LegCreditRating
	{ 599, false }, // LegInstrRegistry
	{ 596, false }, // LegCountryOfIssue
	{ 597, false }, // LegStateOrProvinceOfIssue
	{ 598, false }, // LegLocaleOfIssue
	{ 254, false }, // LegRedemptionDate
	{ 612, false }, // LegStrikePrice
	{ 613, false }, // LegOptAttribute
	{ 614, false }, // LegContractMultiplier
	{ 615, false }, // LegCouponRate
	{ 616, false }, // LegSecurityExchange
	{ 617, false }, // LegIssuer
	{ 618, false }, // EncodedLegIssuerLen
	{ 619, false }, // EncodedLegIssuer
	{ 620, false }, // LegSecurityDesc
	{ 621, false }, // EncodedLegSecurityDescLen
	{ 622, false }, // EncodedLegSecurityDesc
	{ 623, false }, // LegRatioQty
	{ 624, false }, // LegSide
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlmntTyp
	{ 588, false }, // LegFutSettDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	MultilegOrderCancelReplaceRequestGroups[] = {
    &MultilegOrderCancelReplaceRequestGroup627,
    &MultilegOrderCancelReplaceRequestGroup453,
    &MultilegOrderCancelReplaceRequestGroup78,
    &MultilegOrderCancelReplaceRequestGroup386,
    &MultilegOrderCancelReplaceRequestGroup454,
    &MultilegOrderCancelReplaceRequestGroup555,
    &MultilegOrderCancelReplaceRequestGroup604,
    &MultilegOrderCancelReplaceRequestGroup539,
    0
};

static struct _ofixMsgSpec	MultilegOrderCancelReplaceRequest = {
    &fix43Spec, // version
    16707, // tid
    "AC", // type
    "MultilegOrderCancelReplaceRequest", // name
    {0,36,0,0,0,0,0,0,1,2,137,31,111,112,0,101,0,0,47,0,0,46,57,104,0,0,0,0,0,0,0,0,0,0,10,3,0,29,92,0,97,30,0,19,99,0,0,0,56,4,11,0,21,0,53,54,5,13,120,106,90,0,0,42,43,55,0,0,0,0,0,0,0,0,0,0,0,123,41,0,0,52,0,0,0,0,0,0,0,136,8,9,0,135,0,0,0,20,0,100,50,0,0,0,0,0,81,84,0,0,48,49,0,0,89,6,15,105,134,0,119,118,22,0,0,0,109,0,7,17,0,0,0,0,0,0,0,0,0,0,87,0,12,14,16,18,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,76,124,0,0,77,80,0,0,125,126,23,24,0,0,0,0,0,0,0,0,0,79,64,65,67,68,69,0,0,78,0,0,0,0,0,0,0,66,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,82,83,85,86,0,0,121,122,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,102,103,0,0,0,0,0,0,0,0,51,0,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,110,0,0,0,0,108,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,58,0,0,0,0,0,59,60,0,0,0,91,0,0,95,96,72,73,74,0,0,0,0,0,0,113,129,130,0,0,0,0,0,0,0,0,0,0,0,0,132,0,0,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,131,0,0,94,0,0,0,0,0,0,0,0,0,32,0,115,116,0,0,0,0,0,0,0,0,0,0,0,63,0,71,44,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,133,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,117,33,0,0,34,0,0,38,39,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MultilegOrderCancelReplaceRequestGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 37, false }, // OrderID
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 586, false }, // OrigOrdModTime
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 21, true }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 81, false }, // ProcessCode
	{ 54, true }, // Side
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 140, false }, // PrevClosePx
	{ 555, false }, // NoLegs
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 40, true }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 23, false }, // IOIid
	{ 117, false }, // QuoteID
	{ 59, false }, // TimeInForce
	{ 168, false }, // EffectiveTime
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 427, false }, // GTBookingInst
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 563, false }, // MultiLegRptTypeReq
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradeCaptureReportRequest [AD]

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup580 = {
    580, // NoDates
    {
	{ 75, false }, // TradeDate
	{ 60, false }, // TransactTime
	{ 0, false }
    }
};

static ofixGroupSpec	TradeCaptureReportRequestGroups[] = {
    &TradeCaptureReportRequestGroup627,
    &TradeCaptureReportRequestGroup453,
    &TradeCaptureReportRequestGroup454,
    &TradeCaptureReportRequestGroup580,
    0
};

static struct _ofixMsgSpec	TradeCaptureReportRequest = {
    &fix43Spec, // version
    16708, // tid
    "AD", // type
    "TradeCaptureReportRequest", // name
    {0,0,0,0,0,0,0,0,1,2,79,34,0,0,0,0,0,32,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,10,3,0,33,0,0,0,0,0,19,0,0,0,0,39,4,11,0,21,0,71,37,5,13,72,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,8,9,0,77,0,0,0,20,0,0,0,0,0,0,0,0,64,67,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,59,0,0,0,60,63,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,62,47,48,50,51,52,0,0,61,0,0,0,0,0,0,0,49,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,65,66,68,69,0,0,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,41,0,0,0,0,0,42,43,0,0,0,0,0,0,0,0,55,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,0,35,0,0,0,0,75,76,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradeCaptureReportRequestGroups, // groups
    {
	{ 8, true }, // BeginString
	{ 9, true }, // BodyLength
	{ 35, true }, // MsgType
	{ 49, true }, // SenderCompID
	{ 56, true }, // TargetCompID
	{ 115, false }, // OnBehalfOfCompID
	{ 128, false }, // DeliverToCompID
	{ 90, false }, // SecureDataLen
	{ 91, false }, // SecureData
	{ 34, true }, // MsgSeqNum
	{ 50, false }, // SenderSubID
	{ 142, false }, // SenderLocationID
	{ 57, false }, // TargetSubID
	{ 143, false }, // TargetLocationID
	{ 116, false }, // OnBehalfOfSubID
	{ 144, false }, // OnBehalfOfLocationID
	{ 129, false }, // DeliverToSubID
	{ 145, false }, // DeliverToLocationID
	{ 43, false }, // PossDupFlag
	{ 97, false }, // PossResend
	{ 52, true }, // SendingTime
	{ 122, false }, // OrigSendingTime
	{ 212, false }, // XmlDataLen
	{ 213, false }, // XmlData
	{ 347, false }, // MessageEncoding
	{ 369, false }, // LastMsgSeqNumProcessed
	{ 370, false }, // OnBehalfOfSendingTime
	{ 627, false }, // NoHops
	{ 568, true }, // TradeRequestID
	{ 569, true }, // TradeRequestType
	{ 263, false }, // SubscriptionRequestType
	{ 17, false }, // ExecID
	{ 37, false }, // OrderID
	{ 11, false }, // ClOrdID
	{ 573, false }, // MatchStatus
	{ 453, false }, // NoPartyIDs
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 541, false }, // MaturityDate
	{ 224, false }, // CouponPaymentDate
	{ 225, false }, // IssueDate
	{ 239, false }, // RepoCollateralSecurityType
	{ 226, false }, // RepurchaseTerm
	{ 227, false }, // RepurchaseRate
	{ 228, false }, // Factor
	{ 255, false }, // CreditRating
	{ 543, false }, // InstrRegistry
	{ 470, false }, // CountryOfIssue
	{ 471, false }, // StateOrProvinceOfIssue
	{ 472, false }, // LocaleOfIssue
	{ 240, false }, // RedemptionDate
	{ 202, false }, // StrikePrice
	{ 206, false }, // OptAttribute
	{ 231, false }, // ContractMultiplier
	{ 223, false }, // CouponRate
	{ 207, false }, // SecurityExchange
	{ 106, false }, // Issuer
	{ 348, false }, // EncodedIssuerLen
	{ 349, false }, // EncodedIssuer
	{ 107, false }, // SecurityDesc
	{ 350, false }, // EncodedSecurityDescLen
	{ 351, false }, // EncodedSecurityDesc
	{ 580, false }, // NoDates
	{ 54, false }, // Side
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // Encode