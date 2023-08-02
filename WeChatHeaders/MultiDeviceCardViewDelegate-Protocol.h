//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MultiDeviceLoginConfirmInfo, MultiDeviceManageInfo;

@protocol MultiDeviceCardViewDelegate <NSObject>
- (double)cardViewFullScreenHeight;
- (double)cardViewMaxWidth;

@optional
- (void)onTapManageLogoutButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapAutoLoginCheckboxWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapLockButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapSendFileButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapNotificationButtonWithNewState:(_Bool)arg1;
- (void)onTapManageExpandButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapManageHelpButtonWithInfo:(MultiDeviceManageInfo *)arg1;
- (void)onTapCancelLoginButton;
- (void)onTapConfirmLoginButtonWithInfo:(MultiDeviceLoginConfirmInfo *)arg1;
- (void)shouldUpdateRightBarButtonItemWithShow:(_Bool)arg1;
@end

