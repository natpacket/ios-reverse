//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMPickerViewDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "ShakeBgImgDownloadMgrExt-Protocol.h"
#import "ShakeCheckerDelegate-Protocol.h"
#import "ShakeListDelegate-Protocol.h"
#import "ShakeLogicProxyDelegate-Protocol.h"
#import "ShakeMainFrameDelegate-Protocol.h"
#import "ShakeSettingViewControllerDelegate-Protocol.h"
#import "ShakeTvHistoryViewDelegate-Protocol.h"
#import "ShakeTypeBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCAudioModuleDelegate-Protocol.h"
#import "shakeSingleViewDelegate-Protocol.h"

@class CShakeChecker, MMHDHeadImageView, MMTipsViewController, NSString, ShakeLogicProxy, ShakeMainView, ShakeSingleView, ShakeTvHistoryView, ShakeTypeBar;
@protocol ShakeViewDelegate;

@interface ShakeViewController : MMUIViewController <WCAudioModuleDelegate, ShakeListDelegate, ShakeBgImgDownloadMgrExt, ShakeCheckerDelegate, MMPickerViewDelegate, ShakeLogicProxyDelegate, shakeSingleViewDelegate, WCActionSheetDelegate, ShakeMainFrameDelegate, MMImagePickerManagerDelegate, ShakeSettingViewControllerDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate, IUiUtilExt, IRecordPermissionCheckExt, ShakeTypeBarDelegate, ShakeTvHistoryViewDelegate>
{
    ShakeLogicProxy *m_logicProxy;
    ShakeSingleView *m_shakeSingleView;
    ShakeMainView *m_mainView;
    MMTipsViewController *m_introView;
    ShakeTvHistoryView *m_shakeTvHistoryView;
    _Bool m_bShaking;
    id <ShakeViewDelegate> m_delegate;
    CShakeChecker *m_shakeChecker;
    MMHDHeadImageView *m_HDHeadImage;
    _Bool m_bBackgroundRunning;
    ShakeTypeBar *m_typeBar;
    unsigned int m_uiTimeStartSearchTV;
    _Bool m_bCanShake;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bCanShake; // @synthesize m_bCanShake;
- (void)handleInterruptionBy3rdApp;
- (void)registerYReportSdk;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (_Bool)isInShakeTvLogicType;
- (id)getCurrViewController;
- (void)promptForShakeMusicUsage;
- (void)systemAuthorizationCheck;
- (void)shakeSwitch;
- (void)onShakeTypeClicked:(long long)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)updateMuteStauts:(_Bool)arg1;
- (void)SetMuteStauts:(long long)arg1;
- (void)showImagePicker:(long long)arg1;
- (void)onBackgroundImgChange;
- (void)onShowImagePicker;
- (void)onShakeStop;
- (long long)getShakeLogicType;
- (id)getMsgForState:(unsigned int)arg1;
- (void)promptForProfileExtInfo;
- (void)OnSetting;
- (void)showViewControllerFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)OnOpenUnreadMsgList;
- (void)OnOpenSayHello;
- (void)OnGetNewBgImg;
- (void)onShakeGetFail:(id)arg1;
- (void)onShakeReportFail:(id)arg1;
- (void)onShakeGetEndWithResultInternal:(id)arg1;
- (void)onShakeGetEndWithResult:(id)arg1;
- (void)onShakeReportEndWithResult:(id)arg1;
- (void)onShakeTvReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeTvReportEndWithTvItemInternal:(id)arg1;
- (void)onShakeTvReportEndWithTvItem:(id)arg1;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeMusicReportEndWithMusicItem:(id)arg1;
- (void)OnShake;
- (void)onClickHideImage;
- (void)onSplitAnimationEnd;
- (void)showTvDetail:(id)arg1 withModal:(_Bool)arg2;
- (void)showShakeTvResult:(id)arg1 andModal:(_Bool)arg2 isFromHistoryList:(_Bool)arg3;
- (void)onSelectedShakeTvResult:(id)arg1;
- (void)updateTvHistoryView;
- (void)showPeopleInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (void)showContactInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (_Bool)isInMyContactList:(id)arg1;
- (void)onSelectedContactInfo:(id)arg1 isFromList:(_Bool)arg2;
- (void)initHDHeadImage:(id)arg1;
- (void)showShakeSingleView:(id)arg1 andScene:(unsigned int)arg2;
- (void)showHDHeadImage;
- (void)onFinishShowAnimation;
- (void)GoToSayHello:(id)arg1 andScene:(unsigned int)arg2;
- (void)showErrorAlert:(id)arg1;
- (void)resetAllStatus;
- (void)enableAllButton;
- (void)disableAllButton;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)promptForShakeUsageWarnning;
- (void)initBackgroundView;
- (void)initView;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)setM_Delegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (_Bool)canBecomeFirstResponder;
- (_Bool)shouldInteractivePop;
- (void)dismissViewController;
- (void)setCanShake:(_Bool)arg1;
- (void)setShakeType:(long long)arg1;
- (id)getCurrentViewController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

