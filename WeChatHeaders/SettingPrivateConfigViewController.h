//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class DelaySwitchSettingLogic, MMTableViewInfo, NSMutableDictionary, WCOpLog;

@interface SettingPrivateConfigViewController : MMUIViewController
{
    NSMutableDictionary *m_changesOnExitMap;
    _Bool m_applySettingNow;
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    _Bool m_strangerRightOpen;
    _Bool m_contactVerifySwitchOpen;
    _Bool m_recommendQQOpen;
    _Bool m_recommendPhoneOpen;
    _Bool m_bIsShowPhoneSectionIndexAtFirst;
    unsigned int m_contactVerifyIndex;
    _Bool m_finderLiveIsHoverSnsTimelineSwitchOpen;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool m_bIsShowContactVerifySectionIndexAtFirst;
    unsigned int _wcNotificationCellIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int wcNotificationCellIndex; // @synthesize wcNotificationCellIndex=_wcNotificationCellIndex;
@property(nonatomic) _Bool m_bIsShowContactVerifySectionIndexAtFirst; // @synthesize m_bIsShowContactVerifySectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowPhoneSectionIndexAtFirst; // @synthesize m_bIsShowPhoneSectionIndexAtFirst;
- (void)setupDeepLinkConfig;
- (void)showWeRunBlackAuthManageView;
- (void)showWowAuthManageView;
- (void)showFinderAuthManageView;
- (void)showSnsAuthManageView;
- (void)showSocialBlackAuthManageView;
- (void)contactVerifySwitchChanged:(id)arg1;
- (void)recommendPhoneChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)showAddMeWaysVC;
- (void)updateWcStateAndReloadTableView;
- (void)applyUnSavedChanges;
- (_Bool)setChangeOnExitForSelector:(SEL)arg1 withControl:(id)arg2;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverContactVerify;
- (void)dealloc;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableContactAuthorityManageData;
- (void)reloadTableDataWithReloadFooterView:(_Bool)arg1;
- (void)reloadTableData;
- (void)showAppAuthManagementView;
- (void)showSocialListView;
- (void)showBlackListView;
- (id)init;
- (id)getHeaderView:(id)arg1;

@end

