//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountLoginLastUserViewControllerDelegate-Protocol.h"
#import "WCAccountManualAuthControlLogicDelegate-Protocol.h"
#import "WCAccountPhoneVerifyUpViewControllerDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"
#import "WCAccountVerifyCodeHandlerDelegate-Protocol.h"

@class NSString, VoicePrintVerifyLogic, WCAccountLoginLastUserViewController, WCAccountManualAuthControlLogic, WCAccountVerifyCodeHandler;

@interface WCAccountLastUserLoginControlLogic : WCAccountBaseControlLogic <WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountVerifyCodeHandlerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountPhoneVerifyUpViewControllerDelegate>
{
    _Bool m_bFromLogout;
    unsigned int m_uiPwdErrCount;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    unsigned int m_uiCurrentLoginType;
    WCAccountVerifyCodeHandler *m_verifyCodeHandler;
    WCAccountLoginLastUserViewController *m_lastUserVerifyVC;
    VoicePrintVerifyLogic *_voicePrintVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic; // @synthesize voicePrintVerifyLogic=_voicePrintVerifyLogic;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHavePwd;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onErrorHandleLogicDone;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyUpBack;
- (void)onLastUserUseBothDevice;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLastUserGoToFeedback;
- (void)onLastUserGoToFreeze:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastUserVerifyNextWithVerifyCode:(id)arg1;
- (void)onLastUserVerifyFirstTime:(_Bool)arg1;
- (void)onLastUserBack;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)loginAccount:(_Bool)arg1 data:(id)arg2;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)pause;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

