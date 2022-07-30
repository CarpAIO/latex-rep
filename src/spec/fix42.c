

// This file is auto-generated from ref/FIX42.xml and should not be modified.

#include "ofix/tagspec.h"
#include "ofix/tagreq.h"
#include "ofix/msgspec.h"
#include "ofix/versionspec.h"

extern struct _ofixVersionSpec	fix42Spec;

// ----- Tags -----
static struct _ofixTagSpec	tags[] = {
    { 1, OFIX_String, OFIX_Body, 0, 2, "1=", "Account" },
    { 2, OFIX_String, OFIX_Body, 0, 2, "2=", "AdvId" },
    { 3, OFIX_String, OFIX_Body, 0, 2, "3=", "AdvRefID" },
    { 4, OFIX_Char, OFIX_Body, 0, 2, "4=", "AdvSide" },
    { 5, OFIX_String, OFIX_Body, 0, 2, "5=", "AdvTransType" },
    { 6, OFIX_Price, OFIX_Body, 0, 2, "6=", "AvgPx" },
    { 7, OFIX_Int, OFIX_Body, 0, 2, "7=", "BeginSeqNo" },
    { 8, OFIX_String, OFIX_Header, 0, 2, "8=", "BeginString" },
    { 9, OFIX_Int, OFIX_Header, 0, 2, "9=", "BodyLength" },
    { 10, OFIX_String, OFIX_Trailer, 0, 3, "10=", "CheckSum" },
    { 11, OFIX_String, OFIX_Body, 0, 3, "11=", "ClOrdID" },
    { 12, OFIX_Amt, OFIX_Body, 0, 3, "12=", "Commission" },
    { 13, OFIX_Char, OFIX_Body, 0, 3, "13=", "CommType" },
    { 14, OFIX_Qty, OFIX_Body, 0, 3, "14=", "CumQty" },
    { 15, OFIX_Currency, OFIX_Body, 0, 3, "15=", "Currency" },
    { 16, OFIX_Int, OFIX_Body, 0, 3, "16=", "EndSeqNo" },
    { 17, OFIX_String, OFIX_Body, 0, 3, "17=", "ExecID" },
    { 18, OFIX_MultipleValueString, OFIX_Body, 0, 3, "18=", "ExecInst" },
    { 19, OFIX_String, OFIX_Body, 0, 3, "19=", "ExecRefID" },
    { 20, OFIX_Char, OFIX_Body, 0, 3, "20=", "ExecTransType" },
    { 21, OFIX_Char, OFIX_Body, 0, 3, "21=", "HandlInst" },
    { 22, OFIX_String, OFIX_Body, 0, 3, "22=", "IDSource" },
    { 23, OFIX_String, OFIX_Body, 0, 3, "23=", "IOIid" },
    { 24, OFIX_Char, OFIX_Body, 0, 3, "24=", "IOIOthSvc" },
    { 25, OFIX_Char, OFIX_Body, 0, 3, "25=", "IOIQltyInd" },
    { 26, OFIX_String, OFIX_Body, 0, 3, "26=", "IOIRefID" },
    { 27, OFIX_String, OFIX_Body, 0, 3, "27=", "IOIShares" },
    { 28, OFIX_Char, OFIX_Body, 0, 3, "28=", "IOITransType" },
    { 29, OFIX_Char, OFIX_Body, 0, 3, "29=", "LastCapacity" },
    { 30, OFIX_Exchange, OFIX_Body, 0, 3, "30=", "LastMkt" },
    { 31, OFIX_Price, OFIX_Body, 0, 3, "31=", "LastPx" },
    { 32, OFIX_Qty, OFIX_Body, 0, 3, "32=", "LastShares" },
    { 33, OFIX_Int, OFIX_Body, 0, 3, "33=", "LinesOfText" },
    { 34, OFIX_Int, OFIX_Header, 0, 3, "34=", "MsgSeqNum" },
    { 35, OFIX_String, OFIX_Header, 0, 3, "35=", "MsgType" },
    { 36, OFIX_Int, OFIX_Body, 0, 3, "36=", "NewSeqNo" },
    { 37, OFIX_String, OFIX_Body, 0, 3, "37=", "OrderID" },
    { 38, OFIX_Qty, OFIX_Body, 0, 3, "38=", "OrderQty" },
    { 39, OFIX_Char, OFIX_Body, 0, 3, "39=", "OrdStatus" },
    { 40, OFIX_Char, OFIX_Body, 0, 3, "40=", "OrdType" },
    { 41, OFIX_String, OFIX_Body, 0, 3, "41=", "OrigClOrdID" },
    { 42, OFIX_UTCTimestamp, OFIX_Body, 0, 3, "42=", "OrigTime" },
    { 43, OFIX_Boolean, OFIX_Header, 0, 3, "43=", "PossDupFlag" },
    { 44, OFIX_Price, OFIX_Body, 0, 3, "44=", "Price" },
    { 45, OFIX_Int, OFIX_Body, 0, 3, "45=", "RefSeqNum" },
    { 46, OFIX_String, OFIX_Body, 0, 3, "46=", "RelatdSym" },
    { 47, OFIX_Char, OFIX_Body, 0, 3, "47=", "Rule80A" },
    { 48, OFIX_String, OFIX_Body, 0, 3, "48=", "SecurityID" },
    { 49, OFIX_String, OFIX_Header, 0, 3, "49=", "SenderCompID" },
    { 50, OFIX_String, OFIX_Header, 0, 3, "50=", "SenderSubID" },
    { 52, OFIX_UTCTimestamp, OFIX_Header, 0, 3, "52=", "SendingTime" },
    { 53, OFIX_Qty, OFIX_Body, 0, 3, "53=", "Shares" },
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
    { 73, OFIX_Int, OFIX_Body, 0, 3, "73=", "NoOrders" },
    { 74, OFIX_Int, OFIX_Body, 0, 3, "74=", "AvgPrxPrecision" },
    { 75, OFIX_LocalMktDate, OFIX_Body, 0, 3, "75=", "TradeDate" },
    { 76, OFIX_String, OFIX_Body, 0, 3, "76=", "ExecBroker" },
    { 77, OFIX_Char, OFIX_Body, 0, 3, "77=", "OpenClose" },
    { 78, OFIX_Int, OFIX_Body, 0, 3, "78=", "NoAllocs" },
    { 79, OFIX_String, OFIX_Body, 0, 3, "79=", "AllocAccount" },
    { 80, OFIX_Qty, OFIX_Body, 0, 3, "80=", "AllocShares" },
    { 81, OFIX_Char, OFIX_Body, 0, 3, "81=", "ProcessCode" },
    { 82, OFIX_Int, OFIX_Body, 0, 3, "82=", "NoRpts" },
    { 83, OFIX_Int, OFIX_Body, 0, 3, "83=", "RptSeq" },
    { 84, OFIX_Qty, OFIX_Body, 0, 3, "84=", "CxlQty" },
    { 85, OFIX_Int, OFIX_Body, 0, 3, "85=", "NoDlvyInst" },
    { 86, OFIX_String, OFIX_Body, 0, 3, "86=", "DlvyInst" },
    { 87, OFIX_Int, OFIX_Body, 0, 3, "87=", "AllocStatus" },
    { 88, OFIX_Int, OFIX_Body, 0, 3, "88=", "AllocRejCode" },
    { 89, OFIX_Data, OFIX_Trailer, 0, 3, "89=", "Signature" },
    { 90, OFIX_Int, OFIX_Header, 0, 3, "90=", "SecureDataLen" },
    { 91, OFIX_Data, OFIX_Header, 0, 3, "91=", "SecureData" },
    { 92, OFIX_String, OFIX_Body, 0, 3, "92=", "BrokerOfCredit" },
    { 93, OFIX_Int, OFIX_Trailer, 0, 3, "93=", "SignatureLength" },
    { 94, OFIX_Char, OFIX_Body, 0, 3, "94=", "EmailType" },
    { 95, OFIX_Int, OFIX_Body, 0, 3, "95=", "RawDataLength" },
    { 96, OFIX_Data, OFIX_Body, 0, 3, "96=", "RawData" },
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
    { 124, OFIX_Int, OFIX_Body, 0, 4, "124=", "NoExecs" },
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
    { 136, OFIX_Int, OFIX_Body, 0, 4, "136=", "NoMiscFees" },
    { 137, OFIX_Amt, OFIX_Body, 0, 4, "137=", "MiscFeeAmt" },
    { 138, OFIX_Currency, OFIX_Body, 0, 4, "138=", "MiscFeeCurr" },
    { 139, OFIX_Char, OFIX_Body, 0, 4, "139=", "MiscFeeType" },
    { 140, OFIX_Price, OFIX_Body, 0, 4, "140=", "PrevClosePx" },
    { 141, OFIX_Boolean, OFIX_Body, 0, 4, "141=", "ResetSeqNumFlag" },
    { 142, OFIX_String, OFIX_Header, 0, 4, "142=", "SenderLocationID" },
    { 143, OFIX_String, OFIX_Header, 0, 4, "143=", "TargetLocationID" },
    { 144, OFIX_String, OFIX_Header, 0, 4, "144=", "OnBehalfOfLocationID" },
    { 145, OFIX_String, OFIX_Header, 0, 4, "145=", "DeliverToLocationID" },
    { 146, OFIX_Int, OFIX_Body, 0, 4, "146=", "NoRelatedSym" },
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
    { 158, OFIX_Float, OFIX_Body, 0, 4, "158=", "AccruedInterestRate" },
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
    { 199, OFIX_Int, OFIX_Body, 0, 4, "199=", "NoIOIQualifiers" },
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
    { 212, OFIX_Int, OFIX_Header, 0, 4, "212=", "XmlDataLen" },
    { 213, OFIX_Data, OFIX_Header, 0, 4, "213=", "XmlData" },
    { 214, OFIX_String, OFIX_Body, 0, 4, "214=", "SettlInstRefID" },
    { 215, OFIX_Int, OFIX_Body, 0, 4, "215=", "NoRoutingIDs" },
    { 216, OFIX_Int, OFIX_Body, 0, 4, "216=", "RoutingType" },
    { 217, OFIX_String, OFIX_Body, 0, 4, "217=", "RoutingID" },
    { 218, OFIX_PriceOffset, OFIX_Body, 0, 4, "218=", "SpreadToBenchmark" },
    { 219, OFIX_Char, OFIX_Body, 0, 4, "219=", "Benchmark" },
    { 223, OFIX_Float, OFIX_Body, 0, 4, "223=", "CouponRate" },
    { 231, OFIX_Float, OFIX_Body, 0, 4, "231=", "ContractMultiplier" },
    { 262, OFIX_String, OFIX_Body, 0, 4, "262=", "MDReqID" },
    { 263, OFIX_Char, OFIX_Body, 0, 4, "263=", "SubscriptionRequestType" },
    { 264, OFIX_Int, OFIX_Body, 0, 4, "264=", "MarketDepth" },
    { 265, OFIX_Int, OFIX_Body, 0, 4, "265=", "MDUpdateType" },
    { 266, OFIX_Boolean, OFIX_Body, 0, 4, "266=", "AggregatedBook" },
    { 267, OFIX_Int, OFIX_Body, 0, 4, "267=", "NoMDEntryTypes" },
    { 268, OFIX_Int, OFIX_Body, 0, 4, "268=", "NoMDEntries" },
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
    { 286, OFIX_Char, OFIX_Body, 0, 4, "286=", "OpenCloseSettleFlag" },
    { 287, OFIX_Int, OFIX_Body, 0, 4, "287=", "SellerDays" },
    { 288, OFIX_String, OFIX_Body, 0, 4, "288=", "MDEntryBuyer" },
    { 289, OFIX_String, OFIX_Body, 0, 4, "289=", "MDEntrySeller" },
    { 290, OFIX_Int, OFIX_Body, 0, 4, "290=", "MDEntryPositionNo" },
    { 291, OFIX_Char, OFIX_Body, 0, 4, "291=", "FinancialStatus" },
    { 292, OFIX_Char, OFIX_Body, 0, 4, "292=", "CorporateAction" },
    { 293, OFIX_Qty, OFIX_Body, 0, 4, "293=", "DefBidSize" },
    { 294, OFIX_Qty, OFIX_Body, 0, 4, "294=", "DefOfferSize" },
    { 295, OFIX_Int, OFIX_Body, 0, 4, "295=", "NoQuoteEntries" },
    { 296, OFIX_Int, OFIX_Body, 0, 4, "296=", "NoQuoteSets" },
    { 297, OFIX_Int, OFIX_Body, 0, 4, "297=", "QuoteAckStatus" },
    { 298, OFIX_Int, OFIX_Body, 0, 4, "298=", "QuoteCancelType" },
    { 299, OFIX_String, OFIX_Body, 0, 4, "299=", "QuoteEntryID" },
    { 300, OFIX_Int, OFIX_Body, 0, 4, "300=", "QuoteRejectReason" },
    { 301, OFIX_Int, OFIX_Body, 0, 4, "301=", "QuoteResponseLevel" },
    { 302, OFIX_String, OFIX_Body, 0, 4, "302=", "QuoteSetID" },
    { 303, OFIX_Int, OFIX_Body, 0, 4, "303=", "QuoteRequestType" },
    { 304, OFIX_Int, OFIX_Body, 0, 4, "304=", "TotQuoteEntries" },
    { 305, OFIX_String, OFIX_Body, 0, 4, "305=", "UnderlyingIDSource" },
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
    { 348, OFIX_Int, OFIX_Body, 0, 4, "348=", "EncodedIssuerLen" },
    { 349, OFIX_Data, OFIX_Body, 0, 4, "349=", "EncodedIssuer" },
    { 350, OFIX_Int, OFIX_Body, 0, 4, "350=", "EncodedSecurityDescLen" },
    { 351, OFIX_Data, OFIX_Body, 0, 4, "351=", "EncodedSecurityDesc" },
    { 352, OFIX_Int, OFIX_Body, 0, 4, "352=", "EncodedListExecInstLen" },
    { 353, OFIX_Data, OFIX_Body, 0, 4, "353=", "EncodedListExecInst" },
    { 354, OFIX_Int, OFIX_Body, 0, 4, "354=", "EncodedTextLen" },
    { 355, OFIX_Data, OFIX_Body, 0, 4, "355=", "EncodedText" },
    { 356, OFIX_Int, OFIX_Body, 0, 4, "356=", "EncodedSubjectLen" },
    { 357, OFIX_Data, OFIX_Body, 0, 4, "357=", "EncodedSubject" },
    { 358, OFIX_Int, OFIX_Body, 0, 4, "358=", "EncodedHeadlineLen" },
    { 359, OFIX_Data, OFIX_Body, 0, 4, "359=", "EncodedHeadline" },
    { 360, OFIX_Int, OFIX_Body, 0, 4, "360=", "EncodedAllocTextLen" },
    { 361, OFIX_Data, OFIX_Body, 0, 4, "361=", "EncodedAllocText" },
    { 362, OFIX_Int, OFIX_Body, 0, 4, "362=", "EncodedUnderlyingIssuerLen" },
    { 363, OFIX_Data, OFIX_Body, 0, 4, "363=", "EncodedUnderlyingIssuer" },
    { 364, OFIX_Int, OFIX_Body, 0, 4, "364=", "EncodedUnderlyingSecurityDescLen" },
    { 365, OFIX_Data, OFIX_Body, 0, 4, "365=", "EncodedUnderlyingSecurityDesc" },
    { 366, OFIX_Price, OFIX_Body, 0, 4, "366=", "AllocPrice" },
    { 367, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "367=", "QuoteSetValidUntilTime" },
    { 368, OFIX_Int, OFIX_Body, 0, 4, "368=", "QuoteEntryRejectReason" },
    { 369, OFIX_Int, OFIX_Header, 0, 4, "369=", "LastMsgSeqNumProcessed" },
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
    { 382, OFIX_Int, OFIX_Body, 0, 4, "382=", "NoContraBrokers" },
    { 383, OFIX_Int, OFIX_Body, 0, 4, "383=", "MaxMessageSize" },
    { 384, OFIX_Int, OFIX_Body, 0, 4, "384=", "NoMsgTypes" },
    { 385, OFIX_Char, OFIX_Body, 0, 4, "385=", "MsgDirection" },
    { 386, OFIX_Int, OFIX_Body, 0, 4, "386=", "NoTradingSessions" },
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
    { 398, OFIX_Int, OFIX_Body, 0, 4, "398=", "NoBidDescriptors" },
    { 399, OFIX_Int, OFIX_Body, 0, 4, "399=", "BidDescriptorType" },
    { 400, OFIX_String, OFIX_Body, 0, 4, "400=", "BidDescriptor" },
    { 401, OFIX_Int, OFIX_Body, 0, 4, "401=", "SideValueInd" },
    { 402, OFIX_Float, OFIX_Body, 0, 4, "402=", "LiquidityPctLow" },
    { 403, OFIX_Float, OFIX_Body, 0, 4, "403=", "LiquidityPctHigh" },
    { 404, OFIX_Amt, OFIX_Body, 0, 4, "404=", "LiquidityValue" },
    { 405, OFIX_Float, OFIX_Body, 0, 4, "405=", "EFPTrackingError" },
    { 406, OFIX_Amt, OFIX_Body, 0, 4, "406=", "FairValue" },
    { 407, OFIX_Float, OFIX_Body, 0, 4, "407=", "OutsideIndexPct" },
    { 408, OFIX_Amt, OFIX_Body, 0, 4, "408=", "ValueOfFutures" },
    { 409, OFIX_Int, OFIX_Body, 0, 4, "409=", "LiquidityIndType" },
    { 410, OFIX_Float, OFIX_Body, 0, 4, "410=", "WtAverageLiquidity" },
    { 411, OFIX_Boolean, OFIX_Body, 0, 4, "411=", "ExchangeForPhysical" },
    { 412, OFIX_Amt, OFIX_Body, 0, 4, "412=", "OutMainCntryUIndex" },
    { 413, OFIX_Float, OFIX_Body, 0, 4, "413=", "CrossPercent" },
    { 414, OFIX_Int, OFIX_Body, 0, 4, "414=", "ProgRptReqs" },
    { 415, OFIX_Int, OFIX_Body, 0, 4, "415=", "ProgPeriodInterval" },
    { 416, OFIX_Int, OFIX_Body, 0, 4, "416=", "IncTaxInd" },
    { 417, OFIX_Int, OFIX_Body, 0, 4, "417=", "NumBidders" },
    { 418, OFIX_Char, OFIX_Body, 0, 4, "418=", "TradeType" },
    { 419, OFIX_Char, OFIX_Body, 0, 4, "419=", "BasisPxType" },
    { 420, OFIX_Int, OFIX_Body, 0, 4, "420=", "NoBidComponents" },
    { 421, OFIX_String, OFIX_Body, 0, 4, "421=", "Country" },
    { 422, OFIX_Int, OFIX_Body, 0, 4, "422=", "TotNoStrikes" },
    { 423, OFIX_Int, OFIX_Body, 0, 4, "423=", "PriceType" },
    { 424, OFIX_Qty, OFIX_Body, 0, 4, "424=", "DayOrderQty" },
    { 425, OFIX_Qty, OFIX_Body, 0, 4, "425=", "DayCumQty" },
    { 426, OFIX_Price, OFIX_Body, 0, 4, "426=", "DayAvgPx" },
    { 427, OFIX_Int, OFIX_Body, 0, 4, "427=", "GTBookingInst" },
    { 428, OFIX_Int, OFIX_Body, 0, 4, "428=", "NoStrikes" },
    { 429, OFIX_Int, OFIX_Body, 0, 4, "429=", "ListStatusType" },
    { 430, OFIX_Int, OFIX_Body, 0, 4, "430=", "NetGrossInd" },
    { 431, OFIX_Int, OFIX_Body, 0, 4, "431=", "ListOrderStatus" },
    { 432, OFIX_LocalMktDate, OFIX_Body, 0, 4, "432=", "ExpireDate" },
    { 433, OFIX_Char, OFIX_Body, 0, 4, "433=", "ListExecInstType" },
    { 434, OFIX_Char, OFIX_Body, 0, 4, "434=", "CxlRejResponseTo" },
    { 435, OFIX_Float, OFIX_Body, 0, 4, "435=", "UnderlyingCouponRate" },
    { 436, OFIX_Float, OFIX_Body, 0, 4, "436=", "UnderlyingContractMultiplier" },
    { 437, OFIX_Qty, OFIX_Body, 0, 4, "437=", "ContraTradeQty" },
    { 438, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "438=", "ContraTradeTime" },
    { 439, OFIX_String, OFIX_Body, 0, 4, "439=", "ClearingFirm" },
    { 440, OFIX_String, OFIX_Body, 0, 4, "440=", "ClearingAccount" },
    { 441, OFIX_Int, OFIX_Body, 0, 4, "441=", "LiquidityNumSecurities" },
    { 442, OFIX_Char, OFIX_Body, 0, 4, "442=", "MultiLegReportingType" },
    { 443, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "443=", "StrikeTime" },
    { 444, OFIX_String, OFIX_Body, 0, 4, "444=", "ListStatusText" },
    { 445, OFIX_Int, OFIX_Body, 0, 4, "445=", "EncodedListStatusTextLen" },
    { 446, OFIX_Data, OFIX_Body, 0, 4, "446=", "EncodedListStatusText" },
    { 0 }
};

// ----- Messages -----
// Heartbeat [0]

static ofixGroupSpec	HeartbeatGroups[] = {
    0
};

static struct _ofixMsgSpec	Heartbeat = {
    &fix42Spec, // version
    48, // tid
    "0", // type
    "Heartbeat", // name
    {0,0,0,0,0,0,0,0,1,2,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,8,9,0,29,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 112, false }, // TestReqID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TestRequest [1]

static ofixGroupSpec	TestRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	TestRequest = {
    &fix42Spec, // version
    49, // tid
    "1", // type
    "TestRequest", // name
    {0,0,0,0,0,0,0,0,1,2,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,8,9,0,29,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 112, true }, // TestReqID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ResendRequest [2]

static ofixGroupSpec	ResendRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	ResendRequest = {
    &fix42Spec, // version
    50, // tid
    "2", // type
    "ResendRequest", // name
    {0,0,0,0,0,0,0,28,1,2,32,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 7, true }, // BeginSeqNo
	{ 16, true }, // EndSeqNo
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Reject [3]

static ofixGroupSpec	RejectGroups[] = {
    0
};

static struct _ofixMsgSpec	Reject = {
    &fix42Spec, // version
    51, // tid
    "3", // type
    "Reject", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,28,0,0,0,4,11,0,21,0,0,0,5,13,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,29,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static ofixGroupSpec	SequenceResetGroups[] = {
    0
};

static struct _ofixMsgSpec	SequenceReset = {
    &fix42Spec, // version
    52, // tid
    "4", // type
    "SequenceReset", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,29,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,28,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 123, false }, // GapFillFlag
	{ 36, true }, // NewSeqNo
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Logout [5]

static ofixGroupSpec	LogoutGroups[] = {
    0
};

static struct _ofixMsgSpec	Logout = {
    &fix42Spec, // version
    53, // tid
    "5", // type
    "Logout", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// IndicationofInterest [6]

static struct _ofixGroupSpec	IndicationofInterestGroup199 = {
    199, // NoIOIQualifiers
    {
	{ 104, false }, // IOIQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationofInterestGroup215 = {
    215, // NoRoutingIDs
    {
	{ 216, false }, // RoutingType
	{ 217, false }, // RoutingID
	{ 0, false }
    }
};

static ofixGroupSpec	IndicationofInterestGroups[] = {
    &IndicationofInterestGroup199,
    &IndicationofInterestGroup215,
    0
};

static struct _ofixMsgSpec	IndicationofInterest = {
    &fix42Spec, // version
    54, // tid
    "6", // type
    "IndicationofInterest", // name
    {0,0,0,0,0,0,0,0,1,2,68,0,0,0,0,53,0,0,0,0,0,0,34,28,0,55,30,51,29,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,52,0,0,0,33,4,11,0,21,0,50,31,5,13,58,0,61,0,54,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,8,9,0,66,0,0,0,20,0,0,0,0,0,0,0,0,44,47,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,56,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,36,38,39,0,0,37,40,43,0,0,0,0,23,24,0,63,0,0,64,65,0,0,0,42,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,45,46,48,49,0,0,59,60,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    IndicationofInterestGroups, // groups
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
	{ 23, true }, // IOIid
	{ 28, true }, // IOITransType
	{ 26, false }, // IOIRefID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 27, true }, // IOIShares
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
	{ 218, false }, // SpreadToBenchmark
	{ 219, false }, // Benchmark
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Advertisement [7]

static ofixGroupSpec	AdvertisementGroups[] = {
    0
};

static struct _ofixMsgSpec	Advertisement = {
    &fix42Spec, // version
    55, // tid
    "7", // type
    "Advertisement", // name
    {0,0,28,30,50,29,0,0,1,2,64,0,0,0,0,53,0,0,0,0,0,0,34,0,0,0,0,0,0,0,60,0,0,0,10,3,0,0,0,0,0,0,0,19,52,0,0,0,33,4,11,0,21,51,0,31,5,13,56,0,55,0,0,0,0,32,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,63,8,9,0,62,0,0,0,20,0,0,0,0,0,0,0,0,44,47,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,38,39,0,0,37,40,43,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,0,0,0,0,0,0,0,0,0,0,25,45,46,48,49,0,0,57,58,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 2, true }, // AdvId
	{ 5, true }, // AdvTransType
	{ 3, false }, // AdvRefID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 53, true }, // Shares
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ExecutionReport [8]

static struct _ofixGroupSpec	ExecutionReportGroup382 = {
    382, // NoContraBrokers
    {
	{ 375, false }, // ContraBroker
	{ 337, false }, // ContraTrader
	{ 437, false }, // ContraTradeQty
	{ 438, false }, // ContraTradeTime
	{ 0, false }
    }
};

static ofixGroupSpec	ExecutionReportGroups[] = {
    &ExecutionReportGroup382,
    0
};

static struct _ofixMsgSpec	ExecutionReport = {
    &fix42Spec, // version
    56, // tid
    "8", // type
    "ExecutionReport", // name
    {0,43,0,0,0,0,92,0,1,2,122,30,100,101,91,74,0,36,81,38,37,107,49,0,0,0,0,0,0,89,87,84,83,0,10,3,0,28,66,40,68,31,0,19,69,0,0,82,48,4,11,0,21,0,65,46,5,13,112,77,98,0,0,44,45,47,35,0,0,0,0,0,0,0,0,97,33,110,0,0,0,0,0,0,0,0,0,0,0,121,8,9,0,120,0,0,0,20,0,70,0,0,0,41,0,0,59,62,0,32,108,109,0,99,0,6,15,0,0,103,104,0,22,0,0,0,80,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,39,90,67,0,0,105,106,0,0,0,0,0,0,0,0,0,0,50,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,115,85,86,0,0,29,0,51,53,54,0,0,52,55,58,0,0,111,71,23,24,0,0,0,0,0,0,0,0,0,57,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,113,114,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,75,76,42,0,0,102,34,0,0,0,0,0,72,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,93,94,95,96,0,0,0,0,79,0,0,0,0,0,0,117,118,0,119,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 11, false }, // ClOrdID
	{ 41, false }, // OrigClOrdID
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 382, false }, // NoContraBrokers
	{ 66, false }, // ListID
	{ 17, true }, // ExecID
	{ 20, true }, // ExecTransType
	{ 19, false }, // ExecRefID
	{ 150, true }, // ExecType
	{ 39, true }, // OrdStatus
	{ 103, false }, // OrdRejReason
	{ 378, false }, // ExecRestatementReason
	{ 1, false }, // Account
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 40, false }, // OrdType
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
	{ 47, false }, // Rule80A
	{ 32, false }, // LastShares
	{ 31, false }, // LastPx
	{ 194, false }, // LastSpotRate
	{ 195, false }, // LastForwardPoints
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
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
	{ 381, false }, // GrossTradeAmt
	{ 119, false }, // SettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 21, false }, // HandlInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 77, false }, // OpenClose
	{ 210, false }, // MaxShow
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 439, false }, // ClearingFirm
	{ 440, false }, // ClearingAccount
	{ 442, false }, // MultiLegReportingType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderCancelReject [9]

static ofixGroupSpec	OrderCancelRejectGroups[] = {
    0
};

static struct _ofixMsgSpec	OrderCancelReject = {
    &fix42Spec, // version
    57, // tid
    "9", // type
    "OrderCancelReject", // name
    {0,36,0,0,0,0,0,0,1,2,45,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,32,0,31,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,40,0,37,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,44,8,9,0,43,0,0,0,20,0,0,0,0,39,0,0,0,0,0,0,33,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 11, true }, // ClOrdID
	{ 41, true }, // OrigClOrdID
	{ 39, true }, // OrdStatus
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 66, false }, // ListID
	{ 1, false }, // Account
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

static struct _ofixGroupSpec	LogonGroup384 = {
    384, // NoMsgTypes
    {
	{ 372, false }, // RefMsgType
	{ 385, false }, // MsgDirection
	{ 0, false }
    }
};

static ofixGroupSpec	LogonGroups[] = {
    &LogonGroup384,
    0
};

static struct _ofixMsgSpec	Logon = {
    &fix42Spec, // version
    65, // tid
    "A", // type
    "Logon", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,30,31,20,28,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,32,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 98, true }, // EncryptMethod
	{ 108, true }, // HeartBtInt
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 141, false }, // ResetSeqNumFlag
	{ 383, false }, // MaxMessageSize
	{ 384, false }, // NoMsgTypes
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// News [B]

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
	{ 46, false }, // RelatdSym
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
    &NewsGroup215,
    &NewsGroup146,
    &NewsGroup33,
    0
};

static struct _ofixMsgSpec	News = {
    &fix42Spec, // version
    66, // tid
    "B", // type
    "News", // name
    {0,0,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,10,3,0,0,0,0,0,0,28,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,37,38,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,34,0,30,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 46, false }, // RelatdSym
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
    &EmailGroup215,
    &EmailGroup146,
    &EmailGroup33,
    0
};

static struct _ofixMsgSpec	Email = {
    &fix42Spec, // version
    67, // tid
    "C", // type
    "Email", // name
    {0,0,0,0,0,0,0,0,1,2,43,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,10,3,0,36,0,0,0,0,30,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,8,9,0,41,29,39,40,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,35,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	NewOrderSingleGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 80, false }, // AllocShares
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderSingleGroups[] = {
    &NewOrderSingleGroup78,
    &NewOrderSingleGroup386,
    0
};

static struct _ofixMsgSpec	NewOrderSingle = {
    &fix42Spec, // version
    68, // tid
    "D", // type
    "NewOrderSingle", // name
    {0,31,0,0,0,0,0,0,1,2,101,28,80,81,0,70,0,0,36,0,0,35,45,73,0,0,0,0,0,0,0,0,0,0,10,3,0,0,65,0,67,0,0,19,68,0,0,82,44,4,11,0,21,0,62,42,5,13,85,75,64,0,0,33,34,43,0,0,0,0,0,0,0,0,0,0,30,90,32,0,0,41,0,0,0,0,0,0,0,100,8,9,0,99,0,0,0,20,0,69,39,0,0,0,0,0,55,58,0,29,37,38,0,0,63,6,15,74,0,0,84,83,22,0,0,0,78,0,7,17,0,0,0,0,0,0,0,0,0,0,61,0,12,14,16,18,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,88,0,0,0,0,0,0,47,49,50,91,92,48,51,54,0,0,93,94,23,24,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,56,57,59,60,0,0,86,87,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,71,72,0,0,0,0,0,0,0,0,40,0,95,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,77,0,0,0,0,0,0,97,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 11, true }, // ClOrdID
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 1, false }, // Account
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
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
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 40, true }, // OrdType
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 77, false }, // OpenClose
	{ 203, false }, // CoveredOrUncovered
	{ 204, false }, // CustomerOrFirm
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 439, false }, // ClearingFirm
	{ 440, false }, // ClearingAccount
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NewOrderList [E]

static struct _ofixGroupSpec	NewOrderListGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 67, true }, // ListSeqNo
	{ 160, false }, // SettlInstMode
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 1, false }, // Account
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
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
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 40, false }, // OrdType
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 77, false }, // OpenClose
	{ 203, false }, // CoveredOrUncovered
	{ 204, false }, // CustomerOrFirm
	{ 210, false }, // MaxShow
	{ 211, false }, // PegDifference
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffset
	{ 439, false }, // ClearingFirm
	{ 440, false }, // ClearingAccount
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 80, false }, // AllocShares
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderListGroups[] = {
    &NewOrderListGroup73,
    &NewOrderListGroup78,
    &NewOrderListGroup386,
    0
};

static struct _ofixMsgSpec	NewOrderList = {
    &fix42Spec, // version
    69, // tid
    "E", // type
    "NewOrderList", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,28,0,38,35,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 66, true }, // ListID
	{ 390, false }, // BidID
	{ 391, false }, // ClientBidID
	{ 414, false }, // ProgRptReqs
	{ 394, true }, // BidType
	{ 415, false }, // ProgPeriodInterval
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

static ofixGroupSpec	OrderCancelRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	OrderCancelRequest = {
    &fix42Spec, // version
    70, // tid
    "F", // type
    "OrderCancelRequest", // name
    {0,32,0,0,0,0,0,0,1,2,65,30,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,56,0,0,28,0,19,0,0,0,0,37,4,11,0,21,0,54,35,5,13,60,0,55,0,0,0,0,36,31,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,64,8,9,0,63,0,0,0,20,0,0,0,0,0,0,0,0,48,51,0,33,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,42,43,0,0,41,44,47,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,49,50,52,53,0,0,61,62,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 41, true }, // OrigClOrdID
	{ 37, false }, // OrderID
	{ 11, true }, // ClOrdID
	{ 66, false }, // ListID
	{ 1, false }, // Account
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
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

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 80, false }, // AllocShares
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelReplaceRequestGroups[] = {
    &OrderCancelReplaceRequestGroup78,
    &OrderCancelReplaceRequestGroup386,
    0
};

static struct _ofixMsgSpec	OrderCancelReplaceRequest = {
    &fix42Spec, // version
    71, // tid
    "G", // type
    "OrderCancelReplaceRequest", // name
    {0,34,0,0,0,0,0,0,1,2,100,32,81,82,0,75,0,0,39,0,0,38,47,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,65,0,67,31,0,19,68,0,0,83,46,4,11,0,21,0,63,44,5,13,86,76,64,0,0,36,37,45,33,0,0,0,0,0,0,0,0,0,30,91,35,0,0,0,0,0,0,0,0,0,0,99,8,9,0,98,0,0,0,20,0,69,42,0,0,0,0,0,57,60,0,29,40,41,0,0,95,6,15,0,0,0,85,84,22,0,0,0,79,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,89,0,0,0,0,0,0,49,51,52,92,93,50,53,56,0,0,94,70,23,24,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,58,59,61,62,0,0,87,88,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,73,74,0,0,0,0,0,0,0,0,43,0,71,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,78,0,0,0,0,0,0,96,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 37, false }, // OrderID
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 66, false }, // ListID
	{ 1, false }, // Account
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 21, true }, // HandlInst
	{ 18, false }, // ExecInst
	{ 110, false }, // MinQty
	{ 111, false }, // MaxFloor
	{ 100, false }, // ExDestination
	{ 386, false }, // NoTradingSessions
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 40, true }, // OrdType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
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
	{ 47, false }, // Rule80A
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 77, false }, // OpenClose
	{ 203, false }, // CoveredOrUncovered
	{ 204, false }, // CustomerOrFirm
	{ 210, false }, // MaxShow
	{ 114, false }, // LocateReqd
	{ 439, false }, // ClearingFirm
	{ 440, false }, // ClearingAccount
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// OrderStatusRequest [H]

static ofixGroupSpec	OrderStatusRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	OrderStatusRequest = {
    &fix42Spec, // version
    72, // tid
    "H", // type
    "OrderStatusRequest", // name
    {0,31,0,0,0,0,0,0,1,2,55,29,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,0,0,0,0,19,0,0,0,0,35,4,11,0,21,0,52,33,5,13,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,54,8,9,0,53,0,0,0,20,0,0,0,0,0,0,0,0,46,49,0,30,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,40,41,0,0,39,42,45,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,47,48,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 37, false }, // OrderID
	{ 11, true }, // ClOrdID
	{ 109, false }, // ClientID
	{ 1, false }, // Account
	{ 76, false }, // ExecBroker
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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

static struct _ofixGroupSpec	AllocationGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 66, false }, // ListID
	{ 105, false }, // WaveNo
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup124 = {
    124, // NoExecs
    {
	{ 32, false }, // LastShares
	{ 17, false }, // ExecID
	{ 31, false }, // LastPx
	{ 29, false }, // LastCapacity
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationGroup78 = {
    78, // NoAllocs
    {
	{ 79, true }, // AllocAccount
	{ 366, false }, // AllocPrice
	{ 80, true }, // AllocShares
	{ 81, false }, // ProcessCode
	{ 92, false }, // BrokerOfCredit
	{ 208, false }, // NotifyBrokerOfCredit
	{ 209, false }, // AllocHandlInst
	{ 161, false }, // AllocText
	{ 360, false }, // EncodedAllocTextLen
	{ 361, false }, // EncodedAllocText
	{ 76, false }, // ExecBroker
	{ 109, false }, // ClientID
	{ 12, false }, // Commission
	{ 13, false }, // CommType
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
    &AllocationGroup73,
    &AllocationGroup124,
    &AllocationGroup78,
    &AllocationGroup136,
    0
};

static struct _ofixMsgSpec	Allocation = {
    &fix42Spec, // version
    74, // tid
    "J", // type
    "Allocation", // name
    {0,0,0,0,0,0,58,0,1,2,76,0,0,0,0,59,0,0,0,0,0,0,39,0,0,0,0,0,0,0,56,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,38,4,11,0,21,55,35,36,5,13,68,0,62,0,0,63,64,37,0,0,0,0,28,29,30,33,60,61,0,67,73,0,0,0,0,0,0,0,0,0,0,75,8,9,0,74,0,0,0,20,0,0,0,0,0,0,0,0,49,52,0,0,0,0,0,0,0,6,15,0,66,0,0,0,22,0,34,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,71,72,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,32,0,0,41,43,44,0,0,42,45,48,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,0,0,0,0,0,0,0,0,0,0,25,50,51,53,54,0,0,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 70, true }, // AllocID
	{ 71, true }, // AllocTransType
	{ 72, false }, // RefAllocID
	{ 196, false }, // AllocLinkID
	{ 197, false }, // AllocLinkType
	{ 73, true }, // NoOrders
	{ 124, false }, // NoExecs
	{ 54, true }, // Side
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 53, true }, // Shares
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 6, true }, // AvgPx
	{ 15, false }, // Currency
	{ 74, false }, // AvgPrxPrecision
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 63, false }, // SettlmntTyp
	{ 64, false }, // FutSettDate
	{ 381, false }, // GrossTradeAmt
	{ 118, false }, // NetMoney
	{ 77, false }, // OpenClose
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 157, false }, // NumDaysInterest
	{ 158, false }, // AccruedInterestRate
	{ 78, true }, // NoAllocs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ListCancelRequest [K]

static ofixGroupSpec	ListCancelRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	ListCancelRequest = {
    &fix42Spec, // version
    75, // tid
    "K", // type
    "ListCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,30,0,29,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 66, true }, // ListID
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

// ListExecute [L]

static ofixGroupSpec	ListExecuteGroups[] = {
    0
};

static struct _ofixMsgSpec	ListExecute = {
    &fix42Spec, // version
    76, // tid
    "L", // type
    "ListExecute", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,31,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static ofixGroupSpec	ListStatusRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	ListStatusRequest = {
    &fix42Spec, // version
    77, // tid
    "M", // type
    "ListStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,29,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	ListStatusGroup73 = {
    73, // NoOrders
    {
	{ 11, true }, // ClOrdID
	{ 14, true }, // CumQty
	{ 39, true }, // OrdStatus
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
    &ListStatusGroup73,
    0
};

static struct _ofixMsgSpec	ListStatus = {
    &fix42Spec, // version
    78, // tid
    "N", // type
    "ListStatus", // name
    {0,0,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,36,0,0,0,0,0,28,0,37,0,0,0,0,38,0,0,0,0,0,0,0,0,30,32,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,31,0,0,0,0,0,0,0,0,0,0,0,0,33,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static ofixGroupSpec	AllocationACKGroups[] = {
    0
};

static struct _ofixMsgSpec	AllocationACK = {
    &fix42Spec, // version
    80, // tid
    "P", // type
    "AllocationACK", // name
    {0,0,0,0,0,0,0,0,1,2,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,35,0,32,0,0,0,0,0,0,0,0,0,30,0,0,0,0,31,29,0,0,0,0,0,0,0,0,0,0,33,34,39,8,9,0,38,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
	{ 70, true }, // AllocID
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 87, true }, // AllocStatus
	{ 88, false }, // AllocRejCode
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// DontKnowTrade [Q]

static ofixGroupSpec	DontKnowTradeGroups[] = {
    0
};

static struct _ofixMsgSpec	DontKnowTrade = {
    &fix42Spec, // version
    81, // tid
    "Q", // type
    "DontKnowTrade", // name
    {0,0,0,0,0,0,0,0,1,2,60,0,0,0,0,0,0,29,0,0,0,0,34,0,0,0,0,0,0,0,0,54,53,0,10,3,0,28,51,0,0,0,0,19,0,0,0,0,33,4,11,0,21,0,50,31,5,13,55,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,8,9,0,58,0,0,0,20,0,0,0,0,0,0,0,0,44,47,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,30,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,38,39,0,0,37,40,43,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,45,46,48,49,0,0,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 37, true }, // OrderID
	{ 17, true }, // ExecID
	{ 127, true }, // DKReason
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 32, false }, // LastShares
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

static struct _ofixGroupSpec	QuoteRequestGroup146 = {
    146, // NoRelatedSym
    {
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 336, false }, // TradingSessionID
	{ 54, false }, // Side
	{ 38, false }, // OrderQty
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 126, false }, // ExpireTime
	{ 60, false }, // TransactTime
	{ 15, false }, // Currency
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteRequestGroups[] = {
    &QuoteRequestGroup146,
    0
};

static struct _ofixMsgSpec	QuoteRequest = {
    &fix42Spec, // version
    82, // tid
    "R", // type
    "QuoteRequest", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 131, true }, // QuoteReqID
	{ 146, true }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Quote [S]

static ofixGroupSpec	QuoteGroups[] = {
    0
};

static struct _ofixMsgSpec	Quote = {
    &fix42Spec, // version
    83, // tid
    "S", // type
    "Quote", // name
    {0,0,0,0,0,0,0,0,1,2,68,0,0,0,0,65,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,62,0,0,19,0,0,0,0,34,4,11,0,21,0,0,32,5,13,0,0,60,0,55,0,61,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,8,9,0,66,0,0,0,20,0,0,0,0,0,0,0,0,45,48,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,51,52,53,54,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,58,57,59,64,63,0,0,0,0,0,0,37,39,40,0,0,38,41,44,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,25,46,47,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 301, false }, // QuoteResponseLevel
	{ 336, false }, // TradingSessionID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 60, false }, // TransactTime
	{ 64, false }, // FutSettDate
	{ 40, false }, // OrdType
	{ 193, false }, // FutSettDate2
	{ 192, false }, // OrderQty2
	{ 15, false }, // Currency
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SettlementInstructions [T]

static ofixGroupSpec	SettlementInstructionsGroups[] = {
    0
};

static struct _ofixMsgSpec	SettlementInstructions = {
    &fix42Spec, // version
    84, // tid
    "T", // type
    "SettlementInstructions", // name
    {0,0,0,0,0,0,0,0,1,2,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,39,0,5,13,0,0,42,0,0,0,0,0,0,0,0,0,36,0,0,0,0,35,44,0,0,33,0,0,0,0,0,0,0,0,0,65,8,9,0,64,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,28,29,0,32,34,40,41,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 162, true }, // SettlInstID
	{ 163, true }, // SettlInstTransType
	{ 214, true }, // SettlInstRefID
	{ 160, true }, // SettlInstMode
	{ 165, true }, // SettlInstSource
	{ 79, true }, // AllocAccount
	{ 166, false }, // SettlLocation
	{ 75, false }, // TradeDate
	{ 70, false }, // AllocID
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 54, false }, // Side
	{ 167, false }, // SecurityType
	{ 168, false }, // EffectiveTime
	{ 60, true }, // TransactTime
	{ 109, false }, // ClientID
	{ 76, false }, // ExecBroker
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataRequest [V]

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
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 336, false }, // TradingSessionID
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataRequestGroups[] = {
    &MarketDataRequestGroup267,
    &MarketDataRequestGroup146,
    0
};

static struct _ofixMsgSpec	MarketDataRequest = {
    &fix42Spec, // version
    86, // tid
    "V", // type
    "MarketDataRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,30,31,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 262, true }, // MDReqID
	{ 263, true }, // SubscriptionRequestType
	{ 264, true }, // MarketDepth
	{ 265, false }, // MDUpdateType
	{ 266, false }, // AggregatedBook
	{ 267, true }, // NoMDEntryTypes
	{ 146, true }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataSnapshotFullRefresh [W]

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup268 = {
    268, // NoMDEntries
    {
	{ 269, true }, // MDEntryType
	{ 270, true }, // MDEntryPx
	{ 15, false }, // Currency
	{ 271, false }, // MDEntrySize
	{ 272, false }, // MDEntryDate
	{ 273, false }, // MDEntryTime
	{ 274, false }, // TickDirection
	{ 275, false }, // MDMkt
	{ 336, false }, // TradingSessionID
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataSnapshotFullRefreshGroups[] = {
    &MarketDataSnapshotFullRefreshGroup268,
    0
};

static struct _ofixMsgSpec	MarketDataSnapshotFullRefresh = {
    &fix42Spec, // version
    87, // tid
    "W", // type
    "MarketDataSnapshotFullRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,54,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,8,9,0,52,0,0,0,20,0,0,0,0,0,0,0,0,42,45,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,36,37,0,0,35,38,41,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,43,44,46,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 262, false }, // MDReqID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 268, true }, // NoMDEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataIncrementalRefresh [X]

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup268 = {
    268, // NoMDEntries
    {
	{ 279, true }, // MDUpdateAction
	{ 285, false }, // DeleteReason
	{ 269, false }, // MDEntryType
	{ 278, false }, // MDEntryID
	{ 280, false }, // MDEntryRefID
	{ 55, false }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 387, false }, // TotalVolumeTraded
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataIncrementalRefreshGroups[] = {
    &MarketDataIncrementalRefreshGroup268,
    0
};

static struct _ofixMsgSpec	MarketDataIncrementalRefresh = {
    &fix42Spec, // version
    88, // tid
    "X", // type
    "MarketDataIncrementalRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 262, false }, // MDReqID
	{ 268, true }, // NoMDEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// MarketDataRequestReject [Y]

static ofixGroupSpec	MarketDataRequestRejectGroups[] = {
    0
};

static struct _ofixMsgSpec	MarketDataRequestReject = {
    &fix42Spec, // version
    89, // tid
    "Y", // type
    "MarketDataRequestReject", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	QuoteCancelGroup295 = {
    295, // NoQuoteEntries
    {
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 311, false }, // UnderlyingSymbol
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteCancelGroups[] = {
    &QuoteCancelGroup295,
    0
};

static struct _ofixMsgSpec	QuoteCancel = {
    &fix42Spec, // version
    90, // tid
    "Z", // type
    "QuoteCancel", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,30,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 298, true }, // QuoteCancelType
	{ 301, false }, // QuoteResponseLevel
	{ 336, false }, // TradingSessionID
	{ 295, true }, // NoQuoteEntries
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteStatusRequest [a]

static ofixGroupSpec	QuoteStatusRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	QuoteStatusRequest = {
    &fix42Spec, // version
    97, // tid
    "a", // type
    "QuoteStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,52,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,48,29,5,13,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,8,9,0,50,0,0,0,20,0,0,0,0,0,0,0,0,42,45,0,0,0,0,0,0,0,6,15,28,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,36,37,0,0,35,38,41,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,25,43,44,46,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 117, false }, // QuoteID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 54, false }, // Side
	{ 336, false }, // TradingSessionID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteAcknowledgement [b]

static struct _ofixGroupSpec	QuoteAcknowledgementGroup296 = {
    296, // NoQuoteSets
    {
	{ 302, false }, // QuoteSetID
	{ 311, false }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingIDSource
	{ 310, false }, // UnderlyingSecurityType
	{ 313, false }, // UnderlyingMaturityMonthYear
	{ 314, false }, // UnderlyingMaturityDay
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

static struct _ofixGroupSpec	QuoteAcknowledgementGroup295 = {
    295, // NoQuoteEntries
    {
	{ 299, false }, // QuoteEntryID
	{ 55, false }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 368, false }, // QuoteEntryRejectReason
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteAcknowledgementGroups[] = {
    &QuoteAcknowledgementGroup296,
    &QuoteAcknowledgementGroup295,
    0
};

static struct _ofixMsgSpec	QuoteAcknowledgement = {
    &fix42Spec, // version
    98, // tid
    "b", // type
    "QuoteAcknowledgement", // name
    {0,0,0,0,0,0,0,0,1,2,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,30,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteAcknowledgementGroups, // groups
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
	{ 131, false }, // QuoteReqID
	{ 117, false }, // QuoteID
	{ 297, true }, // QuoteAckStatus
	{ 300, false }, // QuoteRejectReason
	{ 301, false }, // QuoteResponseLevel
	{ 336, false }, // TradingSessionID
	{ 58, false }, // Text
	{ 296, false }, // NoQuoteSets
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityDefinitionRequest [c]

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup146 = {
    146, // NoRelatedSym
    {
	{ 311, false }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingIDSource
	{ 310, false }, // UnderlyingSecurityType
	{ 313, false }, // UnderlyingMaturityMonthYear
	{ 314, false }, // UnderlyingMaturityDay
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
	{ 319, false }, // RatioQty
	{ 54, false }, // Side
	{ 318, false }, // UnderlyingCurrency
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityDefinitionRequestGroups[] = {
    &SecurityDefinitionRequestGroup146,
    0
};

static struct _ofixMsgSpec	SecurityDefinitionRequest = {
    &fix42Spec, // version
    99, // tid
    "c", // type
    "SecurityDefinitionRequest", // name
    {0,0,0,0,0,0,0,0,1,2,57,0,0,0,0,49,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,50,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,8,9,0,55,0,0,0,20,0,0,0,0,0,0,0,0,43,46,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,37,38,0,0,36,39,42,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,25,44,45,47,48,0,0,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 320, true }, // SecurityReqID
	{ 321, true }, // SecurityRequestType
	{ 55, false }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 146, false }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityDefinition [d]

static struct _ofixGroupSpec	SecurityDefinitionGroup146 = {
    146, // NoRelatedSym
    {
	{ 311, false }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingIDSource
	{ 310, false }, // UnderlyingSecurityType
	{ 313, false }, // UnderlyingMaturityMonthYear
	{ 314, false }, // UnderlyingMaturityDay
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
	{ 319, false }, // RatioQty
	{ 54, false }, // Side
	{ 318, false }, // UnderlyingCurrency
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityDefinitionGroups[] = {
    &SecurityDefinitionGroup146,
    0
};

static struct _ofixMsgSpec	SecurityDefinition = {
    &fix42Spec, // version
    100, // tid
    "d", // type
    "SecurityDefinition", // name
    {0,0,0,0,0,0,0,0,1,2,59,0,0,0,0,51,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,34,4,11,0,21,0,0,32,5,13,53,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,8,9,0,57,0,0,0,20,0,0,0,0,0,0,0,0,45,48,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,39,40,0,0,38,41,44,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,25,46,47,49,50,0,0,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 320, true }, // SecurityReqID
	{ 322, true }, // SecurityResponseID
	{ 323, false }, // SecurityResponseType
	{ 393, true }, // TotalNumSecurities
	{ 55, false }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 146, false }, // NoRelatedSym
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityStatusRequest [e]

static ofixGroupSpec	SecurityStatusRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	SecurityStatusRequest = {
    &fix42Spec, // version
    101, // tid
    "e", // type
    "SecurityStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,53,0,0,0,0,48,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,8,9,0,51,0,0,0,20,0,0,0,0,0,0,0,0,42,45,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,36,37,0,0,35,38,41,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,25,43,44,46,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 324, true }, // SecurityStatusReqID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SecurityStatus [f]

static ofixGroupSpec	SecurityStatusGroups[] = {
    0
};

static struct _ofixMsgSpec	SecurityStatus = {
    &fix42Spec, // version
    102, // tid
    "f", // type
    "SecurityStatus", // name
    {0,0,0,0,0,0,0,0,1,2,66,0,0,0,0,48,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,61,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,0,0,62,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,8,9,0,64,0,0,0,20,0,0,0,0,0,0,0,0,42,45,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,36,37,0,0,35,38,41,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,50,51,54,55,56,57,58,59,60,63,0,49,0,0,0,0,0,0,0,0,0,0,25,43,44,46,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 324, false }, // SecurityStatusReqID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // IDSource
	{ 167, false }, // SecurityType
	{ 200, false }, // MaturityMonthYear
	{ 205, false }, // MaturityDay
	{ 201, false }, // PutOrCall
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradingSessionStatusRequest [g]

static ofixGroupSpec	TradingSessionStatusRequestGroups[] = {
    0
};

static struct _ofixMsgSpec	TradingSessionStatusRequest = {
    &fix42Spec, // version
    103, // tid
    "g", // type
    "TradingSessionStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,30,31,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 335, true }, // TradSesReqID
	{ 336, false }, // TradingSessionID
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

static ofixGroupSpec	TradingSessionStatusGroups[] = {
    0
};

static struct _ofixMsgSpec	TradingSessionStatus = {