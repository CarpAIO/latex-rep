

// This file is auto-generated from ref/FIX44.xml and should not be modified.

#include "ofix/tagspec.h"
#include "ofix/tagreq.h"
#include "ofix/msgspec.h"
#include "ofix/versionspec.h"

extern struct _ofixVersionSpec	fix44Spec;

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
    { 48, OFIX_String, OFIX_Body, 0, 3, "48=", "SecurityID" },
    { 49, OFIX_String, OFIX_Header, 0, 3, "49=", "SenderCompID" },
    { 50, OFIX_String, OFIX_Header, 0, 3, "50=", "SenderSubID" },
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
    { 63, OFIX_Char, OFIX_Body, 0, 3, "63=", "SettlType" },
    { 64, OFIX_LocalMktDate, OFIX_Body, 0, 3, "64=", "SettlDate" },
    { 65, OFIX_String, OFIX_Body, 0, 3, "65=", "SymbolSfx" },
    { 66, OFIX_String, OFIX_Body, 0, 3, "66=", "ListID" },
    { 67, OFIX_Int, OFIX_Body, 0, 3, "67=", "ListSeqNo" },
    { 68, OFIX_Int, OFIX_Body, 0, 3, "68=", "TotNoOrders" },
    { 69, OFIX_String, OFIX_Body, 0, 3, "69=", "ListExecInst" },
    { 70, OFIX_String, OFIX_Body, 0, 3, "70=", "AllocID" },
    { 71, OFIX_Char, OFIX_Body, 0, 3, "71=", "AllocTransType" },
    { 72, OFIX_String, OFIX_Body, 0, 3, "72=", "RefAllocID" },
    { 73, OFIX_NumInGroup, OFIX_Body, 0, 3, "73=", "NoOrders" },
    { 74, OFIX_Int, OFIX_Body, 0, 3, "74=", "AvgPxPrecision" },
    { 75, OFIX_LocalMktDate, OFIX_Body, 0, 3, "75=", "TradeDate" },
    { 77, OFIX_Char, OFIX_Body, 0, 3, "77=", "PositionEffect" },
    { 78, OFIX_NumInGroup, OFIX_Body, 0, 3, "78=", "NoAllocs" },
    { 79, OFIX_String, OFIX_Body, 0, 3, "79=", "AllocAccount" },
    { 80, OFIX_Qty, OFIX_Body, 0, 3, "80=", "AllocQty" },
    { 81, OFIX_Char, OFIX_Body, 0, 3, "81=", "ProcessCode" },
    { 82, OFIX_NumInGroup, OFIX_Body, 0, 3, "82=", "NoRpts" },
    { 83, OFIX_Int, OFIX_Body, 0, 3, "83=", "RptSeq" },
    { 84, OFIX_Qty, OFIX_Body, 0, 3, "84=", "CxlQty" },
    { 85, OFIX_NumInGroup, OFIX_Body, 0, 3, "85=", "NoDlvyInst" },
    { 87, OFIX_Int, OFIX_Body, 0, 3, "87=", "AllocStatus" },
    { 88, OFIX_Int, OFIX_Body, 0, 3, "88=", "AllocRejCode" },
    { 89, OFIX_Data, OFIX_Trailer, 93, 3, "89=", "Signature" },
    { 90, OFIX_Length, OFIX_Header, 91, 3, "90=", "SecureDataLen" },
    { 91, OFIX_Data, OFIX_Header, 90, 3, "91=", "SecureData" },
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
    { 167, OFIX_String, OFIX_Body, 0, 4, "167=", "SecurityType" },
    { 168, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "168=", "EffectiveTime" },
    { 169, OFIX_Int, OFIX_Body, 0, 4, "169=", "StandInstDbType" },
    { 170, OFIX_String, OFIX_Body, 0, 4, "170=", "StandInstDbName" },
    { 171, OFIX_String, OFIX_Body, 0, 4, "171=", "StandInstDbID" },
    { 172, OFIX_Int, OFIX_Body, 0, 4, "172=", "SettlDeliveryType" },
    { 188, OFIX_Price, OFIX_Body, 0, 4, "188=", "BidSpotRate" },
    { 189, OFIX_PriceOffset, OFIX_Body, 0, 4, "189=", "BidForwardPoints" },
    { 190, OFIX_Price, OFIX_Body, 0, 4, "190=", "OfferSpotRate" },
    { 191, OFIX_PriceOffset, OFIX_Body, 0, 4, "191=", "OfferForwardPoints" },
    { 192, OFIX_Qty, OFIX_Body, 0, 4, "192=", "OrderQty2" },
    { 193, OFIX_LocalMktDate, OFIX_Body, 0, 4, "193=", "SettlDate2" },
    { 194, OFIX_Price, OFIX_Body, 0, 4, "194=", "LastSpotRate" },
    { 195, OFIX_PriceOffset, OFIX_Body, 0, 4, "195=", "LastForwardPoints" },
    { 196, OFIX_String, OFIX_Body, 0, 4, "196=", "AllocLinkID" },
    { 197, OFIX_Int, OFIX_Body, 0, 4, "197=", "AllocLinkType" },
    { 198, OFIX_String, OFIX_Body, 0, 4, "198=", "SecondaryOrderID" },
    { 199, OFIX_NumInGroup, OFIX_Body, 0, 4, "199=", "NoIOIQualifiers" },
    { 200, OFIX_MonthYear, OFIX_Body, 0, 4, "200=", "MaturityMonthYear" },
    { 202, OFIX_Price, OFIX_Body, 0, 4, "202=", "StrikePrice" },
    { 203, OFIX_Int, OFIX_Body, 0, 4, "203=", "CoveredOrUncovered" },
    { 206, OFIX_Char, OFIX_Body, 0, 4, "206=", "OptAttribute" },
    { 207, OFIX_Exchange, OFIX_Body, 0, 4, "207=", "SecurityExchange" },
    { 208, OFIX_Boolean, OFIX_Body, 0, 4, "208=", "NotifyBrokerOfCredit" },
    { 209, OFIX_Int, OFIX_Body, 0, 4, "209=", "AllocHandlInst" },
    { 210, OFIX_Qty, OFIX_Body, 0, 4, "210=", "MaxShow" },
    { 211, OFIX_Float, OFIX_Body, 0, 4, "211=", "PegOffsetValue" },
    { 212, OFIX_Length, OFIX_Header, 213, 4, "212=", "XmlDataLen" },
    { 213, OFIX_Data, OFIX_Header, 212, 4, "213=", "XmlData" },
    { 214, OFIX_String, OFIX_Body, 0, 4, "214=", "SettlInstRefID" },
    { 215, OFIX_NumInGroup, OFIX_Body, 0, 4, "215=", "NoRoutingIDs" },
    { 216, OFIX_Int, OFIX_Body, 0, 4, "216=", "RoutingType" },
    { 217, OFIX_String, OFIX_Body, 0, 4, "217=", "RoutingID" },
    { 218, OFIX_PriceOffset, OFIX_Body, 0, 4, "218=", "Spread" },
    { 220, OFIX_Currency, OFIX_Body, 0, 4, "220=", "BenchmarkCurveCurrency" },
    { 221, OFIX_String, OFIX_Body, 0, 4, "221=", "BenchmarkCurveName" },
    { 222, OFIX_String, OFIX_Body, 0, 4, "222=", "BenchmarkCurvePoint" },
    { 223, OFIX_Percentage, OFIX_Body, 0, 4, "223=", "CouponRate" },
    { 224, OFIX_LocalMktDate, OFIX_Body, 0, 4, "224=", "CouponPaymentDate" },
    { 225, OFIX_LocalMktDate, OFIX_Body, 0, 4, "225=", "IssueDate" },
    { 226, OFIX_Int, OFIX_Body, 0, 4, "226=", "RepurchaseTerm" },
    { 227, OFIX_Percentage, OFIX_Body, 0, 4, "227=", "RepurchaseRate" },
    { 228, OFIX_Float, OFIX_Body, 0, 4, "228=", "Factor" },
    { 229, OFIX_LocalMktDate, OFIX_Body, 0, 4, "229=", "TradeOriginationDate" },
    { 230, OFIX_LocalMktDate, OFIX_Body, 0, 4, "230=", "ExDate" },
    { 231, OFIX_Float, OFIX_Body, 0, 4, "231=", "ContractMultiplier" },
    { 232, OFIX_NumInGroup, OFIX_Body, 0, 4, "232=", "NoStipulations" },
    { 233, OFIX_String, OFIX_Body, 0, 4, "233=", "StipulationType" },
    { 234, OFIX_String, OFIX_Body, 0, 4, "234=", "StipulationValue" },
    { 235, OFIX_String, OFIX_Body, 0, 4, "235=", "YieldType" },
    { 236, OFIX_Percentage, OFIX_Body, 0, 4, "236=", "Yield" },
    { 237, OFIX_Amt, OFIX_Body, 0, 4, "237=", "TotalTakedown" },
    { 238, OFIX_Amt, OFIX_Body, 0, 4, "238=", "Concession" },
    { 239, OFIX_Int, OFIX_Body, 0, 4, "239=", "RepoCollateralSecurityType" },
    { 240, OFIX_LocalMktDate, OFIX_Body, 0, 4, "240=", "RedemptionDate" },
    { 241, OFIX_LocalMktDate, OFIX_Body, 0, 4, "241=", "UnderlyingCouponPaymentDate" },
    { 242, OFIX_LocalMktDate, OFIX_Body, 0, 4, "242=", "UnderlyingIssueDate" },
    { 243, OFIX_Int, OFIX_Body, 0, 4, "243=", "UnderlyingRepoCollateralSecurityType" },
    { 244, OFIX_Int, OFIX_Body, 0, 4, "244=", "UnderlyingRepurchaseTerm" },
    { 245, OFIX_Percentage, OFIX_Body, 0, 4, "245=", "UnderlyingRepurchaseRate" },
    { 246, OFIX_Float, OFIX_Body, 0, 4, "246=", "UnderlyingFactor" },
    { 247, OFIX_LocalMktDate, OFIX_Body, 0, 4, "247=", "UnderlyingRedemptionDate" },
    { 248, OFIX_LocalMktDate, OFIX_Body, 0, 4, "248=", "LegCouponPaymentDate" },
    { 249, OFIX_LocalMktDate, OFIX_Body, 0, 4, "249=", "LegIssueDate" },
    { 250, OFIX_Int, OFIX_Body, 0, 4, "250=", "LegRepoCollateralSecurityType" },
    { 251, OFIX_Int, OFIX_Body, 0, 4, "251=", "LegRepurchaseTerm" },
    { 252, OFIX_Percentage, OFIX_Body, 0, 4, "252=", "LegRepurchaseRate" },
    { 253, OFIX_Float, OFIX_Body, 0, 4, "253=", "LegFactor" },
    { 254, OFIX_LocalMktDate, OFIX_Body, 0, 4, "254=", "LegRedemptionDate" },
    { 255, OFIX_String, OFIX_Body, 0, 4, "255=", "CreditRating" },
    { 256, OFIX_String, OFIX_Body, 0, 4, "256=", "UnderlyingCreditRating" },
    { 257, OFIX_String, OFIX_Body, 0, 4, "257=", "LegCreditRating" },
    { 258, OFIX_Boolean, OFIX_Body, 0, 4, "258=", "TradedFlatSwitch" },
    { 259, OFIX_LocalMktDate, OFIX_Body, 0, 4, "259=", "BasisFeatureDate" },
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
    { 286, OFIX_MultipleValueString, OFIX_Body, 0, 4, "286=", "OpenCloseSettlFlag" },
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
    { 304, OFIX_Int, OFIX_Body, 0, 4, "304=", "TotNoQuoteEntries" },
    { 305, OFIX_String, OFIX_Body, 0, 4, "305=", "UnderlyingSecurityIDSource" },
    { 306, OFIX_String, OFIX_Body, 0, 4, "306=", "UnderlyingIssuer" },
    { 307, OFIX_String, OFIX_Body, 0, 4, "307=", "UnderlyingSecurityDesc" },
    { 308, OFIX_Exchange, OFIX_Body, 0, 4, "308=", "UnderlyingSecurityExchange" },
    { 309, OFIX_String, OFIX_Body, 0, 4, "309=", "UnderlyingSecurityID" },
    { 310, OFIX_String, OFIX_Body, 0, 4, "310=", "UnderlyingSecurityType" },
    { 311, OFIX_String, OFIX_Body, 0, 4, "311=", "UnderlyingSymbol" },
    { 312, OFIX_String, OFIX_Body, 0, 4, "312=", "UnderlyingSymbolSfx" },
    { 313, OFIX_MonthYear, OFIX_Body, 0, 4, "313=", "UnderlyingMaturityMonthYear" },
    { 316, OFIX_Price, OFIX_Body, 0, 4, "316=", "UnderlyingStrikePrice" },
    { 317, OFIX_Char, OFIX_Body, 0, 4, "317=", "UnderlyingOptAttribute" },
    { 318, OFIX_Currency, OFIX_Body, 0, 4, "318=", "UnderlyingCurrency" },
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
    { 389, OFIX_Float, OFIX_Body, 0, 4, "389=", "DiscretionOffsetValue" },
    { 390, OFIX_String, OFIX_Body, 0, 4, "390=", "BidID" },
    { 391, OFIX_String, OFIX_Body, 0, 4, "391=", "ClientBidID" },
    { 392, OFIX_String, OFIX_Body, 0, 4, "392=", "ListName" },
    { 393, OFIX_Int, OFIX_Body, 0, 4, "393=", "TotNoRelatedSym" },
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
    { 418, OFIX_Char, OFIX_Body, 0, 4, "418=", "BidTradeType" },
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
    { 441, OFIX_Int, OFIX_Body, 0, 4, "441=", "LiquidityNumSecurities" },
    { 442, OFIX_Char, OFIX_Body, 0, 4, "442=", "MultiLegReportingType" },
    { 443, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "443=", "StrikeTime" },
    { 444, OFIX_String, OFIX_Body, 0, 4, "444=", "ListStatusText" },
    { 445, OFIX_Length, OFIX_Body, 446, 4, "445=", "EncodedListStatusTextLen" },
    { 446, OFIX_Data, OFIX_Body, 445, 4, "446=", "EncodedListStatusText" },
    { 447, OFIX_Char, OFIX_Body, 0, 4, "447=", "PartyIDSource" },
    { 448, OFIX_String, OFIX_Body, 0, 4, "448=", "PartyID" },
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
    { 487, OFIX_Int, OFIX_Body, 0, 4, "487=", "TradeReportTransType" },
    { 488, OFIX_String, OFIX_Body, 0, 4, "488=", "CardHolderName" },
    { 489, OFIX_String, OFIX_Body, 0, 4, "489=", "CardNumber" },
    { 490, OFIX_LocalMktDate, OFIX_Body, 0, 4, "490=", "CardExpDate" },
    { 491, OFIX_String, OFIX_Body, 0, 4, "491=", "CardIssNum" },
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
    { 509, OFIX_String, OFIX_Body, 0, 4, "509=", "RegistDtls" },
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
    { 557, OFIX_Int, OFIX_Body, 0, 4, "557=", "TotNoSecurityTypes" },
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
    { 587, OFIX_Char, OFIX_Body, 0, 4, "587=", "LegSettlType" },
    { 588, OFIX_LocalMktDate, OFIX_Body, 0, 4, "588=", "LegSettlDate" },
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
    { 654, OFIX_String, OFIX_Body, 0, 4, "654=", "LegRefID" },
    { 655, OFIX_String, OFIX_Body, 0, 4, "655=", "ContraLegRefID" },
    { 656, OFIX_Float, OFIX_Body, 0, 4, "656=", "SettlCurrBidFxRate" },
    { 657, OFIX_Float, OFIX_Body, 0, 4, "657=", "SettlCurrOfferFxRate" },
    { 658, OFIX_Int, OFIX_Body, 0, 4, "658=", "QuoteRequestRejectReason" },
    { 659, OFIX_String, OFIX_Body, 0, 4, "659=", "SideComplianceID" },
    { 660, OFIX_Int, OFIX_Body, 0, 4, "660=", "AcctIDSource" },
    { 661, OFIX_Int, OFIX_Body, 0, 4, "661=", "AllocAcctIDSource" },
    { 662, OFIX_Price, OFIX_Body, 0, 4, "662=", "BenchmarkPrice" },
    { 663, OFIX_Int, OFIX_Body, 0, 4, "663=", "BenchmarkPriceType" },
    { 664, OFIX_String, OFIX_Body, 0, 4, "664=", "ConfirmID" },
    { 665, OFIX_Int, OFIX_Body, 0, 4, "665=", "ConfirmStatus" },
    { 666, OFIX_Int, OFIX_Body, 0, 4, "666=", "ConfirmTransType" },
    { 667, OFIX_MonthYear, OFIX_Body, 0, 4, "667=", "ContractSettlMonth" },
    { 668, OFIX_Int, OFIX_Body, 0, 4, "668=", "DeliveryForm" },
    { 669, OFIX_Price, OFIX_Body, 0, 4, "669=", "LastParPx" },
    { 670, OFIX_NumInGroup, OFIX_Body, 0, 4, "670=", "NoLegAllocs" },
    { 671, OFIX_String, OFIX_Body, 0, 4, "671=", "LegAllocAccount" },
    { 672, OFIX_String, OFIX_Body, 0, 4, "672=", "LegIndividualAllocID" },
    { 673, OFIX_Qty, OFIX_Body, 0, 4, "673=", "LegAllocQty" },
    { 674, OFIX_String, OFIX_Body, 0, 4, "674=", "LegAllocAcctIDSource" },
    { 675, OFIX_Currency, OFIX_Body, 0, 4, "675=", "LegSettlCurrency" },
    { 676, OFIX_Currency, OFIX_Body, 0, 4, "676=", "LegBenchmarkCurveCurrency" },
    { 677, OFIX_String, OFIX_Body, 0, 4, "677=", "LegBenchmarkCurveName" },
    { 678, OFIX_String, OFIX_Body, 0, 4, "678=", "LegBenchmarkCurvePoint" },
    { 679, OFIX_Price, OFIX_Body, 0, 4, "679=", "LegBenchmarkPrice" },
    { 680, OFIX_Int, OFIX_Body, 0, 4, "680=", "LegBenchmarkPriceType" },
    { 681, OFIX_Price, OFIX_Body, 0, 4, "681=", "LegBidPx" },
    { 682, OFIX_String, OFIX_Body, 0, 4, "682=", "LegIOIQty" },
    { 683, OFIX_NumInGroup, OFIX_Body, 0, 4, "683=", "NoLegStipulations" },
    { 684, OFIX_Price, OFIX_Body, 0, 4, "684=", "LegOfferPx" },
    { 685, OFIX_Qty, OFIX_Body, 0, 4, "685=", "LegOrderQty" },
    { 686, OFIX_Int, OFIX_Body, 0, 4, "686=", "LegPriceType" },
    { 687, OFIX_Qty, OFIX_Body, 0, 4, "687=", "LegQty" },
    { 688, OFIX_String, OFIX_Body, 0, 4, "688=", "LegStipulationType" },
    { 689, OFIX_String, OFIX_Body, 0, 4, "689=", "LegStipulationValue" },
    { 690, OFIX_Int, OFIX_Body, 0, 4, "690=", "LegSwapType" },
    { 691, OFIX_String, OFIX_Body, 0, 4, "691=", "Pool" },
    { 692, OFIX_Int, OFIX_Body, 0, 4, "692=", "QuotePriceType" },
    { 693, OFIX_String, OFIX_Body, 0, 4, "693=", "QuoteRespID" },
    { 694, OFIX_Int, OFIX_Body, 0, 4, "694=", "QuoteRespType" },
    { 695, OFIX_Char, OFIX_Body, 0, 4, "695=", "QuoteQualifier" },
    { 696, OFIX_LocalMktDate, OFIX_Body, 0, 4, "696=", "YieldRedemptionDate" },
    { 697, OFIX_Price, OFIX_Body, 0, 4, "697=", "YieldRedemptionPrice" },
    { 698, OFIX_Int, OFIX_Body, 0, 4, "698=", "YieldRedemptionPriceType" },
    { 699, OFIX_String, OFIX_Body, 0, 4, "699=", "BenchmarkSecurityID" },
    { 700, OFIX_Boolean, OFIX_Body, 0, 4, "700=", "ReversalIndicator" },
    { 701, OFIX_LocalMktDate, OFIX_Body, 0, 4, "701=", "YieldCalcDate" },
    { 702, OFIX_NumInGroup, OFIX_Body, 0, 4, "702=", "NoPositions" },
    { 703, OFIX_String, OFIX_Body, 0, 4, "703=", "PosType" },
    { 704, OFIX_Qty, OFIX_Body, 0, 4, "704=", "LongQty" },
    { 705, OFIX_Qty, OFIX_Body, 0, 4, "705=", "ShortQty" },
    { 706, OFIX_Int, OFIX_Body, 0, 4, "706=", "PosQtyStatus" },
    { 707, OFIX_String, OFIX_Body, 0, 4, "707=", "PosAmtType" },
    { 708, OFIX_Amt, OFIX_Body, 0, 4, "708=", "PosAmt" },
    { 709, OFIX_Int, OFIX_Body, 0, 4, "709=", "PosTransType" },
    { 710, OFIX_String, OFIX_Body, 0, 4, "710=", "PosReqID" },
    { 711, OFIX_NumInGroup, OFIX_Body, 0, 4, "711=", "NoUnderlyings" },
    { 712, OFIX_Int, OFIX_Body, 0, 4, "712=", "PosMaintAction" },
    { 713, OFIX_String, OFIX_Body, 0, 4, "713=", "OrigPosReqRefID" },
    { 714, OFIX_String, OFIX_Body, 0, 4, "714=", "PosMaintRptRefID" },
    { 715, OFIX_LocalMktDate, OFIX_Body, 0, 4, "715=", "ClearingBusinessDate" },
    { 716, OFIX_String, OFIX_Body, 0, 4, "716=", "SettlSessID" },
    { 717, OFIX_String, OFIX_Body, 0, 4, "717=", "SettlSessSubID" },
    { 718, OFIX_Int, OFIX_Body, 0, 4, "718=", "AdjustmentType" },
    { 719, OFIX_Boolean, OFIX_Body, 0, 4, "719=", "ContraryInstructionIndicator" },
    { 720, OFIX_Boolean, OFIX_Body, 0, 4, "720=", "PriorSpreadIndicator" },
    { 721, OFIX_String, OFIX_Body, 0, 4, "721=", "PosMaintRptID" },
    { 722, OFIX_Int, OFIX_Body, 0, 4, "722=", "PosMaintStatus" },
    { 723, OFIX_Int, OFIX_Body, 0, 4, "723=", "PosMaintResult" },
    { 724, OFIX_Int, OFIX_Body, 0, 4, "724=", "PosReqType" },
    { 725, OFIX_Int, OFIX_Body, 0, 4, "725=", "ResponseTransportType" },
    { 726, OFIX_String, OFIX_Body, 0, 4, "726=", "ResponseDestination" },
    { 727, OFIX_Int, OFIX_Body, 0, 4, "727=", "TotalNumPosReports" },
    { 728, OFIX_Int, OFIX_Body, 0, 4, "728=", "PosReqResult" },
    { 729, OFIX_Int, OFIX_Body, 0, 4, "729=", "PosReqStatus" },
    { 730, OFIX_Price, OFIX_Body, 0, 4, "730=", "SettlPrice" },
    { 731, OFIX_Int, OFIX_Body, 0, 4, "731=", "SettlPriceType" },
    { 732, OFIX_Price, OFIX_Body, 0, 4, "732=", "UnderlyingSettlPrice" },
    { 733, OFIX_Int, OFIX_Body, 0, 4, "733=", "UnderlyingSettlPriceType" },
    { 734, OFIX_Price, OFIX_Body, 0, 4, "734=", "PriorSettlPrice" },
    { 735, OFIX_NumInGroup, OFIX_Body, 0, 4, "735=", "NoQuoteQualifiers" },
    { 736, OFIX_Currency, OFIX_Body, 0, 4, "736=", "AllocSettlCurrency" },
    { 737, OFIX_Amt, OFIX_Body, 0, 4, "737=", "AllocSettlCurrAmt" },
    { 738, OFIX_Amt, OFIX_Body, 0, 4, "738=", "InterestAtMaturity" },
    { 739, OFIX_LocalMktDate, OFIX_Body, 0, 4, "739=", "LegDatedDate" },
    { 740, OFIX_String, OFIX_Body, 0, 4, "740=", "LegPool" },
    { 741, OFIX_Amt, OFIX_Body, 0, 4, "741=", "AllocInterestAtMaturity" },
    { 742, OFIX_Amt, OFIX_Body, 0, 4, "742=", "AllocAccruedInterestAmt" },
    { 743, OFIX_LocalMktDate, OFIX_Body, 0, 4, "743=", "DeliveryDate" },
    { 744, OFIX_Char, OFIX_Body, 0, 4, "744=", "AssignmentMethod" },
    { 745, OFIX_Qty, OFIX_Body, 0, 4, "745=", "AssignmentUnit" },
    { 746, OFIX_Amt, OFIX_Body, 0, 4, "746=", "OpenInterest" },
    { 747, OFIX_Char, OFIX_Body, 0, 4, "747=", "ExerciseMethod" },
    { 748, OFIX_Int, OFIX_Body, 0, 4, "748=", "TotNumTradeReports" },
    { 749, OFIX_Int, OFIX_Body, 0, 4, "749=", "TradeRequestResult" },
    { 750, OFIX_Int, OFIX_Body, 0, 4, "750=", "TradeRequestStatus" },
    { 751, OFIX_Int, OFIX_Body, 0, 4, "751=", "TradeReportRejectReason" },
    { 752, OFIX_Int, OFIX_Body, 0, 4, "752=", "SideMultiLegReportingType" },
    { 753, OFIX_NumInGroup, OFIX_Body, 0, 4, "753=", "NoPosAmt" },
    { 754, OFIX_Boolean, OFIX_Body, 0, 4, "754=", "AutoAcceptIndicator" },
    { 755, OFIX_String, OFIX_Body, 0, 4, "755=", "AllocReportID" },
    { 756, OFIX_NumInGroup, OFIX_Body, 0, 4, "756=", "NoNested2PartyIDs" },
    { 757, OFIX_String, OFIX_Body, 0, 4, "757=", "Nested2PartyID" },
    { 758, OFIX_Char, OFIX_Body, 0, 4, "758=", "Nested2PartyIDSource" },
    { 759, OFIX_Int, OFIX_Body, 0, 4, "759=", "Nested2PartyRole" },
    { 760, OFIX_String, OFIX_Body, 0, 4, "760=", "Nested2PartySubID" },
    { 761, OFIX_String, OFIX_Body, 0, 4, "761=", "BenchmarkSecurityIDSource" },
    { 762, OFIX_String, OFIX_Body, 0, 4, "762=", "SecuritySubType" },
    { 763, OFIX_String, OFIX_Body, 0, 4, "763=", "UnderlyingSecuritySubType" },
    { 764, OFIX_String, OFIX_Body, 0, 4, "764=", "LegSecuritySubType" },
    { 765, OFIX_Percentage, OFIX_Body, 0, 4, "765=", "AllowableOneSidednessPct" },
    { 766, OFIX_Amt, OFIX_Body, 0, 4, "766=", "AllowableOneSidednessValue" },
    { 767, OFIX_Currency, OFIX_Body, 0, 4, "767=", "AllowableOneSidednessCurr" },
    { 768, OFIX_NumInGroup, OFIX_Body, 0, 4, "768=", "NoTrdRegTimestamps" },
    { 769, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "769=", "TrdRegTimestamp" },
    { 770, OFIX_Int, OFIX_Body, 0, 4, "770=", "TrdRegTimestampType" },
    { 771, OFIX_String, OFIX_Body, 0, 4, "771=", "TrdRegTimestampOrigin" },
    { 772, OFIX_String, OFIX_Body, 0, 4, "772=", "ConfirmRefID" },
    { 773, OFIX_Int, OFIX_Body, 0, 4, "773=", "ConfirmType" },
    { 774, OFIX_Int, OFIX_Body, 0, 4, "774=", "ConfirmRejReason" },
    { 775, OFIX_Int, OFIX_Body, 0, 4, "775=", "BookingType" },
    { 776, OFIX_Int, OFIX_Body, 0, 4, "776=", "IndividualAllocRejCode" },
    { 777, OFIX_String, OFIX_Body, 0, 4, "777=", "SettlInstMsgID" },
    { 778, OFIX_NumInGroup, OFIX_Body, 0, 4, "778=", "NoSettlInst" },
    { 779, OFIX_UTCTimestamp, OFIX_Body, 0, 4, "779=", "LastUpdateTime" },
    { 780, OFIX_Int, OFIX_Body, 0, 4, "780=", "AllocSettlInstType" },
    { 781, OFIX_NumInGroup, OFIX_Body, 0, 4, "781=", "NoSettlPartyIDs" },
    { 782, OFIX_String, OFIX_Body, 0, 4, "782=", "SettlPartyID" },
    { 783, OFIX_Char, OFIX_Body, 0, 4, "783=", "SettlPartyIDSource" },
    { 784, OFIX_Int, OFIX_Body, 0, 4, "784=", "SettlPartyRole" },
    { 785, OFIX_String, OFIX_Body, 0, 4, "785=", "SettlPartySubID" },
    { 786, OFIX_Int, OFIX_Body, 0, 4, "786=", "SettlPartySubIDType" },
    { 787, OFIX_Char, OFIX_Body, 0, 4, "787=", "DlvyInstType" },
    { 788, OFIX_Int, OFIX_Body, 0, 4, "788=", "TerminationType" },
    { 789, OFIX_SeqNum, OFIX_Body, 0, 4, "789=", "NextExpectedMsgSeqNum" },
    { 790, OFIX_String, OFIX_Body, 0, 4, "790=", "OrdStatusReqID" },
    { 791, OFIX_String, OFIX_Body, 0, 4, "791=", "SettlInstReqID" },
    { 792, OFIX_Int, OFIX_Body, 0, 4, "792=", "SettlInstReqRejCode" },
    { 793, OFIX_String, OFIX_Body, 0, 4, "793=", "SecondaryAllocID" },
    { 794, OFIX_Int, OFIX_Body, 0, 4, "794=", "AllocReportType" },
    { 795, OFIX_String, OFIX_Body, 0, 4, "795=", "AllocReportRefID" },
    { 796, OFIX_Int, OFIX_Body, 0, 4, "796=", "AllocCancReplaceReason" },
    { 797, OFIX_Boolean, OFIX_Body, 0, 4, "797=", "CopyMsgIndicator" },
    { 798, OFIX_Int, OFIX_Body, 0, 4, "798=", "AllocAccountType" },
    { 799, OFIX_Price, OFIX_Body, 0, 4, "799=", "OrderAvgPx" },
    { 800, OFIX_Qty, OFIX_Body, 0, 4, "800=", "OrderBookingQty" },
    { 801, OFIX_NumInGroup, OFIX_Body, 0, 4, "801=", "NoSettlPartySubIDs" },
    { 802, OFIX_NumInGroup, OFIX_Body, 0, 4, "802=", "NoPartySubIDs" },
    { 803, OFIX_Int, OFIX_Body, 0, 4, "803=", "PartySubIDType" },
    { 804, OFIX_NumInGroup, OFIX_Body, 0, 4, "804=", "NoNestedPartySubIDs" },
    { 805, OFIX_Int, OFIX_Body, 0, 4, "805=", "NestedPartySubIDType" },
    { 806, OFIX_NumInGroup, OFIX_Body, 0, 4, "806=", "NoNested2PartySubIDs" },
    { 807, OFIX_Int, OFIX_Body, 0, 4, "807=", "Nested2PartySubIDType" },
    { 808, OFIX_Int, OFIX_Body, 0, 4, "808=", "AllocIntermedReqType" },
    { 810, OFIX_Price, OFIX_Body, 0, 4, "810=", "UnderlyingPx" },
    { 811, OFIX_Float, OFIX_Body, 0, 4, "811=", "PriceDelta" },
    { 812, OFIX_Int, OFIX_Body, 0, 4, "812=", "ApplQueueMax" },
    { 813, OFIX_Int, OFIX_Body, 0, 4, "813=", "ApplQueueDepth" },
    { 814, OFIX_Int, OFIX_Body, 0, 4, "814=", "ApplQueueResolution" },
    { 815, OFIX_Int, OFIX_Body, 0, 4, "815=", "ApplQueueAction" },
    { 816, OFIX_NumInGroup, OFIX_Body, 0, 4, "816=", "NoAltMDSource" },
    { 817, OFIX_String, OFIX_Body, 0, 4, "817=", "AltMDSourceID" },
    { 818, OFIX_String, OFIX_Body, 0, 4, "818=", "SecondaryTradeReportID" },
    { 819, OFIX_Int, OFIX_Body, 0, 4, "819=", "AvgPxIndicator" },
    { 820, OFIX_String, OFIX_Body, 0, 4, "820=", "TradeLinkID" },
    { 821, OFIX_String, OFIX_Body, 0, 4, "821=", "OrderInputDevice" },
    { 822, OFIX_String, OFIX_Body, 0, 4, "822=", "UnderlyingTradingSessionID" },
    { 823, OFIX_String, OFIX_Body, 0, 4, "823=", "UnderlyingTradingSessionSubID" },
    { 824, OFIX_String, OFIX_Body, 0, 4, "824=", "TradeLegRefID" },
    { 825, OFIX_String, OFIX_Body, 0, 4, "825=", "ExchangeRule" },
    { 826, OFIX_Int, OFIX_Body, 0, 4, "826=", "TradeAllocIndicator" },
    { 827, OFIX_Int, OFIX_Body, 0, 4, "827=", "ExpirationCycle" },
    { 828, OFIX_Int, OFIX_Body, 0, 4, "828=", "TrdType" },
    { 829, OFIX_Int, OFIX_Body, 0, 4, "829=", "TrdSubType" },
    { 830, OFIX_String, OFIX_Body, 0, 4, "830=", "TransferReason" },
    { 831, OFIX_String, OFIX_Body, 0, 4, "831=", "AsgnReqID" },
    { 832, OFIX_Int, OFIX_Body, 0, 4, "832=", "TotNumAssignmentReports" },
    { 833, OFIX_String, OFIX_Body, 0, 4, "833=", "AsgnRptID" },
    { 834, OFIX_PriceOffset, OFIX_Body, 0, 4, "834=", "ThresholdAmount" },
    { 835, OFIX_Int, OFIX_Body, 0, 4, "835=", "PegMoveType" },
    { 836, OFIX_Int, OFIX_Body, 0, 4, "836=", "PegOffsetType" },
    { 837, OFIX_Int, OFIX_Body, 0, 4, "837=", "PegLimitType" },
    { 838, OFIX_Int, OFIX_Body, 0, 4, "838=", "PegRoundDirection" },
    { 839, OFIX_Price, OFIX_Body, 0, 4, "839=", "PeggedPrice" },
    { 840, OFIX_Int, OFIX_Body, 0, 4, "840=", "PegScope" },
    { 841, OFIX_Int, OFIX_Body, 0, 4, "841=", "DiscretionMoveType" },
    { 842, OFIX_Int, OFIX_Body, 0, 4, "842=", "DiscretionOffsetType" },
    { 843, OFIX_Int, OFIX_Body, 0, 4, "843=", "DiscretionLimitType" },
    { 844, OFIX_Int, OFIX_Body, 0, 4, "844=", "DiscretionRoundDirection" },
    { 845, OFIX_Price, OFIX_Body, 0, 4, "845=", "DiscretionPrice" },
    { 846, OFIX_Int, OFIX_Body, 0, 4, "846=", "DiscretionScope" },
    { 847, OFIX_Int, OFIX_Body, 0, 4, "847=", "TargetStrategy" },
    { 848, OFIX_String, OFIX_Body, 0, 4, "848=", "TargetStrategyParameters" },
    { 849, OFIX_Percentage, OFIX_Body, 0, 4, "849=", "ParticipationRate" },
    { 850, OFIX_Float, OFIX_Body, 0, 4, "850=", "TargetStrategyPerformance" },
    { 851, OFIX_Int, OFIX_Body, 0, 4, "851=", "LastLiquidityInd" },
    { 852, OFIX_Boolean, OFIX_Body, 0, 4, "852=", "PublishTrdIndicator" },
    { 853, OFIX_Int, OFIX_Body, 0, 4, "853=", "ShortSaleReason" },
    { 854, OFIX_Int, OFIX_Body, 0, 4, "854=", "QtyType" },
    { 855, OFIX_Int, OFIX_Body, 0, 4, "855=", "SecondaryTrdType" },
    { 856, OFIX_Int, OFIX_Body, 0, 4, "856=", "TradeReportType" },
    { 857, OFIX_Int, OFIX_Body, 0, 4, "857=", "AllocNoOrdersType" },
    { 858, OFIX_Amt, OFIX_Body, 0, 4, "858=", "SharedCommission" },
    { 859, OFIX_String, OFIX_Body, 0, 4, "859=", "ConfirmReqID" },
    { 860, OFIX_Price, OFIX_Body, 0, 4, "860=", "AvgParPx" },
    { 861, OFIX_Price, OFIX_Body, 0, 4, "861=", "ReportedPx" },
    { 862, OFIX_NumInGroup, OFIX_Body, 0, 4, "862=", "NoCapacities" },
    { 863, OFIX_Qty, OFIX_Body, 0, 4, "863=", "OrderCapacityQty" },
    { 864, OFIX_NumInGroup, OFIX_Body, 0, 4, "864=", "NoEvents" },
    { 865, OFIX_Int, OFIX_Body, 0, 4, "865=", "EventType" },
    { 866, OFIX_LocalMktDate, OFIX_Body, 0, 4, "866=", "EventDate" },
    { 867, OFIX_Price, OFIX_Body, 0, 4, "867=", "EventPx" },
    { 868, OFIX_String, OFIX_Body, 0, 4, "868=", "EventText" },
    { 869, OFIX_Percentage, OFIX_Body, 0, 4, "869=", "PctAtRisk" },
    { 870, OFIX_NumInGroup, OFIX_Body, 0, 4, "870=", "NoInstrAttrib" },
    { 871, OFIX_Int, OFIX_Body, 0, 4, "871=", "InstrAttribType" },
    { 872, OFIX_String, OFIX_Body, 0, 4, "872=", "InstrAttribValue" },
    { 873, OFIX_LocalMktDate, OFIX_Body, 0, 4, "873=", "DatedDate" },
    { 874, OFIX_LocalMktDate, OFIX_Body, 0, 4, "874=", "InterestAccrualDate" },
    { 875, OFIX_Int, OFIX_Body, 0, 4, "875=", "CPProgram" },
    { 876, OFIX_String, OFIX_Body, 0, 4, "876=", "CPRegType" },
    { 877, OFIX_String, OFIX_Body, 0, 4, "877=", "UnderlyingCPProgram" },
    { 878, OFIX_String, OFIX_Body, 0, 4, "878=", "UnderlyingCPRegType" },
    { 879, OFIX_Qty, OFIX_Body, 0, 4, "879=", "UnderlyingQty" },
    { 880, OFIX_String, OFIX_Body, 0, 4, "880=", "TrdMatchID" },
    { 881, OFIX_String, OFIX_Body, 0, 4, "881=", "SecondaryTradeReportRefID" },
    { 882, OFIX_Price, OFIX_Body, 0, 4, "882=", "UnderlyingDirtyPrice" },
    { 883, OFIX_Price, OFIX_Body, 0, 4, "883=", "UnderlyingEndPrice" },
    { 884, OFIX_Amt, OFIX_Body, 0, 4, "884=", "UnderlyingStartValue" },
    { 885, OFIX_Amt, OFIX_Body, 0, 4, "885=", "UnderlyingCurrentValue" },
    { 886, OFIX_Amt, OFIX_Body, 0, 4, "886=", "UnderlyingEndValue" },
    { 887, OFIX_NumInGroup, OFIX_Body, 0, 4, "887=", "NoUnderlyingStips" },
    { 888, OFIX_String, OFIX_Body, 0, 4, "888=", "UnderlyingStipType" },
    { 889, OFIX_String, OFIX_Body, 0, 4, "889=", "UnderlyingStipValue" },
    { 890, OFIX_Amt, OFIX_Body, 0, 4, "890=", "MaturityNetMoney" },
    { 891, OFIX_Int, OFIX_Body, 0, 4, "891=", "MiscFeeBasis" },
    { 892, OFIX_Int, OFIX_Body, 0, 4, "892=", "TotNoAllocs" },
    { 893, OFIX_Boolean, OFIX_Body, 0, 4, "893=", "LastFragment" },
    { 894, OFIX_String, OFIX_Body, 0, 4, "894=", "CollReqID" },
    { 895, OFIX_Int, OFIX_Body, 0, 4, "895=", "CollAsgnReason" },
    { 896, OFIX_Int, OFIX_Body, 0, 4, "896=", "CollInquiryQualifier" },
    { 897, OFIX_NumInGroup, OFIX_Body, 0, 4, "897=", "NoTrades" },
    { 898, OFIX_Percentage, OFIX_Body, 0, 4, "898=", "MarginRatio" },
    { 899, OFIX_Amt, OFIX_Body, 0, 4, "899=", "MarginExcess" },
    { 900, OFIX_Amt, OFIX_Body, 0, 4, "900=", "TotalNetValue" },
    { 901, OFIX_Amt, OFIX_Body, 0, 4, "901=", "CashOutstanding" },
    { 902, OFIX_String, OFIX_Body, 0, 4, "902=", "CollAsgnID" },
    { 903, OFIX_Int, OFIX_Body, 0, 4, "903=", "CollAsgnTransType" },
    { 904, OFIX_String, OFIX_Body, 0, 4, "904=", "CollRespID" },
    { 905, OFIX_Int, OFIX_Body, 0, 4, "905=", "CollAsgnRespType" },
    { 906, OFIX_Int, OFIX_Body, 0, 4, "906=", "CollAsgnRejectReason" },
    { 907, OFIX_String, OFIX_Body, 0, 4, "907=", "CollAsgnRefID" },
    { 908, OFIX_String, OFIX_Body, 0, 4, "908=", "CollRptID" },
    { 909, OFIX_String, OFIX_Body, 0, 4, "909=", "CollInquiryID" },
    { 910, OFIX_Int, OFIX_Body, 0, 4, "910=", "CollStatus" },
    { 911, OFIX_Int, OFIX_Body, 0, 4, "911=", "TotNumReports" },
    { 912, OFIX_Boolean, OFIX_Body, 0, 4, "912=", "LastRptRequested" },
    { 913, OFIX_String, OFIX_Body, 0, 4, "913=", "AgreementDesc" },
    { 914, OFIX_String, OFIX_Body, 0, 4, "914=", "AgreementID" },
    { 915, OFIX_LocalMktDate, OFIX_Body, 0, 4, "915=", "AgreementDate" },
    { 916, OFIX_LocalMktDate, OFIX_Body, 0, 4, "916=", "StartDate" },
    { 917, OFIX_LocalMktDate, OFIX_Body, 0, 4, "917=", "EndDate" },
    { 918, OFIX_Currency, OFIX_Body, 0, 4, "918=", "AgreementCurrency" },
    { 919, OFIX_Int, OFIX_Body, 0, 4, "919=", "DeliveryType" },
    { 920, OFIX_Amt, OFIX_Body, 0, 4, "920=", "EndAccruedInterestAmt" },
    { 921, OFIX_Amt, OFIX_Body, 0, 4, "921=", "StartCash" },
    { 922, OFIX_Amt, OFIX_Body, 0, 4, "922=", "EndCash" },
    { 923, OFIX_String, OFIX_Body, 0, 4, "923=", "UserRequestID" },
    { 924, OFIX_Int, OFIX_Body, 0, 4, "924=", "UserRequestType" },
    { 925, OFIX_String, OFIX_Body, 0, 4, "925=", "NewPassword" },
    { 926, OFIX_Int, OFIX_Body, 0, 4, "926=", "UserStatus" },
    { 927, OFIX_String, OFIX_Body, 0, 4, "927=", "UserStatusText" },
    { 928, OFIX_Int, OFIX_Body, 0, 4, "928=", "StatusValue" },
    { 929, OFIX_String, OFIX_Body, 0, 4, "929=", "StatusText" },
    { 930, OFIX_String, OFIX_Body, 0, 4, "930=", "RefCompID" },
    { 931, OFIX_String, OFIX_Body, 0, 4, "931=", "RefSubID" },
    { 932, OFIX_String, OFIX_Body, 0, 4, "932=", "NetworkResponseID" },
    { 933, OFIX_String, OFIX_Body, 0, 4, "933=", "NetworkRequestID" },
    { 934, OFIX_String, OFIX_Body, 0, 4, "934=", "LastNetworkResponseID" },
    { 935, OFIX_Int, OFIX_Body, 0, 4, "935=", "NetworkRequestType" },
    { 936, OFIX_NumInGroup, OFIX_Body, 0, 4, "936=", "NoCompIDs" },
    { 937, OFIX_Int, OFIX_Body, 0, 4, "937=", "NetworkStatusResponseType" },
    { 938, OFIX_NumInGroup, OFIX_Body, 0, 4, "938=", "NoCollInquiryQualifier" },
    { 939, OFIX_Int, OFIX_Body, 0, 4, "939=", "TrdRptStatus" },
    { 940, OFIX_Int, OFIX_Body, 0, 4, "940=", "AffirmStatus" },
    { 941, OFIX_Currency, OFIX_Body, 0, 4, "941=", "UnderlyingStrikeCurrency" },
    { 942, OFIX_Currency, OFIX_Body, 0, 4, "942=", "LegStrikeCurrency" },
    { 943, OFIX_String, OFIX_Body, 0, 4, "943=", "TimeBracket" },
    { 944, OFIX_Int, OFIX_Body, 0, 4, "944=", "CollAction" },
    { 945, OFIX_Int, OFIX_Body, 0, 4, "945=", "CollInquiryStatus" },
    { 946, OFIX_Int, OFIX_Body, 0, 4, "946=", "CollInquiryResult" },
    { 947, OFIX_Currency, OFIX_Body, 0, 4, "947=", "StrikeCurrency" },
    { 948, OFIX_NumInGroup, OFIX_Body, 0, 4, "948=", "NoNested3PartyIDs" },
    { 949, OFIX_String, OFIX_Body, 0, 4, "949=", "Nested3PartyID" },
    { 950, OFIX_Char, OFIX_Body, 0, 4, "950=", "Nested3PartyIDSource" },
    { 951, OFIX_Int, OFIX_Body, 0, 4, "951=", "Nested3PartyRole" },
    { 952, OFIX_NumInGroup, OFIX_Body, 0, 4, "952=", "NoNested3PartySubIDs" },
    { 953, OFIX_String, OFIX_Body, 0, 4, "953=", "Nested3PartySubID" },
    { 954, OFIX_Int, OFIX_Body, 0, 4, "954=", "Nested3PartySubIDType" },
    { 955, OFIX_MonthYear, OFIX_Body, 0, 4, "955=", "LegContractSettlMonth" },
    { 956, OFIX_LocalMktDate, OFIX_Body, 0, 4, "956=", "LegInterestAccrualDate" },
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
    &fix44Spec, // version
    48, // tid
    "0", // type
    "Heartbeat", // name
    {0,0,0,0,0,0,0,0,1,2,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,8,9,0,29,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    49, // tid
    "1", // type
    "TestRequest", // name
    {0,0,0,0,0,0,0,0,1,2,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,8,9,0,29,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    50, // tid
    "2", // type
    "ResendRequest", // name
    {0,0,0,0,0,0,0,28,1,2,32,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    51, // tid
    "3", // type
    "Reject", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,28,0,0,0,4,11,0,21,0,0,0,5,13,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,29,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    52, // tid
    "4", // type
    "SequenceReset", // name
    {0,0,0,0,0,0,0,0,1,2,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,29,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,8,9,0,30,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,28,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    53, // tid
    "5", // type
    "Logout", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	IndicationOfInterestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 682, false }, // LegIOIQty
	{ 683, false }, // NoLegStipulations
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	IndicationOfInterestGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
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
    &IndicationOfInterestGroup864,
    &IndicationOfInterestGroup711,
    &IndicationOfInterestGroup457,
    &IndicationOfInterestGroup887,
    &IndicationOfInterestGroup232,
    &IndicationOfInterestGroup555,
    &IndicationOfInterestGroup604,
    &IndicationOfInterestGroup683,
    &IndicationOfInterestGroup199,
    &IndicationOfInterestGroup215,
    0
};

static struct _ofixMsgSpec	IndicationOfInterest = {
    &fix44Spec, // version
    54, // tid
    "6", // type
    "IndicationOfInterest", // name
    {0,0,0,0,0,0,0,0,1,2,122,0,0,0,0,91,0,0,0,0,0,0,34,28,0,97,30,90,29,0,0,0,0,0,10,3,0,0,85,0,0,0,0,19,95,0,0,0,33,4,11,0,21,0,83,31,5,13,100,0,103,0,96,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,121,8,9,0,120,0,0,0,20,0,0,0,0,0,0,0,0,60,63,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,98,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,104,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,40,0,54,0,0,0,56,59,0,0,0,0,23,24,0,105,0,0,106,0,107,108,109,58,42,43,45,46,47,0,0,57,92,0,0,114,115,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,61,62,64,65,0,0,101,102,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,36,37,0,0,0,0,0,0,88,89,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,111,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,117,118,119,112,0,116,0,0,0,0,0,0,0,0,0,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,113,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,71,72,68,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,74,75,78,79,76,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 54, true }, // Side
	{ 854, false }, // QtyType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 27, true }, // IOIQty
	{ 15, false }, // Currency
	{ 232, false }, // NoStipulations
	{ 555, false }, // NoLegs
	{ 423, false }, // PriceType
	{ 44, false }, // Price
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
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
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

static struct _ofixGroupSpec	AdvertisementGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AdvertisementGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	AdvertisementGroups[] = {
    &AdvertisementGroup627,
    &AdvertisementGroup454,
    &AdvertisementGroup864,
    &AdvertisementGroup555,
    &AdvertisementGroup604,
    &AdvertisementGroup711,
    &AdvertisementGroup457,
    &AdvertisementGroup887,
    0
};

static struct _ofixMsgSpec	Advertisement = {
    &fix44Spec, // version
    55, // tid
    "7", // type
    "Advertisement", // name
    {0,0,28,30,75,29,0,0,1,2,91,0,0,0,0,79,0,0,0,0,0,0,34,0,0,0,0,0,0,0,86,0,0,0,10,3,0,0,0,0,0,0,0,19,78,0,0,0,33,4,11,0,21,76,0,31,5,13,82,0,81,0,0,0,0,32,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,90,8,9,0,89,0,0,0,20,0,0,0,0,0,0,0,0,60,63,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,54,0,0,0,56,59,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,58,42,43,45,46,47,0,0,57,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,25,61,62,64,65,0,0,83,84,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,71,72,68,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 4, true }, // AdvSide
	{ 53, true }, // Quantity
	{ 854, false }, // QtyType
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	ExecutionReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 683, false }, // NoLegStipulations
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
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

static struct _ofixGroupSpec	ExecutionReportGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ExecutionReportGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static ofixGroupSpec	ExecutionReportGroups[] = {
    &ExecutionReportGroup627,
    &ExecutionReportGroup453,
    &ExecutionReportGroup802,
    &ExecutionReportGroup382,
    &ExecutionReportGroup454,
    &ExecutionReportGroup864,
    &ExecutionReportGroup711,
    &ExecutionReportGroup457,
    &ExecutionReportGroup887,
    &ExecutionReportGroup232,
    &ExecutionReportGroup518,
    &ExecutionReportGroup555,
    &ExecutionReportGroup604,
    &ExecutionReportGroup683,
    &ExecutionReportGroup539,
    &ExecutionReportGroup804,
    &ExecutionReportGroup136,
    0
};

static struct _ofixMsgSpec	ExecutionReport = {
    &fix44Spec, // version
    56, // tid
    "8", // type
    "ExecutionReport", // name
    {0,54,0,0,0,0,172,0,1,2,247,32,180,181,171,147,0,47,154,48,0,217,67,0,0,0,0,0,0,169,165,160,158,0,10,3,0,28,119,50,124,33,0,19,126,0,0,0,66,4,11,0,21,0,116,64,5,13,223,150,178,0,0,60,61,65,43,0,0,0,0,0,0,0,0,177,0,220,0,0,0,0,0,0,0,0,0,0,0,246,8,9,0,245,0,0,0,20,0,127,0,0,0,52,0,0,93,96,0,0,218,219,0,179,0,6,15,0,212,213,214,0,22,0,0,0,153,0,7,17,0,0,0,0,0,0,244,0,0,0,0,0,12,14,16,18,0,0,0,0,49,170,120,0,0,215,216,199,201,202,0,0,0,0,0,0,0,71,151,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,227,226,163,164,0,0,29,0,73,0,87,0,0,0,89,92,0,0,221,128,23,24,0,0,0,0,184,0,185,186,187,91,75,76,78,79,80,41,200,90,117,0,0,192,193,211,210,77,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,207,208,209,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,166,0,0,0,0,0,0,0,0,0,0,25,94,95,97,98,0,0,224,225,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,148,149,53,0,0,198,42,0,0,0,0,0,134,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,125,173,174,175,176,0,0,0,0,152,0,0,0,0,0,0,0,0,0,229,0,0,0,0,0,0,0,0,0,0,40,68,0,0,0,0,0,69,70,0,0,0,0,0,0,122,123,83,84,85,0,0,0,0,0,0,182,230,231,0,234,236,237,0,0,0,0,0,0,0,0,233,0,0,183,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,232,0,235,121,0,241,0,0,0,0,0,0,0,30,31,155,156,0,0,0,0,0,0,0,0,0,0,0,74,0,82,62,0,0,0,44,46,0,45,0,0,0,242,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,157,34,37,0,0,0,0,57,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,167,0,27,0,0,0,0,0,0,0,63,51,0,238,239,0,228,0,0,0,0,0,0,0,0,0,161,159,0,0,0,0,0,0,0,55,0,188,189,0,0,0,100,0,162,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,0,35,0,0,195,196,197,190,0,194,0,0,0,0,0,0,0,0,0,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,203,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,191,72,0,0,0,0,0,0,0,0,0,0,0,0,222,0,0,0,0,0,0,0,0,0,0,0,0,110,0,36,0,0,0,0,0,0,243,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,130,131,132,141,133,136,137,138,139,142,140,143,144,145,146,240,0,0,118,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,104,105,101,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,114,0,0,0,0,0,0,0,0,0,0,0,0,38,39,106,107,108,111,112,109,113,204,205,206,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,168,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 527, false }, // SecondaryExecID
	{ 11, false }, // ClOrdID
	{ 41, false }, // OrigClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 693, false }, // QuoteRespID
	{ 790, false }, // OrdStatusReqID
	{ 584, false }, // MassStatusReqID
	{ 911, false }, // TotNumReports
	{ 912, false }, // LastRptRequested
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
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 54, true }, // Side
	{ 232, false }, // NoStipulations
	{ 854, false }, // QtyType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 40, false }, // OrdType
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 99, false }, // StopPx
	{ 211, false }, // PegOffsetValue
	{ 835, false }, // PegMoveType
	{ 836, false }, // PegOffsetType
	{ 837, false }, // PegLimitType
	{ 838, false }, // PegRoundDirection
	{ 840, false }, // PegScope
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffsetValue
	{ 841, false }, // DiscretionMoveType
	{ 842, false }, // DiscretionOffsetType
	{ 843, false }, // DiscretionLimitType
	{ 844, false }, // DiscretionRoundDirection
	{ 846, false }, // DiscretionScope
	{ 839, false }, // PeggedPrice
	{ 845, false }, // DiscretionPrice
	{ 847, false }, // TargetStrategy
	{ 848, false }, // TargetStrategyParameters
	{ 849, false }, // ParticipationRate
	{ 850, false }, // TargetStrategyPerformance
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
	{ 32, false }, // LastQty
	{ 652, false }, // UnderlyingLastQty
	{ 31, false }, // LastPx
	{ 651, false }, // UnderlyingLastPx
	{ 669, false }, // LastParPx
	{ 194, false }, // LastSpotRate
	{ 195, false }, // LastForwardPoints
	{ 30, false }, // LastMkt
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 943, false }, // TimeBracket
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
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 381, false }, // GrossTradeAmt
	{ 157, false }, // NumDaysInterest
	{ 230, false }, // ExDate
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 738, false }, // InterestAtMaturity
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
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
	{ 775, false }, // BookingType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // SettlDate2
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
	{ 851, false }, // LastLiquidityInd
	{ 518, false }, // NoContAmts
	{ 555, false }, // NoLegs
	{ 797, false }, // CopyMsgIndicator
	{ 136, false }, // NoMiscFees
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
    &fix44Spec, // version
    57, // tid
    "9", // type
    "OrderCancelReject", // name
    {0,38,0,0,0,0,0,0,1,2,51,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,34,0,33,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,46,0,43,0,0,0,0,0,37,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,50,8,9,0,49,0,0,0,20,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,32,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
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
    &fix44Spec, // version
    65, // tid
    "A", // type
    "Logon", // name
    {0,0,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,30,31,20,28,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,32,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 98, true }, // EncryptMethod
	{ 108, true }, // HeartBtInt
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 141, false }, // ResetSeqNumFlag
	{ 789, false }, // NextExpectedMsgSeqNum
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

static struct _ofixGroupSpec	DerivativeSecurityListGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 827, false }, // ExpirationCycle
	{ 668, false }, // DeliveryForm
	{ 869, false }, // PctAtRisk
	{ 870, false }, // NoInstrAttrib
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

static struct _ofixGroupSpec	DerivativeSecurityListGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DerivativeSecurityListGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
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
    &DerivativeSecurityListGroup887,
    &DerivativeSecurityListGroup146,
    &DerivativeSecurityListGroup454,
    &DerivativeSecurityListGroup864,
    &DerivativeSecurityListGroup870,
    &DerivativeSecurityListGroup555,
    &DerivativeSecurityListGroup604,
    0
};

static struct _ofixMsgSpec	DerivativeSecurityList = {
    &fix44Spec, // version
    16705, // tid
    "AA", // type
    "DerivativeSecurityList", // name
    {0,0,0,0,0,0,0,0,1,2,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,8,9,0,80,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,43,44,45,46,47,53,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,60,63,59,33,38,31,32,40,0,0,54,56,68,0,28,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,62,64,65,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,51,52,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,67,69,0,0,71,72,73,74,75,76,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 393, false }, // TotNoRelatedSym
	{ 893, false }, // LastFragment
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
	{ 467, false }, // IndividualAllocID
	{ 948, false }, // NoNested3PartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup948 = {
    948, // NoNested3PartyIDs
    {
	{ 949, false }, // Nested3PartyID
	{ 950, false }, // Nested3PartyIDSource
	{ 951, false }, // Nested3PartyRole
	{ 952, false }, // NoNested3PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup952 = {
    952, // NoNested3PartySubIDs
    {
	{ 953, false }, // Nested3PartySubID
	{ 954, false }, // Nested3PartySubIDType
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

static struct _ofixGroupSpec	NewOrderMultilegGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 683, false }, // NoLegStipulations
	{ 670, false }, // NoLegAllocs
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
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

static struct _ofixGroupSpec	NewOrderMultilegGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup670 = {
    670, // NoLegAllocs
    {
	{ 671, false }, // LegAllocAccount
	{ 672, false }, // LegIndividualAllocID
	{ 756, false }, // NoNested2PartyIDs
	{ 673, false }, // LegAllocQty
	{ 674, false }, // LegAllocAcctIDSource
	{ 675, false }, // LegSettlCurrency
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderMultilegGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	NewOrderMultilegGroups[] = {
    &NewOrderMultilegGroup627,
    &NewOrderMultilegGroup453,
    &NewOrderMultilegGroup802,
    &NewOrderMultilegGroup78,
    &NewOrderMultilegGroup948,
    &NewOrderMultilegGroup952,
    &NewOrderMultilegGroup386,
    &NewOrderMultilegGroup454,
    &NewOrderMultilegGroup864,
    &NewOrderMultilegGroup711,
    &NewOrderMultilegGroup457,
    &NewOrderMultilegGroup887,
    &NewOrderMultilegGroup555,
    &NewOrderMultilegGroup604,
    &NewOrderMultilegGroup683,
    &NewOrderMultilegGroup670,
    &NewOrderMultilegGroup756,
    &NewOrderMultilegGroup806,
    &NewOrderMultilegGroup539,
    &NewOrderMultilegGroup804,
    0
};

static struct _ofixMsgSpec	NewOrderMultileg = {
    &fix44Spec, // version
    16706, // tid
    "AB", // type
    "NewOrderMultileg", // name
    {0,34,0,0,0,0,0,0,1,2,160,28,121,122,0,111,0,0,47,0,0,46,57,114,0,0,0,0,0,0,0,0,0,0,10,3,0,0,102,0,107,0,0,19,109,0,0,0,56,4,11,0,21,0,53,54,5,13,131,116,100,0,0,42,43,55,0,0,0,0,40,0,0,0,0,33,0,134,41,0,0,52,0,0,0,0,0,0,0,159,8,9,0,158,0,0,0,20,0,110,50,0,0,0,0,0,83,86,0,0,48,49,0,0,99,6,15,115,0,0,129,128,22,0,0,0,119,0,7,17,0,0,0,0,0,0,0,0,0,0,97,0,12,14,16,18,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,117,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,77,135,0,0,79,82,0,0,136,137,23,24,0,0,0,0,0,0,0,0,0,81,65,66,68,69,70,32,0,80,0,0,0,0,0,0,0,67,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,84,85,87,88,0,0,132,133,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,112,113,0,0,0,0,0,0,0,0,51,0,143,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,108,0,0,0,120,0,0,0,0,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,58,0,0,0,0,0,59,60,0,0,0,0,0,0,105,106,73,74,75,0,0,0,0,0,0,123,153,154,0,0,0,0,0,0,0,0,0,0,0,0,156,0,0,124,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,0,0,104,0,0,0,0,0,0,0,0,0,29,0,125,126,0,0,0,0,0,0,0,0,0,0,0,64,0,72,44,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,157,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,127,30,0,0,0,0,0,37,38,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,138,139,140,141,0,142,145,146,147,148,0,149,150,151,152,0,0,0,0,101,0,0,0,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,94,95,91,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 70, false }, // AllocID
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 21, false }, // HandlInst
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 711, false }, // NoUnderlyings
	{ 140, false }, // PrevClosePx
	{ 555, true }, // NoLegs
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 854, false }, // QtyType
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
	{ 775, false }, // BookingType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 211, false }, // PegOffsetValue
	{ 835, false }, // PegMoveType
	{ 836, false }, // PegOffsetType
	{ 837, false }, // PegLimitType
	{ 838, false }, // PegRoundDirection
	{ 840, false }, // PegScope
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffsetValue
	{ 841, false }, // DiscretionMoveType
	{ 842, false }, // DiscretionOffsetType
	{ 843, false }, // DiscretionLimitType
	{ 844, false }, // DiscretionRoundDirection
	{ 846, false }, // DiscretionScope
	{ 847, false }, // TargetStrategy
	{ 848, false }, // TargetStrategyParameters
	{ 849, false }, // ParticipationRate
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 563, false }, // MultiLegRptTypeReq
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
	{ 467, false }, // IndividualAllocID
	{ 948, false }, // NoNested3PartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup948 = {
    948, // NoNested3PartyIDs
    {
	{ 949, false }, // Nested3PartyID
	{ 950, false }, // Nested3PartyIDSource
	{ 951, false }, // Nested3PartyRole
	{ 952, false }, // NoNested3PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup952 = {
    952, // NoNested3PartySubIDs
    {
	{ 953, false }, // Nested3PartySubID
	{ 954, false }, // Nested3PartySubIDType
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

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 683, false }, // NoLegStipulations
	{ 670, false }, // NoLegAllocs
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
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

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup670 = {
    670, // NoLegAllocs
    {
	{ 671, false }, // LegAllocAccount
	{ 672, false }, // LegIndividualAllocID
	{ 756, false }, // NoNested2PartyIDs
	{ 673, false }, // LegAllocQty
	{ 674, false }, // LegAllocAcctIDSource
	{ 675, false }, // LegSettlCurrency
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MultilegOrderCancelReplaceRequestGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	MultilegOrderCancelReplaceRequestGroups[] = {
    &MultilegOrderCancelReplaceRequestGroup627,
    &MultilegOrderCancelReplaceRequestGroup453,
    &MultilegOrderCancelReplaceRequestGroup802,
    &MultilegOrderCancelReplaceRequestGroup78,
    &MultilegOrderCancelReplaceRequestGroup948,
    &MultilegOrderCancelReplaceRequestGroup952,
    &MultilegOrderCancelReplaceRequestGroup386,
    &MultilegOrderCancelReplaceRequestGroup454,
    &MultilegOrderCancelReplaceRequestGroup864,
    &MultilegOrderCancelReplaceRequestGroup711,
    &MultilegOrderCancelReplaceRequestGroup457,
    &MultilegOrderCancelReplaceRequestGroup887,
    &MultilegOrderCancelReplaceRequestGroup555,
    &MultilegOrderCancelReplaceRequestGroup604,
    &MultilegOrderCancelReplaceRequestGroup683,
    &MultilegOrderCancelReplaceRequestGroup670,
    &MultilegOrderCancelReplaceRequestGroup756,
    &MultilegOrderCancelReplaceRequestGroup806,
    &MultilegOrderCancelReplaceRequestGroup539,
    &MultilegOrderCancelReplaceRequestGroup804,
    0
};

static struct _ofixMsgSpec	MultilegOrderCancelReplaceRequest = {
    &fix44Spec, // version
    16707, // tid
    "AC", // type
    "MultilegOrderCancelReplaceRequest", // name
    {0,37,0,0,0,0,0,0,1,2,163,30,124,125,0,114,0,0,50,0,0,49,60,117,0,0,0,0,0,0,0,0,0,0,10,3,0,28,105,0,110,29,0,19,112,0,0,0,59,4,11,0,21,0,56,57,5,13,134,119,103,0,0,45,46,58,0,0,0,0,43,0,0,0,0,36,0,137,44,0,0,55,0,0,0,0,0,0,0,162,8,9,0,161,0,0,0,20,0,113,53,0,0,0,0,0,86,89,0,0,51,52,0,0,102,6,15,118,0,0,132,131,22,0,0,0,122,0,7,17,0,0,0,0,0,0,0,0,0,0,100,0,12,14,16,18,0,0,0,0,0,0,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,80,138,0,0,82,85,0,0,139,140,23,24,0,0,0,0,0,0,0,0,0,84,68,69,71,72,73,35,0,83,0,0,0,0,0,0,0,70,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,87,88,90,91,0,0,135,136,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,115,116,0,0,0,0,0,0,0,0,54,0,146,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,111,0,0,0,123,0,0,0,0,121,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,61,0,0,0,0,0,62,63,0,0,0,0,0,0,108,109,76,77,78,0,0,0,0,0,0,126,156,157,0,0,0,0,0,0,0,0,0,0,0,0,159,0,0,127,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,158,0,0,107,0,0,0,0,0,0,0,0,0,31,0,128,129,0,0,0,0,0,0,0,0,0,0,0,67,0,75,47,0,0,0,0,0,0,0,0,0,0,101,0,0,0,0,0,0,0,160,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,130,32,0,0,33,0,0,40,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,133,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,141,142,143,144,0,145,148,149,150,151,0,152,153,154,155,0,0,0,0,104,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,97,98,94,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 37, false }, // OrderID
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 586, false }, // OrigOrdModTime
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 70, false }, // AllocID
	{ 78, false }, // NoAllocs
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 544, false }, // CashMargin
	{ 635, false }, // ClearingFeeIndicator
	{ 21, false }, // HandlInst
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 711, false }, // NoUnderlyings
	{ 140, false }, // PrevClosePx
	{ 555, true }, // NoLegs
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 854, false }, // QtyType
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
	{ 775, false }, // BookingType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 77, false }, // PositionEffect
	{ 203, false }, // CoveredOrUncovered
	{ 210, false }, // MaxShow
	{ 211, false }, // PegOffsetValue
	{ 835, false }, // PegMoveType
	{ 836, false }, // PegOffsetType
	{ 837, false }, // PegLimitType
	{ 838, false }, // PegRoundDirection
	{ 840, false }, // PegScope
	{ 388, false }, // DiscretionInst
	{ 389, false }, // DiscretionOffsetValue
	{ 841, false }, // DiscretionMoveType
	{ 842, false }, // DiscretionOffsetType
	{ 843, false }, // DiscretionLimitType
	{ 844, false }, // DiscretionRoundDirection
	{ 846, false }, // DiscretionScope
	{ 847, false }, // TargetStrategy
	{ 848, false }, // TargetStrategyParameters
	{ 849, false }, // ParticipationRate
	{ 480, false }, // CancellationRights
	{ 481, false }, // MoneyLaunderingStatus
	{ 513, false }, // RegistID
	{ 494, false }, // Designation
	{ 563, false }, // MultiLegRptTypeReq
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
    &TradeCaptureReportRequestGroup802,
    &TradeCaptureReportRequestGroup454,
    &TradeCaptureReportRequestGroup864,
    &TradeCaptureReportRequestGroup870,
    &TradeCaptureReportRequestGroup711,
    &TradeCaptureReportRequestGroup457,
    &TradeCaptureReportRequestGroup887,
    &TradeCaptureReportRequestGroup555,
    &TradeCaptureReportRequestGroup604,
    &TradeCaptureReportRequestGroup580,
    0
};

static struct _ofixMsgSpec	TradeCaptureReportRequest = {
    &fix44Spec, // version
    16708, // tid
    "AD", // type
    "TradeCaptureReportRequest", // name
    {0,0,0,0,0,0,0,0,1,2,117,36,0,0,0,0,0,33,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,10,3,0,35,0,0,0,0,0,19,0,0,0,0,47,4,11,0,21,0,106,45,5,13,112,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,8,9,0,115,0,0,0,20,0,0,0,0,0,0,0,0,74,77,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,68,0,0,0,70,73,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,72,56,57,59,60,61,0,0,71,0,0,0,0,0,0,0,58,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,25,75,76,78,79,0,0,113,114,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,0,0,0,0,0,0,0,44,49,0,0,0,0,0,50,51,0,0,0,0,0,0,0,0,64,65,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,63,0,0,0,0,0,0,0,0,0,0,0,100,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,31,0,37,0,0,0,0,108,109,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,102,0,0,0,0,0,0,0,0,0,110,111,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,42,0,0,0,0,0,0,0,38,39,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,84,0,0,0,0,88,89,0,0,85,86,82,83,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,91,92,95,96,93,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 568, true }, // TradeRequestID
	{ 569, true }, // TradeRequestType
	{ 263, false }, // SubscriptionRequestType
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 17, false }, // ExecID
	{ 150, false }, // ExecType
	{ 37, false }, // OrderID
	{ 11, false }, // ClOrdID
	{ 573, false }, // MatchStatus
	{ 828, false }, // TrdType
	{ 829, false }, // TrdSubType
	{ 830, false }, // TransferReason
	{ 855, false }, // SecondaryTrdType
	{ 820, false }, // TradeLinkID
	{ 880, false }, // TrdMatchID
	{ 453, false }, // NoPartyIDs
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 668, false }, // DeliveryForm
	{ 869, false }, // PctAtRisk
	{ 870, false }, // NoInstrAttrib
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
	{ 580, false }, // NoDates
	{ 715, false }, // ClearingBusinessDate
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 943, false }, // TimeBracket
	{ 54, false }, // Side
	{ 442, false }, // MultiLegReportingType
	{ 578, false }, // TradeInputSource
	{ 579, false }, // TradeInputDevice
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
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

static struct _ofixGroupSpec	TradeCaptureReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup753 = {
    753, // NoPosAmt
    {
	{ 707, true }, // PosAmtType
	{ 708, true }, // PosAmt
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 683, false }, // NoLegStipulations
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
	{ 637, false }, // LegLastPx
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
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
	{ 526, false }, // SecondaryClOrdID
	{ 66, false }, // ListID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 81, false }, // ProcessCode
	{ 575, false }, // OddLot
	{ 576, false }, // NoClearingInstructions
	{ 635, false }, // ClearingFeeIndicator
	{ 578, false }, // TradeInputSource
	{ 579, false }, // TradeInputDevice
	{ 821, false }, // OrderInputDevice
	{ 15, false }, // Currency
	{ 376, false }, // ComplianceID
	{ 377, false }, // SolicitedFlag
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 40, false }, // OrdType
	{ 18, false }, // ExecInst
	{ 483, false }, // TransBkdTime
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 943, false }, // TimeBracket
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 381, false }, // GrossTradeAmt
	{ 157, false }, // NumDaysInterest
	{ 230, false }, // ExDate
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 738, false }, // InterestAtMaturity
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
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
	{ 752, false }, // SideMultiLegReportingType
	{ 518, false }, // NoContAmts
	{ 232, false }, // NoStipulations
	{ 136, false }, // NoMiscFees
	{ 825, false }, // ExchangeRule
	{ 826, false }, // TradeAllocIndicator
	{ 591, false }, // PreallocMethod
	{ 70, false }, // AllocID
	{ 78, false }, // NoAllocs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	TradeCaptureReportGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
	{ 467, false }, // IndividualAllocID
	{ 756, false }, // NoNested2PartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	TradeCaptureReportGroups[] = {
    &TradeCaptureReportGroup627,
    &TradeCaptureReportGroup454,
    &TradeCaptureReportGroup864,
    &TradeCaptureReportGroup711,
    &TradeCaptureReportGroup457,
    &TradeCaptureReportGroup887,
    &TradeCaptureReportGroup753,
    &TradeCaptureReportGroup555,
    &TradeCaptureReportGroup604,
    &TradeCaptureReportGroup683,
    &TradeCaptureReportGroup539,
    &TradeCaptureReportGroup804,
    &TradeCaptureReportGroup768,
    &TradeCaptureReportGroup552,
    &TradeCaptureReportGroup453,
    &TradeCaptureReportGroup802,
    &TradeCaptureReportGroup576,
    &TradeCaptureReportGroup518,
    &TradeCaptureReportGroup232,
    &TradeCaptureReportGroup136,
    &TradeCaptureReportGroup78,
    &TradeCaptureReportGroup756,
    &TradeCaptureReportGroup806,
    0
};

static struct _ofixMsgSpec	TradeCaptureReport = {
    &fix44Spec, // version
    16709, // tid
    "AE", // type
    "TradeCaptureReport", // name
    {0,0,0,0,0,0,126,0,1,2,152,0,0,0,0,0,0,46,0,0,0,0,55,0,0,0,0,0,0,0,123,119,118,0,10,3,0,0,103,47,0,0,0,19,0,0,0,0,54,4,11,0,21,0,0,52,5,13,0,0,140,0,0,142,143,53,0,0,0,0,0,0,0,0,0,124,0,0,0,0,0,0,0,0,0,0,0,0,0,151,8,9,0,150,0,0,0,20,0,0,0,0,0,0,0,0,81,84,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,36,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,121,122,0,0,0,0,61,0,75,0,0,0,77,80,0,0,0,0,23,24,0,0,0,0,127,0,128,129,130,79,63,64,66,67,68,0,0,78,0,0,0,109,110,0,0,65,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,82,83,85,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,137,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,57,58,0,0,0,0,0,0,106,107,71,72,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,70,0,0,0,0,0,0,0,0,146,0,0,139,0,0,0,0,0,0,0,0,0,0,0,0,31,0,50,28,41,144,145,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,131,132,0,0,0,88,0,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,112,113,114,133,0,111,0,0,0,0,0,0,0,0,0,115,0,0,0,125,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,136,0,0,0,0,0,0,0,134,60,0,0,0,0,0,141,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,135,44,0,116,117,138,0,0,0,32,33,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,148,149,108,34,30,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,0,92,93,89,90,0,0,0,45,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,38,94,95,96,99,100,97,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 571, true }, // TradeReportID
	{ 487, false }, // TradeReportTransType
	{ 856, false }, // TradeReportType
	{ 568, false }, // TradeRequestID
	{ 828, false }, // TrdType
	{ 829, false }, // TrdSubType
	{ 855, false }, // SecondaryTrdType
	{ 830, false }, // TransferReason
	{ 150, false }, // ExecType
	{ 748, false }, // TotNumTradeReports
	{ 912, false }, // LastRptRequested
	{ 325, false }, // UnsolicitedIndicator
	{ 263, false }, // SubscriptionRequestType
	{ 572, false }, // TradeReportRefID
	{ 881, false }, // SecondaryTradeReportRefID
	{ 818, false }, // SecondaryTradeReportID
	{ 820, false }, // TradeLinkID
	{ 880, false }, // TrdMatchID
	{ 17, false }, // ExecID
	{ 39, false }, // OrdStatus
	{ 527, false }, // SecondaryExecID
	{ 378, false }, // ExecRestatementReason
	{ 570, true }, // PreviouslyReported
	{ 423, false }, // PriceType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 854, false }, // QtyType
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 711, false }, // NoUnderlyings
	{ 822, false }, // UnderlyingTradingSessionID
	{ 823, false }, // UnderlyingTradingSessionSubID
	{ 32, true }, // LastQty
	{ 31, true }, // LastPx
	{ 669, false }, // LastParPx
	{ 194, false }, // LastSpotRate
	{ 195, false }, // LastForwardPoints
	{ 30, false }, // LastMkt
	{ 75, true }, // TradeDate
	{ 715, false }, // ClearingBusinessDate
	{ 6, false }, // AvgPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 819, false }, // AvgPxIndicator
	{ 753, true }, // NoPosAmt
	{ 442, false }, // MultiLegReportingType
	{ 824, false }, // TradeLegRefID
	{ 555, false }, // NoLegs
	{ 60, true }, // TransactTime
	{ 768, true }, // NoTrdRegTimestamps
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 573, false }, // MatchStatus
	{ 574, false }, // MatchType
	{ 552, true }, // NoSides
	{ 797, false }, // CopyMsgIndicator
	{ 852, false }, // PublishTrdIndicator
	{ 853, false }, // ShortSaleReason
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderMassStatusRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	OrderMassStatusRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
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

static struct _ofixGroupSpec	OrderMassStatusRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassStatusRequestGroups[] = {
    &OrderMassStatusRequestGroup627,
    &OrderMassStatusRequestGroup453,
    &OrderMassStatusRequestGroup802,
    &OrderMassStatusRequestGroup454,
    &OrderMassStatusRequestGroup864,
    &OrderMassStatusRequestGroup457,
    &OrderMassStatusRequestGroup887,
    0
};

static struct _ofixMsgSpec	OrderMassStatusRequest = {
    &fix44Spec, // version
    16710, // tid
    "AF", // type
    "OrderMassStatusRequest", // name
    {0,31,0,0,0,0,0,0,1,2,126,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,37,4,11,0,21,0,123,35,5,13,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,125,8,9,0,124,0,0,0,20,0,0,0,0,0,0,0,0,64,67,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,58,0,0,0,60,63,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,62,46,47,49,50,51,0,0,61,0,0,0,0,0,0,0,48,57,88,89,90,91,92,93,99,0,0,0,0,0,0,0,52,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,106,109,105,79,84,77,78,86,0,0,100,102,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,25,65,66,68,69,0,0,0,0,0,0,0,0,0,0,107,108,110,111,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,39,0,0,81,0,0,40,41,82,83,0,0,0,0,0,0,54,55,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,87,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,0,0,0,0,0,96,97,98,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,75,76,72,73,112,113,115,0,0,117,118,119,120,121,122,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,101,0,0,0,0,0,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 584, true }, // MassStatusReqID
	{ 585, true }, // MassStatusReqType
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 140, false }, // PrevClosePx
	{ 303, false }, // QuoteRequestType
	{ 537, false }, // QuoteType
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 229, false }, // TradeOriginationDate
	{ 54, false }, // Side
	{ 854, false }, // QtyType
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 193, false }, // SettlDate2
	{ 192, false }, // OrderQty2
	{ 15, false }, // Currency
	{ 232, false }, // NoStipulations
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 555, false }, // NoLegs
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

static struct _ofixGroupSpec	QuoteRequestRejectGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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

static struct _ofixGroupSpec	QuoteRequestRejectGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
	{ 683, false }, // NoLegStipulations
	{ 539, false }, // NoNestedPartyIDs
	{ 676, false }, // LegBenchmarkCurveCurrency
	{ 677, false }, // LegBenchmarkCurveName
	{ 678, false }, // LegBenchmarkCurvePoint
	{ 679, false }, // LegBenchmarkPrice
	{ 680, false }, // LegBenchmarkPriceType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup735 = {
    735, // NoQuoteQualifiers
    {
	{ 695, false }, // QuoteQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestRejectGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteRequestRejectGroups[] = {
    &QuoteRequestRejectGroup627,
    &QuoteRequestRejectGroup146,
    &QuoteRequestRejectGroup454,
    &QuoteRequestRejectGroup864,
    &QuoteRequestRejectGroup711,
    &QuoteRequestRejectGroup457,
    &QuoteRequestRejectGroup887,
    &QuoteRequestRejectGroup232,
    &QuoteRequestRejectGroup555,
    &QuoteRequestRejectGroup604,
    &QuoteRequestRejectGroup683,
    &QuoteRequestRejectGroup539,
    &QuoteRequestRejectGroup804,
    &QuoteRequestRejectGroup735,
    &QuoteRequestRejectGroup453,
    &QuoteRequestRejectGroup802,
    0
};

static struct _ofixMsgSpec	QuoteRequestReject = {
    &fix44Spec, // version
    16711, // tid
    "AG", // type
    "QuoteRequestReject", // name
    {0,0,0,0,0,0,0,0,1,2,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,34,0,0,19,46,0,0,0,0,4,11,0,21,0,0,0,5,13,55,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,8,9,0,58,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,35,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,37,0,38,39,40,0,0,0,0,0,0,0,0,0,0,0,0,48,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,51,52,53,43,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, true }, // QuoteReqID
	{ 644, false }, // RFQReqID
	{ 658, true }, // QuoteRequestRejectReason
	{ 146, true }, // NoRelatedSym
	{ 735, false }, // NoQuoteQualifiers
	{ 692, false }, // QuotePriceType
	{ 40, false }, // OrdType
	{ 126, false }, // ExpireTime
	{ 60, false }, // TransactTime
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 423, false }, // PriceType
	{ 44, false }, // Price
	{ 640, false }, // Price2
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 453, false }, // NoPartyIDs
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
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

static struct _ofixGroupSpec	RFQRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RFQRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	RFQRequestGroups[] = {
    &RFQRequestGroup627,
    &RFQRequestGroup146,
    &RFQRequestGroup454,
    &RFQRequestGroup864,
    &RFQRequestGroup711,
    &RFQRequestGroup457,
    &RFQRequestGroup887,
    &RFQRequestGroup555,
    &RFQRequestGroup604,
    0
};

static struct _ofixMsgSpec	RFQRequest = {
    &fix44Spec, // version
    16712, // tid
    "AH", // type
    "RFQRequest", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	QuoteStatusReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
	{ 683, false }, // NoLegStipulations
	{ 539, false }, // NoNestedPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusReportGroup735 = {
    735, // NoQuoteQualifiers
    {
	{ 695, false }, // QuoteQualifier
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteStatusReportGroups[] = {
    &QuoteStatusReportGroup627,
    &QuoteStatusReportGroup453,
    &QuoteStatusReportGroup802,
    &QuoteStatusReportGroup454,
    &QuoteStatusReportGroup864,
    &QuoteStatusReportGroup711,
    &QuoteStatusReportGroup457,
    &QuoteStatusReportGroup887,
    &QuoteStatusReportGroup232,
    &QuoteStatusReportGroup555,
    &QuoteStatusReportGroup604,
    &QuoteStatusReportGroup683,
    &QuoteStatusReportGroup539,
    &QuoteStatusReportGroup804,
    &QuoteStatusReportGroup735,
    0
};

static struct _ofixMsgSpec	QuoteStatusReport = {
    &fix44Spec, // version
    16713, // tid
    "AI", // type
    "QuoteStatusReport", // name
    {0,100,0,0,0,0,0,0,1,2,156,0,147,146,0,98,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,89,0,140,0,0,19,106,0,0,0,38,4,11,0,21,0,88,36,5,13,151,0,139,0,130,94,95,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,8,9,0,154,0,0,0,20,0,0,149,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,30,0,0,0,0,22,0,0,0,105,0,7,17,0,29,122,123,127,129,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,90,0,0,0,145,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,131,133,132,134,97,96,0,0,0,0,0,0,45,0,59,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,108,0,109,110,111,63,47,48,50,51,52,0,0,62,99,0,0,116,117,0,0,49,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,150,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,152,153,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,40,0,0,0,0,0,41,42,0,0,0,0,0,0,92,93,55,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,46,0,54,0,0,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,148,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,27,0,0,0,135,136,137,138,0,0,0,0,0,0,0,141,142,0,124,125,126,128,28,0,0,0,0,0,0,143,144,0,0,101,0,112,113,0,0,0,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,31,0,0,119,120,121,114,0,118,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,115,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,76,77,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,79,80,83,84,81,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 649, false }, // QuoteStatusReqID
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 693, false }, // QuoteRespID
	{ 537, false }, // QuoteType
	{ 453, false }, // NoPartyIDs
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 54, false }, // Side
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 193, false }, // SettlDate2
	{ 192, false }, // OrderQty2
	{ 15, false }, // Currency
	{ 232, false }, // NoStipulations
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 555, false }, // NoLegs
	{ 735, false }, // NoQuoteQualifiers
	{ 126, false }, // ExpireTime
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
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
	{ 40, false }, // OrdType
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 656, false }, // SettlCurrBidFxRate
	{ 657, false }, // SettlCurrOfferFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 13, false }, // CommType
	{ 12, false }, // Commission
	{ 582, false }, // CustOrderCapacity
	{ 100, false }, // ExDestination
	{ 297, false }, // QuoteStatus
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// QuoteResponse [AJ]

static struct _ofixGroupSpec	QuoteResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup735 = {
    735, // NoQuoteQualifiers
    {
	{ 695, false }, // QuoteQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
	{ 683, false }, // NoLegStipulations
	{ 539, false }, // NoNestedPartyIDs
	{ 686, false }, // LegPriceType
	{ 681, false }, // LegBidPx
	{ 684, false }, // LegOfferPx
	{ 676, false }, // LegBenchmarkCurveCurrency
	{ 677, false }, // LegBenchmarkCurveName
	{ 678, false }, // LegBenchmarkCurvePoint
	{ 679, false }, // LegBenchmarkPrice
	{ 680, false }, // LegBenchmarkPriceType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteResponseGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteResponseGroups[] = {
    &QuoteResponseGroup627,
    &QuoteResponseGroup735,
    &QuoteResponseGroup453,
    &QuoteResponseGroup802,
    &QuoteResponseGroup454,
    &QuoteResponseGroup864,
    &QuoteResponseGroup711,
    &QuoteResponseGroup457,
    &QuoteResponseGroup887,
    &QuoteResponseGroup232,
    &QuoteResponseGroup555,
    &QuoteResponseGroup604,
    &QuoteResponseGroup683,
    &QuoteResponseGroup539,
    &QuoteResponseGroup804,
    0
};

static struct _ofixMsgSpec	QuoteResponse = {
    &fix44Spec, // version
    16714, // tid
    "AJ", // type
    "QuoteResponse", // name
    {0,103,0,0,0,0,0,0,1,2,156,31,131,132,0,101,0,0,0,0,0,0,42,33,0,0,0,0,0,0,0,0,0,0,10,3,0,0,92,0,125,0,0,19,138,0,0,0,41,4,11,0,21,0,91,39,5,13,135,0,124,0,115,97,98,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,8,9,0,154,0,0,0,20,0,0,134,0,0,0,0,0,68,71,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,0,107,108,112,114,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,93,0,0,0,130,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,118,117,119,100,99,0,0,0,0,0,0,48,0,62,0,0,0,64,67,0,0,0,0,23,24,0,0,0,0,140,0,141,142,143,66,50,51,53,54,55,0,0,65,102,0,0,148,149,0,0,52,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,25,69,70,72,73,0,0,136,137,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,43,0,0,0,0,0,44,45,0,0,0,0,0,0,95,96,58,59,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,34,0,0,0,49,0,57,0,0,0,0,0,0,0,0,0,0,0,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,133,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,27,0,0,0,120,121,122,123,0,0,0,0,0,0,0,126,127,0,109,110,111,113,0,0,0,0,0,0,0,128,129,0,0,104,0,144,145,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,28,30,0,151,152,153,146,0,150,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,147,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,79,80,76,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,82,83,86,87,84,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    QuoteResponseGroups, // groups
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
	{ 627, false }, // NoHops
	{ 693, true }, // QuoteRespID
	{ 117, false }, // QuoteID
	{ 694, true }, // QuoteRespType
	{ 11, false }, // ClOrdID
	{ 528, false }, // OrderCapacity
	{ 23, false }, // IOIid
	{ 537, false }, // QuoteType
	{ 735, false }, // NoQuoteQualifiers
	{ 453, false }, // NoPartyIDs
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
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, false }, // NoUnderlyings
	{ 54, false }, // Side
	{ 38, false }, // OrderQty
	{ 152, false }, // CashOrderQty
	{ 516, false }, // OrderPercent
	{ 468, false }, // RoundingDirection
	{ 469, false }, // RoundingModulus
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 193, false }, // SettlDate2
	{ 192, false }, // OrderQty2
	{ 15, false }, // Currency
	{ 232, false }, // NoStipulations
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 555, false }, // NoLegs
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
	{ 40, false }, // OrdType
	{ 642, false }, // BidForwardPoints2
	{ 643, false }, // OfferForwardPoints2
	{ 656, false }, // SettlCurrBidFxRate
	{ 657, false }, // SettlCurrOfferFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 582, false }, // CustOrderCapacity
	{ 100, false }, // ExDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// Confirmation [AK]

static struct _ofixGroupSpec	ConfirmationGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup73 = {
    73, // NoOrders
    {
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 66, false }, // ListID
	{ 756, false }, // NoNested2PartyIDs
	{ 38, false }, // OrderQty
	{ 799, false }, // OrderAvgPx
	{ 800, false }, // OrderBookingQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup862 = {
    862, // NoCapacities
    {
	{ 528, true }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 863, true }, // OrderCapacityQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static ofixGroupSpec	ConfirmationGroups[] = {
    &ConfirmationGroup627,
    &ConfirmationGroup453,
    &ConfirmationGroup802,
    &ConfirmationGroup73,
    &ConfirmationGroup756,
    &ConfirmationGroup806,
    &ConfirmationGroup768,
    &ConfirmationGroup454,
    &ConfirmationGroup864,
    &ConfirmationGroup870,
    &ConfirmationGroup711,
    &ConfirmationGroup457,
    &ConfirmationGroup887,
    &ConfirmationGroup555,
    &ConfirmationGroup604,
    &ConfirmationGroup862,
    &ConfirmationGroup85,
    &ConfirmationGroup781,
    &ConfirmationGroup801,
    &ConfirmationGroup232,
    &ConfirmationGroup136,
    0
};

static struct _ofixMsgSpec	Confirmation = {
    &fix44Spec, // version
    16715, // tid
    "AK", // type
    "Confirmation", // name
    {0,0,0,0,0,0,115,0,1,2,165,0,156,157,0,109,0,0,0,0,0,0,47,0,0,0,0,0,0,0,110,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,46,4,11,0,21,0,108,44,5,13,128,0,41,0,0,149,150,45,0,0,0,0,38,0,0,37,116,42,0,0,0,112,106,131,0,0,0,155,0,0,0,164,8,9,0,163,0,0,0,20,0,0,0,0,0,0,0,0,73,76,0,0,0,0,0,0,0,6,15,0,143,145,146,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,162,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,147,148,133,135,136,0,0,0,0,0,0,0,51,0,152,153,154,151,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,67,0,0,0,69,72,0,0,0,0,23,24,0,0,0,0,119,0,120,121,122,71,55,56,58,59,60,0,134,70,161,0,0,100,101,142,141,57,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,74,75,77,78,0,0,129,130,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,132,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,48,0,0,0,0,0,49,50,0,0,0,0,0,40,0,0,63,64,65,0,0,0,0,0,0,158,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,159,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,62,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,113,123,124,28,35,31,80,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,103,104,105,125,0,102,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,137,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,52,0,0,0,0,0,43,0,0,0,29,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,93,0,0,0,0,39,0,0,0,33,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,160,30,118,127,111,0,83,0,0,0,0,87,88,0,0,84,85,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,144,0,0,0,0,0,0,0,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,90,91,94,95,92,96,138,139,140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ConfirmationGroups, // groups
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
	{ 627, false }, // NoHops
	{ 664, true }, // ConfirmID
	{ 772, false }, // ConfirmRefID
	{ 859, false }, // ConfirmReqID
	{ 666, true }, // ConfirmTransType
	{ 773, true }, // ConfirmType
	{ 797, false }, // CopyMsgIndicator
	{ 650, false }, // LegalConfirm
	{ 665, true }, // ConfirmStatus
	{ 453, false }, // NoPartyIDs
	{ 73, false }, // NoOrders
	{ 70, false }, // AllocID
	{ 793, false }, // SecondaryAllocID
	{ 467, false }, // IndividualAllocID
	{ 60, true }, // TransactTime
	{ 75, true }, // TradeDate
	{ 768, true }, // NoTrdRegTimestamps
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 668, false }, // DeliveryForm
	{ 869, false }, // PctAtRisk
	{ 870, false }, // NoInstrAttrib
	{ 913, false }, // AgreementDesc
	{ 914, false }, // AgreementID
	{ 915, false }, // AgreementDate
	{ 918, false }, // AgreementCurrency
	{ 788, false }, // TerminationType
	{ 916, false }, // StartDate
	{ 917, false }, // EndDate
	{ 919, false }, // DeliveryType
	{ 898, false }, // MarginRatio
	{ 711, true }, // NoUnderlyings
	{ 555, true }, // NoLegs
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 80, true }, // AllocQty
	{ 854, false }, // QtyType
	{ 54, true }, // Side
	{ 15, false }, // Currency
	{ 30, false }, // LastMkt
	{ 862, true }, // NoCapacities
	{ 79, true }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 798, false }, // AllocAccountType
	{ 6, true }, // AvgPx
	{ 74, false }, // AvgPxPrecision
	{ 423, false }, // PriceType
	{ 860, false }, // AvgParPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 861, false }, // ReportedPx
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 81, false }, // ProcessCode
	{ 381, true }, // GrossTradeAmt
	{ 157, false }, // NumDaysInterest
	{ 230, false }, // ExDate
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 738, false }, // InterestAtMaturity
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, true }, // NetMoney
	{ 890, false }, // MaturityNetMoney
	{ 119, false }, // SettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 12, false }, // Commission
	{ 13, false }, // CommType
	{ 479, false }, // CommCurrency
	{ 497, false }, // FundRenewWaiv
	{ 858, false }, // SharedCommission
	{ 232, false }, // NoStipulations
	{ 136, false }, // NoMiscFees
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// PositionMaintenanceRequest [AL]

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup702 = {
    702, // NoPositions
    {
	{ 703, false }, // PosType
	{ 704, false }, // LongQty
	{ 705, false }, // ShortQty
	{ 706, false }, // PosQtyStatus
	{ 539, false }, // NoNestedPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceRequestGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	PositionMaintenanceRequestGroups[] = {
    &PositionMaintenanceRequestGroup627,
    &PositionMaintenanceRequestGroup453,
    &PositionMaintenanceRequestGroup802,
    &PositionMaintenanceRequestGroup454,
    &PositionMaintenanceRequestGroup864,
    &PositionMaintenanceRequestGroup555,
    &PositionMaintenanceRequestGroup604,
    &PositionMaintenanceRequestGroup711,
    &PositionMaintenanceRequestGroup457,
    &PositionMaintenanceRequestGroup887,
    &PositionMaintenanceRequestGroup386,
    &PositionMaintenanceRequestGroup702,
    &PositionMaintenanceRequestGroup539,
    &PositionMaintenanceRequestGroup804,
    0
};

static struct _ofixMsgSpec	PositionMaintenanceRequest = {
    &fix44Spec, // version
    16716, // tid
    "AL", // type
    "PositionMaintenanceRequest", // name
    {0,37,0,0,0,0,0,0,1,2,97,0,0,0,0,82,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,42,4,11,0,21,0,0,40,5,13,92,0,86,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,8,9,0,95,0,0,0,20,0,0,0,0,0,0,0,0,69,72,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,63,0,0,0,65,68,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,67,51,52,54,55,56,0,0,66,0,0,0,0,0,0,0,53,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,70,71,73,74,0,0,93,94,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,44,0,0,0,0,0,45,46,0,0,0,0,0,0,0,0,59,60,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,58,0,0,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,29,28,84,30,31,32,33,34,35,88,89,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,0,0,0,0,80,81,77,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    PositionMaintenanceRequestGroups, // groups
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
	{ 627, false }, // NoHops
	{ 710, true }, // PosReqID
	{ 709, true }, // PosTransType
	{ 712, true }, // PosMaintAction
	{ 713, false }, // OrigPosReqRefID
	{ 714, false }, // PosMaintRptRefID
	{ 715, true }, // ClearingBusinessDate
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 453, false }, // NoPartyIDs
	{ 1, true }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, true }, // AccountType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 386, false }, // NoTradingSessions
	{ 60, true }, // TransactTime
	{ 702, true }, // NoPositions
	{ 718, false }, // AdjustmentType
	{ 719, false }, // ContraryInstructionIndicator
	{ 720, false }, // PriorSpreadIndicator
	{ 834, false }, // ThresholdAmount
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// PositionMaintenanceReport [AM]

static struct _ofixGroupSpec	PositionMaintenanceReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup702 = {
    702, // NoPositions
    {
	{ 703, false }, // PosType
	{ 704, false }, // LongQty
	{ 705, false }, // ShortQty
	{ 706, false }, // PosQtyStatus
	{ 539, false }, // NoNestedPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionMaintenanceReportGroup753 = {
    753, // NoPosAmt
    {
	{ 707, true }, // PosAmtType
	{ 708, true }, // PosAmt
	{ 0, false }
    }
};

static ofixGroupSpec	PositionMaintenanceReportGroups[] = {
    &PositionMaintenanceReportGroup627,
    &PositionMaintenanceReportGroup453,
    &PositionMaintenanceReportGroup802,
    &PositionMaintenanceReportGroup454,
    &PositionMaintenanceReportGroup864,
    &PositionMaintenanceReportGroup555,
    &PositionMaintenanceReportGroup604,
    &PositionMaintenanceReportGroup711,
    &PositionMaintenanceReportGroup457,
    &PositionMaintenanceReportGroup887,
    &PositionMaintenanceReportGroup386,
    &PositionMaintenanceReportGroup702,
    &PositionMaintenanceReportGroup539,
    &PositionMaintenanceReportGroup804,
    &PositionMaintenanceReportGroup753,
    0
};

static struct _ofixMsgSpec	PositionMaintenanceReport = {
    &fix44Spec, // version
    16717, // tid
    "AM", // type
    "PositionMaintenanceReport", // name
    {0,39,0,0,0,0,0,0,1,2,98,0,0,0,0,84,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,44,4,11,0,21,0,0,42,5,13,93,0,88,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,8,9,0,96,0,0,0,20,0,0,0,0,0,0,0,0,71,74,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,65,0,0,0,67,70,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,69,53,54,56,57,58,0,0,68,0,0,0,0,0,0,0,55,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,72,73,75,76,0,0,94,95,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,46,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,60,0,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,89,0,0,0,0,0,0,29,30,86,31,32,0,35,36,37,91,0,0,28,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,82,83,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    PositionMaintenanceReportGroups, // groups
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
	{ 627, false }, // NoHops
	{ 721, true }, // PosMaintRptID
	{ 709, true }, // PosTransType
	{ 710, false }, // PosReqID
	{ 712, true }, // PosMaintAction
	{ 713, true }, // OrigPosReqRefID
	{ 722, true }, // PosMaintStatus
	{ 723, false }, // PosMaintResult
	{ 715, true }, // ClearingBusinessDate
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 453, false }, // NoPartyIDs
	{ 1, true }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, true }, // AccountType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 386, false }, // NoTradingSessions
	{ 60, true }, // TransactTime
	{ 702, true }, // NoPositions
	{ 753, true }, // NoPosAmt
	{ 718, false }, // AdjustmentType
	{ 834, false }, // ThresholdAmount
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// RequestForPositions [AN]

static struct _ofixGroupSpec	RequestForPositionsGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsGroup386 = {
    386, // NoTradingSessions
    {
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 0, false }
    }
};

static ofixGroupSpec	RequestForPositionsGroups[] = {
    &RequestForPositionsGroup627,
    &RequestForPositionsGroup453,
    &RequestForPositionsGroup802,
    &RequestForPositionsGroup454,
    &RequestForPositionsGroup864,
    &RequestForPositionsGroup555,
    &RequestForPositionsGroup604,
    &RequestForPositionsGroup711,
    &RequestForPositionsGroup457,
    &RequestForPositionsGroup887,
    &RequestForPositionsGroup386,
    0
};

static struct _ofixMsgSpec	RequestForPositions = {
    &fix44Spec, // version
    16718, // tid
    "AN", // type
    "RequestForPositions", // name
    {0,33,0,0,0,0,0,0,1,2,93,0,0,0,0,78,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,38,4,11,0,21,0,0,36,5,13,88,0,85,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,8,9,0,91,0,0,0,20,0,0,0,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,59,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,63,47,48,50,51,52,0,0,62,0,0,0,0,0,0,0,49,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,89,90,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,40,0,0,0,0,0,41,42,0,0,0,0,0,0,0,0,55,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,54,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,80,0,0,0,81,82,83,0,0,0,0,0,0,29,86,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,76,77,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RequestForPositionsGroups, // groups
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
	{ 627, false }, // NoHops
	{ 710, true }, // PosReqID
	{ 724, true }, // PosReqType
	{ 573, false }, // MatchStatus
	{ 263, false }, // SubscriptionRequestType
	{ 453, false }, // NoPartyIDs
	{ 1, true }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, true }, // AccountType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 715, true }, // ClearingBusinessDate
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 386, false }, // NoTradingSessions
	{ 60, true }, // TransactTime
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// RequestForPositionsAck [AO]

static struct _ofixGroupSpec	RequestForPositionsAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RequestForPositionsAckGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	RequestForPositionsAckGroups[] = {
    &RequestForPositionsAckGroup627,
    &RequestForPositionsAckGroup453,
    &RequestForPositionsAckGroup802,
    &RequestForPositionsAckGroup454,
    &RequestForPositionsAckGroup864,
    &RequestForPositionsAckGroup555,
    &RequestForPositionsAckGroup604,
    &RequestForPositionsAckGroup711,
    &RequestForPositionsAckGroup457,
    &RequestForPositionsAckGroup887,
    0
};

static struct _ofixMsgSpec	RequestForPositionsAck = {
    &fix44Spec, // version
    16719, // tid
    "AO", // type
    "RequestForPositionsAck", // name
    {0,35,0,0,0,0,0,0,1,2,90,0,0,0,0,80,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,40,4,11,0,21,0,0,38,5,13,85,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,8,9,0,88,0,0,0,20,0,0,0,0,0,0,0,0,67,70,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,61,0,0,0,63,66,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,65,49,50,52,53,54,0,0,64,0,0,0,0,0,0,0,51,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,68,69,71,72,0,0,86,87,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,42,0,0,0,0,0,43,44,0,0,0,0,0,0,0,0,57,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,56,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,82,0,0,0,0,0,0,0,0,0,28,0,0,0,83,84,30,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,78,79,75,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    RequestForPositionsAckGroups, // groups
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
	{ 627, false }, // NoHops
	{ 721, true }, // PosMaintRptID
	{ 710, false }, // PosReqID
	{ 727, false }, // TotalNumPosReports
	{ 325, false }, // UnsolicitedIndicator
	{ 728, true }, // PosReqResult
	{ 729, true }, // PosReqStatus
	{ 453, false }, // NoPartyIDs
	{ 1, true }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, true }, // AccountType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// PositionReport [AP]

static struct _ofixGroupSpec	PositionReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 732, true }, // UnderlyingSettlPrice
	{ 733, true }, // UnderlyingSettlPriceType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup702 = {
    702, // NoPositions
    {
	{ 703, false }, // PosType
	{ 704, false }, // LongQty
	{ 705, false }, // ShortQty
	{ 706, false }, // PosQtyStatus
	{ 539, false }, // NoNestedPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	PositionReportGroup753 = {
    753, // NoPosAmt
    {
	{ 707, true }, // PosAmtType
	{ 708, true }, // PosAmt
	{ 0, false }
    }
};

static ofixGroupSpec	PositionReportGroups[] = {
    &PositionReportGroup627,
    &PositionReportGroup453,
    &PositionReportGroup802,
    &PositionReportGroup454,
    &PositionReportGroup864,
    &PositionReportGroup555,
    &PositionReportGroup604,
    &PositionReportGroup711,
    &PositionReportGroup457,
    &PositionReportGroup887,
    &PositionReportGroup702,
    &PositionReportGroup539,
    &PositionReportGroup804,
    &PositionReportGroup753,
    0
};

static struct _ofixMsgSpec	PositionReport = {
    &fix44Spec, // version
    16720, // tid
    "AP", // type
    "PositionReport", // name
    {0,39,0,0,0,0,0,0,1,2,99,0,0,0,0,84,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,44,4,11,0,21,0,0,42,5,13,94,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,8,9,0,97,0,0,0,20,0,0,0,0,0,0,0,0,71,74,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,65,0,0,0,67,70,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,69,53,54,56,57,58,0,0,68,0,0,0,0,0,0,0,55,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,72,73,75,76,0,0,95,96,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,46,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,60,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,29,89,0,0,0,35,36,37,0,0,0,28,0,0,30,0,0,32,34,0,85,86,0,0,87,0,0,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,82,83,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    PositionReportGroups, // groups
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
	{ 627, false }, // NoHops
	{ 721, true }, // PosMaintRptID
	{ 710, false }, // PosReqID
	{ 724, false }, // PosReqType
	{ 263, false }, // SubscriptionRequestType
	{ 727, false }, // TotalNumPosReports
	{ 325, false }, // UnsolicitedIndicator
	{ 728, true }, // PosReqResult
	{ 715, true }, // ClearingBusinessDate
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 453, false }, // NoPartyIDs
	{ 1, true }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, true }, // AccountType
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 15, false }, // Currency
	{ 730, true }, // SettlPrice
	{ 731, true }, // SettlPriceType
	{ 734, true }, // PriorSettlPrice
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
	{ 702, true }, // NoPositions
	{ 753, true }, // NoPosAmt
	{ 506, false }, // RegistStatus
	{ 743, false }, // DeliveryDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradeCaptureReportRequestAck [AQ]

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportRequestAckGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	TradeCaptureReportRequestAckGroups[] = {
    &TradeCaptureReportRequestAckGroup627,
    &TradeCaptureReportRequestAckGroup454,
    &TradeCaptureReportRequestAckGroup864,
    &TradeCaptureReportRequestAckGroup711,
    &TradeCaptureReportRequestAckGroup457,
    &TradeCaptureReportRequestAckGroup887,
    &TradeCaptureReportRequestAckGroup555,
    &TradeCaptureReportRequestAckGroup604,
    0
};

static struct _ofixMsgSpec	TradeCaptureReportRequestAck = {
    &fix44Spec, // version
    16721, // tid
    "AQ", // type
    "TradeCaptureReportRequestAck", // name
    {0,0,0,0,0,0,0,0,1,2,86,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,36,4,11,0,21,0,0,34,5,13,81,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,8,9,0,84,0,0,0,20,0,0,0,0,0,0,0,0,63,66,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,59,62,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,61,45,46,48,49,50,0,0,60,0,0,0,0,0,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,64,65,67,68,0,0,82,83,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,32,33,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,74,75,71,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradeCaptureReportRequestAckGroups, // groups
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
	{ 627, false }, // NoHops
	{ 568, true }, // TradeRequestID
	{ 569, true }, // TradeRequestType
	{ 263, false }, // SubscriptionRequestType
	{ 748, false }, // TotNumTradeReports
	{ 749, true }, // TradeRequestResult
	{ 750, true }, // TradeRequestStatus
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
	{ 442, false }, // MultiLegReportingType
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// TradeCaptureReportAck [AR]

static struct _ofixGroupSpec	TradeCaptureReportAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 687, false }, // LegQty
	{ 690, false }, // LegSwapType
	{ 683, false }, // NoLegStipulations
	{ 564, false }, // LegPositionEffect
	{ 565, false }, // LegCoveredOrUncovered
	{ 539, false }, // NoNestedPartyIDs
	{ 654, false }, // LegRefID
	{ 566, false }, // LegPrice
	{ 587, false }, // LegSettlType
	{ 588, false }, // LegSettlDate
	{ 637, false }, // LegLastPx
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
	{ 467, false }, // IndividualAllocID
	{ 756, false }, // NoNested2PartyIDs
	{ 80, false }, // AllocQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	TradeCaptureReportAckGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	TradeCaptureReportAckGroups[] = {
    &TradeCaptureReportAckGroup627,
    &TradeCaptureReportAckGroup454,
    &TradeCaptureReportAckGroup864,
    &TradeCaptureReportAckGroup768,
    &TradeCaptureReportAckGroup555,
    &TradeCaptureReportAckGroup604,
    &TradeCaptureReportAckGroup683,
    &TradeCaptureReportAckGroup539,
    &TradeCaptureReportAckGroup804,
    &TradeCaptureReportAckGroup78,
    &TradeCaptureReportAckGroup756,
    &TradeCaptureReportAckGroup806,
    0
};

static struct _ofixMsgSpec	TradeCaptureReportAck = {
    &fix44Spec, // version
    16722, // tid
    "AR", // type
    "TradeCaptureReportAck", // name
    {0,100,0,0,0,0,0,0,1,2,108,0,0,0,0,0,0,44,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,48,4,11,0,21,0,0,46,5,13,92,0,88,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,103,105,0,0,0,0,0,0,0,0,0,0,107,8,9,0,106,0,0,0,20,0,0,0,0,0,0,0,0,75,78,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,69,0,0,0,71,74,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,73,57,58,60,61,62,0,0,72,0,0,0,0,0,0,0,59,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,76,77,79,80,0,0,93,94,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,51,52,0,0,0,0,0,0,0,0,65,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,97,98,0,0,0,0,0,0,0,0,0,0,0,56,0,64,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,36,0,0,0,0,0,0,0,0,102,99,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,101,0,0,0,0,0,0,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,42,0,0,0,0,0,0,0,31,32,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,30,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,0,86,87,83,84,0,0,0,43,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    TradeCaptureReportAckGroups, // groups
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
	{ 627, false }, // NoHops
	{ 571, true }, // TradeReportID
	{ 487, false }, // TradeReportTransType
	{ 856, false }, // TradeReportType
	{ 828, false }, // TrdType
	{ 829, false }, // TrdSubType
	{ 855, false }, // SecondaryTrdType
	{ 830, false }, // TransferReason
	{ 150, true }, // ExecType
	{ 572, false }, // TradeReportRefID
	{ 881, false }, // SecondaryTradeReportRefID
	{ 939, false }, // TrdRptStatus
	{ 751, false }, // TradeReportRejectReason
	{ 818, false }, // SecondaryTradeReportID
	{ 263, false }, // SubscriptionRequestType
	{ 820, false }, // TradeLinkID
	{ 880, false }, // TrdMatchID
	{ 17, false }, // ExecID
	{ 527, false }, // SecondaryExecID
	{ 55, true }, // Symbol
	{ 65, false }, // SymbolSfx
	{ 48, false }, // SecurityID
	{ 22, false }, // SecurityIDSource
	{ 454, false }, // NoSecurityAltID
	{ 460, false }, // Product
	{ 461, false }, // CFICode
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 947, false }, // StrikeCurrency
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
	{ 691, false }, // Pool
	{ 667, false }, // ContractSettlMonth
	{ 875, false }, // CPProgram
	{ 876, false }, // CPRegType
	{ 864, false }, // NoEvents
	{ 873, false }, // DatedDate
	{ 874, false }, // InterestAccrualDate
	{ 60, false }, // TransactTime
	{ 768, true }, // NoTrdRegTimestamps
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 555, false }, // NoLegs
	{ 635, false }, // ClearingFeeIndicator
	{ 528, false }, // OrderCapacity
	{ 529, false }, // OrderRestrictions
	{ 582, false }, // CustOrderCapacity
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 77, false }, // PositionEffect
	{ 591, false }, // PreallocMethod
	{ 78, false }, // NoAllocs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AllocationReport [AS]

static struct _ofixGroupSpec	AllocationReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup73 = {
    73, // NoOrders
    {
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 66, false }, // ListID
	{ 756, false }, // NoNested2PartyIDs
	{ 38, false }, // OrderQty
	{ 799, false }, // OrderAvgPx
	{ 800, false }, // OrderBookingQty
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup124 = {
    124, // NoExecs
    {
	{ 32, false }, // LastQty
	{ 17, false }, // ExecID
	{ 527, false }, // SecondaryExecID
	{ 31, false }, // LastPx
	{ 669, false }, // LastParPx
	{ 29, false }, // LastCapacity
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup711 = {
    711, // NoUnderlyings
    {
	{ 311, true }, // UnderlyingSymbol
	{ 312, false }, // UnderlyingSymbolSfx
	{ 309, false }, // UnderlyingSecurityID
	{ 305, false }, // UnderlyingSecurityIDSource
	{ 457, false }, // NoUnderlyingSecurityAltID
	{ 462, false }, // UnderlyingProduct
	{ 463, false }, // UnderlyingCFICode
	{ 310, false }, // UnderlyingSecurityType
	{ 763, false }, // UnderlyingSecuritySubType
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
	{ 316, false }, // UnderlyingStrikePrice
	{ 941, false }, // UnderlyingStrikeCurrency
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
	{ 877, false }, // UnderlyingCPProgram
	{ 878, false }, // UnderlyingCPRegType
	{ 318, false }, // UnderlyingCurrency
	{ 879, false }, // UnderlyingQty
	{ 810, false }, // UnderlyingPx
	{ 882, false }, // UnderlyingDirtyPrice
	{ 883, false }, // UnderlyingEndPrice
	{ 884, false }, // UnderlyingStartValue
	{ 885, false }, // UnderlyingCurrentValue
	{ 886, false }, // UnderlyingEndValue
	{ 887, false }, // NoUnderlyingStips
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup555 = {
    555, // NoLegs
    {
	{ 600, false }, // LegSymbol
	{ 601, false }, // LegSymbolSfx
	{ 602, false }, // LegSecurityID
	{ 603, false }, // LegSecurityIDSource
	{ 604, false }, // NoLegSecurityAltID
	{ 607, false }, // LegProduct
	{ 608, false }, // LegCFICode
	{ 609, false }, // LegSecurityType
	{ 764, false }, // LegSecuritySubType
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
	{ 942, false }, // LegStrikeCurrency
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
	{ 740, false }, // LegPool
	{ 739, false }, // LegDatedDate
	{ 955, false }, // LegContractSettlMonth
	{ 956, false }, // LegInterestAccrualDate
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }