
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
	{ 355, false }, // EncodedText
	{ 578, false }, // TradeInputSource
	{ 579, false }, // TradeInputDevice
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradeCaptureReport [AE]

static struct _ofixGroupSpec	TradeCaptureReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup552 = {
    552, // NoSides
    {
	{ 54, true }, // Side
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 11, false }, // ClOrdID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 81, false }, // ProcessCode
	{ 575, false }, // OddLot
	{ 576, false }, // NoClearingInstructions
	{ 635, false }, // ClearingFeeIndicator
	{ 578, false }, // TradeInputSource
	{ 579, false }, // TradeInputDevice
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 483, false }, // TransBkdTime
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 381, false }, // GrossTradeAmt
	{ 157, false }, // NumDaysInterest
	{ 230, false }, // ExDate
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, false }, // NetMoney
	{ 119, false }, // SettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 77, false }, // PositionEffect
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 442, false }, // MultiLegReportingType
	{ 518, false }, // NoContAmts
	{ 136, false }, // NoMiscFees
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup576 = {
    576, // NoClearingInstructions
    {
	{ 577, false }, // ClearingInstruction
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup518 = {
    518, // NoContAmts
    {
	{ 519, false }, // ContAmtType
	{ 520, false }, // ContAmtValue
	{ 521, false }, // ContAmtCurr
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 0, false }
    }
};

static ofixGroupSpec	TradeCaptureReportGroups[] = {
    &TradeCaptureReportGroup627,
    &TradeCaptureReportGroup454,
    &TradeCaptureReportGroup552,
    &TradeCaptureReportGroup453,
    &TradeCaptureReportGroup576,
    &TradeCaptureReportGroup518,
    &TradeCaptureReportGroup136,
    0
};

static struct _ofixMsgSpec	TradeCaptureReport = {
    &fix43Spec, // version
    16709, // tid
    "AE", // type
    "TradeCaptureReport", // name
    {0,0,0,0,0,0,0,0,1,2,90,0,0,0,0,0,0,34,0,0,0,0,41,0,0,0,0,0,0,0,80,77,76,0,10,3,0,0,71,0,0,0,0,19,0,0,0,0,40,4,11,0,21,0,0,38,5,13,0,0,82,0,0,83,84,39,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,89,8,9,0,88,0,0,0,20,0,0,0,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,32,0,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,79,0,0,0,0,46,0,60,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,63,48,49,51,52,53,0,0,62,0,0,0,0,0,0,0,50,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,43,44,0,0,0,0,0,0,74,75,56,57,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,55,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,37,29,33,85,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradeCaptureReportGroups, // groups
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
	{ 571, true }, // TradeReportID
	{ 487, false }, // TradeReportTransType
	{ 568, false }, // TradeRequestID
	{ 150, true }, // ExecType
	{ 572, false }, // TradeReportRefID
	{ 17, false }, // ExecID
	{ 527, false }, // SecondaryExecID
	{ 378, false }, // ExecRestatementReason
	{ 570, true }, // PreviouslyReported
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
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 32, true }, // LastQty
	{ 31, true }, // LastPx
	{ 194, false }, // LastSpotRate
	{ 195, false }, // LastForwardPoints
	{ 30, false }, // LastMkt
	{ 75, true }, // TradeDate
	{ 60, true }, // TransactTime
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 573, false }, // MatchStatus
	{ 574, false }, // MatchType
	{ 552, true }, // NoSides
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderMassStatusRequest [AF]

static struct _ofixGroupSpec	OrderMassStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassStatusRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassStatusRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassStatusRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassStatusRequestGroups[] = {
    &OrderMassStatusRequestGroup627,
    &OrderMassStatusRequestGroup453,
    &OrderMassStatusRequestGroup454,
    &OrderMassStatusRequestGroup457,
    0
};

static struct _ofixMsgSpec	OrderMassStatusRequest = {
    &fix43Spec, // version
    16710, // tid
    "AF", // type
    "OrderMassStatusRequest", // name
    {0,32,0,0,0,0,0,0,1,2,105,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,37,4,11,0,21,0,102,35,5,13,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,8,9,0,103,0,0,0,20,0,0,0,0,0,0,0,0,62,65,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,58,61,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,60,45,46,48,49,50,0,0,59,0,0,0,0,0,0,0,47,56,78,79,80,81,82,83,89,0,0,0,0,0,0,0,51,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,96,99,95,70,75,68,69,76,0,90,91,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,25,63,64,66,67,0,0,0,0,0,0,0,0,0,0,97,98,100,101,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,39,0,0,72,0,0,40,41,73,74,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,77,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,0,0,0,0,86,87,88,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderMassStatusRequestGroups, // groups
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
	{ 584, true }, // MassStatusReqID
	{ 585, true }, // MassStatusReqType
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
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
	{ 54, false }, // Side
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteRequestReject [AG]

static struct _ofixGroupSpec	QuoteRequestRejectGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup146 = {
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
	{ 140, false }, // PrevClosePx
	{ 303, false }, // QuoteRequestType
	{ 537, false }, // QuoteType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 229, false }, // TradeOriginationDate
	{ 232, false }, // NoStipulations
	{ 54, false }, // Side
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 126, false }, // ExpireTime
	{ 60, false }, // TransactTime
	{ 15, false }, // Currency
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 640, false }, // Price2
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteRequestRejectGroups[] = {
    &QuoteRequestRejectGroup627,
    &QuoteRequestRejectGroup146,
    &QuoteRequestRejectGroup454,
    &QuoteRequestRejectGroup232,
    0
};

static struct _ofixMsgSpec	QuoteRequestReject = {
    &fix43Spec, // version
    16711, // tid
    "AG", // type
    "QuoteRequestReject", // name
    {0,0,0,0,0,0,0,0,1,2,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,29,0,0,0,0,0,0,0,0,0,0,12,14,16,18,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteRequestRejectGroups, // groups
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
	{ 131, true }, // QuoteReqID
	{ 644, false }, // RFQReqID
	{ 658, true }, // QuoteRequestRejectReason
	{ 146, true }, // NoRelatedSym
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// RFQRequest [AH]

static struct _ofixGroupSpec	RFQRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup146 = {
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
	{ 140, false }, // PrevClosePx
	{ 303, false }, // QuoteRequestType
	{ 537, false }, // QuoteType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	RFQRequestGroups[] = {
    &RFQRequestGroup627,
    &RFQRequestGroup146,
    &RFQRequestGroup454,
    0
};

static struct _ofixMsgSpec	RFQRequest = {
    &fix43Spec, // version
    16712, // tid
    "AH", // type
    "RFQRequest", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RFQRequestGroups, // groups
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
	{ 644, true }, // RFQReqID
	{ 146, true }, // NoRelatedSym
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteStatusReport [AI]

static struct _ofixGroupSpec	QuoteStatusReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteStatusReportGroups[] = {
    &QuoteStatusReportGroup627,
    &QuoteStatusReportGroup453,
    &QuoteStatusReportGroup454,
    0
};

static struct _ofixMsgSpec	QuoteStatusReport = {
    &fix43Spec, // version
    16713, // tid
    "AI", // type
    "QuoteStatusReport", // name
    {0,34,0,0,0,0,0,0,1,2,106,0,100,99,0,95,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,90,0,0,19,0,0,0,0,40,4,11,0,21,0,0,38,5,13,0,0,88,0,79,0,89,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,8,9,0,104,0,0,0,20,0,0,102,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,31,0,0,0,0,22,0,0,0,0,0,7,17,0,30,71,72,76,78,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,82,81,83,92,91,0,0,0,0,0,0,46,0,60,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,63,48,49,51,52,53,0,0,62,0,0,0,0,0,0,0,50,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,42,0,0,0,0,0,43,44,0,0,0,0,0,0,0,0,56,57,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,47,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,28,0,0,0,84,85,86,87,0,0,0,0,0,0,0,93,94,0,73,74,75,77,29,0,0,0,0,0,0,96,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteStatusReportGroups, // groups
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
	{ 649, false }, // QuoteStatusReqID
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 537, false }, // QuoteType
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
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
	{ 132, false }, // BidPx
	{ 133, false }, // OfferPx
	{ 645, false }, // MktBidPx
	{ 646, false }, // MktOfferPx
	{ 647, false }, // MinBidSize
	{ 134, false }, // BidSize
	{ 648, false }, // MinOfferSize
	{ 135, false }, // OfferSize
	{ 62, false }, // ValidUntilTime
	{ 188, false }, // BidSpotRate
	{ 190, false }, // OfferSpotRate
	{ 189, false }, // BidForwardPoints
	{ 191, false }, // OfferForwardPoints
	{ 631, false }, // MidPx
	{ 632, false }, // BidYield
	{ 633, false }, // MidYield
	{ 634, false }, // OfferYield
	{ 60, false }, // TransactTime
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 15, false }, // Currency
	{ 656, false }, // SettlCurrBidFxRate
	{ 657, false }, // SettlCurrOfferFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 13, false }, // CommType
	{ 12, false }, // Commission
	{ 582, false }, // CustOrderCapacity
	{ 100, false }, // ExDestination
	{ 297, false }, // QuoteStatus
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// News [B]

static struct _ofixGroupSpec	NewsGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup215 = {
    215, // NoRoutingIDs
    {
	{ 216, false }, // RoutingType
	{ 217, false }, // RoutingID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup146 = {
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
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup33 = {
    33, // LinesOfText
    {
	{ 58, true }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	NewsGroups[] = {
    &NewsGroup627,
    &NewsGroup215,
    &NewsGroup146,
    &NewsGroup454,
    &NewsGroup33,
    0
};

static struct _ofixMsgSpec	News = {
    &fix43Spec, // version
    66, // tid
    "B", // type
    "News", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,10,3,0,0,0,0,0,0,29,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,38,39,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,35,0,31,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NewsGroups, // groups
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
	{ 42, false }, // OrigTime
	{ 61, false }, // Urgency
	{ 148, true }, // Headline
	{ 358, false }, // EncodedHeadlineLen
	{ 359, false }, // EncodedHeadline
	{ 215, false }, // NoRoutingIDs
	{ 146, false }, // NoRelatedSym
	{ 33, true }, // LinesOfText
	{ 149, false }, // URLLink
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Email [C]

static struct _ofixGroupSpec	EmailGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup215 = {
    215, // NoRoutingIDs
    {
	{ 216, false }, // RoutingType
	{ 217, false }, // RoutingID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup146 = {
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
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup33 = {
    33, // LinesOfText
    {
	{ 58, true }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	EmailGroups[] = {
    &EmailGroup627,
    &EmailGroup215,
    &EmailGroup146,
    &EmailGroup454,
    &EmailGroup33,
    0
};

static struct _ofixMsgSpec	Email = {
    &fix43Spec, // version
    67, // tid
    "C", // type
    "Email", // name
    {0,0,0,0,0,0,0,0,1,2,44,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,10,3,0,37,0,0,0,0,31,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,8,9,0,42,30,40,41,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,36,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    EmailGroups, // groups
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
	{ 164, true }, // EmailThreadID
	{ 94, true }, // EmailType
	{ 42, false }, // OrigTime
	{ 147, true }, // Subject
	{ 356, false }, // EncodedSubjectLen
	{ 357, false }, // EncodedSubject
	{ 215, false }, // NoRoutingIDs
	{ 146, false }, // NoRelatedSym
	{ 37, false }, // OrderID
	{ 11, false }, // ClOrdID
	{ 33, true }, // LinesOfText
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NewOrderSingle [D]

static struct _ofixGroupSpec	NewOrderSingleGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 539, false }, // NoNestedPartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderSingleGroups[] = {
    &NewOrderSingleGroup627,
    &NewOrderSingleGroup453,
    &NewOrderSingleGroup78,
    &NewOrderSingleGroup539,
    &NewOrderSingleGroup386,
    &NewOrderSingleGroup454,
    &NewOrderSingleGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderSingle = {
    &fix43Spec, // version
    68, // tid
    "D", // type
    "NewOrderSingle", // name
    {0,34,0,0,0,0,0,0,1,2,146,29,115,116,0,105,0,0,45,0,0,44,54,108,0,0,0,0,0,0,0,0,0,0,10,3,0,0,90,0,95,0,0,19,97,0,0,122,53,4,11,0,21,0,85,51,5,13,125,110,87,0,0,40,41,52,0,0,0,0,0,0,0,0,0,0,0,131,39,0,0,50,0,0,0,0,0,0,0,145,8,9,0,144,0,0,0,20,0,98,48,0,0,0,0,0,78,81,0,0,46,47,0,0,86,6,15,109,143,0,124,123,22,0,0,0,113,0,7,17,0,0,0,0,0,0,0,0,0,0,84,0,12,14,16,18,0,0,0,0,0,0,91,0,0,0,0,0,141,142,0,0,0,0,0,0,0,58,111,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,128,0,0,0,0,0,0,59,0,73,132,0,0,74,77,0,0,133,134,23,24,0,0,0,0,99,0,100,101,102,76,61,62,64,65,66,33,0,75,88,0,0,103,104,0,0,63,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,79,80,82,83,0,0,126,127,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,106,107,0,0,0,0,0,0,0,0,49,0,135,136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,114,0,0,0,0,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,55,0,0,0,0,0,56,57,0,0,0,89,0,0,93,94,69,70,71,0,0,0,0,0,0,117,137,138,0,0,0,0,0,0,0,0,0,0,0,0,140,0,0,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,139,0,0,92,0,0,0,0,0,0,0,0,0,30,0,119,120,0,0,0,0,0,0,0,0,0,0,0,60,0,68,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,121,31,0,0,0,0,0,36,37,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,43,0,0,0,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NewOrderSingleGroups, // groups
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
	{ 229, false }, // TradeOriginationDate
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
	{ 54, true }, // Side
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 232, false }, // NoStipulations
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
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 640, false }, // Price2
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
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NewOrderList [E]

static struct _ofixGroupSpec	NewOrderListGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 67, true }, // ListSeqNo
	{ 583, false }, // ClOrdLinkID
	{ 160, false }, // SettlInstMode
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
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
	{ 21, false }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 81, false }, // ProcessCode
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
	{ 54, true }, // Side
	{ 401, false }, // SideValueInd
	{ 114, false }, // LocateReqd
	{ 60, false }, // TransactTime
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
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 640, false }, // Price2
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 494, false }, // Designation
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 118, false }, // NetMoney
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 539, false }, // NoNestedPartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderListGroups[] = {
    &NewOrderListGroup627,
    &NewOrderListGroup73,
    &NewOrderListGroup453,
    &NewOrderListGroup78,
    &NewOrderListGroup539,
    &NewOrderListGroup386,
    &NewOrderListGroup454,
    &NewOrderListGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderList = {
    &fix43Spec, // version
    69, // tid
    "E", // type
    "NewOrderList", // name
    {0,0,0,0,0,0,0,0,1,2,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,29,0,42,39,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,8,9,0,44,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,40,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NewOrderListGroups, // groups
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
	{ 66, true }, // ListID
	{ 390, false }, // BidID
	{ 391, false }, // ClientBidID
	{ 414, false }, // ProgRptReqs
	{ 394, true }, // BidType
	{ 415, false }, // ProgPeriodInterval
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 433, false }, // ListExecInstType
	{ 69, false }, // ListExecInst
	{ 352, false }, // EncodedListExecInstLen
	{ 353, false }, // EncodedListExecInst
	{ 68, true }, // TotNoOrders
	{ 73, true }, // NoOrders
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderCancelRequest [F]

static struct _ofixGroupSpec	OrderCancelRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelRequestGroups[] = {
    &OrderCancelRequestGroup627,
    &OrderCancelRequestGroup453,
    &OrderCancelRequestGroup454,
    0
};

static struct _ofixMsgSpec	OrderCancelRequest = {
    &fix43Spec, // version
    70, // tid
    "F", // type
    "OrderCancelRequest", // name
    {0,36,0,0,0,0,0,0,1,2,85,31,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,10,3,0,30,74,0,0,29,0,19,0,0,0,0,41,4,11,0,21,0,72,39,5,13,80,0,73,0,0,0,0,40,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,8,9,0,83,0,0,0,20,0,0,0,0,0,0,0,0,66,69,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,61,0,0,0,62,65,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,64,49,50,52,53,54,0,0,63,0,0,0,0,0,0,0,51,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,67,68,70,71,0,0,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,43,0,0,0,0,0,44,45,0,0,0,0,0,0,77,78,57,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,33,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderCancelRequestGroups, // groups
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
	{ 41, true }, // OrigClOrdID
	{ 37, false }, // OrderID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 66, false }, // ListID
	{ 586, false }, // OrigOrdModTime
	{ 1, false }, // Account
	{ 581, false }, // AccountType
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
	{ 54, true }, // Side
	{ 60, true }, // TransactTime
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 376, false }, // ComplianceID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderCancelReplaceRequest [G]

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 539, false }, // NoNestedPartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelReplaceRequestGroups[] = {
    &OrderCancelReplaceRequestGroup627,
    &OrderCancelReplaceRequestGroup453,
    &OrderCancelReplaceRequestGroup78,
    &OrderCancelReplaceRequestGroup539,
    &OrderCancelReplaceRequestGroup386,
    &OrderCancelReplaceRequestGroup454,
    0
};

static struct _ofixMsgSpec	OrderCancelReplaceRequest = {
    &fix43Spec, // version
    71, // tid
    "G", // type
    "OrderCancelReplaceRequest", // name
    {0,38,0,0,0,0,0,0,1,2,145,33,116,117,0,110,0,0,49,0,0,48,57,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,90,0,95,32,0,19,97,0,0,123,56,4,11,0,21,0,87,54,5,13,126,111,88,0,0,44,45,55,36,0,0,0,0,0,0,0,0,0,0,132,43,0,0,0,0,0,0,0,0,0,0,144,8,9,0,143,0,0,0,20,0,98,52,0,0,0,0,0,81,84,0,0,50,51,0,0,135,6,15,0,142,0,125,124,22,0,0,0,114,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,91,0,0,0,0,0,140,141,0,0,0,0,0,0,0,61,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,130,129,0,0,0,0,0,0,62,0,76,133,0,0,77,80,0,0,134,105,23,24,0,0,0,0,99,0,100,101,102,79,64,65,67,68,69,31,0,78,0,0,0,103,104,0,0,66,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,82,83,85,86,0,0,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,108,109,0,0,0,0,0,0,0,0,53,0,106,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,115,0,0,0,0,113,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,58,0,0,0,0,0,59,60,0,0,0,89,0,0,93,94,72,73,74,0,0,0,0,0,0,118,136,137,0,0,0,0,0,0,0,0,0,0,0,0,139,0,0,119,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,138,0,0,92,0,0,0,0,0,0,0,0,0,34,0,120,121,0,0,0,0,0,0,0,0,0,0,0,63,0,71,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,122,35,0,0,37,0,0,40,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,47,0,0,0,0,131,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderCancelReplaceRequestGroups, // groups
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
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 66, false }, // ListID
	{ 586, false }, // OrigOrdModTime
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
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 15, false }, // Currency
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 640, false }, // Price2
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 114, false }, // LocateReqd
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderStatusRequest [H]

static struct _ofixGroupSpec	OrderStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderStatusRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderStatusRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderStatusRequestGroups[] = {
    &OrderStatusRequestGroup627,
    &OrderStatusRequestGroup453,
    &OrderStatusRequestGroup454,
    0
};

static struct _ofixMsgSpec	OrderStatusRequest = {
    &fix43Spec, // version
    72, // tid
    "H", // type
    "OrderStatusRequest", // name
    {0,34,0,0,0,0,0,0,1,2,71,30,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,0,0,0,0,0,19,0,0,0,0,37,4,11,0,21,0,68,35,5,13,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,8,9,0,69,0,0,0,20,0,0,0,0,0,0,0,0,62,65,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,58,61,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,60,45,46,48,49,50,0,0,59,0,0,0,0,0,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,63,64,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,39,0,0,0,0,0,40,41,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderStatusRequestGroups, // groups
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
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Allocation [J]

static struct _ofixGroupSpec	AllocationGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 66, false }, // ListID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup124 = {
    124, // NoExecs
    {
	{ 32, false }, // LastQty
	{ 17, false }, // ExecID
	{ 527, false }, // SecondaryExecID
	{ 31, false }, // LastPx
	{ 29, false }, // LastCapacity
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup78 = {
    78, // NoAllocs
    {
	{ 79, true }, // AllocAccount
	{ 366, false }, // AllocPrice
	{ 80, true }, // AllocQty
	{ 467, false }, // IndividualAllocID
	{ 81, false }, // ProcessCode
	{ 539, false }, // NoNestedPartyIDs
	{ 208, false }, // NotifyBrokerOfCredit
	{ 209, false }, // AllocHandlInst
	{ 161, false }, // AllocText
	{ 360, false }, // EncodedAllocTextLen
	{ 361, false }, // EncodedAllocText
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 153, false }, // AllocAvgPx
	{ 154, false }, // AllocNetMoney
	{ 119, false }, // SettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 159, false }, // AccruedInterestAmt
	{ 160, false }, // SettlInstMode
	{ 136, false }, // NoMiscFees
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationGroups[] = {
    &AllocationGroup627,
    &AllocationGroup73,
    &AllocationGroup124,
    &AllocationGroup454,
    &AllocationGroup453,
    &AllocationGroup78,
    &AllocationGroup539,
    &AllocationGroup136,
    0
};

static struct _ofixMsgSpec	Allocation = {
    &fix43Spec, // version
    74, // tid
    "J", // type
    "Allocation", // name
    {0,0,0,0,0,0,78,0,1,2,101,0,0,0,0,79,0,0,0,0,0,0,42,0,0,0,0,0,0,0,73,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,41,4,11,0,21,72,38,39,5,13,91,0,83,0,0,84,85,40,0,0,0,0,29,30,32,36,80,82,0,90,98,0,0,0,0,0,0,0,0,0,0,100,8,9,0,99,0,0,0,20,0,0,0,0,0,0,0,0,66,69,0,0,0,0,0,0,0,6,15,0,89,0,0,0,22,0,37,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,94,95,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,34,0,0,47,0,61,0,0,0,62,65,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,64,49,50,52,53,54,74,0,63,0,0,0,0,0,88,87,51,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,25,67,68,70,71,0,0,92,93,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,43,0,0,0,0,0,44,45,0,0,0,0,35,0,0,0,57,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,48,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,31,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationGroups, // groups
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
	{ 70, true }, // AllocID
	{ 71, true }, // AllocTransType
	{ 626, true }, // AllocType
	{ 72, false }, // RefAllocID
	{ 196, false }, // AllocLinkID
	{ 197, false }, // AllocLinkType
	{ 466, false }, // BookingRefID
	{ 73, true }, // NoOrders
	{ 124, false }, // NoExecs
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
	{ 53, true }, // Quantity
	{ 30, false }, // LastMkt
	{ 229, false }, // TradeOriginationDate
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 423, false }, // PriceType
	{ 6, true }, // AvgPx
	{ 15, false }, // Currency
	{ 74, false }, // AvgPrxPrecision
	{ 453, false }, // NoPartyIDs
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 381, false }, // GrossTradeAmt
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, false }, // NetMoney
	{ 77, false }, // PositionEffect
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 157, false }, // NumDaysInterest
	{ 158, false }, // AccruedInterestRate
	{ 540, false }, // TotalAccruedInterestAmt
	{ 650, false }, // LegalConfirm
	{ 78, true }, // NoAllocs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListCancelRequest [K]

static struct _ofixGroupSpec	ListCancelRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	ListCancelRequestGroups[] = {
    &ListCancelRequestGroup627,
    0
};

static struct _ofixMsgSpec	ListCancelRequest = {
    &fix43Spec, // version
    75, // tid
    "K", // type
    "ListCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,30,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ListCancelRequestGroups, // groups
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
	{ 66, true }, // ListID
	{ 60, true }, // TransactTime
	{ 229, false }, // TradeOriginationDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListExecute [L]

static struct _ofixGroupSpec	ListExecuteGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	ListExecuteGroups[] = {
    &ListExecuteGroup627,
    0
};

static struct _ofixMsgSpec	ListExecute = {
    &fix43Spec, // version
    76, // tid
    "L", // type
    "ListExecute", // name
    {0,0,0,0,0,0,0,0,1,2,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,33,0,32,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ListExecuteGroups, // groups
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
	{ 66, true }, // ListID
	{ 391, false }, // ClientBidID
	{ 390, false }, // BidID
	{ 60, true }, // TransactTime
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListStatusRequest [M]

static struct _ofixGroupSpec	ListStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	ListStatusRequestGroups[] = {
    &ListStatusRequestGroup627,
    0
};

static struct _ofixMsgSpec	ListStatusRequest = {
    &fix43Spec, // version
    77, // tid
    "M", // type
    "ListStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,30,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ListStatusRequestGroups, // groups
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
	{ 66, true }, // ListID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListStatus [N]

static struct _ofixGroupSpec	ListStatusGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ListStatusGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 14, true }, // CumQty
	{ 39, true }, // OrdStatus
	{ 636, false }, // WorkingIndicator
	{ 151, true }, // LeavesQty
	{ 84, true }, // CxlQty
	{ 6, true }, // AvgPx
	{ 103, false }, // OrdRejReason
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	ListStatusGroups[] = {
    &ListStatusGroup627,
    &ListStatusGroup73,
    0
};

static struct _ofixMsgSpec	ListStatus = {
    &fix43Spec, // version
    78, // tid
    "N", // type
    "ListStatus", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,37,0,0,0,0,0,29,0,38,0,0,0,0,39,0,0,0,0,0,0,0,0,31,33,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,32,0,0,0,0,0,0,0,0,0,0,0,0,34,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ListStatusGroups, // groups
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
	{ 66, true }, // ListID
	{ 429, true }, // ListStatusType
	{ 82, true }, // NoRpts
	{ 431, true }, // ListOrderStatus
	{ 83, true }, // RptSeq
	{ 444, false }, // ListStatusText
	{ 445, false }, // EncodedListStatusTextLen
	{ 446, false }, // EncodedListStatusText
	{ 60, false }, // TransactTime
	{ 68, true }, // TotNoOrders
	{ 73, true }, // NoOrders
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AllocationACK [P]

static struct _ofixGroupSpec	AllocationACKGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationACKGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationACKGroups[] = {
    &AllocationACKGroup627,
    &AllocationACKGroup453,
    0
};

static struct _ofixMsgSpec	AllocationACK = {
    &fix43Spec, // version
    80, // tid
    "P", // type
    "AllocationACK", // name
    {0,0,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,35,0,32,0,0,0,0,0,0,0,0,0,30,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,33,34,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationACKGroups, // groups
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
	{ 453, false }, // NoPartyIDs
	{ 70, true }, // AllocID
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 87, true }, // AllocStatus
	{ 88, false }, // AllocRejCode
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 650, false }, // LegalConfirm
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// DontKnowTrade [Q]

static struct _ofixGroupSpec	DontKnowTradeGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DontKnowTradeGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	DontKnowTradeGroups[] = {
    &DontKnowTradeGroup627,
    &DontKnowTradeGroup454,
    0
};

static struct _ofixMsgSpec	DontKnowTrade = {
    &fix43Spec, // version
    81, // tid
    "Q", // type
    "DontKnowTrade", // name
    {0,0,0,0,0,0,0,0,1,2,78,0,0,0,0,0,0,30,0,0,0,0,35,0,0,0,0,0,0,0,0,72,71,0,10,3,0,29,66,0,0,0,0,19,0,0,0,0,34,4,11,0,21,0,65,32,5,13,73,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,8,9,0,76,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,31,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,54,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,42,43,45,46,47,0,0,56,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,74,75,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,0,0,0,69,70,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    DontKnowTradeGroups, // groups
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
	{ 17, true }, // ExecID
	{ 127, true }, // DKReason
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
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 32, false }, // LastQty
	{ 31, false }, // LastPx
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteRequest [R]

static struct _ofixGroupSpec	QuoteRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup146 = {
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
	{ 140, false }, // PrevClosePx
	{ 303, false }, // QuoteRequestType
	{ 537, false }, // QuoteType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 229, false }, // TradeOriginationDate
	{ 232, false }, // NoStipulations
	{ 54, false }, // Side
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 126, false }, // ExpireTime
	{ 60, false }, // TransactTime
	{ 15, false }, // Currency
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 640, false }, // Price2
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteRequestGroups[] = {
    &QuoteRequestGroup627,
    &QuoteRequestGroup146,
    &QuoteRequestGroup454,
    &QuoteRequestGroup232,
    0
};

static struct _ofixMsgSpec	QuoteRequest = {
    &fix43Spec, // version
    82, // tid
    "R", // type
    "QuoteRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,29,0,0,0,0,0,0,0,0,0,0,12,14,16,18,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteRequestGroups, // groups
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
	{ 131, true }, // QuoteReqID
	{ 644, false }, // RFQReqID
	{ 146, true }, // NoRelatedSym
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Quote [S]

static struct _ofixGroupSpec	QuoteGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteGroups[] = {
    &QuoteGroup627,
    &QuoteGroup453,
    &QuoteGroup454,
    0
};

static struct _ofixMsgSpec	Quote = {
    &fix43Spec, // version
    83, // tid
    "S", // type
    "Quote", // name
    {0,34,0,0,0,0,0,0,1,2,109,0,101,100,0,96,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,91,0,0,19,0,0,0,0,40,4,11,0,21,0,0,38,5,13,104,0,88,0,79,89,90,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,108,8,9,0,107,0,0,0,20,0,0,103,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,0,0,7,17,0,29,71,72,76,78,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,82,81,83,93,92,0,0,0,0,0,0,46,0,60,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,63,48,49,51,52,53,0,0,62,0,0,0,0,0,0,0,50,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,105,106,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,42,0,0,0,0,0,43,44,0,0,0,0,0,0,0,0,56,57,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,47,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,28,0,0,0,84,85,86,87,0,0,0,0,0,0,0,94,95,0,73,74,75,77,0,0,0,0,0,0,0,97,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteGroups, // groups
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
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 537, false }, // QuoteType
	{ 301, false }, // QuoteResponseLevel
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
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
	{ 132, false }, // BidPx
	{ 133, false }, // OfferPx
	{ 645, false }, // MktBidPx
	{ 646, false }, // MktOfferPx
	{ 647, false }, // MinBidSize
	{ 134, false }, // BidSize
	{ 648, false }, // MinOfferSize
	{ 135, false }, // OfferSize
	{ 62, false }, // ValidUntilTime
	{ 188, false }, // BidSpotRate
	{ 190, false }, // OfferSpotRate
	{ 189, false }, // BidForwardPoints
	{ 191, false }, // OfferForwardPoints
	{ 631, false }, // MidPx
	{ 632, false }, // BidYield
	{ 633, false }, // MidYield
	{ 634, false }, // OfferYield
	{ 60, false }, // TransactTime
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 15, false }, // Currency
	{ 656, false }, // SettlCurrBidFxRate
	{ 657, false }, // SettlCurrOfferFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 13, false }, // CommType
	{ 12, false }, // Commission
	{ 582, false }, // CustOrderCapacity
	{ 100, false }, // ExDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SettlementInstructions [T]

static struct _ofixGroupSpec	SettlementInstructionsGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	SettlementInstructionsGroups[] = {
    &SettlementInstructionsGroup627,
    &SettlementInstructionsGroup453,
    0
};

static struct _ofixMsgSpec	SettlementInstructions = {
    &fix43Spec, // version
    84, // tid
    "T", // type
    "SettlementInstructions", // name
    {0,0,0,0,0,0,0,0,1,2,77,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,42,0,5,13,0,0,45,0,0,0,0,0,0,0,0,0,38,0,0,0,0,37,0,0,0,34,0,0,0,0,0,0,0,0,0,76,8,9,0,75,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,29,30,0,33,0,43,44,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,68,69,71,72,66,0,0,0,0,0,0,0,0,0,0,70,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SettlementInstructionsGroups, // groups
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
	{ 162, true }, // SettlInstID
	{ 163, true }, // SettlInstTransType
	{ 214, true }, // SettlInstRefID
	{ 160, true }, // SettlInstMode
	{ 165, true }, // SettlInstSource
	{ 79, true }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 11, false }, // ClOrdID
	{ 75, false }, // TradeDate
	{ 70, false }, // AllocID
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 54, false }, // Side
	{ 167, false }, // SecurityType
	{ 168, false }, // EffectiveTime
	{ 60, true }, // TransactTime
	{ 453, false }, // NoPartyIDs
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 172, false }, // SettlDeliveryType
	{ 173, false }, // SettlDepositoryCode
	{ 174, false }, // SettlBrkrCode
	{ 175, false }, // SettlInstCode
	{ 176, false }, // SecuritySettlAgentName
	{ 177, false }, // SecuritySettlAgentCode
	{ 178, false }, // SecuritySettlAgentAcctNum
	{ 179, false }, // SecuritySettlAgentAcctName
	{ 180, false }, // SecuritySettlAgentContactName
	{ 181, false }, // SecuritySettlAgentContactPhone
	{ 182, false }, // CashSettlAgentName
	{ 183, false }, // CashSettlAgentCode
	{ 184, false }, // CashSettlAgentAcctNum
	{ 185, false }, // CashSettlAgentAcctName
	{ 186, false }, // CashSettlAgentContactName
	{ 187, false }, // CashSettlAgentContactPhone
	{ 492, false }, // PaymentMethod
	{ 476, false }, // PaymentRef
	{ 488, false }, // CardHolderName
	{ 489, false }, // CardNumber
	{ 503, false }, // CardStartDate
	{ 490, false }, // CardExpDate
	{ 491, false }, // CardIssNo
	{ 504, false }, // PaymentDate
	{ 505, false }, // PaymentRemitterID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataRequest [V]

static struct _ofixGroupSpec	MarketDataRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup267 = {
    267, // NoMDEntryTypes
    {
	{ 269, true }, // MDEntryType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup146 = {
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
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataRequestGroups[] = {
    &MarketDataRequestGroup627,
    &MarketDataRequestGroup267,
    &MarketDataRequestGroup146,
    &MarketDataRequestGroup454,
    &MarketDataRequestGroup386,
    0
};

static struct _ofixMsgSpec	MarketDataRequest = {
    &fix43Spec, // version
    86, // tid
    "V", // type
    "MarketDataRequest", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,31,32,33,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MarketDataRequestGroups, // groups
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
	{ 262, true }, // MDReqID
	{ 263, true }, // SubscriptionRequestType
	{ 264, true }, // MarketDepth
	{ 265, false }, // MDUpdateType
	{ 266, false }, // AggregatedBook
	{ 286, false }, // OpenCloseSettleFlag
	{ 546, false }, // Scope
	{ 547, false }, // MDImplicitDelete
	{ 267, true }, // NoMDEntryTypes
	{ 146, true }, // NoRelatedSym
	{ 386, false }, // NoTradingSessions
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataSnapshotFullRefresh [W]

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup268 = {
    268, // NoMDEntries
    {
	{ 269, true }, // MDEntryType
	{ 270, false }, // MDEntryPx
	{ 15, false }, // Currency
	{ 271, false }, // MDEntrySize
	{ 272, false }, // MDEntryDate
	{ 273, false }, // MDEntryTime
	{ 274, false }, // TickDirection
	{ 275, false }, // MDMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 276, false }, // QuoteCondition
	{ 277, false }, // TradeCondition
	{ 282, false }, // MDEntryOriginator
	{ 283, false }, // LocationID
	{ 284, false }, // DeskID
	{ 286, false }, // OpenCloseSettleFlag
	{ 59, false }, // TimeInForce
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 110, false }, // MinQty
	{ 18, false }, // ExecInst
	{ 287, false }, // SellerDays
	{ 37, false }, // OrderID
	{ 299, false }, // QuoteEntryID
	{ 288, false }, // MDEntryBuyer
	{ 289, false }, // MDEntrySeller
	{ 346, false }, // NumberOfOrders
	{ 290, false }, // MDEntryPositionNo
	{ 546, false }, // Scope
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataSnapshotFullRefreshGroups[] = {
    &MarketDataSnapshotFullRefreshGroup627,
    &MarketDataSnapshotFullRefreshGroup454,
    &MarketDataSnapshotFullRefreshGroup268,
    0
};

static struct _ofixMsgSpec	MarketDataSnapshotFullRefresh = {
    &fix43Spec, // version
    87, // tid
    "W", // type
    "MarketDataSnapshotFullRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,72,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,8,9,0,70,0,0,0,20,0,0,0,0,0,0,0,0,57,60,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,53,56,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,55,40,41,43,44,45,0,0,54,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,29,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,58,59,61,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,67,68,0,0,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MarketDataSnapshotFullRefreshGroups, // groups
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
	{ 262, false }, // MDReqID
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
	{ 291, false }, // FinancialStatus
	{ 292, false }, // CorporateAction
	{ 387, false }, // TotalVolumeTraded
	{ 449, false }, // TotalVolumeTradedDate
	{ 450, false }, // TotalVolumeTradedTime
	{ 451, false }, // NetChgPrevDay
	{ 268, true }, // NoMDEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataIncrementalRefresh [X]

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup268 = {
    268, // NoMDEntries
    {
	{ 279, true }, // MDUpdateAction
	{ 285, false }, // DeleteReason
	{ 269, false }, // MDEntryType
	{ 278, false }, // MDEntryID
	{ 280, false }, // MDEntryRefID
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
	{ 291, false }, // FinancialStatus
	{ 292, false }, // CorporateAction
	{ 270, false }, // MDEntryPx
	{ 15, false }, // Currency
	{ 271, false }, // MDEntrySize
	{ 272, false }, // MDEntryDate
	{ 273, false }, // MDEntryTime
	{ 274, false }, // TickDirection
	{ 275, false }, // MDMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 276, false }, // QuoteCondition
	{ 277, false }, // TradeCondition
	{ 282, false }, // MDEntryOriginator
	{ 283, false }, // LocationID
	{ 284, false }, // DeskID
	{ 286, false }, // OpenCloseSettleFlag
	{ 59, false }, // TimeInForce
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 110, false }, // MinQty
	{ 18, false }, // ExecInst
	{ 287, false }, // SellerDays
	{ 37, false }, // OrderID
	{ 299, false }, // QuoteEntryID
	{ 288, false }, // MDEntryBuyer
	{ 289, false }, // MDEntrySeller
	{ 346, false }, // NumberOfOrders
	{ 290, false }, // MDEntryPositionNo
	{ 546, false }, // Scope
	{ 387, false }, // TotalVolumeTraded
	{ 449, false }, // TotalVolumeTradedDate
	{ 450, false }, // TotalVolumeTradedTime
	{ 451, false }, // NetChgPrevDay
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataIncrementalRefreshGroups[] = {
    &MarketDataIncrementalRefreshGroup627,
    &MarketDataIncrementalRefreshGroup268,
    &MarketDataIncrementalRefreshGroup454,
    0
};

static struct _ofixMsgSpec	MarketDataIncrementalRefresh = {
    &fix43Spec, // version
    88, // tid
    "X", // type
    "MarketDataIncrementalRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MarketDataIncrementalRefreshGroups, // groups
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
	{ 262, false }, // MDReqID
	{ 268, true }, // NoMDEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataRequestReject [Y]

static struct _ofixGroupSpec	MarketDataRequestRejectGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataRequestRejectGroups[] = {
    &MarketDataRequestRejectGroup627,
    0
};

static struct _ofixMsgSpec	MarketDataRequestReject = {
    &fix43Spec, // version
    89, // tid
    "Y", // type
    "MarketDataRequestReject", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MarketDataRequestRejectGroups, // groups
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
	{ 262, true }, // MDReqID
	{ 281, false }, // MDReqRejReason
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteCancel [Z]

static struct _ofixGroupSpec	QuoteCancelGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup295 = {
    295, // NoQuoteEntries
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
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteCancelGroups[] = {
    &QuoteCancelGroup627,
    &QuoteCancelGroup453,
    &QuoteCancelGroup295,
    &QuoteCancelGroup454,
    0
};

static struct _ofixMsgSpec	QuoteCancel = {
    &fix43Spec, // version
    90, // tid
    "Z", // type
    "QuoteCancel", // name
    {0,34,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,0,0,7,17,0,29,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,31,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteCancelGroups, // groups
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
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 298, true }, // QuoteCancelType
	{ 301, false }, // QuoteResponseLevel
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 295, false }, // NoQuoteEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteStatusRequest [a]

static struct _ofixGroupSpec	QuoteStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteStatusRequestGroups[] = {
    &QuoteStatusRequestGroup627,
    &QuoteStatusRequestGroup454,
    &QuoteStatusRequestGroup453,
    0
};

static struct _ofixMsgSpec	QuoteStatusRequest = {
    &fix43Spec, // version
    97, // tid
    "a", // type
    "QuoteStatusRequest", // name
    {0,65,0,0,0,0,0,0,1,2,72,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,33,4,11,0,21,0,0,31,5,13,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,8,9,0,70,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,41,42,44,45,46,0,0,55,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,35,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteStatusRequestGroups, // groups
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
	{ 649, false }, // QuoteStatusReqID
	{ 117, false }, // QuoteID
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
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MassQuoteAcknowledgement [b]

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup296 = {
    296, // NoQuoteSets
    {
	{ 302, false }, // QuoteSetID
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
	{ 304, false }, // TotQuoteEntries
	{ 295, false }, // NoQuoteEntries
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup295 = {
    295, // NoQuoteEntries
    {
	{ 299, false }, // QuoteEntryID
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
	{ 132, false }, // BidPx
	{ 133, false }, // OfferPx
	{ 134, false }, // BidSize
	{ 135, false }, // OfferSize
	{ 62, false }, // ValidUntilTime
	{ 188, false }, // BidSpotRate
	{ 190, false }, // OfferSpotRate
	{ 189, false }, // BidForwardPoints
	{ 191, false }, // OfferForwardPoints
	{ 631, false }, // MidPx
	{ 632, false }, // BidYield
	{ 633, false }, // MidYield
	{ 634, false }, // OfferYield
	{ 60, false }, // TransactTime
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 15, false }, // Currency
	{ 368, false }, // QuoteEntryRejectReason
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MassQuoteAcknowledgementGroups[] = {
    &MassQuoteAcknowledgementGroup627,
    &MassQuoteAcknowledgementGroup453,
    &MassQuoteAcknowledgementGroup296,
    &MassQuoteAcknowledgementGroup457,
    &MassQuoteAcknowledgementGroup295,
    &MassQuoteAcknowledgementGroup454,
    0
};

static struct _ofixMsgSpec	MassQuoteAcknowledgement = {
    &fix43Spec, // version
    98, // tid
    "b", // type
    "MassQuoteAcknowledgement", // name
    {0,36,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,0,0,7,17,0,29,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,31,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MassQuoteAcknowledgementGroups, // groups
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
	{ 131, false }, // QuoteReqID
	{ 117, false }, // QuoteID
	{ 297, true }, // QuoteStatus
	{ 300, false }, // QuoteRejectReason
	{ 301, false }, // QuoteResponseLevel
	{ 537, false }, // QuoteType
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 58, false }, // Text
	{ 296, false }, // NoQuoteSets
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityDefinitionRequest [c]

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup555 = {
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

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityDefinitionRequestGroups[] = {
    &SecurityDefinitionRequestGroup627,
    &SecurityDefinitionRequestGroup454,
    &SecurityDefinitionRequestGroup555,
    &SecurityDefinitionRequestGroup604,
    0
};

static struct _ofixMsgSpec	SecurityDefinitionRequest = {
    &fix43Spec, // version
    99, // tid
    "c", // type
    "SecurityDefinitionRequest", // name
    {0,0,0,0,0,0,0,0,1,2,74,0,0,0,0,64,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,33,4,11,0,21,0,0,31,5,13,65,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,8,9,0,72,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,41,42,44,45,46,0,0,55,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityDefinitionRequestGroups, // groups
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
	{ 321, true }, // SecurityRequestType
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 555, false }, // NoLegs
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityDefinition [d]

static struct _ofixGroupSpec	SecurityDefinitionGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup555 = {
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

static struct _ofixGroupSpec	SecurityDefinitionGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityDefinitionGroups[] = {
    &SecurityDefinitionGroup627,
    &SecurityDefinitionGroup454,
    &SecurityDefinitionGroup555,
    &SecurityDefinitionGroup604,
    0
};

static struct _ofixMsgSpec	SecurityDefinition = {
    &fix43Spec, // version
    100, // tid
    "d", // type
    "SecurityDefinition", // name
    {0,0,0,0,0,0,0,0,1,2,76,0,0,0,0,65,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,34,4,11,0,21,0,0,32,5,13,68,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,8,9,0,74,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,54,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,42,43,45,46,47,0,0,56,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,0,0,0,0,0,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,72,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityDefinitionGroups, // groups
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
	{ 323, true }, // SecurityResponseType
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
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 555, false }, // NoLegs
	{ 561, false }, // RoundLot
	{ 562, false }, // MinTradeVol
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityStatusRequest [e]

static struct _ofixGroupSpec	SecurityStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityStatusRequestGroups[] = {
    &SecurityStatusRequestGroup627,
    &SecurityStatusRequestGroup454,
    0
};

static struct _ofixMsgSpec	SecurityStatusRequest = {
    &fix43Spec, // version
    101, // tid
    "e", // type
    "SecurityStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,69,0,0,0,0,63,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,8,9,0,67,0,0,0,20,0,0,0,0,0,0,0,0,57,60,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,53,56,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,55,40,41,43,44,45,0,0,54,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,25,58,59,61,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityStatusRequestGroups, // groups
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
	{ 324, true }, // SecurityStatusReqID
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
	{ 263, true }, // SubscriptionRequestType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityStatus [f]

static struct _ofixGroupSpec	SecurityStatusGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityStatusGroups[] = {
    &SecurityStatusGroup627,
    &SecurityStatusGroup454,
    0
};

static struct _ofixMsgSpec	SecurityStatus = {
    &fix43Spec, // version
    102, // tid
    "f", // type
    "SecurityStatus", // name
    {0,0,0,0,0,0,0,0,1,2,85,0,0,0,0,63,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,77,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,80,0,78,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,8,9,0,83,0,0,0,20,0,0,0,0,0,0,0,0,57,60,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,53,56,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,55,40,41,43,44,45,0,0,54,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,66,67,70,71,72,73,74,75,76,79,0,64,0,0,0,0,0,0,0,0,0,0,25,58,59,61,62,0,0,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityStatusGroups, // groups
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
	{ 324, false }, // SecurityStatusReqID
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
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 325, false }, // UnsolicitedIndicator
	{ 326, false }, // SecurityTradingStatus
	{ 291, false }, // FinancialStatus
	{ 292, false }, // CorporateAction
	{ 327, false }, // HaltReason
	{ 328, false }, // InViewOfCommon
	{ 329, false }, // DueToRelated
	{ 330, false }, // BuyVolume
	{ 331, false }, // SellVolume
	{ 332, false }, // HighPx
	{ 333, false }, // LowPx
	{ 31, false }, // LastPx
	{ 60, false }, // TransactTime
	{ 334, false }, // Adjustment
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradingSessionStatusRequest [g]

static struct _ofixGroupSpec	TradingSessionStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	TradingSessionStatusRequestGroups[] = {
    &TradingSessionStatusRequestGroup627,
    0
};

static struct _ofixMsgSpec	TradingSessionStatusRequest = {
    &fix43Spec, // version
    103, // tid
    "g", // type
    "TradingSessionStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,32,33,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradingSessionStatusRequestGroups, // groups
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
	{ 335, true }, // TradSesReqID
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 338, false }, // TradSesMethod
	{ 339, false }, // TradSesMode
	{ 263, true }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradingSessionStatus [h]

static struct _ofixGroupSpec	TradingSessionStatusGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	TradingSessionStatusGroups[] = {
    &TradingSessionStatusGroup627,
    0
};

static struct _ofixMsgSpec	TradingSessionStatus = {
    &fix43Spec, // version
    104, // tid
    "h", // type
    "TradingSessionStatus", // name
    {0,0,0,0,0,0,0,0,1,2,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,8,9,0,46,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,29,30,0,32,33,35,37,38,39,40,41,0,25,0,0,0,0,0,0,44,45,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradingSessionStatusGroups, // groups
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
	{ 335, false }, // TradSesReqID
	{ 336, true }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 338, false }, // TradSesMethod
	{ 339, false }, // TradSesMode
	{ 325, false }, // UnsolicitedIndicator
	{ 340, true }, // TradSesStatus
	{ 567, false }, // TradSesStatusRejReason
	{ 341, false }, // TradSesStartTime
	{ 342, false }, // TradSesOpenTime
	{ 343, false }, // TradSesPreCloseTime
	{ 344, false }, // TradSesCloseTime
	{ 345, false }, // TradSesEndTime
	{ 387, false }, // TotalVolumeTraded
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MassQuote [i]

static struct _ofixGroupSpec	MassQuoteGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup296 = {
    296, // NoQuoteSets
    {
	{ 302, true }, // QuoteSetID
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
	{ 367, false }, // QuoteSetValidUntilTime
	{ 304, true }, // TotQuoteEntries
	{ 295, false }, // NoQuoteEntries
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup295 = {
    295, // NoQuoteEntries
    {
	{ 299, true }, // QuoteEntryID
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
	{ 132, false }, // BidPx
	{ 133, false }, // OfferPx
	{ 134, false }, // BidSize
	{ 135, false }, // OfferSize
	{ 62, false }, // ValidUntilTime
	{ 188, false }, // BidSpotRate
	{ 190, false }, // OfferSpotRate
	{ 189, false }, // BidForwardPoints
	{ 191, false }, // OfferForwardPoints
	{ 631, false }, // MidPx
	{ 632, false }, // BidYield
	{ 633, false }, // MidYield
	{ 634, false }, // OfferYield
	{ 60, false }, // TransactTime
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 15, false }, // Currency
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MassQuoteGroups[] = {
    &MassQuoteGroup627,
    &MassQuoteGroup453,
    &MassQuoteGroup296,
    &MassQuoteGroup457,
    &MassQuoteGroup295,
    &MassQuoteGroup454,
    0
};

static struct _ofixMsgSpec	MassQuote = {
    &fix43Spec, // version
    105, // tid
    "i", // type
    "MassQuote", // name
    {0,34,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,0,0,7,17,0,29,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,37,0,38,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    MassQuoteGroups, // groups
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
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 537, false }, // QuoteType
	{ 301, false }, // QuoteResponseLevel
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 293, false }, // DefBidSize
	{ 294, false }, // DefOfferSize
	{ 296, true }, // NoQuoteSets
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// BusinessMessageReject [j]

static struct _ofixGroupSpec	BusinessMessageRejectGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	BusinessMessageRejectGroups[] = {
    &BusinessMessageRejectGroup627,
    0
};

static struct _ofixMsgSpec	BusinessMessageReject = {
    &fix43Spec, // version
    106, // tid
    "j", // type
    "BusinessMessageReject", // name
    {0,0,0,0,0,0,0,0,1,2,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,29,0,0,0,4,11,0,21,0,0,0,5,13,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,30,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    BusinessMessageRejectGroups, // groups
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
	{ 45, false }, // RefSeqNum
	{ 372, true }, // RefMsgType
	{ 379, false }, // BusinessRejectRefID
	{ 380, true }, // BusinessRejectReason
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// BidRequest [k]

static struct _ofixGroupSpec	BidRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	BidRequestGroup398 = {
    398, // NoBidDescriptors
    {
	{ 399, false }, // BidDescriptorType
	{ 400, false }, // BidDescriptor
	{ 401, false }, // SideValueInd
	{ 404, false }, // LiquidityValue
	{ 441, false }, // LiquidityNumSecurities
	{ 402, false }, // LiquidityPctLow
	{ 403, false }, // LiquidityPctHigh
	{ 405, false }, // EFPTrackingError
	{ 406, false }, // FairValue
	{ 407, false }, // OutsideIndexPct
	{ 408, false }, // ValueOfFutures
	{ 0, false }
    }
};

static struct _ofixGroupSpec	BidRequestGroup420 = {
    420, // NoBidComponents
    {
	{ 66, false }, // ListID
	{ 54, false }, // Side
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 430, false }, // NetGrossInd
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 1, false }, // Account
	{ 0, false }
    }
};

static ofixGroupSpec	BidRequestGroups[] = {
    &BidRequestGroup627,
    &BidRequestGroup398,
    &BidRequestGroup420,
    0
};

static struct _ofixMsgSpec	BidRequest = {
    &fix43Spec, // version
    107, // tid
    "k", // type
    "BidRequest", // name
    {0,0,0,0,0,0,0,0,1,2,60,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,59,8,9,0,58,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,49,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,32,33,34,35,37,38,39,0,0,0,0,0,0,0,0,0,0,41,42,43,44,45,46,47,48,50,52,53,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    BidRequestGroups, // groups
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
	{ 390, false }, // BidID
	{ 391, true }, // ClientBidID
	{ 374, true }, // BidRequestTransType
	{ 392, false }, // ListName
	{ 393, true }, // TotalNumSecurities
	{ 394, true }, // BidType
	{ 395, false }, // NumTickets
	{ 15, false }, // Currency
	{ 396, false }, // SideValue1
	{ 397, false }, // SideValue2
	{ 398, false }, // NoBidDescriptors
	{ 420, false }, // NoBidComponents
	{ 409, false }, // LiquidityIndType
	{ 410, false }, // WtAverageLiquidity
	{ 411, false }, // ExchangeForPhysical
	{ 412, false }, // OutMainCntryUIndex
	{ 413, false }, // CrossPercent
	{ 414, false }, // ProgRptReqs
	{ 415, false }, // ProgPeriodInterval
	{ 416, false }, // IncTaxInd
	{ 121, false }, // ForexReq
	{ 417, false }, // NumBidders
	{ 75, false }, // TradeDate
	{ 418, true }, // TradeType
	{ 419, true }, // BasisPxType
	{ 443, false }, // StrikeTime
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// BidResponse [l]

static struct _ofixGroupSpec	BidResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	BidResponseGroup420 = {
    420, // NoBidComponents
    {
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 66, false }, // ListID
	{ 421, false }, // Country
	{ 54, false }, // Side
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 406, false }, // FairValue
	{ 430, false }, // NetGrossInd
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	BidResponseGroups[] = {
    &BidResponseGroup627,
    &BidResponseGroup420,
    0
};

static struct _ofixMsgSpec	BidResponse = {
    &fix43Spec, // version
    108, // tid
    "l", // type
    "BidResponse", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    BidResponseGroups, // groups
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
	{ 390, false }, // BidID
	{ 391, false }, // ClientBidID
	{ 420, true }, // NoBidComponents
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListStrikePrice [m]

static struct _ofixGroupSpec	ListStrikePriceGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ListStrikePriceGroup428 = {
    428, // NoStrikes
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
	{ 140, false }, // PrevClosePx
	{ 11, false }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 54, false }, // Side
	{ 44, true }, // Price
	{ 15, false }, // Currency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ListStrikePriceGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	ListStrikePriceGroups[] = {
    &ListStrikePriceGroup627,
    &ListStrikePriceGroup428,
    &ListStrikePriceGroup454,
    0
};

static struct _ofixMsgSpec	ListStrikePrice = {
    &fix43Spec, // version
    109, // tid
    "m", // type
    "ListStrikePrice", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ListStrikePriceGroups, // groups
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
	{ 66, true }, // ListID
	{ 422, true }, // TotNoStrikes
	{ 428, true }, // NoStrikes
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// RegistrationInstructions [o]

static struct _ofixGroupSpec	RegistrationInstructionsGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup473 = {
    473, // NoRegistDtls
    {
	{ 509, false }, // RegistDetls
	{ 511, false }, // RegistEmail
	{ 474, false }, // MailingDtls
	{ 482, false }, // MailingInst
	{ 539, false }, // NoNestedPartyIDs
	{ 522, false }, // OwnerType
	{ 486, false }, // DateOfBirth
	{ 475, false }, // InvestorCountryOfResidence
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup510 = {
    510, // NoDistribInsts
    {
	{ 477, false }, // DistribPaymentMethod
	{ 512, false }, // DistribPercentage
	{ 478, false }, // CashDistribCurr
	{ 498, false }, // CashDistribAgentName
	{ 499, false }, // CashDistribAgentCode
	{ 500, false }, // CashDistribAgentAcctNumber
	{ 501, false }, // CashDistribPayRef
	{ 502, false }, // CashDistribAgentAcctName
	{ 0, false }
    }
};

static ofixGroupSpec	RegistrationInstructionsGroups[] = {
    &RegistrationInstructionsGroup627,
    &RegistrationInstructionsGroup453,
    &RegistrationInstructionsGroup473,
    &RegistrationInstructionsGroup539,
    &RegistrationInstructionsGroup510,
    0
};

static struct _ofixMsgSpec	RegistrationInstructions = {
    &fix43Spec, // version
    111, // tid
    "o", // type
    "RegistrationInstructions", // name
    {0,34,0,0,0,0,0,0,1,2,42,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,36,0,0,0,0,0,0,0,0,0,0,0,0,31,0,39,0,0,29,30,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RegistrationInstructionsGroups, // groups
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
	{ 513, true }, // RegistID
	{ 514, true }, // RegistTransType
	{ 508, true }, // RegistRefID
	{ 11, false }, // ClOrdID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 493, false }, // RegistAcctType
	{ 495, false }, // TaxAdvantageType
	{ 517, false }, // OwnershipType
	{ 473, false }, // NoRegistDtls
	{ 510, false }, // NoDistribInsts
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// RegistrationInstructionsResponse [p]

static struct _ofixGroupSpec	RegistrationInstructionsResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsResponseGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static ofixGroupSpec	RegistrationInstructionsResponseGroups[] = {
    &RegistrationInstructionsResponseGroup627,
    &RegistrationInstructionsResponseGroup453,
    0
};

static struct _ofixMsgSpec	RegistrationInstructionsResponse = {
    &fix43Spec, // version
    112, // tid
    "p", // type
    "RegistrationInstructionsResponse", // name
    {0,34,0,0,0,0,0,0,1,2,40,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,8,9,0,38,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,35,36,31,0,0,0,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RegistrationInstructionsResponseGroups, // groups
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
	{ 513, true }, // RegistID
	{ 514, true }, // RegistTransType
	{ 508, true }, // RegistRefID
	{ 11, false }, // ClOrdID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 506, true }, // RegistStatus
	{ 507, false }, // RegistRejReasonCode
	{ 496, false }, // RegistRejReasonText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderMassCancelRequest [q]

static struct _ofixGroupSpec	OrderMassCancelRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassCancelRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassCancelRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassCancelRequestGroups[] = {
    &OrderMassCancelRequestGroup627,
    &OrderMassCancelRequestGroup454,
    &OrderMassCancelRequestGroup457,
    0
};

static struct _ofixMsgSpec	OrderMassCancelRequest = {
    &fix43Spec, // version
    113, // tid
    "q", // type
    "OrderMassCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,108,29,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,36,4,11,0,21,0,101,34,5,13,103,0,102,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,8,9,0,106,0,0,0,20,0,0,0,0,0,0,0,0,61,64,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,56,0,0,0,57,60,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,59,44,45,47,48,49,0,0,58,0,0,0,0,0,0,0,46,55,77,78,79,80,81,82,88,0,0,0,0,0,0,0,50,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,95,98,94,69,74,67,68,75,0,89,90,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,25,62,63,65,66,0,0,104,105,0,0,0,0,0,0,96,97,99,100,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,93,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,71,0,0,39,40,72,73,0,0,0,0,0,0,52,53,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,31,0,0,0,0,0,0,0,0,0,0,43,76,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,86,87,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderMassCancelRequestGroups, // groups
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
	{ 530, true }, // MassCancelRequestType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
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
	{ 54, false }, // Side
	{ 60, true }, // TransactTime
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderMassCancelReport [r]

static struct _ofixGroupSpec	OrderMassCancelReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassCancelReportGroup534 = {
    534, // NoAffectedOrders
    {
	{ 41, false }, // OrigClOrdID
	{ 535, false }, // AffectedOrderID
	{ 536, false }, // AffectedSecondaryOrderID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassCancelReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassCancelReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassCancelReportGroups[] = {
    &OrderMassCancelReportGroup627,
    &OrderMassCancelReportGroup534,
    &OrderMassCancelReportGroup454,
    &OrderMassCancelReportGroup457,
    0
};

static struct _ofixMsgSpec	OrderMassCancelReport = {
    &fix43Spec, // version
    114, // tid
    "r", // type
    "OrderMassCancelReport", // name
    {0,0,0,0,0,0,0,0,1,2,114,29,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,10,3,0,31,0,0,0,0,0,19,0,0,0,0,42,4,11,0,21,0,107,40,5,13,109,0,108,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,113,8,9,0,112,0,0,0,20,0,0,0,0,0,0,0,0,67,70,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,48,0,62,0,0,0,63,66,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,65,50,51,53,54,55,0,0,64,0,0,0,0,0,0,0,52,61,83,84,85,86,87,88,94,0,0,0,0,0,0,0,56,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,101,104,100,75,80,73,74,81,0,95,96,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,25,68,69,71,72,0,0,110,111,0,0,0,0,0,0,102,103,105,106,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,77,0,0,45,46,78,79,0,0,0,0,0,0,58,59,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,33,34,35,36,37,0,0,0,0,0,0,49,82,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,92,93,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    OrderMassCancelReportGroups, // groups
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
	{ 11, false }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 530, true }, // MassCancelRequestType
	{ 531, true }, // MassCancelResponse
	{ 532, false }, // MassCancelRejectReason
	{ 533, false }, // TotalAffectedOrders
	{ 534, false }, // NoAffectedOrders
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
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
	{ 54, false }, // Side
	{ 60, false }, // TransactTime
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NewOrderCross [s]

static struct _ofixGroupSpec	NewOrderCrossGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup552 = {
    552, // NoSides
    {
	{ 54, true }, // Side
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 78, false }, // NoAllocs
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
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
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 377, false }, // SolicitedFlag
	{ 659, false }, // SideComplianceID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 539, false }, // NoNestedPartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderCrossGroups[] = {
    &NewOrderCrossGroup627,
    &NewOrderCrossGroup552,
    &NewOrderCrossGroup453,
    &NewOrderCrossGroup78,
    &NewOrderCrossGroup539,
    &NewOrderCrossGroup454,
    &NewOrderCrossGroup386,
    &NewOrderCrossGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderCross = {
    &fix43Spec, // version
    115, // tid
    "s", // type
    "NewOrderCross", // name
    {0,0,0,0,0,0,0,0,1,2,111,0,0,0,0,89,0,0,69,0,0,68,36,91,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,79,0,0,19,81,0,0,0,35,4,11,0,21,0,0,33,5,13,0,93,77,0,0,66,67,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,110,8,9,0,109,0,0,0,20,0,82,72,0,0,0,0,0,60,63,0,0,70,71,0,0,76,6,15,92,108,0,0,0,22,0,0,0,96,0,7,17,0,0,0,0,0,0,0,0,0,0,75,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,106,107,0,0,0,0,0,0,0,40,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,55,0,0,0,56,59,0,0,98,99,23,24,0,0,0,0,83,0,84,85,86,58,43,44,46,47,48,0,0,57,78,0,0,87,88,0,0,45,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,61,62,64,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,73,0,100,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,97,0,0,0,0,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,38,39,0,0,0,0,0,0,0,0,51,52,53,0,0,0,0,0,0,0,102,103,0,0,0,0,0,0,0,0,0,0,0,0,105,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,50,0,0,0,0,29,30,31,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NewOrderCrossGroups, // groups
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
	{ 548, true }, // CrossID
	{ 549, true }, // CrossType
	{ 550, true }, // CrossPrioritization
	{ 552, true }, // NoSides
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
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 21, true }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 81, false }, // ProcessCode
	{ 140, false }, // PrevClosePx
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 232, false }, // NoStipulations
	{ 40, true }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 23, false }, // IOIid
	{ 117, false }, // QuoteID
	{ 59, false }, // TimeInForce
	{ 168, false }, // EffectiveTime
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 427, false }, // GTBookingInst
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CrossOrderCancelReplaceRequest [t]

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup552 = {
    552, // NoSides
    {
	{ 54, true }, // Side
	{ 41, false }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 586, false }, // OrigOrdModTime
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 78, false }, // NoAllocs
	{ 465, false }, // QuantityType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
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
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 377, false }, // SolicitedFlag
	{ 659, false }, // SideComplianceID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 467, false }, // IndividualAllocID
	{ 539, false }, // NoNestedPartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 545, false }, // NestedPartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	CrossOrderCancelReplaceRequestGroups[] = {
    &CrossOrderCancelReplaceRequestGroup627,
    &CrossOrderCancelReplaceRequestGroup552,
    &CrossOrderCancelReplaceRequestGroup453,
    &CrossOrderCancelReplaceRequestGroup78,
    &CrossOrderCancelReplaceRequestGroup539,
    &CrossOrderCancelReplaceRequestGroup454,
    &CrossOrderCancelReplaceRequestGroup386,
    &CrossOrderCancelReplaceRequestGroup232,
    0
};

static struct _ofixMsgSpec	CrossOrderCancelReplaceRequest = {
    &fix43Spec, // version
    116, // tid
    "t", // type
    "CrossOrderCancelReplaceRequest", // name
    {0,0,0,0,0,0,0,0,1,2,113,0,0,0,0,91,0,0,71,0,0,70,38,93,0,0,0,0,0,0,0,0,0,0,10,3,0,29,0,0,81,0,0,19,83,0,0,0,37,4,11,0,21,0,0,35,5,13,0,95,79,0,0,68,69,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,112,8,9,0,111,0,0,0,20,0,84,74,0,0,0,0,0,62,65,0,0,72,73,0,0,78,6,15,94,110,0,0,0,22,0,0,0,98,0,7,17,0,0,0,0,0,0,0,0,0,0,77,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,108,109,0,0,0,0,0,0,0,42,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,58,61,0,0,100,101,23,24,0,0,0,0,85,0,86,87,88,60,45,46,48,49,50,0,0,59,80,0,0,89,90,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,63,64,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,75,0,102,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,0,0,0,99,0,0,0,0,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,40,41,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,104,105,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,30,32,33,31,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CrossOrderCancelReplaceRequestGroups, // groups
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
	{ 548, true }, // CrossID
	{ 551, true }, // OrigCrossID
	{ 549, true }, // CrossType
	{ 550, true }, // CrossPrioritization
	{ 552, true }, // NoSides
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
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 21, true }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 81, false }, // ProcessCode
	{ 140, false }, // PrevClosePx
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 232, false }, // NoStipulations
	{ 40, true }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 23, false }, // IOIid
	{ 117, false }, // QuoteID
	{ 59, false }, // TimeInForce
	{ 168, false }, // EffectiveTime
	{ 432, false }, // ExpireDate
	{ 126, false }, // ExpireTime
	{ 427, false }, // GTBookingInst
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 118, false }, // NetMoney
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CrossOrderCancelRequest [u]

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup552 = {
    552, // NoSides
    {
	{ 54, true }, // Side
	{ 41, false }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 586, false }, // OrigOrdModTime
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 376, false }, // ComplianceID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 523, false }, // PartySubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	CrossOrderCancelRequestGroups[] = {
    &CrossOrderCancelRequestGroup627,
    &CrossOrderCancelRequestGroup552,
    &CrossOrderCancelRequestGroup453,
    &CrossOrderCancelRequestGroup454,
    0
};

static struct _ofixMsgSpec	CrossOrderCancelRequest = {
    &fix43Spec, // version
    117, // tid
    "u", // type
    "CrossOrderCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,71,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,0,0,0,0,0,19,0,0,0,0,37,4,11,0,21,0,0,35,5,13,0,0,68,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,8,9,0,69,0,0,0,20,0,0,0,0,0,0,0,0,62,65,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,58,61,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,60,45,46,48,49,50,0,0,59,0,0,0,0,0,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,63,64,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,40,41,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,30,32,33,31,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CrossOrderCancelRequestGroups, // groups
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
	{ 548, true }, // CrossID
	{ 551, true }, // OrigCrossID
	{ 549, true }, // CrossType
	{ 550, true }, // CrossPrioritization
	{ 552, true }, // NoSides
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
	{ 60, true }, // TransactTime
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityTypeRequest [v]

static struct _ofixGroupSpec	SecurityTypeRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityTypeRequestGroups[] = {
    &SecurityTypeRequestGroup627,
    0
};

static struct _ofixMsgSpec	SecurityTypeRequest = {
    &fix43Spec, // version
    118, // tid
    "v", // type
    "SecurityTypeRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityTypeRequestGroups, // groups
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityTypes [w]

static struct _ofixGroupSpec	SecurityTypesGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityTypesGroup558 = {
    558, // NoSecurityTypes
    {
	{ 167, false }, // SecurityType
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityTypesGroups[] = {
    &SecurityTypesGroup627,
    &SecurityTypesGroup558,
    0
};

static struct _ofixMsgSpec	SecurityTypes = {
    &fix43Spec, // version
    119, // tid
    "w", // type
    "SecurityTypes", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityTypesGroups, // groups
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
	{ 323, true }, // SecurityResponseType
	{ 557, false }, // TotalNumSecurityTypes
	{ 558, false }, // NoSecurityTypes
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityListRequest [x]

static struct _ofixGroupSpec	SecurityListRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityListRequestGroups[] = {
    &SecurityListRequestGroup627,
    &SecurityListRequestGroup454,
    0
};

static struct _ofixMsgSpec	SecurityListRequest = {
    &fix43Spec, // version
    120, // tid
    "x", // type
    "SecurityListRequest", // name
    {0,0,0,0,0,0,0,0,1,2,73,0,0,0,0,64,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,33,4,11,0,21,0,0,31,5,13,65,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,8,9,0,71,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,41,42,44,45,46,0,0,55,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityListRequestGroups, // groups
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
	{ 559, true }, // SecurityListRequestType
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityList [y]

static struct _ofixGroupSpec	SecurityListGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup146 = {
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
	{ 561, false }, // RoundLot
	{ 562, false }, // MinTradeVol
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup555 = {
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

static struct _ofixGroupSpec	SecurityListGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityListGroups[] = {
    &SecurityListGroup627,
    &SecurityListGroup146,
    &SecurityListGroup454,
    &SecurityListGroup555,
    &SecurityListGroup604,
    0
};

static struct _ofixMsgSpec	SecurityList = {
    &fix43Spec, // version
    121, // tid
    "y", // type
    "SecurityList", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SecurityListGroups, // groups
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
	{ 393, false }, // TotalNumSecurities
	{ 146, false }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// DerivativeSecurityListRequest [z]

static struct _ofixGroupSpec	DerivativeSecurityListRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	DerivativeSecurityListRequestGroups[] = {
    &DerivativeSecurityListRequestGroup627,
    &DerivativeSecurityListRequestGroup457,
    0
};

static struct _ofixMsgSpec	DerivativeSecurityListRequest = {
    &fix43Spec, // version
    122, // tid
    "z", // type
    "DerivativeSecurityListRequest", // name
    {0,0,0,0,0,0,0,0,1,2,74,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,8,9,0,72,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,42,43,44,45,46,52,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,59,62,58,33,38,31,32,39,0,53,54,55,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,67,68,0,0,0,0,0,0,60,61,63,64,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,50,51,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    DerivativeSecurityListRequestGroups, // groups
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
	{ 559, true }, // SecurityListRequestType
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
	{ 15, false }, // Currency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 263, false }, // SubscriptionRequestType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};



// FIX Version 4.3
struct _ofixVersionSpec	fix43Spec = {
    4, // majorVersion
    3, // minorVersion
    "FIX.4.3", // id
    false, // ready
    tags, // tags
    { 0 }, // tagTable
    {
	&Heartbeat,
	&TestRequest,
	&ResendRequest,
	&Reject,
	&SequenceReset,
	&Logout,
	&IndicationOfInterest,
	&Advertisement,
	&ExecutionReport,
	&OrderCancelReject,
	&Logon,
	&DerivativeSecurityList,
	&NewOrderMultileg,
	&MultilegOrderCancelReplaceRequest,
	&TradeCaptureReportRequest,
	&TradeCaptureReport,
	&OrderMassStatusRequest,
	&QuoteRequestReject,
	&RFQRequest,
	&QuoteStatusReport,
	&News,
	&Email,
	&NewOrderSingle,
	&NewOrderList,
	&OrderCancelRequest,
	&OrderCancelReplaceRequest,
	&OrderStatusRequest,
	&Allocation,
	&ListCancelRequest,
	&ListExecute,
	&ListStatusRequest,
	&ListStatus,
	&AllocationACK,
	&DontKnowTrade,
	&QuoteRequest,
	&Quote,
	&SettlementInstructions,
	&MarketDataRequest,
	&MarketDataSnapshotFullRefresh,
	&MarketDataIncrementalRefresh,
	&MarketDataRequestReject,
	&QuoteCancel,
	&QuoteStatusRequest,
	&MassQuoteAcknowledgement,
	&SecurityDefinitionRequest,
	&SecurityDefinition,
	&SecurityStatusRequest,
	&SecurityStatus,
	&TradingSessionStatusRequest,
	&TradingSessionStatus,
	&MassQuote,
	&BusinessMessageReject,
	&BidRequest,
	&BidResponse,
	&ListStrikePrice,
	&RegistrationInstructions,
	&RegistrationInstructionsResponse,
	&OrderMassCancelRequest,
	&OrderMassCancelReport,
	&NewOrderCross,
	&CrossOrderCancelReplaceRequest,
	&CrossOrderCancelRequest,
	&SecurityTypeRequest,
	&SecurityTypes,
	&SecurityListRequest,
	&SecurityList,
	&DerivativeSecurityListRequest,
	0
    }
};
