

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
    }
};

static struct _ofixGroupSpec	AllocationReportGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup78 = {
    78, // NoAllocs
    {
	{ 79, true }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 573, false }, // MatchStatus
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
	{ 737, false }, // AllocSettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 736, false }, // AllocSettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 742, false }, // AllocAccruedInterestAmt
	{ 741, false }, // AllocInterestAtMaturity
	{ 136, false }, // NoMiscFees
	{ 576, false }, // NoClearingInstructions
	{ 635, false }, // ClearingFeeIndicator
	{ 780, false }, // AllocSettlInstType
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup576 = {
    576, // NoClearingInstructions
    {
	{ 577, false }, // ClearingInstruction
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationReportGroups[] = {
    &AllocationReportGroup627,
    &AllocationReportGroup73,
    &AllocationReportGroup756,
    &AllocationReportGroup806,
    &AllocationReportGroup124,
    &AllocationReportGroup454,
    &AllocationReportGroup864,
    &AllocationReportGroup870,
    &AllocationReportGroup711,
    &AllocationReportGroup457,
    &AllocationReportGroup887,
    &AllocationReportGroup555,
    &AllocationReportGroup604,
    &AllocationReportGroup453,
    &AllocationReportGroup802,
    &AllocationReportGroup232,
    &AllocationReportGroup78,
    &AllocationReportGroup539,
    &AllocationReportGroup804,
    &AllocationReportGroup136,
    &AllocationReportGroup576,
    &AllocationReportGroup85,
    &AllocationReportGroup781,
    &AllocationReportGroup801,
    0
};

static struct _ofixMsgSpec	AllocationReport = {
    &fix44Spec, // version
    16723, // tid
    "AS", // type
    "AllocationReport", // name
    {0,0,0,0,0,0,112,0,1,2,160,0,0,0,0,122,0,0,0,0,0,0,52,0,0,0,0,0,0,0,107,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,51,4,11,0,21,105,48,49,5,13,136,0,126,0,0,127,128,50,0,0,0,0,29,30,37,43,123,125,0,134,157,0,0,0,0,0,0,0,0,35,36,159,8,9,0,158,0,0,0,20,0,0,0,0,0,0,0,0,78,81,0,0,0,0,0,0,0,6,15,0,133,0,0,0,22,0,44,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,139,140,141,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,40,0,0,58,0,72,0,0,0,74,77,0,0,0,0,23,24,0,0,0,0,114,0,115,116,117,76,60,61,63,64,65,108,0,75,148,0,0,149,150,132,131,62,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,109,0,0,0,0,0,0,0,0,0,0,25,79,80,82,83,0,0,137,138,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,111,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,124,53,0,0,0,0,0,54,55,0,0,0,0,41,0,0,0,68,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,59,0,67,0,0,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,147,0,0,0,0,0,0,0,0,0,0,0,118,119,0,0,0,85,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,152,153,154,120,46,151,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,143,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,135,28,0,0,0,0,0,121,57,0,0,0,0,0,0,0,0,0,0,0,0,129,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,33,34,31,32,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,106,0,0,42,0,0,113,0,0,0,88,0,0,0,0,92,93,0,0,89,90,86,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,155,156,0,0,0,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,95,96,99,100,97,101,144,145,146,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationReportGroups, // groups
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
	{ 755, true }, // AllocReportID
	{ 70, false }, // AllocID
	{ 71, true }, // AllocTransType
	{ 795, false }, // AllocReportRefID
	{ 796, false }, // AllocCancReplaceReason
	{ 793, false }, // SecondaryAllocID
	{ 794, true }, // AllocReportType
	{ 87, true }, // AllocStatus
	{ 88, false }, // AllocRejCode
	{ 72, false }, // RefAllocID
	{ 808, false }, // AllocIntermedReqType
	{ 196, false }, // AllocLinkID
	{ 197, false }, // AllocLinkType
	{ 466, false }, // BookingRefID
	{ 857, true }, // AllocNoOrdersType
	{ 73, false }, // NoOrders
	{ 124, false }, // NoExecs
	{ 570, false }, // PreviouslyReported
	{ 700, false }, // ReversalIndicator
	{ 574, false }, // MatchType
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
	{ 53, true }, // Quantity
	{ 854, false }, // QtyType
	{ 30, false }, // LastMkt
	{ 229, false }, // TradeOriginationDate
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 423, false }, // PriceType
	{ 6, true }, // AvgPx
	{ 860, false }, // AvgParPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 15, false }, // Currency
	{ 74, false }, // AvgPxPrecision
	{ 453, false }, // NoPartyIDs
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 775, false }, // BookingType
	{ 381, false }, // GrossTradeAmt
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, false }, // NetMoney
	{ 77, false }, // PositionEffect
	{ 754, false }, // AutoAcceptIndicator
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 157, false }, // NumDaysInterest
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 540, false }, // TotalAccruedInterestAmt
	{ 738, false }, // InterestAtMaturity
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 650, false }, // LegalConfirm
	{ 232, false }, // NoStipulations
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 892, false }, // TotNoAllocs
	{ 893, false }, // LastFragment
	{ 78, true }, // NoAllocs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AllocationReportAck [AT]

static struct _ofixGroupSpec	AllocationReportAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportAckGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportAckGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationReportAckGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 366, false }, // AllocPrice
	{ 467, false }, // IndividualAllocID
	{ 776, false }, // IndividualAllocRejCode
	{ 161, false }, // AllocText
	{ 360, false }, // EncodedAllocTextLen
	{ 361, false }, // EncodedAllocText
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationReportAckGroups[] = {
    &AllocationReportAckGroup627,
    &AllocationReportAckGroup453,
    &AllocationReportAckGroup802,
    &AllocationReportAckGroup78,
    0
};

static struct _ofixMsgSpec	AllocationReportAck = {
    &fix44Spec, // version
    16724, // tid
    "AT", // type
    "AllocationReportAck", // name
    {0,0,0,0,0,0,0,0,1,2,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,41,0,33,0,0,0,0,0,0,0,0,0,29,0,0,0,0,32,0,0,44,0,0,0,0,0,0,0,0,34,35,46,8,9,0,45,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,42,43,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,36,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationReportAckGroups, // groups
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
	{ 755, true }, // AllocReportID
	{ 70, true }, // AllocID
	{ 453, false }, // NoPartyIDs
	{ 793, false }, // SecondaryAllocID
	{ 75, false }, // TradeDate
	{ 60, true }, // TransactTime
	{ 87, true }, // AllocStatus
	{ 88, false }, // AllocRejCode
	{ 794, false }, // AllocReportType
	{ 808, false }, // AllocIntermedReqType
	{ 573, false }, // MatchStatus
	{ 460, false }, // Product
	{ 167, false }, // SecurityType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 78, false }, // NoAllocs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// ConfirmationAck [AU]

static struct _ofixGroupSpec	ConfirmationAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	ConfirmationAckGroups[] = {
    &ConfirmationAckGroup627,
    0
};

static struct _ofixMsgSpec	ConfirmationAck = {
    &fix44Spec, // version
    16725, // tid
    "AU", // type
    "ConfirmationAck", // name
    {0,0,0,0,0,0,0,0,1,2,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,34,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,38,8,9,0,37,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ConfirmationAckGroups, // groups
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
	{ 75, true }, // TradeDate
	{ 60, true }, // TransactTime
	{ 940, true }, // AffirmStatus
	{ 774, false }, // ConfirmRejReason
	{ 573, false }, // MatchStatus
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// SettlementInstructionRequest [AV]

static struct _ofixGroupSpec	SettlementInstructionRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	SettlementInstructionRequestGroups[] = {
    &SettlementInstructionRequestGroup627,
    &SettlementInstructionRequestGroup453,
    &SettlementInstructionRequestGroup802,
    0
};

static struct _ofixMsgSpec	SettlementInstructionRequest = {
    &fix44Spec, // version
    16726, // tid
    "AV", // type
    "SettlementInstructionRequest", // name
    {0,0,0,0,0,0,0,0,1,2,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,33,0,5,13,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,44,8,9,0,43,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,38,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,37,40,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,34,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    SettlementInstructionRequestGroups, // groups
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
	{ 791, true }, // SettlInstReqID
	{ 60, true }, // TransactTime
	{ 453, false }, // NoPartyIDs
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 54, false }, // Side
	{ 460, false }, // Product
	{ 167, false }, // SecurityType
	{ 461, false }, // CFICode
	{ 168, false }, // EffectiveTime
	{ 126, false }, // ExpireTime
	{ 779, false }, // LastUpdateTime
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AssignmentReport [AW]

static struct _ofixGroupSpec	AssignmentReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup711 = {
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

static struct _ofixGroupSpec	AssignmentReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup702 = {
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

static struct _ofixGroupSpec	AssignmentReportGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AssignmentReportGroup753 = {
    753, // NoPosAmt
    {
	{ 707, true }, // PosAmtType
	{ 708, true }, // PosAmt
	{ 0, false }
    }
};

static ofixGroupSpec	AssignmentReportGroups[] = {
    &AssignmentReportGroup627,
    &AssignmentReportGroup453,
    &AssignmentReportGroup802,
    &AssignmentReportGroup454,
    &AssignmentReportGroup864,
    &AssignmentReportGroup604,
    &AssignmentReportGroup711,
    &AssignmentReportGroup457,
    &AssignmentReportGroup887,
    &AssignmentReportGroup702,
    &AssignmentReportGroup539,
    &AssignmentReportGroup804,
    &AssignmentReportGroup753,
    0
};

static struct _ofixMsgSpec	AssignmentReport = {
    &fix44Spec, // version
    16727, // tid
    "AW", // type
    "AssignmentReport", // name
    {0,32,0,0,0,0,0,0,1,2,140,0,0,0,0,76,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,36,4,11,0,21,0,0,34,5,13,135,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,139,8,9,0,138,0,0,0,20,0,0,0,0,0,0,0,0,63,66,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,59,62,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,61,45,46,48,49,50,0,0,60,0,0,0,0,0,0,0,47,56,0,0,0,0,0,0,0,89,90,91,92,93,94,100,51,0,95,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,64,65,67,68,0,0,136,137,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,38,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,0,0,0,0,0,0,0,77,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,98,99,96,78,79,80,81,82,0,0,83,84,85,87,88,101,103,104,105,106,107,108,109,110,111,112,113,114,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,121,0,0,0,0,0,0,0,0,120,0,0,0,134,132,133,0,0,0,0,0,0,0,0,0,0,0,0,124,125,126,0,0,0,0,0,0,117,116,0,0,0,128,129,130,131,0,0,0,0,0,122,0,0,0,0,0,0,0,0,42,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,28,123,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,74,75,71,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,0,0,0,0,58,0,0,0,0,0,0,0,118,119,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AssignmentReportGroups, // groups
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
	{ 833, true }, // AsgnRptID
	{ 832, false }, // TotNumAssignmentReports
	{ 912, false }, // LastRptRequested
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
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
	{ 711, false }, // NoUnderlyings
	{ 702, true }, // NoPositions
	{ 753, true }, // NoPosAmt
	{ 834, false }, // ThresholdAmount
	{ 730, true }, // SettlPrice
	{ 731, true }, // SettlPriceType
	{ 732, true }, // UnderlyingSettlPrice
	{ 432, false }, // ExpireDate
	{ 744, true }, // AssignmentMethod
	{ 745, false }, // AssignmentUnit
	{ 746, true }, // OpenInterest
	{ 747, true }, // ExerciseMethod
	{ 716, true }, // SettlSessID
	{ 717, true }, // SettlSessSubID
	{ 715, true }, // ClearingBusinessDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CollateralRequest [AX]

static struct _ofixGroupSpec	CollateralRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup711 = {
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
	{ 944, false }, // CollAction
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralRequestGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralRequestGroups[] = {
    &CollateralRequestGroup627,
    &CollateralRequestGroup453,
    &CollateralRequestGroup802,
    &CollateralRequestGroup124,
    &CollateralRequestGroup897,
    &CollateralRequestGroup454,
    &CollateralRequestGroup864,
    &CollateralRequestGroup604,
    &CollateralRequestGroup711,
    &CollateralRequestGroup457,
    &CollateralRequestGroup887,
    &CollateralRequestGroup768,
    &CollateralRequestGroup136,
    &CollateralRequestGroup232,
    0
};

static struct _ofixMsgSpec	CollateralRequest = {
    &fix44Spec, // version
    16728, // tid
    "AX", // type
    "CollateralRequest", // name
    {0,33,0,0,0,0,0,0,1,2,171,35,0,0,0,95,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,10,3,0,36,0,0,0,0,0,19,146,0,0,0,43,4,11,0,21,93,144,41,5,13,166,0,30,0,0,0,92,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,170,8,9,0,169,0,0,0,20,0,0,0,0,0,0,0,0,70,73,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,39,0,31,0,7,17,0,0,0,0,0,0,145,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,148,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,50,0,64,0,0,0,66,69,0,0,0,0,23,24,0,0,0,0,152,0,153,154,155,68,52,53,55,56,57,0,0,67,160,0,0,0,0,0,0,54,63,0,0,0,0,0,0,0,108,109,110,111,112,113,119,58,0,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,161,0,0,0,0,0,0,0,0,0,0,25,71,72,74,75,0,0,167,168,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,45,0,0,0,0,0,46,47,0,0,0,0,0,0,0,0,60,61,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,59,0,0,0,0,0,0,0,0,0,0,0,96,134,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,117,118,115,97,98,99,100,101,0,0,102,103,104,106,107,120,122,123,124,125,126,127,128,129,130,131,132,133,162,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,156,157,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,158,0,0,0,0,0,0,0,0,0,0,0,139,0,0,0,165,163,164,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,136,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,159,49,0,105,0,0,0,143,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,81,82,78,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,40,91,140,141,142,0,0,0,0,0,0,0,0,0,0,0,83,84,85,88,89,86,90,149,150,151,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,121,0,0,0,0,65,0,0,0,0,0,0,0,137,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralRequestGroups, // groups
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
	{ 894, true }, // CollReqID
	{ 895, true }, // CollAsgnReason
	{ 60, true }, // TransactTime
	{ 126, false }, // ExpireTime
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 899, false }, // MarginExcess
	{ 900, false }, // TotalNetValue
	{ 901, false }, // CashOutstanding
	{ 768, true }, // NoTrdRegTimestamps
	{ 54, false }, // Side
	{ 136, false }, // NoMiscFees
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 159, false }, // AccruedInterestAmt
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 232, false }, // NoStipulations
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 715, false }, // ClearingBusinessDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CollateralAssignment [AY]

static struct _ofixGroupSpec	CollateralAssignmentGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup711 = {
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
	{ 944, false }, // CollAction
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralAssignmentGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralAssignmentGroups[] = {
    &CollateralAssignmentGroup627,
    &CollateralAssignmentGroup453,
    &CollateralAssignmentGroup802,
    &CollateralAssignmentGroup124,
    &CollateralAssignmentGroup897,
    &CollateralAssignmentGroup454,
    &CollateralAssignmentGroup864,
    &CollateralAssignmentGroup604,
    &CollateralAssignmentGroup711,
    &CollateralAssignmentGroup457,
    &CollateralAssignmentGroup887,
    &CollateralAssignmentGroup768,
    &CollateralAssignmentGroup136,
    &CollateralAssignmentGroup232,
    &CollateralAssignmentGroup85,
    &CollateralAssignmentGroup781,
    &CollateralAssignmentGroup801,
    0
};

static struct _ofixMsgSpec	CollateralAssignment = {
    &fix44Spec, // version
    16729, // tid
    "AY", // type
    "CollateralAssignment", // name
    {0,36,0,0,0,0,0,0,1,2,179,38,0,0,0,98,0,0,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,10,3,0,39,0,0,0,0,0,19,149,0,0,0,46,4,11,0,21,96,147,44,5,13,174,0,33,0,0,0,95,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,168,0,0,0,178,8,9,0,177,0,0,0,20,0,0,0,0,0,0,0,0,73,76,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,42,0,34,0,7,17,0,0,0,0,0,0,148,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,151,0,0,0,0,0,0,0,51,0,165,166,167,164,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,53,0,67,0,0,0,69,72,0,0,0,0,23,24,0,0,0,0,155,0,156,157,158,71,55,56,58,59,60,0,0,70,163,0,0,0,0,0,0,57,66,0,0,0,0,0,0,0,111,112,113,114,115,116,122,61,0,117,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,169,0,0,0,0,0,0,0,0,0,0,25,74,75,77,78,0,0,175,176,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,150,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,48,0,0,0,0,0,49,50,0,0,0,0,0,0,0,0,63,64,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,62,0,0,0,0,0,0,0,0,0,0,0,99,137,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,119,120,121,118,100,101,102,103,104,0,0,105,106,107,109,110,123,125,126,127,128,129,130,131,132,133,134,135,136,170,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,159,160,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,0,0,0,161,0,0,0,0,0,0,0,0,0,0,0,142,0,0,0,173,171,172,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,139,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,162,52,0,108,0,0,0,146,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,84,85,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,43,94,143,144,145,28,31,0,0,0,32,0,0,0,0,0,86,87,88,91,92,89,93,152,153,154,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,124,0,0,0,0,68,0,0,0,0,0,0,0,140,141,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralAssignmentGroups, // groups
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
	{ 902, true }, // CollAsgnID
	{ 894, false }, // CollReqID
	{ 895, true }, // CollAsgnReason
	{ 903, true }, // CollAsgnTransType
	{ 907, false }, // CollAsgnRefID
	{ 60, true }, // TransactTime
	{ 126, false }, // ExpireTime
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 899, false }, // MarginExcess
	{ 900, false }, // TotalNetValue
	{ 901, false }, // CashOutstanding
	{ 768, true }, // NoTrdRegTimestamps
	{ 54, false }, // Side
	{ 136, false }, // NoMiscFees
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 159, false }, // AccruedInterestAmt
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 232, false }, // NoStipulations
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 715, false }, // ClearingBusinessDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CollateralResponse [AZ]

static struct _ofixGroupSpec	CollateralResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup711 = {
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
	{ 944, false }, // CollAction
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralResponseGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralResponseGroups[] = {
    &CollateralResponseGroup627,
    &CollateralResponseGroup453,
    &CollateralResponseGroup802,
    &CollateralResponseGroup124,
    &CollateralResponseGroup897,
    &CollateralResponseGroup454,
    &CollateralResponseGroup864,
    &CollateralResponseGroup604,
    &CollateralResponseGroup711,
    &CollateralResponseGroup457,
    &CollateralResponseGroup887,
    &CollateralResponseGroup768,
    &CollateralResponseGroup136,
    &CollateralResponseGroup232,
    0
};

static struct _ofixMsgSpec	CollateralResponse = {
    &fix44Spec, // version
    16730, // tid
    "AZ", // type
    "CollateralResponse", // name
    {0,37,0,0,0,0,0,0,1,2,170,39,0,0,0,99,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,10,3,0,40,0,0,0,0,0,19,150,0,0,0,47,4,11,0,21,97,148,45,5,13,165,0,35,0,0,0,96,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,169,8,9,0,168,0,0,0,20,0,0,0,0,0,0,0,0,74,77,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,43,0,0,0,7,17,0,0,0,0,0,0,149,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,152,0,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,54,0,68,0,0,0,70,73,0,0,0,0,23,24,0,0,0,0,156,0,157,158,159,72,56,57,59,60,61,0,0,71,164,0,0,0,0,0,0,58,67,0,0,0,0,0,0,0,112,113,114,115,116,117,123,62,0,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,75,76,78,79,0,0,166,167,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,151,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,49,0,0,0,0,0,50,51,0,0,0,0,0,0,0,0,64,65,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,63,0,0,0,0,0,0,0,0,0,0,0,100,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,121,122,119,101,102,103,104,105,0,0,106,107,108,110,111,124,126,127,128,129,130,131,132,133,134,135,136,137,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,160,161,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,162,0,0,0,0,0,0,0,0,0,0,0,143,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,140,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,163,53,0,109,0,0,0,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,85,86,82,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,0,44,95,144,145,146,29,32,28,33,34,0,0,0,0,0,0,87,88,89,92,93,90,94,153,154,155,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,125,0,0,0,0,69,0,0,0,0,0,0,0,141,142,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralResponseGroups, // groups
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
	{ 904, true }, // CollRespID
	{ 902, true }, // CollAsgnID
	{ 894, false }, // CollReqID
	{ 895, true }, // CollAsgnReason
	{ 903, false }, // CollAsgnTransType
	{ 905, true }, // CollAsgnRespType
	{ 906, false }, // CollAsgnRejectReason
	{ 60, true }, // TransactTime
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 899, false }, // MarginExcess
	{ 900, false }, // TotalNetValue
	{ 901, false }, // CashOutstanding
	{ 768, true }, // NoTrdRegTimestamps
	{ 54, false }, // Side
	{ 136, false }, // NoMiscFees
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 159, false }, // AccruedInterestAmt
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 232, false }, // NoStipulations
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
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

static struct _ofixGroupSpec	NewsGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup555 = {
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

static struct _ofixGroupSpec	NewsGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup711 = {
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

static struct _ofixGroupSpec	NewsGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewsGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
    &NewsGroup864,
    &NewsGroup555,
    &NewsGroup604,
    &NewsGroup711,
    &NewsGroup457,
    &NewsGroup887,
    &NewsGroup33,
    0
};

static struct _ofixMsgSpec	News = {
    &fix44Spec, // version
    66, // tid
    "B", // type
    "News", // name
    {0,0,0,0,0,0,0,0,1,2,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,10,3,0,0,0,0,0,0,28,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,8,9,0,41,0,39,40,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,34,0,30,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 42, false }, // OrigTime
	{ 61, false }, // Urgency
	{ 148, true }, // Headline
	{ 358, false }, // EncodedHeadlineLen
	{ 359, false }, // EncodedHeadline
	{ 215, false }, // NoRoutingIDs
	{ 146, false }, // NoRelatedSym
	{ 555, false }, // NoLegs
	{ 711, false }, // NoUnderlyings
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

// CollateralReport [BA]

static struct _ofixGroupSpec	CollateralReportGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup711 = {
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

static struct _ofixGroupSpec	CollateralReportGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralReportGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralReportGroups[] = {
    &CollateralReportGroup627,
    &CollateralReportGroup453,
    &CollateralReportGroup802,
    &CollateralReportGroup124,
    &CollateralReportGroup897,
    &CollateralReportGroup454,
    &CollateralReportGroup864,
    &CollateralReportGroup604,
    &CollateralReportGroup711,
    &CollateralReportGroup457,
    &CollateralReportGroup887,
    &CollateralReportGroup768,
    &CollateralReportGroup136,
    &CollateralReportGroup232,
    &CollateralReportGroup85,
    &CollateralReportGroup781,
    &CollateralReportGroup801,
    0
};

static struct _ofixMsgSpec	CollateralReport = {
    &fix44Spec, // version
    16961, // tid
    "BA", // type
    "CollateralReport", // name
    {0,34,0,0,0,0,0,0,1,2,177,36,0,0,0,96,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,10,3,0,37,0,0,0,0,0,19,147,0,0,0,44,4,11,0,21,94,145,42,5,13,172,0,0,0,0,0,93,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,166,0,0,0,176,8,9,0,175,0,0,0,20,0,0,0,0,0,0,0,0,71,74,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,40,0,0,0,7,17,0,0,0,0,0,0,146,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,149,0,0,0,0,0,0,0,49,0,163,164,165,162,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,51,0,65,0,0,0,67,70,0,0,0,0,23,24,0,0,0,0,153,0,154,155,156,69,53,54,56,57,58,0,0,68,161,0,0,0,0,0,0,55,64,0,0,0,0,0,0,0,109,110,111,112,113,114,120,59,0,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,167,0,0,0,0,0,0,0,0,0,0,25,72,73,75,76,0,0,173,174,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,148,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,46,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,60,0,0,0,0,0,0,0,0,0,0,0,97,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,118,119,116,98,99,100,101,102,0,0,103,104,105,107,108,121,123,124,125,126,127,128,129,130,131,132,133,134,168,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,157,158,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,159,0,0,0,0,0,0,0,0,0,0,0,140,0,0,0,171,169,170,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,137,136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,160,50,0,106,0,0,0,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,82,83,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,92,141,142,143,0,0,0,0,0,0,28,29,30,31,32,84,85,86,89,90,87,91,150,151,152,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,122,0,0,0,0,66,0,0,0,0,0,0,0,138,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralReportGroups, // groups
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
	{ 908, true }, // CollRptID
	{ 909, false }, // CollInquiryID
	{ 910, true }, // CollStatus
	{ 911, false }, // TotNumReports
	{ 912, false }, // LastRptRequested
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 899, false }, // MarginExcess
	{ 900, false }, // TotalNetValue
	{ 901, false }, // CashOutstanding
	{ 768, true }, // NoTrdRegTimestamps
	{ 54, false }, // Side
	{ 136, false }, // NoMiscFees
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 159, false }, // AccruedInterestAmt
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 232, false }, // NoStipulations
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 715, false }, // ClearingBusinessDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CollateralInquiry [BB]

static struct _ofixGroupSpec	CollateralInquiryGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup938 = {
    938, // NoCollInquiryQualifier
    {
	{ 896, false }, // CollInquiryQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup711 = {
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

static struct _ofixGroupSpec	CollateralInquiryGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup768 = {
    768, // NoTrdRegTimestamps
    {
	{ 769, false }, // TrdRegTimestamp
	{ 770, false }, // TrdRegTimestampType
	{ 771, false }, // TrdRegTimestampOrigin
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralInquiryGroups[] = {
    &CollateralInquiryGroup627,
    &CollateralInquiryGroup938,
    &CollateralInquiryGroup453,
    &CollateralInquiryGroup802,
    &CollateralInquiryGroup124,
    &CollateralInquiryGroup897,
    &CollateralInquiryGroup454,
    &CollateralInquiryGroup864,
    &CollateralInquiryGroup604,
    &CollateralInquiryGroup711,
    &CollateralInquiryGroup457,
    &CollateralInquiryGroup887,
    &CollateralInquiryGroup768,
    &CollateralInquiryGroup232,
    &CollateralInquiryGroup85,
    &CollateralInquiryGroup781,
    &CollateralInquiryGroup801,
    0
};

static struct _ofixMsgSpec	CollateralInquiry = {
    &fix44Spec, // version
    16962, // tid
    "BB", // type
    "CollateralInquiry", // name
    {0,34,0,0,0,0,0,0,1,2,176,36,0,0,0,96,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,10,3,0,37,0,0,0,0,0,19,146,0,0,0,44,4,11,0,21,94,145,42,5,13,171,0,0,0,0,0,93,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,165,0,0,0,175,8,9,0,174,0,0,0,20,0,0,0,0,0,0,0,0,71,74,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,40,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,148,0,0,0,0,0,0,0,49,0,162,163,164,161,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,51,0,65,0,0,0,67,70,0,0,0,0,23,24,0,0,0,0,152,0,153,154,155,69,53,54,56,57,58,0,0,68,160,0,0,0,0,0,0,55,64,0,0,0,0,0,0,0,109,110,111,112,113,114,120,59,0,115,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,166,0,0,0,0,0,0,0,0,0,0,25,72,73,75,76,0,0,172,173,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,46,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,60,0,0,0,0,0,0,0,0,0,0,0,97,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,118,119,116,98,99,100,101,102,0,0,103,104,105,107,108,121,123,124,125,126,127,128,129,130,131,132,133,134,167,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,156,157,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,158,0,0,0,0,0,0,0,0,0,0,0,140,0,0,0,170,168,169,0,0,0,0,0,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,137,136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,159,50,0,106,0,0,0,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,82,83,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,92,141,142,143,0,0,0,0,0,0,0,28,0,0,0,84,85,86,89,90,87,91,149,150,151,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,122,0,0,0,0,66,0,0,0,0,0,0,0,138,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralInquiryGroups, // groups
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
	{ 909, false }, // CollInquiryID
	{ 938, false }, // NoCollInquiryQualifier
	{ 263, false }, // SubscriptionRequestType
	{ 725, false }, // ResponseTransportType
	{ 726, false }, // ResponseDestination
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 899, false }, // MarginExcess
	{ 900, false }, // TotalNetValue
	{ 901, false }, // CashOutstanding
	{ 768, true }, // NoTrdRegTimestamps
	{ 54, false }, // Side
	{ 44, false }, // Price
	{ 423, false }, // PriceType
	{ 159, false }, // AccruedInterestAmt
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 232, false }, // NoStipulations
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 715, false }, // ClearingBusinessDate
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NetworkStatusRequest [BC]

static struct _ofixGroupSpec	NetworkStatusRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NetworkStatusRequestGroup936 = {
    936, // NoCompIDs
    {
	{ 930, false }, // RefCompID
	{ 931, false }, // RefSubID
	{ 283, false }, // LocationID
	{ 284, false }, // DeskID
	{ 0, false }
    }
};

static ofixGroupSpec	NetworkStatusRequestGroups[] = {
    &NetworkStatusRequestGroup627,
    &NetworkStatusRequestGroup936,
    0
};

static struct _ofixMsgSpec	NetworkStatusRequest = {
    &fix44Spec, // version
    16963, // tid
    "BC", // type
    "NetworkStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,28,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NetworkStatusRequestGroups, // groups
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
	{ 935, true }, // NetworkRequestType
	{ 933, true }, // NetworkRequestID
	{ 936, false }, // NoCompIDs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// NetworkStatusResponse [BD]

static struct _ofixGroupSpec	NetworkStatusResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NetworkStatusResponseGroup936 = {
    936, // NoCompIDs
    {
	{ 930, false }, // RefCompID
	{ 931, false }, // RefSubID
	{ 283, false }, // LocationID
	{ 284, false }, // DeskID
	{ 928, false }, // StatusValue
	{ 929, false }, // StatusText
	{ 0, false }
    }
};

static ofixGroupSpec	NetworkStatusResponseGroups[] = {
    &NetworkStatusResponseGroup627,
    &NetworkStatusResponseGroup936,
    0
};

static struct _ofixMsgSpec	NetworkStatusResponse = {
    &fix44Spec, // version
    16964, // tid
    "BD", // type
    "NetworkStatusResponse", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,29,31,0,32,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    NetworkStatusResponseGroups, // groups
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
	{ 937, true }, // NetworkStatusResponseType
	{ 933, false }, // NetworkRequestID
	{ 932, false }, // NetworkResponseID
	{ 934, false }, // LastNetworkResponseID
	{ 936, true }, // NoCompIDs
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// UserRequest [BE]

static struct _ofixGroupSpec	UserRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	UserRequestGroups[] = {
    &UserRequestGroup627,
    0
};

static struct _ofixMsgSpec	UserRequest = {
    &fix44Spec, // version
    16965, // tid
    "BE", // type
    "UserRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,33,34,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    UserRequestGroups, // groups
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
	{ 923, true }, // UserRequestID
	{ 924, true }, // UserRequestType
	{ 553, true }, // Username
	{ 554, false }, // Password
	{ 925, false }, // NewPassword
	{ 95, false }, // RawDataLength
	{ 96, false }, // RawData
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// UserResponse [BF]

static struct _ofixGroupSpec	UserResponseGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static ofixGroupSpec	UserResponseGroups[] = {
    &UserResponseGroup627,
    0
};

static struct _ofixMsgSpec	UserResponse = {
    &fix44Spec, // version
    16966, // tid
    "BF", // type
    "UserResponse", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    UserResponseGroups, // groups
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
	{ 923, true }, // UserRequestID
	{ 553, true }, // Username
	{ 926, false }, // UserStatus
	{ 927, false }, // UserStatusText
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// CollateralInquiryAck [BG]

static struct _ofixGroupSpec	CollateralInquiryAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup938 = {
    938, // NoCollInquiryQualifier
    {
	{ 896, false }, // CollInquiryQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup124 = {
    124, // NoExecs
    {
	{ 17, false }, // ExecID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup897 = {
    897, // NoTrades
    {
	{ 571, false }, // TradeReportID
	{ 818, false }, // SecondaryTradeReportID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup711 = {
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

static struct _ofixGroupSpec	CollateralInquiryAckGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CollateralInquiryAckGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	CollateralInquiryAckGroups[] = {
    &CollateralInquiryAckGroup627,
    &CollateralInquiryAckGroup938,
    &CollateralInquiryAckGroup453,
    &CollateralInquiryAckGroup802,
    &CollateralInquiryAckGroup124,
    &CollateralInquiryAckGroup897,
    &CollateralInquiryAckGroup454,
    &CollateralInquiryAckGroup864,
    &CollateralInquiryAckGroup604,
    &CollateralInquiryAckGroup711,
    &CollateralInquiryAckGroup457,
    &CollateralInquiryAckGroup887,
    0
};

static struct _ofixMsgSpec	CollateralInquiryAck = {
    &fix44Spec, // version
    16967, // tid
    "BG", // type
    "CollateralInquiryAck", // name
    {0,34,0,0,0,0,0,0,1,2,153,36,0,0,0,96,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,10,3,0,37,0,0,0,0,0,19,0,0,0,0,44,4,11,0,21,94,0,42,5,13,148,0,0,0,0,0,93,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,152,8,9,0,151,0,0,0,20,0,0,0,0,0,0,0,0,71,74,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,40,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,51,0,65,0,0,0,67,70,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,69,53,54,56,57,58,0,0,68,0,0,0,0,0,0,0,55,64,0,0,0,0,0,0,0,109,110,111,112,113,114,120,59,0,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,141,0,0,0,0,0,0,0,0,0,0,25,72,73,75,76,0,0,149,150,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,46,0,0,0,0,0,47,48,0,0,0,0,0,0,0,0,61,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,0,60,0,0,0,0,0,0,0,0,0,0,0,97,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,118,119,116,98,99,100,101,102,0,0,103,104,105,107,108,121,123,124,125,126,127,128,129,130,131,132,133,134,142,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,140,0,0,0,145,143,144,0,0,0,0,0,0,0,146,147,0,0,0,0,0,0,0,0,0,0,0,0,137,136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,82,83,79,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,92,0,0,0,0,0,0,0,0,0,0,28,0,32,0,84,85,86,89,90,87,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,122,0,0,29,30,66,0,0,0,0,0,0,0,138,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    CollateralInquiryAckGroups, // groups
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
	{ 909, true }, // CollInquiryID
	{ 945, true }, // CollInquiryStatus
	{ 946, false }, // CollInquiryResult
	{ 938, false }, // NoCollInquiryQualifier
	{ 911, false }, // TotNumReports
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 581, false }, // AccountType
	{ 11, false }, // ClOrdID
	{ 37, false }, // OrderID
	{ 198, false }, // SecondaryOrderID
	{ 526, false }, // SecondaryClOrdID
	{ 124, false }, // NoExecs
	{ 897, false }, // NoTrades
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
	{ 64, false }, // SettlDate
	{ 53, false }, // Quantity
	{ 854, false }, // QtyType
	{ 15, false }, // Currency
	{ 555, false }, // NoLegs
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
	{ 711, false }, // NoUnderlyings
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 716, false }, // SettlSessID
	{ 717, false }, // SettlSessSubID
	{ 715, false }, // ClearingBusinessDate
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

// ConfirmationRequest [BH]

static struct _ofixGroupSpec	ConfirmationRequestGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationRequestGroup73 = {
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

static struct _ofixGroupSpec	ConfirmationRequestGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ConfirmationRequestGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	ConfirmationRequestGroups[] = {
    &ConfirmationRequestGroup627,
    &ConfirmationRequestGroup73,
    &ConfirmationRequestGroup756,
    &ConfirmationRequestGroup806,
    0
};

static struct _ofixMsgSpec	ConfirmationRequest = {
    &fix44Spec, // version
    16968, // tid
    "BH", // type
    "ConfirmationRequest", // name
    {0,0,0,0,0,0,0,0,1,2,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,38,0,34,0,0,0,0,0,0,0,0,0,31,0,0,30,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,42,8,9,0,41,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    ConfirmationRequestGroups, // groups
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
	{ 859, true }, // ConfirmReqID
	{ 773, true }, // ConfirmType
	{ 73, false }, // NoOrders
	{ 70, false }, // AllocID
	{ 793, false }, // SecondaryAllocID
	{ 467, false }, // IndividualAllocID
	{ 60, true }, // TransactTime
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 798, false }, // AllocAccountType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
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

static struct _ofixGroupSpec	EmailGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup711 = {
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

static struct _ofixGroupSpec	EmailGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	EmailGroup555 = {
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

static struct _ofixGroupSpec	EmailGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
    &EmailGroup864,
    &EmailGroup711,
    &EmailGroup457,
    &EmailGroup887,
    &EmailGroup555,
    &EmailGroup604,
    &EmailGroup33,
    0
};

static struct _ofixMsgSpec	Email = {
    &fix44Spec, // version
    67, // tid
    "C", // type
    "Email", // name
    {0,0,0,0,0,0,0,0,1,2,45,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,10,3,0,38,0,0,0,0,30,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,8,9,0,43,29,41,42,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,35,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 164, true }, // EmailThreadID
	{ 94, true }, // EmailType
	{ 42, false }, // OrigTime
	{ 147, true }, // Subject
	{ 356, false }, // EncodedSubjectLen
	{ 357, false }, // EncodedSubject
	{ 215, false }, // NoRoutingIDs
	{ 146, false }, // NoRelatedSym
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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

static struct _ofixGroupSpec	NewOrderSingleGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup711 = {
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

static struct _ofixGroupSpec	NewOrderSingleGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderSingleGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
    &NewOrderSingleGroup802,
    &NewOrderSingleGroup78,
    &NewOrderSingleGroup539,
    &NewOrderSingleGroup804,
    &NewOrderSingleGroup386,
    &NewOrderSingleGroup454,
    &NewOrderSingleGroup864,
    &NewOrderSingleGroup711,
    &NewOrderSingleGroup457,
    &NewOrderSingleGroup887,
    &NewOrderSingleGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderSingle = {
    &fix44Spec, // version
    68, // tid
    "D", // type
    "NewOrderSingle", // name
    {0,34,0,0,0,0,0,0,1,2,185,28,144,145,0,134,0,0,47,0,0,46,56,137,0,0,0,0,0,0,0,0,0,0,10,3,0,0,111,0,116,0,0,19,118,0,0,0,55,4,11,0,21,0,106,53,5,13,154,139,108,0,0,42,43,54,0,0,0,0,40,0,0,0,0,33,0,160,41,0,0,52,0,0,0,0,0,0,0,184,8,9,0,183,0,0,0,20,0,119,50,0,0,0,0,0,82,85,0,0,48,49,0,0,107,6,15,138,0,0,152,151,22,0,0,0,142,0,7,17,0,0,0,0,0,0,0,0,0,0,105,0,12,14,16,18,0,0,0,0,0,0,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,158,157,0,0,0,0,0,0,62,0,76,161,0,0,78,81,0,0,162,163,23,24,0,0,0,0,120,0,121,122,123,80,64,65,67,68,69,32,0,79,109,0,0,128,129,0,0,66,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,83,84,86,87,0,0,155,156,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,135,136,0,0,0,0,0,0,0,0,51,0,169,170,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,0,0,0,143,0,0,0,0,141,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,57,0,0,0,0,0,58,59,0,0,0,0,0,0,114,115,72,73,74,0,0,0,0,0,0,146,179,180,0,0,0,0,0,0,0,0,0,0,0,0,182,0,0,147,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,181,0,0,113,0,0,0,0,0,0,0,0,0,29,0,148,149,0,0,0,0,0,0,0,0,0,0,0,63,0,71,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,150,30,0,0,0,0,0,37,38,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,45,0,0,0,0,159,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,124,125,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,0,0,0,131,132,133,126,0,130,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,61,0,0,0,0,0,0,0,0,0,0,0,0,153,0,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,164,165,166,167,0,168,171,172,173,174,0,175,176,177,178,0,0,0,0,110,0,0,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,93,94,90,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,96,97,100,101,98,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 54, true }, // Side
	{ 114, false }, // LocateReqd
	{ 60, true }, // TransactTime
	{ 232, false }, // NoStipulations
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
	{ 193, false }, // SettlDate2
	{ 192, false }, // OrderQty2
	{ 640, false }, // Price2
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
	{ 75, false }, // TradeDate
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 70, false }, // AllocID
	{ 591, false }, // PreallocMethod
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
	{ 54, true }, // Side
	{ 401, false }, // SideValueInd
	{ 114, false }, // LocateReqd
	{ 60, false }, // TransactTime
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
	{ 193, false }, // SettlDate2
	{ 192, false }, // OrderQty2
	{ 640, false }, // Price2
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
	{ 494, false }, // Designation
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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

static struct _ofixGroupSpec	NewOrderListGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup711 = {
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

static struct _ofixGroupSpec	NewOrderListGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderListGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
    &NewOrderListGroup802,
    &NewOrderListGroup78,
    &NewOrderListGroup539,
    &NewOrderListGroup804,
    &NewOrderListGroup386,
    &NewOrderListGroup454,
    &NewOrderListGroup864,
    &NewOrderListGroup711,
    &NewOrderListGroup457,
    &NewOrderListGroup887,
    &NewOrderListGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderList = {
    &fix44Spec, // version
    69, // tid
    "E", // type
    "NewOrderList", // name
    {0,0,0,0,0,0,0,0,1,2,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,28,0,44,38,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,8,9,0,47,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,39,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,30,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,42,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 765, false }, // AllowableOneSidednessPct
	{ 766, false }, // AllowableOneSidednessValue
	{ 767, false }, // AllowableOneSidednessCurr
	{ 68, true }, // TotNoOrders
	{ 893, false }, // LastFragment
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	OrderCancelRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelRequestGroup711 = {
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

static struct _ofixGroupSpec	OrderCancelRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelRequestGroups[] = {
    &OrderCancelRequestGroup627,
    &OrderCancelRequestGroup453,
    &OrderCancelRequestGroup802,
    &OrderCancelRequestGroup454,
    &OrderCancelRequestGroup864,
    &OrderCancelRequestGroup711,
    &OrderCancelRequestGroup457,
    &OrderCancelRequestGroup887,
    0
};

static struct _ofixMsgSpec	OrderCancelRequest = {
    &fix44Spec, // version
    70, // tid
    "F", // type
    "OrderCancelRequest", // name
    {0,35,0,0,0,0,0,0,1,2,104,30,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,10,3,0,29,93,0,0,28,0,19,0,0,0,0,41,4,11,0,21,0,91,39,5,13,99,0,92,0,0,0,0,40,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,8,9,0,102,0,0,0,20,0,0,0,0,0,0,0,0,68,71,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,62,0,0,0,64,67,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,66,50,51,53,54,55,0,0,65,0,0,0,0,0,0,0,52,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,69,70,72,73,0,0,100,101,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,43,0,0,0,0,0,44,45,0,0,0,0,0,0,96,97,58,59,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,32,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,79,80,76,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,82,83,86,87,84,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 41, true }, // OrigClOrdID
	{ 37, false }, // OrderID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 66, false }, // ListID
	{ 586, false }, // OrigOrdModTime
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup711 = {
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

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderCancelReplaceRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderCancelReplaceRequestGroups[] = {
    &OrderCancelReplaceRequestGroup627,
    &OrderCancelReplaceRequestGroup453,
    &OrderCancelReplaceRequestGroup802,
    &OrderCancelReplaceRequestGroup78,
    &OrderCancelReplaceRequestGroup539,
    &OrderCancelReplaceRequestGroup804,
    &OrderCancelReplaceRequestGroup386,
    &OrderCancelReplaceRequestGroup454,
    &OrderCancelReplaceRequestGroup864,
    &OrderCancelReplaceRequestGroup711,
    &OrderCancelReplaceRequestGroup457,
    &OrderCancelReplaceRequestGroup887,
    0
};

static struct _ofixMsgSpec	OrderCancelReplaceRequest = {
    &fix44Spec, // version
    71, // tid
    "G", // type
    "OrderCancelReplaceRequest", // name
    {0,38,0,0,0,0,0,0,1,2,184,33,158,159,0,152,0,0,51,0,0,50,59,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,111,0,116,32,0,19,118,0,0,0,58,4,11,0,21,0,108,56,5,13,168,153,109,0,0,46,47,57,36,0,0,0,44,0,0,0,0,31,0,174,45,0,0,0,0,0,0,0,0,0,0,183,8,9,0,182,0,0,0,20,0,119,54,0,0,0,0,0,85,88,0,0,52,53,0,0,177,6,15,0,0,0,166,165,22,0,0,0,156,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,154,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,172,171,0,0,0,0,0,0,65,0,79,175,0,0,81,84,0,0,176,134,23,24,0,0,0,0,120,0,121,122,123,83,67,68,70,71,72,30,0,82,0,0,0,128,129,0,0,69,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,86,87,89,90,0,0,169,170,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,150,151,0,0,0,0,0,0,0,0,55,0,140,141,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,117,0,0,0,157,0,0,0,0,155,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,60,0,0,0,0,0,61,62,0,0,0,0,0,0,114,115,75,76,77,0,0,0,0,0,0,160,178,179,0,0,0,0,0,0,0,0,0,0,0,0,181,0,0,161,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,180,0,0,113,0,0,0,0,0,0,0,0,0,34,0,162,163,0,0,0,0,0,0,0,0,0,0,0,66,0,74,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,164,35,0,0,37,0,0,41,42,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,49,0,0,0,0,173,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,124,125,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,0,0,0,0,131,132,133,126,0,130,0,0,0,0,0,0,0,0,0,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,64,0,0,0,0,0,0,0,0,0,0,0,0,167,0,0,0,0,0,0,0,0,0,0,0,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,135,136,137,138,0,139,142,143,144,145,0,146,147,148,149,0,0,0,0,110,0,0,0,0,0,0,0,0,0,95,0,0,0,0,0,0,0,0,96,97,93,94,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,98,99,100,103,104,101,105,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 37, false }, // OrderID
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 66, false }, // ListID
	{ 586, false }, // OrigOrdModTime
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
	{ 121, false }, // ForexReq
	{ 120, false }, // SettlCurrency
	{ 775, false }, // BookingType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 193, false }, // SettlDate2
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderStatusRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	OrderStatusRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderStatusRequestGroup711 = {
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

static struct _ofixGroupSpec	OrderStatusRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	OrderStatusRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderStatusRequestGroups[] = {
    &OrderStatusRequestGroup627,
    &OrderStatusRequestGroup453,
    &OrderStatusRequestGroup802,
    &OrderStatusRequestGroup454,
    &OrderStatusRequestGroup864,
    &OrderStatusRequestGroup711,
    &OrderStatusRequestGroup457,
    &OrderStatusRequestGroup887,
    0
};

static struct _ofixMsgSpec	OrderStatusRequest = {
    &fix44Spec, // version
    72, // tid
    "H", // type
    "OrderStatusRequest", // name
    {0,34,0,0,0,0,0,0,1,2,91,29,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,0,0,0,0,19,0,0,0,0,38,4,11,0,21,0,88,36,5,13,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,8,9,0,89,0,0,0,20,0,0,0,0,0,0,0,0,65,68,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,0,59,0,0,0,61,64,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,63,47,48,50,51,52,0,0,62,0,0,0,0,0,0,0,49,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,66,67,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,40,0,0,0,0,0,41,42,0,0,0,0,0,0,0,0,55,56,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,76,77,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,79,80,83,84,81,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 37, false }, // OrderID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 453, false }, // NoPartyIDs
	{ 790, false }, // OrdStatusReqID
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AllocationInstruction [J]

static struct _ofixGroupSpec	AllocationInstructionGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup73 = {
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

static struct _ofixGroupSpec	AllocationInstructionGroup756 = {
    756, // NoNested2PartyIDs
    {
	{ 757, false }, // Nested2PartyID
	{ 758, false }, // Nested2PartyIDSource
	{ 759, false }, // Nested2PartyRole
	{ 806, false }, // NoNested2PartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup806 = {
    806, // NoNested2PartySubIDs
    {
	{ 760, false }, // Nested2PartySubID
	{ 807, false }, // Nested2PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup124 = {
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

static struct _ofixGroupSpec	AllocationInstructionGroup454 = {
    454, // NoSecurityAltID
    {
	{ 455, false }, // SecurityAltID
	{ 456, false }, // SecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup711 = {
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

static struct _ofixGroupSpec	AllocationInstructionGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup555 = {
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

static struct _ofixGroupSpec	AllocationInstructionGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup78 = {
    78, // NoAllocs
    {
	{ 79, true }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 573, false }, // MatchStatus
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
	{ 737, false }, // AllocSettlCurrAmt
	{ 120, false }, // SettlCurrency
	{ 736, false }, // AllocSettlCurrency
	{ 155, false }, // SettlCurrFxRate
	{ 156, false }, // SettlCurrFxRateCalc
	{ 159, false }, // AccruedInterestAmt
	{ 742, false }, // AllocAccruedInterestAmt
	{ 741, false }, // AllocInterestAtMaturity
	{ 160, false }, // SettlInstMode
	{ 136, false }, // NoMiscFees
	{ 576, false }, // NoClearingInstructions
	{ 577, false }, // ClearingInstruction
	{ 635, false }, // ClearingFeeIndicator
	{ 780, false }, // AllocSettlInstType
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup136 = {
    136, // NoMiscFees
    {
	{ 137, false }, // MiscFeeAmt
	{ 138, false }, // MiscFeeCurr
	{ 139, false }, // MiscFeeType
	{ 891, false }, // MiscFeeBasis
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationInstructionGroups[] = {
    &AllocationInstructionGroup627,
    &AllocationInstructionGroup73,
    &AllocationInstructionGroup756,
    &AllocationInstructionGroup806,
    &AllocationInstructionGroup124,
    &AllocationInstructionGroup454,
    &AllocationInstructionGroup864,
    &AllocationInstructionGroup870,
    &AllocationInstructionGroup711,
    &AllocationInstructionGroup457,
    &AllocationInstructionGroup887,
    &AllocationInstructionGroup555,
    &AllocationInstructionGroup604,
    &AllocationInstructionGroup453,
    &AllocationInstructionGroup802,
    &AllocationInstructionGroup232,
    &AllocationInstructionGroup78,
    &AllocationInstructionGroup539,
    &AllocationInstructionGroup804,
    &AllocationInstructionGroup136,
    &AllocationInstructionGroup85,
    &AllocationInstructionGroup781,
    &AllocationInstructionGroup801,
    0
};

static struct _ofixMsgSpec	AllocationInstruction = {
    &fix44Spec, // version
    74, // tid
    "J", // type
    "AllocationInstruction", // name
    {0,0,0,0,0,0,108,0,1,2,156,0,0,0,0,118,0,0,0,0,0,0,48,0,0,0,0,0,0,0,103,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,47,4,11,0,21,101,44,45,5,13,132,0,122,0,0,123,124,46,0,0,0,0,28,29,32,39,119,121,0,130,153,0,0,0,0,0,0,0,0,0,0,155,8,9,0,154,0,0,0,20,0,0,0,0,0,0,0,0,74,77,0,0,0,0,0,0,0,6,15,0,129,0,0,0,22,0,40,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,135,136,137,0,0,0,0,0,0,0,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,36,0,0,54,0,68,0,0,0,70,73,0,0,0,0,23,24,0,0,0,0,110,0,111,112,113,72,56,57,59,60,61,104,0,71,144,0,0,145,146,128,127,58,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,0,0,0,0,0,0,0,0,0,25,75,76,78,79,0,0,133,134,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,49,0,0,0,0,0,50,51,0,0,0,0,37,0,0,0,64,65,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,138,55,0,63,0,0,0,0,0,0,0,0,0,0,0,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,106,30,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,143,0,0,0,0,0,0,0,0,0,0,0,114,115,0,0,0,81,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,148,149,150,116,42,147,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,139,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,131,0,0,0,0,0,0,117,53,0,0,0,0,0,0,0,0,0,0,0,0,125,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,31,0,0,33,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,0,0,38,0,0,109,0,0,0,84,0,0,0,0,88,89,0,0,85,86,82,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,151,152,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,91,92,95,96,93,97,140,141,142,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationInstructionGroups, // groups
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
	{ 70, true }, // AllocID
	{ 71, true }, // AllocTransType
	{ 626, true }, // AllocType
	{ 793, false }, // SecondaryAllocID
	{ 72, false }, // RefAllocID
	{ 796, false }, // AllocCancReplaceReason
	{ 808, false }, // AllocIntermedReqType
	{ 196, false }, // AllocLinkID
	{ 197, false }, // AllocLinkType
	{ 466, false }, // BookingRefID
	{ 857, true }, // AllocNoOrdersType
	{ 73, false }, // NoOrders
	{ 124, false }, // NoExecs
	{ 570, false }, // PreviouslyReported
	{ 700, false }, // ReversalIndicator
	{ 574, false }, // MatchType
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
	{ 53, true }, // Quantity
	{ 854, false }, // QtyType
	{ 30, false }, // LastMkt
	{ 229, false }, // TradeOriginationDate
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 423, false }, // PriceType
	{ 6, true }, // AvgPx
	{ 860, false }, // AvgParPx
	{ 218, false }, // Spread
	{ 220, false }, // BenchmarkCurveCurrency
	{ 221, false }, // BenchmarkCurveName
	{ 222, false }, // BenchmarkCurvePoint
	{ 662, false }, // BenchmarkPrice
	{ 663, false }, // BenchmarkPriceType
	{ 699, false }, // BenchmarkSecurityID
	{ 761, false }, // BenchmarkSecurityIDSource
	{ 15, false }, // Currency
	{ 74, false }, // AvgPxPrecision
	{ 453, false }, // NoPartyIDs
	{ 75, true }, // TradeDate
	{ 60, false }, // TransactTime
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 775, false }, // BookingType
	{ 381, false }, // GrossTradeAmt
	{ 238, false }, // Concession
	{ 237, false }, // TotalTakedown
	{ 118, false }, // NetMoney
	{ 77, false }, // PositionEffect
	{ 754, false }, // AutoAcceptIndicator
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 157, false }, // NumDaysInterest
	{ 158, false }, // AccruedInterestRate
	{ 159, false }, // AccruedInterestAmt
	{ 540, false }, // TotalAccruedInterestAmt
	{ 738, false }, // InterestAtMaturity
	{ 920, false }, // EndAccruedInterestAmt
	{ 921, false }, // StartCash
	{ 922, false }, // EndCash
	{ 650, false }, // LegalConfirm
	{ 232, false }, // NoStipulations
	{ 235, false }, // YieldType
	{ 236, false }, // Yield
	{ 701, false }, // YieldCalcDate
	{ 696, false }, // YieldRedemptionDate
	{ 697, false }, // YieldRedemptionPrice
	{ 698, false }, // YieldRedemptionPriceType
	{ 892, false }, // TotNoAllocs
	{ 893, false }, // LastFragment
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
    &fix44Spec, // version
    75, // tid
    "K", // type
    "ListCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,29,0,0,0,0,0,28,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 66, true }, // ListID
	{ 60, true }, // TransactTime
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
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
    &fix44Spec, // version
    76, // tid
    "L", // type
    "ListExecute", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,31,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    77, // tid
    "M", // type
    "ListStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,29,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    78, // tid
    "N", // type
    "ListStatus", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,36,0,0,0,0,0,28,0,37,0,0,0,0,39,0,0,0,0,0,0,0,0,30,32,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,31,0,0,0,0,0,0,0,0,0,0,0,0,33,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 893, false }, // LastFragment
	{ 73, true }, // NoOrders
	{ 93, false }, // SignatureLength
	{ 89, false }, // Signature
	{ 10, true }, // CheckSum
	{ 0, false }
    }
};

// AllocationInstructionAck [P]

static struct _ofixGroupSpec	AllocationInstructionAckGroup627 = {
    627, // NoHops
    {
	{ 628, false }, // HopCompID
	{ 629, false }, // HopSendingTime
	{ 630, false }, // HopRefID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionAckGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionAckGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	AllocationInstructionAckGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 366, false }, // AllocPrice
	{ 467, false }, // IndividualAllocID
	{ 776, false }, // IndividualAllocRejCode
	{ 161, false }, // AllocText
	{ 360, false }, // EncodedAllocTextLen
	{ 361, false }, // EncodedAllocText
	{ 0, false }
    }
};

static ofixGroupSpec	AllocationInstructionAckGroups[] = {
    &AllocationInstructionAckGroup627,
    &AllocationInstructionAckGroup453,
    &AllocationInstructionAckGroup802,
    &AllocationInstructionAckGroup78,
    0
};

static struct _ofixMsgSpec	AllocationInstructionAck = {
    &fix44Spec, // version
    80, // tid
    "P", // type
    "AllocationInstructionAck", // name
    {0,0,0,0,0,0,0,0,1,2,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,40,0,32,0,0,0,0,0,0,0,0,0,28,0,0,0,0,31,0,0,43,0,0,0,0,0,0,0,0,33,34,45,8,9,0,44,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,41,42,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    AllocationInstructionAckGroups, // groups
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
	{ 70, true }, // AllocID
	{ 453, false }, // NoPartyIDs
	{ 793, false }, // SecondaryAllocID
	{ 75, false }, // TradeDate
	{ 60, true }, // TransactTime
	{ 87, true }, // AllocStatus
	{ 88, false }, // AllocRejCode
	{ 626, false }, // AllocType
	{ 808, false }, // AllocIntermedReqType
	{ 573, false }, // MatchStatus
	{ 460, false }, // Product
	{ 167, false }, // SecurityType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 78, false }, // NoAllocs
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

static struct _ofixGroupSpec	DontKnowTradeGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DontKnowTradeGroup711 = {
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

static struct _ofixGroupSpec	DontKnowTradeGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DontKnowTradeGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	DontKnowTradeGroup555 = {
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

static struct _ofixGroupSpec	DontKnowTradeGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	DontKnowTradeGroups[] = {
    &DontKnowTradeGroup627,
    &DontKnowTradeGroup454,
    &DontKnowTradeGroup864,
    &DontKnowTradeGroup711,
    &DontKnowTradeGroup457,
    &DontKnowTradeGroup887,
    &DontKnowTradeGroup555,
    &DontKnowTradeGroup604,
    0
};

static struct _ofixMsgSpec	DontKnowTrade = {
    &fix44Spec, // version
    81, // tid
    "Q", // type
    "DontKnowTrade", // name
    {0,0,0,0,0,0,0,0,1,2,89,0,0,0,0,0,0,30,0,0,0,0,35,0,0,0,0,0,0,0,0,83,82,0,10,3,0,28,77,0,0,0,0,19,0,0,0,0,34,4,11,0,21,0,76,32,5,13,84,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,8,9,0,87,0,0,0,20,0,0,0,0,0,0,0,0,61,64,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,31,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,41,0,55,0,0,0,57,60,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,59,43,44,46,47,48,0,0,58,0,0,0,0,0,0,0,45,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,62,63,65,66,0,0,85,86,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,0,0,0,80,81,51,52,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,50,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,72,73,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 37, true }, // OrderID
	{ 198, false }, // SecondaryOrderID
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
	{ 735, false }, // NoQuoteQualifiers
	{ 692, false }, // QuotePriceType
	{ 40, false }, // OrdType
	{ 62, false }, // ValidUntilTime
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

static struct _ofixGroupSpec	QuoteRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup711 = {
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

static struct _ofixGroupSpec	QuoteRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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

static struct _ofixGroupSpec	QuoteRequestGroup555 = {
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

static struct _ofixGroupSpec	QuoteRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup735 = {
    735, // NoQuoteQualifiers
    {
	{ 695, false }, // QuoteQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteRequestGroups[] = {
    &QuoteRequestGroup627,
    &QuoteRequestGroup146,
    &QuoteRequestGroup454,
    &QuoteRequestGroup864,
    &QuoteRequestGroup711,
    &QuoteRequestGroup457,
    &QuoteRequestGroup887,
    &QuoteRequestGroup232,
    &QuoteRequestGroup555,
    &QuoteRequestGroup604,
    &QuoteRequestGroup683,
    &QuoteRequestGroup539,
    &QuoteRequestGroup804,
    &QuoteRequestGroup735,
    &QuoteRequestGroup453,
    &QuoteRequestGroup802,
    0
};

static struct _ofixMsgSpec	QuoteRequest = {
    &fix44Spec, // version
    82, // tid
    "R", // type
    "QuoteRequest", // name
    {0,0,0,0,0,0,0,0,1,2,38,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,8,9,0,36,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, true }, // QuoteReqID
	{ 644, false }, // RFQReqID
	{ 11, false }, // ClOrdID
	{ 528, false }, // OrderCapacity
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

static struct _ofixGroupSpec	QuoteGroup735 = {
    735, // NoQuoteQualifiers
    {
	{ 695, false }, // QuoteQualifier
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	QuoteGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup711 = {
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

static struct _ofixGroupSpec	QuoteGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup555 = {
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

static struct _ofixGroupSpec	QuoteGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup539 = {
    539, // NoNestedPartyIDs
    {
	{ 524, false }, // NestedPartyID
	{ 525, false }, // NestedPartyIDSource
	{ 538, false }, // NestedPartyRole
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteGroups[] = {
    &QuoteGroup627,
    &QuoteGroup735,
    &QuoteGroup453,
    &QuoteGroup802,
    &QuoteGroup454,
    &QuoteGroup864,
    &QuoteGroup711,
    &QuoteGroup457,
    &QuoteGroup887,
    &QuoteGroup232,
    &QuoteGroup555,
    &QuoteGroup604,
    &QuoteGroup683,
    &QuoteGroup539,
    &QuoteGroup804,
    0
};

static struct _ofixMsgSpec	Quote = {
    &fix44Spec, // version
    83, // tid
    "S", // type
    "Quote", // name
    {0,101,0,0,0,0,0,0,1,2,154,0,130,129,0,99,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,90,0,123,0,0,19,0,0,0,0,39,4,11,0,21,0,89,37,5,13,149,0,122,0,113,95,96,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,153,8,9,0,152,0,0,0,20,0,0,132,0,0,0,0,0,66,69,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,105,106,110,112,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,91,0,0,0,128,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,114,116,115,117,98,97,0,0,0,0,0,0,46,0,60,0,0,0,62,65,0,0,0,0,23,24,0,0,0,0,135,0,136,137,138,64,48,49,51,52,53,0,0,63,100,0,0,143,144,0,0,50,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,25,67,68,70,71,0,0,150,151,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,134,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,41,0,0,0,0,0,42,43,0,0,0,0,0,0,93,94,56,57,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,133,0,0,0,0,0,0,0,0,31,0,0,0,47,0,55,0,0,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,131,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,27,0,0,0,118,119,120,121,0,0,0,0,0,0,0,124,125,0,107,108,109,111,0,0,0,0,0,0,0,126,127,0,0,102,0,139,140,0,0,0,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,0,30,0,0,146,147,148,141,0,145,0,0,0,0,0,0,0,0,0,88,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,45,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,77,78,74,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,80,81,84,85,82,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 693, false }, // QuoteRespID
	{ 537, false }, // QuoteType
	{ 735, false }, // NoQuoteQualifiers
	{ 301, false }, // QuoteResponseLevel
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
	{ 13, false }, // CommType
	{ 12, false }, // Commission
	{ 582, false }, // CustOrderCapacity
	{ 100, false }, // ExDestination
	{ 528, false }, // OrderCapacity
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

static struct _ofixGroupSpec	SettlementInstructionsGroup778 = {
    778, // NoSettlInst
    {
	{ 162, false }, // SettlInstID
	{ 163, false }, // SettlInstTransType
	{ 214, false }, // SettlInstRefID
	{ 453, false }, // NoPartyIDs
	{ 54, false }, // Side
	{ 460, false }, // Product
	{ 167, false }, // SecurityType
	{ 461, false }, // CFICode
	{ 168, false }, // EffectiveTime
	{ 126, false }, // ExpireTime
	{ 779, false }, // LastUpdateTime
	{ 172, false }, // SettlDeliveryType
	{ 169, false }, // StandInstDbType
	{ 170, false }, // StandInstDbName
	{ 171, false }, // StandInstDbID
	{ 85, false }, // NoDlvyInst
	{ 492, false }, // PaymentMethod
	{ 476, false }, // PaymentRef
	{ 488, false }, // CardHolderName
	{ 489, false }, // CardNumber
	{ 503, false }, // CardStartDate
	{ 490, false }, // CardExpDate
	{ 491, false }, // CardIssNum
	{ 504, false }, // PaymentDate
	{ 505, false }, // PaymentRemitterID
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup85 = {
    85, // NoDlvyInst
    {
	{ 165, false }, // SettlInstSource
	{ 787, false }, // DlvyInstType
	{ 781, false }, // NoSettlPartyIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup781 = {
    781, // NoSettlPartyIDs
    {
	{ 782, false }, // SettlPartyID
	{ 783, false }, // SettlPartyIDSource
	{ 784, false }, // SettlPartyRole
	{ 801, false }, // NoSettlPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SettlementInstructionsGroup801 = {
    801, // NoSettlPartySubIDs
    {
	{ 785, false }, // SettlPartySubID
	{ 786, false }, // SettlPartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	SettlementInstructionsGroups[] = {
    &SettlementInstructionsGroup627,
    &SettlementInstructionsGroup778,
    &SettlementInstructionsGroup453,
    &SettlementInstructionsGroup802,
    &SettlementInstructionsGroup85,
    &SettlementInstructionsGroup781,
    &SettlementInstructionsGroup801,
    0
};

static struct _ofixMsgSpec	SettlementInstructions = {
    &fix44Spec, // version
    84, // tid
    "T", // type
    "SettlementInstructions", // name
    {0,0,0,0,0,0,0,0,1,2,41,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,32,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,38,0,0,0,0,0,0,0,0,0,0,0,0,29,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 777, true }, // SettlInstMsgID
	{ 791, false }, // SettlInstReqID
	{ 160, true }, // SettlInstMode
	{ 792, false }, // SettlInstReqRejCode
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 165, false }, // SettlInstSource
	{ 11, false }, // ClOrdID
	{ 60, true }, // TransactTime
	{ 778, false }, // NoSettlInst
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

static struct _ofixGroupSpec	MarketDataRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup711 = {
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

static struct _ofixGroupSpec	MarketDataRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataRequestGroup555 = {
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

static struct _ofixGroupSpec	MarketDataRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
    &MarketDataRequestGroup864,
    &MarketDataRequestGroup711,
    &MarketDataRequestGroup457,
    &MarketDataRequestGroup887,
    &MarketDataRequestGroup555,
    &MarketDataRequestGroup604,
    &MarketDataRequestGroup386,
    0
};

static struct _ofixMsgSpec	MarketDataRequest = {
    &fix44Spec, // version
    86, // tid
    "V", // type
    "MarketDataRequest", // name
    {0,0,0,0,0,0,0,0,1,2,43,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,8,9,0,41,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,30,31,32,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 262, true }, // MDReqID
	{ 263, true }, // SubscriptionRequestType
	{ 264, true }, // MarketDepth
	{ 265, false }, // MDUpdateType
	{ 266, false }, // AggregatedBook
	{ 286, false }, // OpenCloseSettlFlag
	{ 546, false }, // Scope
	{ 547, false }, // MDImplicitDelete
	{ 267, true }, // NoMDEntryTypes
	{ 146, true }, // NoRelatedSym
	{ 386, false }, // NoTradingSessions
	{ 815, false }, // ApplQueueAction
	{ 812, false }, // ApplQueueMax
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

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup711 = {
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

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup555 = {
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

static struct _ofixGroupSpec	MarketDataSnapshotFullRefreshGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
	{ 286, false }, // OpenCloseSettlFlag
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
	{ 811, false }, // PriceDelta
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataSnapshotFullRefreshGroups[] = {
    &MarketDataSnapshotFullRefreshGroup627,
    &MarketDataSnapshotFullRefreshGroup454,
    &MarketDataSnapshotFullRefreshGroup864,
    &MarketDataSnapshotFullRefreshGroup711,
    &MarketDataSnapshotFullRefreshGroup457,
    &MarketDataSnapshotFullRefreshGroup887,
    &MarketDataSnapshotFullRefreshGroup555,
    &MarketDataSnapshotFullRefreshGroup604,
    &MarketDataSnapshotFullRefreshGroup268,
    0
};

static struct _ofixMsgSpec	MarketDataSnapshotFullRefresh = {
    &fix44Spec, // version
    87, // tid
    "W", // type
    "MarketDataSnapshotFullRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,81,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,8,9,0,79,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,40,41,43,44,45,0,0,55,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,28,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,33,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,69,70,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 291, false }, // FinancialStatus
	{ 292, false }, // CorporateAction
	{ 451, false }, // NetChgPrevDay
	{ 268, true }, // NoMDEntries
	{ 813, false }, // ApplQueueDepth
	{ 814, false }, // ApplQueueResolution
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
	{ 286, false }, // OpenCloseSettlFlag
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
	{ 811, false }, // PriceDelta
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

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup711 = {
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

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup555 = {
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

static struct _ofixGroupSpec	MarketDataIncrementalRefreshGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataIncrementalRefreshGroups[] = {
    &MarketDataIncrementalRefreshGroup627,
    &MarketDataIncrementalRefreshGroup268,
    &MarketDataIncrementalRefreshGroup454,
    &MarketDataIncrementalRefreshGroup864,
    &MarketDataIncrementalRefreshGroup711,
    &MarketDataIncrementalRefreshGroup457,
    &MarketDataIncrementalRefreshGroup887,
    &MarketDataIncrementalRefreshGroup555,
    &MarketDataIncrementalRefreshGroup604,
    0
};

static struct _ofixMsgSpec	MarketDataIncrementalRefresh = {
    &fix44Spec, // version
    88, // tid
    "X", // type
    "MarketDataIncrementalRefresh", // name
    {0,0,0,0,0,0,0,0,1,2,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,8,9,0,32,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 262, false }, // MDReqID
	{ 268, true }, // NoMDEntries
	{ 813, false }, // ApplQueueDepth
	{ 814, false }, // ApplQueueResolution
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

static struct _ofixGroupSpec	MarketDataRequestRejectGroup816 = {
    816, // NoAltMDSource
    {
	{ 817, false }, // AltMDSourceID
	{ 0, false }
    }
};

static ofixGroupSpec	MarketDataRequestRejectGroups[] = {
    &MarketDataRequestRejectGroup627,
    &MarketDataRequestRejectGroup816,
    0
};

static struct _ofixMsgSpec	MarketDataRequestReject = {
    &fix44Spec, // version
    89, // tid
    "Y", // type
    "MarketDataRequestReject", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,32,33,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 262, true }, // MDReqID
	{ 281, false }, // MDReqRejReason
	{ 816, false }, // NoAltMDSource
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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
	{ 555, false }, // NoLegs
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

static struct _ofixGroupSpec	QuoteCancelGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup711 = {
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

static struct _ofixGroupSpec	QuoteCancelGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteCancelGroup555 = {
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

static struct _ofixGroupSpec	QuoteCancelGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteCancelGroups[] = {
    &QuoteCancelGroup627,
    &QuoteCancelGroup453,
    &QuoteCancelGroup802,
    &QuoteCancelGroup295,
    &QuoteCancelGroup454,
    &QuoteCancelGroup864,
    &QuoteCancelGroup711,
    &QuoteCancelGroup457,
    &QuoteCancelGroup887,
    &QuoteCancelGroup555,
    &QuoteCancelGroup604,
    0
};

static struct _ofixMsgSpec	QuoteCancel = {
    &fix44Spec, // version
    90, // tid
    "Z", // type
    "QuoteCancel", // name
    {0,33,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,30,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 298, true }, // QuoteCancelType
	{ 301, false }, // QuoteResponseLevel
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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

static struct _ofixGroupSpec	QuoteStatusRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup711 = {
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

static struct _ofixGroupSpec	QuoteStatusRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup555 = {
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

static struct _ofixGroupSpec	QuoteStatusRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup453 = {
    453, // NoPartyIDs
    {
	{ 448, false }, // PartyID
	{ 447, false }, // PartyIDSource
	{ 452, false }, // PartyRole
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	QuoteStatusRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	QuoteStatusRequestGroups[] = {
    &QuoteStatusRequestGroup627,
    &QuoteStatusRequestGroup454,
    &QuoteStatusRequestGroup864,
    &QuoteStatusRequestGroup711,
    &QuoteStatusRequestGroup457,
    &QuoteStatusRequestGroup887,
    &QuoteStatusRequestGroup555,
    &QuoteStatusRequestGroup604,
    &QuoteStatusRequestGroup453,
    &QuoteStatusRequestGroup802,
    0
};

static struct _ofixMsgSpec	QuoteStatusRequest = {
    &fix44Spec, // version
    97, // tid
    "a", // type
    "QuoteStatusRequest", // name
    {0,84,0,0,0,0,0,0,1,2,92,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,8,9,0,90,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,41,42,44,45,46,0,0,56,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,85,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,70,71,67,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,73,74,77,78,75,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 555, false }, // NoLegs
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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
	{ 304, false }, // TotNoQuoteEntries
	{ 893, false }, // LastFragment
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

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
	{ 64, false }, // SettlDate
	{ 40, false }, // OrdType
	{ 193, false }, // SettlDate2
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

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup555 = {
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

static struct _ofixGroupSpec	MassQuoteAcknowledgementGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MassQuoteAcknowledgementGroups[] = {
    &MassQuoteAcknowledgementGroup627,
    &MassQuoteAcknowledgementGroup453,
    &MassQuoteAcknowledgementGroup802,
    &MassQuoteAcknowledgementGroup296,
    &MassQuoteAcknowledgementGroup457,
    &MassQuoteAcknowledgementGroup887,
    &MassQuoteAcknowledgementGroup295,
    &MassQuoteAcknowledgementGroup454,
    &MassQuoteAcknowledgementGroup864,
    &MassQuoteAcknowledgementGroup555,
    &MassQuoteAcknowledgementGroup604,
    0
};

static struct _ofixMsgSpec	MassQuoteAcknowledgement = {
    &fix44Spec, // version
    98, // tid
    "b", // type
    "MassQuoteAcknowledgement", // name
    {0,35,0,0,0,0,0,0,1,2,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,8,9,0,42,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,30,0,0,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, false }, // QuoteReqID
	{ 117, false }, // QuoteID
	{ 297, true }, // QuoteStatus
	{ 300, false }, // QuoteRejectReason
	{ 301, false }, // QuoteResponseLevel
	{ 537, false }, // QuoteType
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
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

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup711 = {
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

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionRequestGroup555 = {
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
    &SecurityDefinitionRequestGroup864,
    &SecurityDefinitionRequestGroup870,
    &SecurityDefinitionRequestGroup711,
    &SecurityDefinitionRequestGroup457,
    &SecurityDefinitionRequestGroup887,
    &SecurityDefinitionRequestGroup555,
    &SecurityDefinitionRequestGroup604,
    0
};

static struct _ofixMsgSpec	SecurityDefinitionRequest = {
    &fix44Spec, // version
    99, // tid
    "c", // type
    "SecurityDefinitionRequest", // name
    {0,0,0,0,0,0,0,0,1,2,87,0,0,0,0,76,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,77,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,8,9,0,85,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,41,42,44,45,46,0,0,56,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,78,79,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,73,74,0,0,70,71,67,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 711, false }, // NoUnderlyings
	{ 15, false }, // Currency
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 555, false }, // NoLegs
	{ 827, false }, // ExpirationCycle
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

static struct _ofixGroupSpec	SecurityDefinitionGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup711 = {
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

static struct _ofixGroupSpec	SecurityDefinitionGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityDefinitionGroup555 = {
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
    &SecurityDefinitionGroup864,
    &SecurityDefinitionGroup870,
    &SecurityDefinitionGroup711,
    &SecurityDefinitionGroup457,
    &SecurityDefinitionGroup887,
    &SecurityDefinitionGroup555,
    &SecurityDefinitionGroup604,
    0
};

static struct _ofixMsgSpec	SecurityDefinition = {
    &fix44Spec, // version
    100, // tid
    "d", // type
    "SecurityDefinition", // name
    {0,0,0,0,0,0,0,0,1,2,89,0,0,0,0,77,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,33,4,11,0,21,0,0,31,5,13,80,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,88,8,9,0,87,0,0,0,20,0,0,0,0,0,0,0,0,60,63,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,54,0,0,0,56,59,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,58,42,43,45,46,47,0,0,57,0,0,0,0,0,0,0,44,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,25,61,62,64,65,0,0,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,36,37,0,0,0,0,0,0,0,0,50,51,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,49,0,0,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,85,86,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,74,75,0,0,71,72,68,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 711, false }, // NoUnderlyings
	{ 15, false }, // Currency
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 555, false }, // NoLegs
	{ 827, false }, // ExpirationCycle
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

static struct _ofixGroupSpec	SecurityStatusRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusRequestGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusRequestGroup711 = {
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

static struct _ofixGroupSpec	SecurityStatusRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusRequestGroup555 = {
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

static struct _ofixGroupSpec	SecurityStatusRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityStatusRequestGroups[] = {
    &SecurityStatusRequestGroup627,
    &SecurityStatusRequestGroup454,
    &SecurityStatusRequestGroup864,
    &SecurityStatusRequestGroup870,
    &SecurityStatusRequestGroup711,
    &SecurityStatusRequestGroup457,
    &SecurityStatusRequestGroup887,
    &SecurityStatusRequestGroup555,
    &SecurityStatusRequestGroup604,
    0
};

static struct _ofixMsgSpec	SecurityStatusRequest = {
    &fix44Spec, // version
    101, // tid
    "e", // type
    "SecurityStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,82,0,0,0,0,76,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,8,9,0,80,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,40,41,43,44,45,0,0,55,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,72,73,0,0,69,70,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
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

static struct _ofixGroupSpec	SecurityStatusGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusGroup711 = {
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

static struct _ofixGroupSpec	SecurityStatusGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityStatusGroup555 = {
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

static struct _ofixGroupSpec	SecurityStatusGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityStatusGroups[] = {
    &SecurityStatusGroup627,
    &SecurityStatusGroup454,
    &SecurityStatusGroup864,
    &SecurityStatusGroup870,
    &SecurityStatusGroup711,
    &SecurityStatusGroup457,
    &SecurityStatusGroup887,
    &SecurityStatusGroup555,
    &SecurityStatusGroup604,
    0
};

static struct _ofixMsgSpec	SecurityStatus = {
    &fix44Spec, // version
    102, // tid
    "f", // type
    "SecurityStatus", // name
    {0,0,0,0,0,0,0,0,1,2,98,0,0,0,0,76,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,90,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,31,4,11,0,21,0,0,29,5,13,93,0,91,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,8,9,0,96,0,0,0,20,0,0,0,0,0,0,0,0,58,61,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,52,0,0,0,54,57,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,56,40,41,43,44,45,0,0,55,0,0,0,0,0,0,0,42,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,79,80,83,84,85,86,87,88,89,92,0,77,0,0,0,0,0,0,0,0,0,0,25,59,60,62,63,0,0,94,95,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,34,35,0,0,0,0,0,0,0,0,48,49,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,47,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,72,73,0,0,69,70,66,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 711, false }, // NoUnderlyings
	{ 555, false }, // NoLegs
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
    &fix44Spec, // version
    103, // tid
    "g", // type
    "TradingSessionStatusRequest", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,31,32,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    104, // tid
    "h", // type
    "TradingSessionStatus", // name
    {0,0,0,0,0,0,0,0,1,2,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,8,9,0,45,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,28,29,0,31,32,34,36,37,38,39,40,0,25,0,0,0,0,0,0,43,44,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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
	{ 367, false }, // QuoteSetValidUntilTime
	{ 304, true }, // TotNoQuoteEntries
	{ 893, false }, // LastFragment
	{ 295, true }, // NoQuoteEntries
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

static struct _ofixGroupSpec	MassQuoteGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
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
	{ 64, false }, // SettlDate
	{ 40, false }, // OrdType
	{ 193, false }, // SettlDate2
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

static struct _ofixGroupSpec	MassQuoteGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	MassQuoteGroup555 = {
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

static struct _ofixGroupSpec	MassQuoteGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	MassQuoteGroups[] = {
    &MassQuoteGroup627,
    &MassQuoteGroup453,
    &MassQuoteGroup802,
    &MassQuoteGroup296,
    &MassQuoteGroup457,
    &MassQuoteGroup887,
    &MassQuoteGroup295,
    &MassQuoteGroup454,
    &MassQuoteGroup864,
    &MassQuoteGroup555,
    &MassQuoteGroup604,
    0
};

static struct _ofixMsgSpec	MassQuote = {
    &fix44Spec, // version
    105, // tid
    "i", // type
    "MassQuote", // name
    {0,33,0,0,0,0,0,0,1,2,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,8,9,0,39,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,29,0,0,0,0,22,0,0,0,0,0,7,17,0,28,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,37,0,38,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 131, false }, // QuoteReqID
	{ 117, true }, // QuoteID
	{ 537, false }, // QuoteType
	{ 301, false }, // QuoteResponseLevel
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
    &fix44Spec, // version
    106, // tid
    "j", // type
    "BusinessMessageReject", // name
    {0,0,0,0,0,0,0,0,1,2,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,28,0,0,0,4,11,0,21,0,0,0,5,13,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,8,9,0,35,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,29,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
    &fix44Spec, // version
    107, // tid
    "k", // type
    "BidRequest", // name
    {0,0,0,0,0,0,0,0,1,2,59,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,58,8,9,0,57,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,48,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,55,56,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,31,32,33,34,36,37,38,0,0,0,0,0,0,0,0,0,0,40,41,42,43,44,45,46,47,49,51,52,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 390, false }, // BidID
	{ 391, true }, // ClientBidID
	{ 374, true }, // BidRequestTransType
	{ 392, false }, // ListName
	{ 393, true }, // TotNoRelatedSym
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
	{ 418, true }, // BidTradeType
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
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
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
    &fix44Spec, // version
    108, // tid
    "l", // type
    "BidResponse", // name
    {0,0,0,0,0,0,0,0,1,2,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,8,9,0,31,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	ListStrikePriceGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ListStrikePriceGroup711 = {
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

static struct _ofixGroupSpec	ListStrikePriceGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	ListStrikePriceGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	ListStrikePriceGroups[] = {
    &ListStrikePriceGroup627,
    &ListStrikePriceGroup428,
    &ListStrikePriceGroup454,
    &ListStrikePriceGroup864,
    &ListStrikePriceGroup711,
    &ListStrikePriceGroup457,
    &ListStrikePriceGroup887,
    0
};

static struct _ofixMsgSpec	ListStrikePrice = {
    &fix44Spec, // version
    109, // tid
    "m", // type
    "ListStrikePrice", // name
    {0,0,0,0,0,0,0,0,1,2,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,8,9,0,33,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 66, true }, // ListID
	{ 422, true }, // TotNoStrikes
	{ 893, false }, // LastFragment
	{ 428, true }, // NoStrikes
	{ 711, false }, // NoUnderlyings
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup473 = {
    473, // NoRegistDtls
    {
	{ 509, false }, // RegistDtls
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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
    &RegistrationInstructionsGroup802,
    &RegistrationInstructionsGroup473,
    &RegistrationInstructionsGroup539,
    &RegistrationInstructionsGroup804,
    &RegistrationInstructionsGroup510,
    0
};

static struct _ofixMsgSpec	RegistrationInstructions = {
    &fix44Spec, // version
    111, // tid
    "o", // type
    "RegistrationInstructions", // name
    {0,33,0,0,0,0,0,0,1,2,42,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,36,0,0,0,0,0,0,0,0,0,0,0,0,30,0,39,0,0,28,29,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 513, true }, // RegistID
	{ 514, true }, // RegistTransType
	{ 508, true }, // RegistRefID
	{ 11, false }, // ClOrdID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	RegistrationInstructionsResponseGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static ofixGroupSpec	RegistrationInstructionsResponseGroups[] = {
    &RegistrationInstructionsResponseGroup627,
    &RegistrationInstructionsResponseGroup453,
    &RegistrationInstructionsResponseGroup802,
    0
};

static struct _ofixMsgSpec	RegistrationInstructionsResponse = {
    &fix44Spec, // version
    112, // tid
    "p", // type
    "RegistrationInstructionsResponse", // name
    {0,33,0,0,0,0,0,0,1,2,40,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,8,9,0,38,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,35,36,30,0,0,0,0,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 513, true }, // RegistID
	{ 514, true }, // RegistTransType
	{ 508, true }, // RegistRefID
	{ 11, false }, // ClOrdID
	{ 453, false }, // NoPartyIDs
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
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

static struct _ofixGroupSpec	OrderMassCancelRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
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

static struct _ofixGroupSpec	OrderMassCancelRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassCancelRequestGroups[] = {
    &OrderMassCancelRequestGroup627,
    &OrderMassCancelRequestGroup454,
    &OrderMassCancelRequestGroup864,
    &OrderMassCancelRequestGroup457,
    &OrderMassCancelRequestGroup887,
    0
};

static struct _ofixMsgSpec	OrderMassCancelRequest = {
    &fix44Spec, // version
    113, // tid
    "q", // type
    "OrderMassCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,128,28,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,35,4,11,0,21,0,121,33,5,13,123,0,122,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,8,9,0,126,0,0,0,20,0,0,0,0,0,0,0,0,62,65,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,56,0,0,0,58,61,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,60,44,45,47,48,49,0,0,59,0,0,0,0,0,0,0,46,55,86,87,88,89,90,91,97,0,0,0,0,0,0,0,50,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,104,107,103,77,82,75,76,84,0,0,98,100,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,25,63,64,66,67,0,0,124,125,0,0,0,0,0,0,105,106,108,109,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,79,0,0,38,39,80,81,0,0,0,0,0,0,52,53,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,30,0,0,0,0,0,0,0,0,0,0,43,85,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,95,96,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,0,0,0,0,0,0,0,0,73,74,70,71,110,111,113,0,0,115,116,117,118,119,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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

static struct _ofixGroupSpec	OrderMassCancelReportGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
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

static struct _ofixGroupSpec	OrderMassCancelReportGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	OrderMassCancelReportGroups[] = {
    &OrderMassCancelReportGroup627,
    &OrderMassCancelReportGroup534,
    &OrderMassCancelReportGroup454,
    &OrderMassCancelReportGroup864,
    &OrderMassCancelReportGroup457,
    &OrderMassCancelReportGroup887,
    0
};

static struct _ofixMsgSpec	OrderMassCancelReport = {
    &fix44Spec, // version
    114, // tid
    "r", // type
    "OrderMassCancelReport", // name
    {0,0,0,0,0,0,0,0,1,2,134,28,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,10,3,0,30,0,0,0,0,0,19,0,0,0,0,41,4,11,0,21,0,127,39,5,13,129,0,128,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,133,8,9,0,132,0,0,0,20,0,0,0,0,0,0,0,0,68,71,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,48,0,62,0,0,0,64,67,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,66,50,51,53,54,55,0,0,65,0,0,0,0,0,0,0,52,61,92,93,94,95,96,97,103,0,0,0,0,0,0,0,56,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,110,113,109,83,88,81,82,90,0,0,104,106,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,25,69,70,72,73,0,0,130,131,0,0,0,0,0,0,111,112,114,115,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,108,107,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,0,85,0,0,44,45,86,87,0,0,0,0,0,0,58,59,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,32,33,34,35,36,0,0,0,0,0,0,49,91,57,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,101,102,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,89,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,0,79,80,76,77,116,117,119,0,0,121,122,123,124,125,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,0,0,0,0,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 75, false }, // TradeDate
	{ 1, false }, // Account
	{ 660, false }, // AcctIDSource
	{ 581, false }, // AccountType
	{ 589, false }, // DayBookingInst
	{ 590, false }, // BookingUnit
	{ 591, false }, // PreallocMethod
	{ 70, false }, // AllocID
	{ 78, false }, // NoAllocs
	{ 854, false }, // QtyType
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
	{ 775, false }, // BookingType
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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

static struct _ofixGroupSpec	NewOrderCrossGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup711 = {
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

static struct _ofixGroupSpec	NewOrderCrossGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	NewOrderCrossGroup555 = {
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

static struct _ofixGroupSpec	NewOrderCrossGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
    &NewOrderCrossGroup802,
    &NewOrderCrossGroup78,
    &NewOrderCrossGroup539,
    &NewOrderCrossGroup804,
    &NewOrderCrossGroup454,
    &NewOrderCrossGroup864,
    &NewOrderCrossGroup711,
    &NewOrderCrossGroup457,
    &NewOrderCrossGroup887,
    &NewOrderCrossGroup555,
    &NewOrderCrossGroup604,
    &NewOrderCrossGroup386,
    &NewOrderCrossGroup232,
    0
};

static struct _ofixMsgSpec	NewOrderCross = {
    &fix44Spec, // version
    115, // tid
    "s", // type
    "NewOrderCross", // name
    {0,0,0,0,0,0,0,0,1,2,139,0,0,0,0,107,0,0,79,0,0,78,35,109,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,89,0,0,19,91,0,0,0,34,4,11,0,21,0,0,32,5,13,0,111,87,0,0,76,77,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,138,8,9,0,137,0,0,0,20,0,92,82,0,0,0,0,0,61,64,0,0,80,81,0,0,86,6,15,110,0,0,0,0,22,0,0,0,114,0,7,17,0,0,0,0,0,0,0,0,0,0,85,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,55,0,0,0,57,60,0,0,116,117,23,24,0,0,0,0,93,0,94,95,96,59,43,44,46,47,48,0,0,58,88,0,0,101,102,0,0,45,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,62,63,65,66,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,108,0,0,0,0,0,0,0,0,0,83,0,123,124,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,115,0,0,0,0,113,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,37,38,0,0,0,0,0,0,0,0,51,52,53,0,0,0,0,0,0,0,133,134,0,0,0,0,0,0,0,0,0,0,0,0,136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,50,0,0,0,0,28,29,30,0,31,0,0,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,98,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,104,105,106,99,0,103,0,0,0,0,0,0,0,0,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,118,119,120,121,0,122,125,126,127,128,0,129,130,131,132,0,0,0,0,0,0,0,0,0,0,0,0,0,0,71,0,0,0,0,0,0,0,0,72,73,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 21, false }, // HandlInst
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
	{ 854, false }, // QtyType
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
	{ 775, false }, // BookingType
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup78 = {
    78, // NoAllocs
    {
	{ 79, false }, // AllocAccount
	{ 661, false }, // AllocAcctIDSource
	{ 736, false }, // AllocSettlCurrency
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
	{ 804, false }, // NoNestedPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup804 = {
    804, // NoNestedPartySubIDs
    {
	{ 545, false }, // NestedPartySubID
	{ 805, false }, // NestedPartySubIDType
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

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup711 = {
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

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup555 = {
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

static struct _ofixGroupSpec	CrossOrderCancelReplaceRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
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
    &CrossOrderCancelReplaceRequestGroup802,
    &CrossOrderCancelReplaceRequestGroup78,
    &CrossOrderCancelReplaceRequestGroup539,
    &CrossOrderCancelReplaceRequestGroup804,
    &CrossOrderCancelReplaceRequestGroup454,
    &CrossOrderCancelReplaceRequestGroup864,
    &CrossOrderCancelReplaceRequestGroup711,
    &CrossOrderCancelReplaceRequestGroup457,
    &CrossOrderCancelReplaceRequestGroup887,
    &CrossOrderCancelReplaceRequestGroup555,
    &CrossOrderCancelReplaceRequestGroup604,
    &CrossOrderCancelReplaceRequestGroup386,
    &CrossOrderCancelReplaceRequestGroup232,
    0
};

static struct _ofixMsgSpec	CrossOrderCancelReplaceRequest = {
    &fix44Spec, // version
    116, // tid
    "t", // type
    "CrossOrderCancelReplaceRequest", // name
    {0,0,0,0,0,0,0,0,1,2,141,0,0,0,0,109,0,0,81,0,0,80,37,111,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,0,91,0,0,19,93,0,0,0,36,4,11,0,21,0,0,34,5,13,0,113,89,0,0,78,79,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,140,8,9,0,139,0,0,0,20,0,94,84,0,0,0,0,0,63,66,0,0,82,83,0,0,88,6,15,112,0,0,0,0,22,0,0,0,116,0,7,17,0,0,0,0,0,0,0,0,0,0,87,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,114,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,59,62,0,0,118,119,23,24,0,0,0,0,95,0,96,97,98,61,45,46,48,49,50,0,0,60,90,0,0,103,104,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,64,65,67,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,110,0,0,0,0,0,0,0,0,0,85,0,125,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,92,0,0,0,117,0,0,0,0,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,135,136,0,0,0,0,0,0,0,0,0,0,0,0,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,137,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,29,31,32,30,33,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,100,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,106,107,108,101,0,105,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,102,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,121,122,123,0,124,127,128,129,130,0,131,132,133,134,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,74,75,71,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 63, false }, // SettlType
	{ 64, false }, // SettlDate
	{ 21, false }, // HandlInst
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
	{ 41, true }, // OrigClOrdID
	{ 11, true }, // ClOrdID
	{ 526, false }, // SecondaryClOrdID
	{ 583, false }, // ClOrdLinkID
	{ 586, false }, // OrigOrdModTime
	{ 453, false }, // NoPartyIDs
	{ 229, false }, // TradeOriginationDate
	{ 75, false }, // TradeDate
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
	{ 802, false }, // NoPartySubIDs
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup802 = {
    802, // NoPartySubIDs
    {
	{ 523, false }, // PartySubID
	{ 803, false }, // PartySubIDType
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

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup711 = {
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

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup555 = {
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

static struct _ofixGroupSpec	CrossOrderCancelRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	CrossOrderCancelRequestGroups[] = {
    &CrossOrderCancelRequestGroup627,
    &CrossOrderCancelRequestGroup552,
    &CrossOrderCancelRequestGroup453,
    &CrossOrderCancelRequestGroup802,
    &CrossOrderCancelRequestGroup454,
    &CrossOrderCancelRequestGroup864,
    &CrossOrderCancelRequestGroup711,
    &CrossOrderCancelRequestGroup457,
    &CrossOrderCancelRequestGroup887,
    &CrossOrderCancelRequestGroup555,
    &CrossOrderCancelRequestGroup604,
    0
};

static struct _ofixMsgSpec	CrossOrderCancelRequest = {
    &fix44Spec, // version
    117, // tid
    "u", // type
    "CrossOrderCancelRequest", // name
    {0,0,0,0,0,0,0,0,1,2,81,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,10,3,0,28,0,0,0,0,0,19,0,0,0,0,36,4,11,0,21,0,0,34,5,13,0,0,78,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,8,9,0,79,0,0,0,20,0,0,0,0,0,0,0,0,63,66,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,57,0,0,0,59,62,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,61,45,46,48,49,50,0,0,60,0,0,0,0,0,0,0,47,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,64,65,67,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,39,40,0,0,0,0,0,0,0,0,53,54,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,0,52,0,0,0,0,29,31,32,30,33,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,0,0,0,0,0,0,74,75,71,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
    &fix44Spec, // version
    118, // tid
    "v", // type
    "SecurityTypeRequest", // name
    {0,0,0,0,0,0,0,0,1,2,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,8,9,0,37,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 320, true }, // SecurityReqID
	{ 58, false }, // Text
	{ 354, false }, // EncodedTextLen
	{ 355, false }, // EncodedText
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 460, false }, // Product
	{ 167, false }, // SecurityType
	{ 762, false }, // SecuritySubType
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
	{ 762, false }, // SecuritySubType
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
    &fix44Spec, // version
    119, // tid
    "w", // type
    "SecurityTypes", // name
    {0,0,0,0,0,0,0,0,1,2,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,8,9,0,40,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,29,30,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 320, true }, // SecurityReqID
	{ 322, true }, // SecurityResponseID
	{ 323, true }, // SecurityResponseType
	{ 557, false }, // TotNoSecurityTypes
	{ 893, false }, // LastFragment
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

static struct _ofixGroupSpec	SecurityListRequestGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListRequestGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListRequestGroup711 = {
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

static struct _ofixGroupSpec	SecurityListRequestGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListRequestGroup555 = {
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

static struct _ofixGroupSpec	SecurityListRequestGroup604 = {
    604, // NoLegSecurityAltID
    {
	{ 605, false }, // LegSecurityAltID
	{ 606, false }, // LegSecurityAltIDSource
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityListRequestGroups[] = {
    &SecurityListRequestGroup627,
    &SecurityListRequestGroup454,
    &SecurityListRequestGroup864,
    &SecurityListRequestGroup870,
    &SecurityListRequestGroup711,
    &SecurityListRequestGroup457,
    &SecurityListRequestGroup887,
    &SecurityListRequestGroup555,
    &SecurityListRequestGroup604,
    0
};

static struct _ofixMsgSpec	SecurityListRequest = {
    &fix44Spec, // version
    120, // tid
    "x", // type
    "SecurityListRequest", // name
    {0,0,0,0,0,0,0,0,1,2,95,0,0,0,0,86,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,32,4,11,0,21,0,0,30,5,13,87,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,8,9,0,93,0,0,0,20,0,0,0,0,0,0,0,0,59,62,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,0,53,0,0,0,55,58,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,57,41,42,44,45,46,0,0,56,0,0,0,0,0,0,0,43,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,25,60,61,63,64,0,0,88,89,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,0,35,36,0,0,0,0,0,0,0,0,49,50,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,48,0,0,0,0,0,0,0,0,0,0,0,85,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,91,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,72,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,73,74,0,0,70,71,67,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,76,77,80,81,78,82,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 15, false }, // Currency
	{ 232, false }, // NoStipulations
	{ 555, false }, // NoLegs
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
	{ 561, false }, // RoundLot
	{ 562, false }, // MinTradeVol
	{ 336, false }, // TradingSessionID
	{ 625, false }, // TradingSessionSubID
	{ 827, false }, // ExpirationCycle
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

static struct _ofixGroupSpec	SecurityListGroup864 = {
    864, // NoEvents
    {
	{ 865, false }, // EventType
	{ 866, false }, // EventDate
	{ 867, false }, // EventPx
	{ 868, false }, // EventText
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup870 = {
    870, // NoInstrAttrib
    {
	{ 871, false }, // InstrAttribType
	{ 872, false }, // InstrAttribValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup711 = {
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

static struct _ofixGroupSpec	SecurityListGroup457 = {
    457, // NoUnderlyingSecurityAltID
    {
	{ 458, false }, // UnderlyingSecurityAltID
	{ 459, false }, // UnderlyingSecurityAltIDSource
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup232 = {
    232, // NoStipulations
    {
	{ 233, false }, // StipulationType
	{ 234, false }, // StipulationValue
	{ 0, false }
    }
};

static struct _ofixGroupSpec	SecurityListGroup555 = {
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
	{ 690, false }, // LegSwapType
	{ 587, false }, // LegSettlType
	{ 683, false }, // NoLegStipulations
	{ 676, false }, // LegBenchmarkCurveCurrency
	{ 677, false }, // LegBenchmarkCurveName
	{ 678, false }, // LegBenchmarkCurvePoint
	{ 679, false }, // LegBenchmarkPrice
	{ 680, false }, // LegBenchmarkPriceType
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

static struct _ofixGroupSpec	SecurityListGroup683 = {
    683, // NoLegStipulations
    {
	{ 688, false }, // LegStipulationType
	{ 689, false }, // LegStipulationValue
	{ 0, false }
    }
};

static ofixGroupSpec	SecurityListGroups[] = {
    &SecurityListGroup627,
    &SecurityListGroup146,
    &SecurityListGroup454,
    &SecurityListGroup864,
    &SecurityListGroup870,
    &SecurityListGroup711,
    &SecurityListGroup457,
    &SecurityListGroup887,
    &SecurityListGroup232,
    &SecurityListGroup555,
    &SecurityListGroup604,
    &SecurityListGroup683,
    0
};

static struct _ofixMsgSpec	SecurityList = {
    &fix44Spec, // version
    121, // tid
    "y", // type
    "SecurityList", // name
    {0,0,0,0,0,0,0,0,1,2,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,8,9,0,34,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 627, false }, // NoHops
	{ 320, true }, // SecurityReqID
	{ 322, true }, // SecurityResponseID
	{ 560, true }, // SecurityRequestResult
	{ 393, false }, // TotNoRelatedSym
	{ 893, false }, // LastFragment
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

static struct _ofixGroupSpec	DerivativeSecurityListRequestGroup887 = {
    887, // NoUnderlyingStips
    {
	{ 888, false }, // UnderlyingStipType
	{ 889, false }, // UnderlyingStipValue
	{ 0, false }
    }
};

static ofixGroupSpec	DerivativeSecurityListRequestGroups[] = {
    &DerivativeSecurityListRequestGroup627,
    &DerivativeSecurityListRequestGroup457,
    &DerivativeSecurityListRequestGroup887,
    0
};

static struct _ofixMsgSpec	DerivativeSecurityListRequest = {
    &fix44Spec, // version
    122, // tid
    "z", // type
    "DerivativeSecurityListRequest", // name
    {0,0,0,0,0,0,0,0,1,2,86,0,0,0,0,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,19,0,0,0,0,0,4,11,0,21,0,0,0,5,13,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,8,9,0,84,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,22,0,0,0,0,0,7,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,42,43,44,45,46,52,0,0,0,0,0,0,0,0,47,0,0,0,0,0,0,83,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,59,62,58,32,37,30,31,39,0,0,53,55,67,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,81,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,79,80,0,0,0,0,0,0,60,61,63,64,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,0,35,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,50,51,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,0,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,66,68,0,0,70,71,72,73,74,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
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
	{ 762, false }, // SecuritySubType
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



// FIX Version 4.4
struct _ofixVersionSpec	fix44Spec = {
    4, // majorVersion
    4, // minorVersion
    "FIX.4.4", // id
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
	&QuoteResponse,
	&Confirmation,
	&PositionMaintenanceRequest,
	&PositionMaintenanceReport,
	&RequestForPositions,
	&RequestForPositionsAck,
	&PositionReport,
	&TradeCaptureReportRequestAck,
	&TradeCaptureReportAck,
	&AllocationReport,
	&AllocationReportAck,
	&ConfirmationAck,
	&SettlementInstructionRequest,
	&AssignmentReport,
	&CollateralRequest,
	&CollateralAssignment,
	&CollateralResponse,
	&News,
	&CollateralReport,
	&CollateralInquiry,
	&NetworkStatusRequest,
	&NetworkStatusResponse,
	&UserRequest,
	&UserResponse,
	&CollateralInquiryAck,
	&ConfirmationRequest,
	&Email,
	&NewOrderSingle,
	&NewOrderList,
	&OrderCancelRequest,
	&OrderCancelReplaceRequest,
	&OrderStatusRequest,
	&AllocationInstruction,
	&ListCancelRequest,
	&ListExecute,
	&ListStatusRequest,
	&ListStatus,
	&AllocationInstructionAck,
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