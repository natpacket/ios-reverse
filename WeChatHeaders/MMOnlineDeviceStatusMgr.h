//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IOnlineClientMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MultiDeviceManageViewController, NSString, OnlineDeviceInfoViewController;

@interface MMOnlineDeviceStatusMgr : MMUserService <IOnlineClientMgrExt, MMServiceProtocol>
{
    OnlineDeviceInfoViewController *_viewController;
    MultiDeviceManageViewController *_multiDeviceViewController;
}

- (void).cxx_destruct;
- (void)onExtDeviceNotifyUnlockWithMessage:(id)arg1;
- (void)onLogoutWeb;
- (void)showDeviceInfoUnlockView:(id)arg1 name:(id)arg2;
- (void)showDeviceInfoViewWithIsManualOpen:(_Bool)arg1 fromViewController:(id)arg2;
- (void)hideDeviceInfoView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

