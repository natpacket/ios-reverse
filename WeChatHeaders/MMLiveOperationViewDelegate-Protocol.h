//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMLiveOperationViewDelegate <NSObject>

@optional
- (void)onMMLiveOperationFollow:(NSDictionary *)arg1;
- (void)onMMLiveOperationInviteFriendsBtnClicked;
- (double)getControllerVisibleHeight;
- (void)onMMLiveGloryTipsHeadImageClicked;
- (void)onMMLiveGlorySelfHeadImageClicked;
- (void)onMMLiveOperationUserHeadImageClicked:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)onMMLiveOperationComplain;
- (void)onMMLiveOperationShareScreen;
- (void)onMMLiveOperationConnectSwitchCamera;
- (void)onMMLiveOperationConnectMic;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveOrientationButtonClicked;
- (void)onMMLiveOperationClose;
@end

