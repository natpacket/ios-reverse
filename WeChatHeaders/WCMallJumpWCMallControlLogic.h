//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCMallControlLogic.h"

#import "IWCMallControlLogicExt-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class JSEvent, NSString, WCMallMobileChargeControlLogic;

@interface WCMallJumpWCMallControlLogic : WCMallControlLogic <IWCMallControlLogicExt, WCBaseControlMgrExt>
{
    JSEvent *m_jsEvent;
    NSString *m_nsStepUrl;
    WCMallMobileChargeControlLogic *m_oWCMallFunctionActivityPayControlLogic;
    NSString *m_nsAppID;
    NSString *m_nsFuncID;
    _Bool m_bEndFlag;
    _Bool m_bJSEventEnd;
    int m_enWCMallJumpWCMallControlLogicScene;
}

- (void).cxx_destruct;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 response:(id)arg5 FromCached:(_Bool)arg6 NotShowTutorial:(_Bool)arg7 typeMap:(id)arg8 Error:(id)arg9;
- (void)stopLogic;
- (void)endJSEventWith:(_Bool)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startLogic;
- (void)dealloc;
- (id)initWithScene:(int)arg1;
- (id)initWithJSEvent:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

