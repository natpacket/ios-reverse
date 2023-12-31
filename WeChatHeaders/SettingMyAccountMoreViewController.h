//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AppleIDBindViewControllerDelegate-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IQQAccountMgrExt-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "settingModifyEmailDelegate-Protocol.h"

@class MMTableViewInfo, NSString;

@interface SettingMyAccountMoreViewController : MMUIViewController <settingModifyEmailDelegate, IQQAccountMgrExt, IMMFacebookMgrExt, IUpdateProfileMgrExt, AppleIDBindViewControllerDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)setupDeepLinkConfig;
- (void)onAppleIDBindStatusChange;
- (void)willShow;
- (void)onProfileChange;
- (void)OnUnBindQQOK;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)saveNewEmail;
- (void)modifyEmail;
- (void)showFacebook;
- (void)showApple;
- (void)showModifyQQView;
- (void)initDeleteAccountCellData;
- (void)initAccountCellData;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)undoRegester;
- (void)doRegester;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

