//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountMainLoginViewControllerDelegate <NSObject>

@optional
- (_Bool)shouldShowBackBtnForMainLogin;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginAppleConnect;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginProblem;
- (void)onMainLoginGoToFeedback;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginBack;
- (void)onMainLoginUserName:(NSString *)arg1 Pwd:(NSString *)arg2;
- (void)onMainLoginNext:(NSString *)arg1 phoneNumber:(NSString *)arg2;
@end

