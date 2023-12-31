//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IMMFacebookMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class NSString;

@interface WCAccountThirdAppRegisterControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, MMImageLoaderObserver, WCBaseControlMgrExt, MMKernelExt, PBMessageObserverDelegate>
{
    _Bool m_hasStartDownloadImage;
    _Bool m_fromLoginToReg;
    unsigned int m_lastPhoneRegLogicTag;
}

+ (void)ReportThirdAppLoginRegWithType:(int)arg1 action:(unsigned long long)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onNewRegOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)startDownloadHeadImageWithUrl:(id)arg1;
- (void)startGetThirdAppInfo;
- (void)handleThirdAppVerifyReturn:(id)arg1;
- (void)startThirdVerifyToken:(id)arg1;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)startFacebookAuth;
- (void)reportAction:(unsigned long long)arg1;
- (void)callCancelLogic;
- (void)callFailLogicWithErrMsg:(id)arg1;
- (void)callGotoLoginLogicWithToken:(id)arg1;
- (void)callSuccessLogic;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

