//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountNewPhoneVerifyViewControllerDelegate <NSObject>

@optional
- (void)onNewPhoneVerifyProblem;
- (void)onNewPhoneVerifyGotoFeedback;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyNextWithPwd:(NSString *)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(NSString *)arg1;
- (void)onNewPhoneVerifyFirstTime:(_Bool)arg1;
- (void)onNewPhoneVerifyBack;
@end
