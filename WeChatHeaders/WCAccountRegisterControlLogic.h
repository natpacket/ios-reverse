//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAccountGraphicVerifyViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyViewControllerDelegate, PBMessageObserverDelegate>
{
    unsigned int m_idc_redirect_count;
    unsigned int m_mmtls_set_count;
    unsigned long long m_ui64BeginTime;
    unsigned int m_uiABtest;
    unsigned int m_uiCCType;
}

- (void)resume;
- (void)pause;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleNewRegResponseOK:(id)arg1;
- (void)handleNewRegResponse:(id)arg1;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (_Bool)regAccount;
- (id)genNewRegRequest;
- (void)startLogic;
- (void)dealloc;
- (void)reportABTestStatus:(unsigned int)arg1;
- (void)setABTest:(unsigned int)arg1 CCType:(unsigned int)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

