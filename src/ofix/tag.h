// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_TAG_H__
#define __OFIX_TAG_H__

#define OFIX_AccountTAG					1
#define OFIX_AdvIdTAG					2
#define OFIX_AdvRefIDTAG				3
#define OFIX_AdvSideTAG					4
#define OFIX_AdvTransTypeTAG				5
#define OFIX_AvgPxTAG					6
#define OFIX_BeginSeqNoTAG				7
#define OFIX_BeginStringTAG				8
#define OFIX_BodyLengthTAG				9
#define OFIX_CheckSumTAG				10
#define OFIX_ClOrdIDTAG					11
#define OFIX_CommissionTAG				12
#define OFIX_CommTypeTAG				13
#define OFIX_CumQtyTAG					14
#define OFIX_CurrencyTAG				15
#define OFIX_EndSeqNoTAG				16
#define OFIX_ExecIDTAG					17
#define OFIX_ExecInstTAG				18
#define OFIX_ExecRefIDTAG				19
#define OFIX_ExecTransTypeTAG				20
#define OFIX_HandlInstTAG				21
#define OFIX_IDSourceTAG				22
#define OFIX_SecurityIDSourceTAG			22
#define OFIX_IOIidTAG					23
#define OFIX_IOIOthSvcTAG				24
#define OFIX_IOIQltyIndTAG				25
#define OFIX_IOIRefIDTAG				26
#define OFIX_IOIQtyTAG					27
#define OFIX_IOISharesTAG				27
#define OFIX_IOITransTypeTAG				28
#define OFIX_LastCapacityTAG				29
#define OFIX_LastMktTAG					30
#define OFIX_LastPxTAG					31
#define OFIX_LastQtyTAG					32
#define OFIX_LastSharesTAG				32
#define OFIX_LinesOfTextTAG				33
#define OFIX_MsgSeqNumTAG				34
#define OFIX_MsgTypeTAG					35
#define OFIX_NewSeqNoTAG				36
#define OFIX_OrderIDTAG					37
#define OFIX_OrderQtyTAG				38
#define OFIX_OrdStatusTAG				39
#define OFIX_OrdTypeTAG					40
#define OFIX_OrigClOrdIDTAG				41
#define OFIX_OrigTimeTAG				42
#define OFIX_PossDupFlagTAG				43
#define OFIX_PriceTAG					44
#define OFIX_RefSeqNumTAG				45
#define OFIX_RelatdSymTAG				46
#define OFIX_Rule80ATAG					47
#define OFIX_SecurityIDTAG				48
#define OFIX_SenderCompIDTAG				49
#define OFIX_SenderSubIDTAG				50
#define OFIX_SendingDateTAG				51
#define OFIX_SendingTimeTAG				52
#define OFIX_QuantityTAG				53
#define OFIX_SharesTAG					53
#define OFIX_SideTAG					54
#define OFIX_SymbolTAG					55
#define OFIX_TargetCompIDTAG				56
#define OFIX_TargetSubIDTAG				57
#define OFIX_TextTAG					58
#define OFIX_TimeInForceTAG				59
#define OFIX_TransactTimeTAG				60
#define OFIX_UrgencyTAG					61
#define OFIX_ValidUntilTimeTAG				62
#define OFIX_SettlTypeTAG				63
#define OFIX_SettlmntTypTAG				63
#define OFIX_FutSettDateTAG				64
#define OFIX_SettlDateTAG				64
#define OFIX_SymbolSfxTAG				65
#define OFIX_ListIDTAG					66
#define OFIX_ListSeqNoTAG				67
#define OFIX_ListNoOrdsTAG				68
#define OFIX_TotNoOrdersTAG				68
#define OFIX_ListExecInstTAG				69
#define OFIX_AllocIDTAG					70
#define OFIX_AllocTransTypeTAG				71
#define OFIX_RefAllocIDTAG				72
#define OFIX_NoOrdersTAG				73
#define OFIX_AvgPrxPrecisionTAG				74
#define OFIX_AvgPxPrecisionTAG				74
#define OFIX_TradeDateTAG				75
#define OFIX_ExecBrokerTAG				76
#define OFIX_OpenCloseTAG				77
#define OFIX_PositionEffectTAG				77
#define OFIX_NoAllocsTAG				78
#define OFIX_AllocAccountTAG				79
#define OFIX_AllocQtyTAG				80
#define OFIX_AllocSharesTAG				80
#define OFIX_ProcessCodeTAG				81
#define OFIX_NoRptsTAG					82
#define OFIX_RptSeqTAG					83
#define OFIX_CxlQtyTAG					84
#define OFIX_NoDlvyInstTAG				85
#define OFIX_DlvyInstTAG				86
#define OFIX_AllocStatusTAG				87
#define OFIX_AllocRejCodeTAG				88
#define OFIX_SignatureTAG				89
#define OFIX_SecureDataLenTAG				90
#define OFIX_SecureDataTAG				91
#define OFIX_BrokerOfCreditTAG				92
#define OFIX_SignatureLengthTAG				93
#define OFIX_EmailTypeTAG				94
#define OFIX_RawDataLengthTAG				95
#define OFIX_RawDataTAG					96
#define OFIX_PossResendTAG				97
#define OFIX_EncryptMethodTAG				98
#define OFIX_StopPxTAG					99
#define OFIX_ExDestinationTAG				100
#define OFIX_CxlRejReasonTAG				102
#define OFIX_OrdRejReasonTAG				103
#define OFIX_IOIQualifierTAG				104
#define OFIX_WaveNoTAG					105
#define OFIX_IssuerTAG					106
#define OFIX_SecurityDescTAG				107
#define OFIX_HeartBtIntTAG				108
#define OFIX_ClientIDTAG				109
#define OFIX_MinQtyTAG					110
#define OFIX_MaxFloorTAG				111
#define OFIX_TestReqIDTAG				112
#define OFIX_ReportToExchTAG				113
#define OFIX_LocateReqdTAG				114
#define OFIX_OnBehalfOfCompIDTAG			115
#define OFIX_OnBehalfOfSubIDTAG				116
#define OFIX_QuoteIDTAG					117
#define OFIX_NetMoneyTAG				118
#define OFIX_SettlCurrAmtTAG				119
#define OFIX_SettlCurrencyTAG				120
#define OFIX_ForexReqTAG				121
#define OFIX_OrigSendingTimeTAG				122
#define OFIX_GapFillFlagTAG				123
#define OFIX_NoExecsTAG					124
#define OFIX_CxlTypeTAG					125
#define OFIX_ExpireTimeTAG				126
#define OFIX_DKReasonTAG				127
#define OFIX_DeliverToCompIDTAG				128
#define OFIX_DeliverToSubIDTAG				129
#define OFIX_IOINaturalFlagTAG				130
#define OFIX_QuoteReqIDTAG				131
#define OFIX_BidPxTAG					132
#define OFIX_OfferPxTAG					133
#define OFIX_BidSizeTAG					134
#define OFIX_OfferSizeTAG				135
#define OFIX_NoMiscFeesTAG				136
#define OFIX_MiscFeeAmtTAG				137
#define OFIX_MiscFeeCurrTAG				138
#define OFIX_MiscFeeTypeTAG				139
#define OFIX_PrevClosePxTAG				140
#define OFIX_ResetSeqNumFlagTAG				141
#define OFIX_SenderLocationIDTAG			142
#define OFIX_TargetLocationIDTAG			143
#define OFIX_OnBehalfOfLocationIDTAG			144
#define OFIX_DeliverToLocationIDTAG			145
#define OFIX_NoRelatedSymTAG				146
#define OFIX_SubjectTAG					147
#define OFIX_HeadlineTAG				148
#define OFIX_URLLinkTAG					149
#define OFIX_ExecTypeTAG				150
#define OFIX_LeavesQtyTAG				151
#define OFIX_CashOrderQtyTAG				152
#define OFIX_AllocAvgPxTAG				153
#define OFIX_AllocNetMoneyTAG				154
#define OFIX_SettlCurrFxRateTAG				155
#define OFIX_SettlCurrFxRateCalcTAG			156
#define OFIX_NumDaysInterestTAG				157
#define OFIX_AccruedInterestRateTAG			158
#define OFIX_AccruedInterestAmtTAG			159
#define OFIX_SettlInstModeTAG				160
#define OFIX_AllocTextTAG				161
#define OFIX_SettlInstIDTAG				162
#define OFIX_SettlInstTransTypeTAG			163
#define OFIX_EmailThreadIDTAG				164
#define OFIX_SettlInstSourceTAG				165
#define OFIX_SettlLocationTAG				166
#define OFIX_SecurityTypeTAG				167
#define OFIX_EffectiveTimeTAG				168
#define OFIX_StandInstDbTypeTAG				169
#define OFIX_StandInstDbNameTAG				170
#define OFIX_StandInstDbIDTAG				171
#define OFIX_SettlDeliveryTypeTAG			172
#define OFIX_SettlDepositoryCodeTAG			173
#define OFIX_SettlBrkrCodeTAG				174
#define OFIX_SettlInstCodeTAG				175
#define OFIX_SecuritySettlAgentNameTAG			176
#define OFIX_SecuritySettlAgentCodeTAG			177
#define OFIX_SecuritySettlAgentAcctNumTAG		178
#define OFIX_SecuritySettlAgentAcctNameTAG		179
#define OFIX_SecuritySettlAgentContactNameTAG		180
#define OFIX_SecuritySettlAgentContactPhoneTAG		181
#define OFIX_CashSettlAgentNameTAG			182
#define OFIX_CashSettlAgentCodeTAG			183
#define OFIX_CashSettlAgentAcctNumTAG			184
#define OFIX_CashSettlAgentAcctNameTAG			185
#define OFIX_CashSettlAgentContactNameTAG		186
#define OFIX_CashSettlAgentContactPhoneTAG		187
#define OFIX_BidSpotRateTAG				188
#define OFIX_BidForwardPointsTAG			189
#define OFIX_OfferSpotRateTAG				190
#define OFIX_OfferForwardPointsTAG			191
#define OFIX_OrderQty2TAG				192
#define OFIX_FutSettDate2TAG				193
#define OFIX_SettlDate2TAG				193
#define OFIX_LastSpotRateTAG				194
#define OFIX_LastForwardPointsTAG			195
#define OFIX_AllocLinkIDTAG				196
#define OFIX_AllocLinkTypeTAG				197
#define OFIX_SecondaryOrderIDTAG			198
#define OFIX_NoIOIQualifiersTAG				199
#define OFIX_MaturityMonthYearTAG			200
#define OFIX_PutOrCallTAG				201
#define OFIX_StrikePriceTAG				202
#define OFIX_CoveredOrUncoveredTAG			203
#define OFIX_CustomerOrFirmTAG				204
#define OFIX_MaturityDayTAG				205
#define OFIX_OptAttributeTAG				206
#define OFIX_SecurityExchangeTAG			207
#define OFIX_NotifyBrokerOfCreditTAG			208
#define OFIX_AllocHandlInstTAG				209
#define OFIX_MaxShowTAG					210
#define OFIX_PegDifferenceTAG				211
#define OFIX_PegOffsetValueTAG				211
#define OFIX_XmlDataLenTAG				212
#define OFIX_XmlDataTAG					213
#define OFIX_SettlInstRefIDTAG				214
#define OFIX_NoRoutingIDsTAG				215
#define OFIX_RoutingTypeTAG				216
#define OFIX_RoutingIDTAG				217
#define OFIX_SpreadTAG					218
#define OFIX_SpreadToBenchmarkTAG			218
#define OFIX_BenchmarkTAG				219
#define OFIX_BenchmarkCurveCurrencyTAG			220
#define OFIX_BenchmarkCurveNameTAG			221
#define OFIX_BenchmarkCurvePointTAG			222
#define OFIX_CouponRateTAG				223
#define OFIX_CouponPaymentDateTAG			224
#define OFIX_IssueDateTAG				225
#define OFIX_RepurchaseTermTAG				226
#define OFIX_RepurchaseRateTAG				227
#define OFIX_FactorTAG					228
#define OFIX_TradeOriginationDateTAG			229
#define OFIX_ExDateTAG					230
#define OFIX_ContractMultiplierTAG			231
#define OFIX_NoStipulationsTAG				232
#define OFIX_StipulationTypeTAG				233
#define OFIX_StipulationValueTAG			234
#define OFIX_YieldTypeTAG				235
#define OFIX_YieldTAG					236
#define OFIX_TotalTakedownTAG				237
#define OFIX_ConcessionTAG				238
#define OFIX_RepoCollateralSecurityTypeTAG		239
#define OFIX_RedemptionDateTAG				240
#define OFIX_UnderlyingCouponPaymentDateTAG		241
#define OFIX_UnderlyingIssueDateTAG			242
#define OFIX_UnderlyingRepoCollateralSecurityTypeTAG	243
#define OFIX_UnderlyingRepurchaseTermTAG		244
#define OFIX_UnderlyingRepurchaseRateTAG		245
#define OFIX_UnderlyingFactorTAG			246
#define OFIX_UnderlyingRedemptionDateTAG		247
#define OFIX_LegCouponPaymentDateTAG			248
#define OFIX_LegIssueDateTAG				249
#define OFIX_LegRepoCollateralSecurityTypeTAG		250
#define OFIX_LegRepurchaseTermTAG			251
#define OFIX_LegRepurchaseRateTAG			252
#define OFIX_LegFactorTAG				253
#define OFIX_LegRedemptionDateTAG			254
#define OFIX_CreditRatingTAG				255
#define OFIX_UnderlyingCreditRatingTAG			256
#define OFIX_LegCreditRatingTAG				257
#define OFIX_TradedFlatSwitchTAG			258
#define OFIX_BasisFeatureDateTAG			259
#define OFIX_BasisFeaturePriceTAG			260
#define OFIX_MDReqIDTAG					262
#define OFIX_SubscriptionRequestTypeTAG			263
#define OFIX_MarketDepthTAG				264
#define OFIX_MDUpdateTypeTAG				265
#define OFIX_AggregatedBookTAG				266
#define OFIX_NoMDEntryTypesTAG				267
#define OFIX_NoMDEntriesTAG				268
#define OFIX_MDEntryTypeTAG				269
#define OFIX_MDEntryPxTAG				270
#define OFIX_MDEntrySizeTAG				271
#define OFIX_MDEntryDateTAG				272
#define OFIX_MDEntryTimeTAG				273
#define OFIX_TickDirectionTAG				274
#define OFIX_MDMktTAG					275
#define OFIX_QuoteConditionTAG				276
#define OFIX_TradeConditionTAG				277
#define OFIX_MDEntryIDTAG				278
#define OFIX_MDUpdateActionTAG				279
#define OFIX_MDEntryRefIDTAG				280
#define OFIX_MDReqRejReasonTAG				281
#define OFIX_MDEntryOriginatorTAG			282
#define OFIX_LocationIDTAG				283
#define OFIX_DeskIDTAG					284
#define OFIX_DeleteReasonTAG				285
#define OFIX_OpenCloseSettlFlagTAG			286
#define OFIX_OpenCloseSettleFlagTAG			286
#define OFIX_SellerDaysTAG				287
#define OFIX_MDEntryBuyerTAG				288
#define OFIX_MDEntrySellerTAG				289
#define OFIX_MDEntryPositionNoTAG			290
#define OFIX_FinancialStatusTAG				291
#define OFIX_CorporateActionTAG				292
#define OFIX_DefBidSizeTAG				293
#define OFIX_DefOfferSizeTAG				294
#define OFIX_NoQuoteEntriesTAG				295
#define OFIX_NoQuoteSetsTAG				296
#define OFIX_QuoteAckStatusTAG				297
#define OFIX_QuoteStatusTAG				297
#define OFIX_QuoteCancelTypeTAG				298
#define OFIX_QuoteEntryIDTAG				299
#define OFIX_QuoteRejectReasonTAG			300
#define OFIX_QuoteResponseLevelTAG			301
#define OFIX_QuoteSetIDTAG				302
#define OFIX_QuoteRequestTypeTAG			303
#define OFIX_TotNoQuoteEntriesTAG			304
#define OFIX_TotQuoteEntriesTAG				304
#define OFIX_UnderlyingIDSourceTAG			305
#define OFIX_UnderlyingSecurityIDSourceTAG		305
#define OFIX_UnderlyingIssuerTAG			306
#define OFIX_UnderlyingSecurityDescTAG			307
#define OFIX_UnderlyingSecurityExchangeTAG		308
#define OFIX_UnderlyingSecurityIDTAG			309
#define OFIX_UnderlyingSecurityTypeTAG			310
#define OFIX_UnderlyingSymbolTAG			311
#define OFIX_UnderlyingSymbolSfxTAG			312
#define OFIX_UnderlyingMaturityMonthYearTAG		313
#define OFIX_UnderlyingMaturityDayTAG			314
#define OFIX_UnderlyingPutOrCallTAG			315
#define OFIX_UnderlyingStrikePriceTAG			316
#define OFIX_UnderlyingOptAttributeTAG			317
#define OFIX_UnderlyingCurrencyTAG			318
#define OFIX_RatioQtyTAG				319
#define OFIX_SecurityReqIDTAG				320
#define OFIX_SecurityRequestTypeTAG			321
#define OFIX_SecurityResponseIDTAG			322
#define OFIX_SecurityResponseTypeTAG			323
#define OFIX_SecurityStatusReqIDTAG			324
#define OFIX_UnsolicitedIndicatorTAG			325
#define OFIX_SecurityTradingStatusTAG			326
#define OFIX_HaltReasonTAG				327
#define OFIX_InViewOfCommonTAG				328
#define OFIX_DueToRelatedTAG				329
#define OFIX_BuyVolumeTAG				330
#define OFIX_SellVolumeTAG				331
#define OFIX_HighPxTAG					332
#define OFIX_LowPxTAG					333
#define OFIX_AdjustmentTAG				334
#define OFIX_TradSesReqIDTAG				335
#define OFIX_TradingSessionIDTAG			336
#define OFIX_ContraTraderTAG				337
#define OFIX_TradSesMethodTAG				338
#define OFIX_TradSesModeTAG				339
#define OFIX_TradSesStatusTAG				340
#define OFIX_TradSesStartTimeTAG			341
#define OFIX_TradSesOpenTimeTAG				342
#define OFIX_TradSesPreCloseTimeTAG			343
#define OFIX_TradSesCloseTimeTAG			344
#define OFIX_TradSesEndTimeTAG				345
#define OFIX_NumberOfOrdersTAG				346
#define OFIX_MessageEncodingTAG				347
#define OFIX_EncodedIssuerLenTAG			348
#define OFIX_EncodedIssuerTAG				349
#define OFIX_EncodedSecurityDescLenTAG			350
#define OFIX_EncodedSecurityDescTAG			351
#define OFIX_EncodedListExecInstLenTAG			352
#define OFIX_EncodedListExecInstTAG			353
#define OFIX_EncodedTextLenTAG				354
#define OFIX_EncodedTextTAG				355
#define OFIX_EncodedSubjectLenTAG			356
#define OFIX_EncodedSubjectTAG				357
#define OFIX_EncodedHeadlineLenTAG			358
#define OFIX_EncodedHeadlineTAG				359
#define OFIX_EncodedAllocTextLenTAG			360
#define OFIX_EncodedAllocTextTAG			361
#define OFIX_EncodedUnderlyingIssuerLenTAG		362
#define OFIX_EncodedUnderlyingIssuerTAG			363
#define OFIX_EncodedUnderlyingSecurityDescLenTAG	364
#define OFIX_EncodedUnderlyingSecurityDescTAG		365
#define OFIX_AllocPriceTAG				366
#define OFIX_QuoteSetValidUntilTimeTAG			367
#define OFIX_QuoteEntryRejectReasonTAG			368
#define OFIX_LastMsgSeqNumProcessedTAG			369
#define OFIX_OnBehalfOfSendingTimeTAG			370
#define OFIX_RefTagIDTAG				371
#define OFIX_RefMsgTypeTAG				372
#define OFIX_SessionRejectReasonTAG			373
#define OFIX_BidRequestTransTypeTAG			374
#define OFIX_ContraBrokerTAG				375
#define OFIX_ComplianceIDTAG				376
#define OFIX_SolicitedFlagTAG				377
#define OFIX_ExecRestatementReasonTAG			378
#define OFIX_BusinessRejectRefIDTAG			379
#define OFIX_BusinessRejectReasonTAG			380
#define OFIX_GrossTradeAmtTAG				381
#define OFIX_NoContraBrokersTAG				382
#define OFIX_MaxMessageSizeTAG				383
#define OFIX_NoMsgTypesTAG				384
#define OFIX_MsgDirectionTAG				385
#define OFIX_NoTradingSessionsTAG			386
#define OFIX_TotalVolumeTradedTAG			387
#define OFIX_DiscretionInstTAG				388
#define OFIX_DiscretionOffsetTAG			389
#define OFIX_DiscretionOffsetValueTAG			389
#define OFIX_BidIDTAG					390
#define OFIX_ClientBidIDTAG				391
#define OFIX_ListNameTAG				392
#define OFIX_TotNoRelatedSymTAG				393
#define OFIX_TotalNumSecuritiesTAG			393
#define OFIX_BidTypeTAG					394
#define OFIX_NumTicketsTAG				395
#define OFIX_SideValue1TAG				396
#define OFIX_SideValue2TAG				397
#define OFIX_NoBidDescriptorsTAG			398
#define OFIX_BidDescriptorTypeTAG			399
#define OFIX_BidDescriptorTAG				400
#define OFIX_SideValueIndTAG				401
#define OFIX_LiquidityPctLowTAG				402
#define OFIX_LiquidityPctHighTAG			403
#define OFIX_LiquidityValueTAG				404
#define OFIX_EFPTrackingErrorTAG			405
#define OFIX_FairValueTAG				406
#define OFIX_OutsideIndexPctTAG				407
#define OFIX_ValueOfFuturesTAG				408
#define OFIX_LiquidityIndTypeTAG			409
#define OFIX_WtAverageLiquidityTAG			410
#define OFIX_ExchangeForPhysicalTAG			411
#define OFIX_OutMainCntryUIndexTAG			412
#define OFIX_CrossPercentTAG				413
#define OFIX_ProgRptReqsTAG				414
#define OFIX_ProgPeriodIntervalTAG			415
#define OFIX_IncTaxIndTAG				416
#define OFIX_NumBiddersTAG				417
#define OFIX_BidTradeTypeTAG				418
#define OFIX_TradeTypeTAG				418
#define OFIX_BasisPxTypeTAG				419
#define OFIX_NoBidComponentsTAG				420
#define OFIX_CountryTAG					421
#define OFIX_TotNoStrikesTAG				422
#define OFIX_PriceTypeTAG				423
#define OFIX_DayOrderQtyTAG				424
#define OFIX_DayCumQtyTAG				425
#define OFIX_DayAvgPxTAG				426
#define OFIX_GTBookingInstTAG				427
#define OFIX_NoStrikesTAG				428
#define OFIX_ListStatusTypeTAG				429
#define OFIX_NetGrossIndTAG				430
#define OFIX_ListOrderStatusTAG				431
#define OFIX_ExpireDateTAG				432
#define OFIX_ListExecInstTypeTAG			433
#define OFIX_CxlRejResponseToTAG			434
#define OFIX_UnderlyingCouponRateTAG			435
#define OFIX_UnderlyingContractMultiplierTAG		436
#define OFIX_ContraTradeQtyTAG				437
#define OFIX_ContraTradeTimeTAG				438
#define OFIX_ClearingFirmTAG				439
#define OFIX_ClearingAccountTAG				440
#define OFIX_LiquidityNumSecuritiesTAG			441
#define OFIX_MultiLegReportingTypeTAG			442
#define OFIX_StrikeTimeTAG				443
#define OFIX_ListStatusTextTAG				444
#define OFIX_EncodedListStatusTextLenTAG		445
#define OFIX_EncodedListStatusTextTAG			446
#define OFIX_PartyIDSourceTAG				447
#define OFIX_PartyIDTAG					448
#define OFIX_TotalVolumeTradedDateTAG			449
#define OFIX_TotalVolumeTradedTimeTAG			450
#define OFIX_NetChgPrevDayTAG				451
#define OFIX_PartyRoleTAG				452
#define OFIX_NoPartyIDsTAG				453
#define OFIX_NoSecurityAltIDTAG				454
#define OFIX_SecurityAltIDTAG				455
#define OFIX_SecurityAltIDSourceTAG			456
#define OFIX_NoUnderlyingSecurityAltIDTAG		457
#define OFIX_UnderlyingSecurityAltIDTAG			458
#define OFIX_UnderlyingSecurityAltIDSourceTAG		459
#define OFIX_ProductTAG					460
#define OFIX_CFICodeTAG					461
#define OFIX_UnderlyingProductTAG			462
#define OFIX_UnderlyingCFICodeTAG			463
#define OFIX_TestMessageIndicatorTAG			464
#define OFIX_QuantityTypeTAG				465
#define OFIX_BookingRefIDTAG				466
#define OFIX_IndividualAllocIDTAG			467
#define OFIX_RoundingDirectionTAG			468
#define OFIX_RoundingModulusTAG				469
#define OFIX_CountryOfIssueTAG				470
#define OFIX_StateOrProvinceOfIssueTAG			471
#define OFIX_LocaleOfIssueTAG				472
#define OFIX_NoRegistDtlsTAG				473
#define OFIX_MailingDtlsTAG				474
#define OFIX_InvestorCountryOfResidenceTAG		475
#define OFIX_PaymentRefTAG				476
#define OFIX_DistribPaymentMethodTAG			477
#define OFIX_CashDistribCurrTAG				478
#define OFIX_CommCurrencyTAG				479
#define OFIX_CancellationRightsTAG			480
#define OFIX_MoneyLaunderingStatusTAG			481
#define OFIX_MailingInstTAG				482
#define OFIX_TransBkdTimeTAG				483
#define OFIX_ExecPriceTypeTAG				484
#define OFIX_ExecPriceAdjustmentTAG			485
#define OFIX_DateOfBirthTAG				486
#define OFIX_TradeReportTransTypeTAG			487
#define OFIX_CardHolderNameTAG				488
#define OFIX_CardNumberTAG				489
#define OFIX_CardExpDateTAG				490
#define OFIX_CardIssNoTAG				491
#define OFIX_CardIssNumTAG				491
#define OFIX_PaymentMethodTAG				492
#define OFIX_RegistAcctTypeTAG				493
#define OFIX_DesignationTAG				494
#define OFIX_TaxAdvantageTypeTAG			495
#define OFIX_RegistRejReasonTextTAG			496
#define OFIX_FundRenewWaivTAG				497
#define OFIX_CashDistribAgentNameTAG			498
#define OFIX_CashDistribAgentCodeTAG			499
#define OFIX_CashDistribAgentAcctNumberTAG		500
#define OFIX_CashDistribPayRefTAG			501
#define OFIX_CashDistribAgentAcctNameTAG		502
#define OFIX_CardStartDateTAG				503
#define OFIX_PaymentDateTAG				504
#define OFIX_PaymentRemitterIDTAG			505
#define OFIX_RegistStatusTAG				506
#define OFIX_RegistRejReasonCodeTAG			507
#define OFIX_RegistRefIDTAG				508
#define OFIX_RegistDetlsTAG				509
#define OFIX_RegistDtlsTAG				509
#define OFIX_NoDistribInstsTAG				510
#define OFIX_RegistEmailTAG				511
#define OFIX_DistribPercentageTAG			512
#define OFIX_RegistIDTAG				513
#define OFIX_RegistTransTypeTAG				514
#define OFIX_ExecValuationPointTAG			515
#define OFIX_OrderPercentTAG				516
#define OFIX_OwnershipTypeTAG				517
#define OFIX_NoContAmtsTAG				518
#define OFIX_ContAmtTypeTAG				519
#define OFIX_ContAmtValueTAG				520
#define OFIX_ContAmtCurrTAG				521
#define OFIX_OwnerTypeTAG				522
#define OFIX_PartySubIDTAG				523
#define OFIX_NestedPartyIDTAG				524
#define OFIX_NestedPartyIDSourceTAG			525
#define OFIX_SecondaryClOrdIDTAG			526
#define OFIX_SecondaryExecIDTAG				527
#define OFIX_OrderCapacityTAG				528
#define OFIX_OrderRestrictionsTAG			529
#define OFIX_MassCancelRequestTypeTAG			530
#define OFIX_MassCancelResponseTAG			531
#define OFIX_MassCancelRejectReasonTAG			532
#define OFIX_TotalAffectedOrdersTAG			533
#define OFIX_NoAffectedOrdersTAG			534
#define OFIX_AffectedOrderIDTAG				535
#define OFIX_AffectedSecondaryOrderIDTAG		536
#define OFIX_QuoteTypeTAG				537
#define OFIX_NestedPartyRoleTAG				538
#define OFIX_NoNestedPartyIDsTAG			539
#define OFIX_TotalAccruedInterestAmtTAG			540
#define OFIX_MaturityDateTAG				541
#define OFIX_UnderlyingMaturityDateTAG			542
#define OFIX_InstrRegistryTAG				543
#define OFIX_CashMarginTAG				544
#define OFIX_NestedPartySubIDTAG			545
#define OFIX_ScopeTAG					546
#define OFIX_MDImplicitDeleteTAG			547
#define OFIX_CrossIDTAG					548
#define OFIX_CrossTypeTAG				549
#define OFIX_CrossPrioritizationTAG			550
#define OFIX_OrigCrossIDTAG				551
#define OFIX_NoSidesTAG					552
#define OFIX_UsernameTAG				553
#define OFIX_PasswordTAG				554
#define OFIX_NoLegsTAG					555
#define OFIX_LegCurrencyTAG				556
#define OFIX_TotNoSecurityTypesTAG			557
#define OFIX_TotalNumSecurityTypesTAG			557
#define OFIX_NoSecurityTypesTAG				558
#define OFIX_SecurityListRequestTypeTAG			559
#define OFIX_SecurityRequestResultTAG			560
#define OFIX_RoundLotTAG				561
#define OFIX_MinTradeVolTAG				562
#define OFIX_MultiLegRptTypeReqTAG			563
#define OFIX_LegPositionEffectTAG			564
#define OFIX_LegCoveredOrUncoveredTAG			565
#define OFIX_LegPriceTAG				566
#define OFIX_TradSesStatusRejReasonTAG			567
#define OFIX_TradeRequestIDTAG				568
#define OFIX_TradeRequestTypeTAG			569
#define OFIX_PreviouslyReportedTAG			570
#define OFIX_TradeReportIDTAG				571
#define OFIX_TradeReportRefIDTAG			572
#define OFIX_MatchStatusTAG				573
#define OFIX_MatchTypeTAG				574
#define OFIX_OddLotTAG					575
#define OFIX_NoClearingInstructionsTAG			576
#define OFIX_ClearingInstructionTAG			577
#define OFIX_TradeInputSourceTAG			578
#define OFIX_TradeInputDeviceTAG			579
#define OFIX_NoDatesTAG					580
#define OFIX_AccountTypeTAG				581
#define OFIX_CustOrderCapacityTAG			582
#define OFIX_ClOrdLinkIDTAG				583
#define OFIX_MassStatusReqIDTAG				584
#define OFIX_MassStatusReqTypeTAG			585
#define OFIX_OrigOrdModTimeTAG				586
#define OFIX_LegSettlTypeTAG				587
#define OFIX_LegSettlmntTypTAG				587
#define OFIX_LegFutSettDateTAG				588
#define OFIX_LegSettlDateTAG				588
#define OFIX_DayBookingInstTAG				589
#define OFIX_BookingUnitTAG				590
#define OFIX_PreallocMethodTAG				591
#define OFIX_UnderlyingCountryOfIssueTAG		592
#define OFIX_UnderlyingStateOrProvinceOfIssueTAG	593
#define OFIX_UnderlyingLocaleOfIssueTAG			594
#define OFIX_UnderlyingInstrRegistryTAG			595
#define OFIX_LegCountryOfIssueTAG			596
#define OFIX_LegStateOrProvinceOfIssueTAG		597
#define OFIX_LegLocaleOfIssueTAG			598
#define OFIX_LegInstrRegistryTAG			599
#define OFIX_LegSymbolTAG				600
#define OFIX_LegSymbolSfxTAG				601
#define OFIX_LegSecurityIDTAG				602
#define OFIX_LegSecurityIDSourceTAG			603
#define OFIX_NoLegSecurityAltIDTAG			604
#define OFIX_LegSecurityAltIDTAG			605
#define OFIX_LegSecurityAltIDSourceTAG			606
#define OFIX_LegProductTAG				607
#define OFIX_LegCFICodeTAG				608
#define OFIX_LegSecurityTypeTAG				609
#define OFIX_LegMaturityMonthYearTAG			610
#define OFIX_LegMaturityDateTAG				611
#define OFIX_LegStrikePriceTAG				612
#define OFIX_LegOptAttributeTAG				613
#define OFIX_LegContractMultiplierTAG			614
#define OFIX_LegCouponRateTAG				615
#define OFIX_LegSecurityExchangeTAG			616
#define OFIX_LegIssuerTAG				617
#define OFIX_EncodedLegIssuerLenTAG			618
#define OFIX_EncodedLegIssuerTAG			619
#define OFIX_LegSecurityDescTAG				620
#define OFIX_EncodedLegSecurityDescLenTAG		621
#define OFIX_EncodedLegSecurityDescTAG			622
#define OFIX_LegRatioQtyTAG				623
#define OFIX_LegSideTAG					624
#define OFIX_TradingSessionSubIDTAG			625
#define OFIX_AllocTypeTAG				626
#define OFIX_NoHopsTAG					627
#define OFIX_HopCompIDTAG				628
#define OFIX_HopSendingTimeTAG				629
#define OFIX_HopRefIDTAG				630
#define OFIX_MidPxTAG					631
#define OFIX_BidYieldTAG				632
#define OFIX_MidYieldTAG				633
#define OFIX_OfferYieldTAG				634
#define OFIX_ClearingFeeIndicatorTAG			635
#define OFIX_WorkingIndicatorTAG			636
#define OFIX_LegLastPxTAG				637
#define OFIX_PriorityIndicatorTAG			638
#define OFIX_PriceImprovementTAG			639
#define OFIX_Price2TAG					640
#define OFIX_LastForwardPoints2TAG			641
#define OFIX_BidForwardPoints2TAG			642
#define OFIX_OfferForwardPoints2TAG			643
#define OFIX_RFQReqIDTAG				644
#define OFIX_MktBidPxTAG				645
#define OFIX_MktOfferPxTAG				646
#define OFIX_MinBidSizeTAG				647
#define OFIX_MinOfferSizeTAG				648
#define OFIX_QuoteStatusReqIDTAG			649
#define OFIX_LegalConfirmTAG				650
#define OFIX_UnderlyingLastPxTAG			651
#define OFIX_UnderlyingLastQtyTAG			652
#define OFIX_SecDefStatusTAG				653
#define OFIX_LegRefIDTAG				654
#define OFIX_ContraLegRefIDTAG				655
#define OFIX_SettlCurrBidFxRateTAG			656
#define OFIX_SettlCurrOfferFxRateTAG			657
#define OFIX_QuoteRequestRejectReasonTAG		658
#define OFIX_SideComplianceIDTAG			659
#define OFIX_AcctIDSourceTAG				660
#define OFIX_AllocAcctIDSourceTAG			661
#define OFIX_BenchmarkPriceTAG				662
#define OFIX_BenchmarkPriceTypeTAG			663
#define OFIX_ConfirmIDTAG				664
#define OFIX_ConfirmStatusTAG				665
#define OFIX_ConfirmTransTypeTAG			666
#define OFIX_ContractSettlMonthTAG			667
#define OFIX_DeliveryFormTAG				668
#define OFIX_LastParPxTAG				669
#define OFIX_NoLegAllocsTAG				670
#define OFIX_LegAllocAccountTAG				671
#define OFIX_LegIndividualAllocIDTAG			672
#define OFIX_LegAllocQtyTAG				673
#define OFIX_LegAllocAcctIDSourceTAG			674
#define OFIX_LegSettlCurrencyTAG			675
#define OFIX_LegBenchmarkCurveCurrencyTAG		676
#define OFIX_LegBenchmarkCurveNameTAG			677
#define OFIX_LegBenchmarkCurvePointTAG			678
#define OFIX_LegBenchmarkPriceTAG			679
#define OFIX_LegBenchmarkPriceTypeTAG			680
#define OFIX_LegBidPxTAG				681
#define OFIX_LegIOIQtyTAG				682
#define OFIX_NoLegStipulationsTAG			683
#define OFIX_LegOfferPxTAG				684
#define OFIX_LegOrderQtyTAG				685
#define OFIX_LegPriceTypeTAG				686
#define OFIX_LegQtyTAG					687
#define OFIX_LegStipulationTypeTAG			688
#define OFIX_LegStipulationValueTAG			689
#define OFIX_LegSwapTypeTAG				690
#define OFIX_PoolTAG					691
#define OFIX_QuotePriceTypeTAG				692
#define OFIX_QuoteRespIDTAG				693
#define OFIX_QuoteRespTypeTAG				694
#define OFIX_QuoteQualifierTAG				695
#define OFIX_YieldRedemptionDateTAG			696
#define OFIX_YieldRedemptionPriceTAG			697
#define OFIX_YieldRedemptionPriceTypeTAG		698
#define OFIX_BenchmarkSecurityIDTAG			699
#define OFIX_ReversalIndicatorTAG			700
#define OFIX_YieldCalcDateTAG				701
#define OFIX_NoPositionsTAG				702
#define OFIX_PosTypeTAG					703
#define OFIX_LongQtyTAG					704
#define OFIX_ShortQtyTAG				705
#define OFIX_PosQtyStatusTAG				706
#define OFIX_PosAmtTypeTAG				707
#define OFIX_PosAmtTAG					708
#define OFIX_PosTransTypeTAG				709
#define OFIX_PosReqIDTAG				710
#define OFIX_NoUnderlyingsTAG				711
#define OFIX_PosMaintActionTAG				712
#define OFIX_OrigPosReqRefIDTAG				713
#define OFIX_PosMaintRptRefIDTAG			714
#define OFIX_ClearingBusinessDateTAG			715
#define OFIX_SettlSessIDTAG				716
#define OFIX_SettlSessSubIDTAG				717
#define OFIX_AdjustmentTypeTAG				718
#define OFIX_ContraryInstructionIndicatorTAG		719
#define OFIX_PriorSpreadIndicatorTAG			720
#define OFIX_PosMaintRptIDTAG				721
#define OFIX_PosMaintStatusTAG				722
#define OFIX_PosMaintResultTAG				723
#define OFIX_PosReqTypeTAG				724
#define OFIX_ResponseTransportTypeTAG			725
#define OFIX_ResponseDestinationTAG			726
#define OFIX_TotalNumPosReportsTAG			727
#define OFIX_PosReqResultTAG				728
#define OFIX_PosReqStatusTAG				729
#define OFIX_SettlPriceTAG				730
#define OFIX_SettlPriceTypeTAG				731
#define OFIX_UnderlyingSettlPriceTAG			732
#define OFIX_UnderlyingSettlPriceTypeTAG		733
#define OFIX_PriorSettlPriceTAG				734
#define OFIX_NoQuoteQualifiersTAG			735
#define OFIX_AllocSettlCurrencyTAG			736
#define OFIX_AllocSettlCurrAmtTAG			737
#define OFIX_InterestAtMaturityTAG			738
#define OFIX_LegDatedDateTAG				739
#define OFIX_LegPoolTAG					740
#define OFIX_AllocInterestAtMaturityTAG			741
#define OFIX_AllocAccruedInterestAmtTAG			742
#define OFIX_DeliveryDateTAG				743
#define OFIX_AssignmentMethodTAG			744
#define OFIX_AssignmentUnitTAG				745
#define OFIX_OpenInterestTAG				746
#define OFIX_ExerciseMethodTAG				747
#define OFIX_TotNumTradeReportsTAG			748
#define OFIX_TradeRequestResultTAG			749
#define OFIX_TradeRequestStatusTAG			750
#define OFIX_TradeReportRejectReasonTAG			751
#define OFIX_SideMultiLegReportingTypeTAG		752
#define OFIX_NoPosAmtTAG				753
#define OFIX_AutoAcceptIndicatorTAG			754
#define OFIX_AllocReportIDTAG				755
#define OFIX_NoNested2PartyIDsTAG			756
#define OFIX_Nested2PartyIDTAG				757
#define OFIX_Nested2PartyIDSourceTAG			758
#define OFIX_Nested2PartyRoleTAG			759
#define OFIX_Nested2PartySubIDTAG			760
#define OFIX_BenchmarkSecurityIDSourceTAG		761
#define OFIX_SecuritySubTypeTAG				762
#define OFIX_UnderlyingSecuritySubTypeTAG		763
#define OFIX_LegSecuritySubTypeTAG			764
#define OFIX_AllowableOneSidednessPctTAG		765
#define OFIX_AllowableOneSidednessValueTAG		766
#define OFIX_AllowableOneSidednessCurrTAG		767
#define OFIX_NoTrdRegTimestampsTAG			768
#define OFIX_TrdRegTimestampTAG				769
#define OFIX_TrdRegTimestampTypeTAG			770
#define OFIX_TrdRegTimestampOriginTAG			771
#define OFIX_ConfirmRefIDTAG				772
#define OFIX_ConfirmTypeTAG				773
#define OFIX_ConfirmRejReasonTAG			774
#define OFIX_BookingTypeTAG				775
#define OFIX_IndividualAllocRejCodeTAG			776
#define OFIX_SettlInstMsgIDTAG				777
#define OFIX_NoSettlInstTAG				778
#define OFIX_LastUpdateTimeTAG				779
#define OFIX_AllocSettlInstTypeTAG			780
#define OFIX_NoSettlPartyIDsTAG				781
#define OFIX_SettlPartyIDTAG				782
#define OFIX_SettlPartyIDSourceTAG			783
#define OFIX_SettlPartyRoleTAG				784
#define OFIX_SettlPartySubIDTAG				785
#define OFIX_SettlPartySubIDTypeTAG			786
#define OFIX_DlvyInstTypeTAG				787
#define OFIX_TerminationTypeTAG				788
#define OFIX_NextExpectedMsgSeqNumTAG			789
#define OFIX_OrdStatusReqIDTAG				790
#define OFIX_SettlInstReqIDTAG				791
#define OFIX_SettlInstReqRejCodeTAG			792
#define OFIX_SecondaryAllocIDTAG			793
#define OFIX_AllocReportTypeTAG				794
#define OFIX_AllocReportRefIDTAG			795
#define OFIX_AllocCancReplaceReasonTAG			796
#define OFIX_CopyMsgIndicatorTAG			797
#define OFIX_AllocAccountTypeTAG			798
#define OFIX_OrderAvgPxTAG				799
#define OFIX_OrderBookingQtyTAG				800
#define OFIX_NoSettlPartySubIDsTAG			801
#define OFIX_NoPartySubIDsTAG				802
#define OFIX_PartySubIDTypeTAG				803
#define OFIX_NoNestedPartySubIDsTAG			804
#define OFIX_NestedPartySubIDTypeTAG			805
#define OFIX_NoNested2PartySubIDsTAG			806
#define OFIX_Nested2PartySubIDTypeTAG			807
#defin