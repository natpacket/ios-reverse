//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayT2BCQueryDetailCgiDelegate-Protocol.h"

@class NSString, WCPayT2BCQueryDetailCgi;
@protocol WCPayT2BCDetailControlLogicDelegate;

@interface WCPayT2BCDetailControlLogic : WCPayControlLogic <WCPayT2BCQueryDetailCgiDelegate>
{
    id <WCPayT2BCDetailControlLogicDelegate> _t2bcDetailLogicDelegate;
    WCPayT2BCQueryDetailCgi *_m_queryDetailCgi;
    unsigned long long _m_fromScene;
    unsigned long long _m_status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_status; // @synthesize m_status=_m_status;
@property(nonatomic) unsigned long long m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(retain, nonatomic) WCPayT2BCQueryDetailCgi *m_queryDetailCgi; // @synthesize m_queryDetailCgi=_m_queryDetailCgi;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void)stopLogic;
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(id)arg1;
- (void)getTransferDetailData;
- (void)startLogic;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2 status:(unsigned long long)arg3;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2;
- (void)dealloc;
- (void)setT2BCDetialControlLogicDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

