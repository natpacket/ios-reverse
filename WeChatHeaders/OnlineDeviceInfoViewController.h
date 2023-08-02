//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IOnlineClientMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSString, OnlineInfo, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol OnlineDeviceInfoViewControllerDelegate;

@interface OnlineDeviceInfoViewController : MMWindowViewController <WCActionSheetDelegate, IOnlineClientMgrExt>
{
    UIImage *_deviceImg;
    UIImageView *_deviceView;
    UIButton *_logoutBtn;
    UILabel *_tipsLabel;
    UILabel *_subLabel;
    UILabel *_descriptionLabel;
    UIButton *_cancelBtn;
    UIButton *_helpBtn;
    _Bool _isManualOpen;
    UIView *m_backgroundView;
    NSString *deviceNameTmp;
    id <OnlineDeviceInfoViewControllerDelegate> _delegate;
    unsigned long long _supportedOrientations;
    OnlineInfo *_onlineClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OnlineInfo *onlineClient; // @synthesize onlineClient=_onlineClient;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) __weak id <OnlineDeviceInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onTopBarFrameChanged;
- (void)handleLockStatusChangesWithOnlineStatus;
- (void)setupInfoView;
- (id)getDeviceImgWithIsMuted:(_Bool)arg1;
- (void)onCancel;
- (void)onCancelBtnClicked;
- (void)onHelp;
- (void)setupCancelBtn;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addBlurEffectForView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onUnlockMac;
- (void)unlockForMac:(id)arg1 isWindowExist:(_Bool)arg2;
- (id)initWithIsManualOpen:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
