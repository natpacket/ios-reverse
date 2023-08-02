//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "HDHeadImageViewDelegate-Protocol.h"
#import "IMyInvoiceLogicMgrExt-Protocol.h"
#import "IOplogExt-Protocol.h"
#import "settingMyAccountExtInfoLogicDelegate-Protocol.h"

@class GetWecoinBalanceResponse, MMHeadImageView, NSString, NameEditorViewController, RingToneSettingCellHandler, WCTableViewManager;

@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate, IOplogExt, IMyInvoiceLogicMgrExt>
{
    MMHeadImageView *m_headImage;
    NameEditorViewController *m_CurrentVC;
    NSString *m_nsTempNickName;
    _Bool m_bHaveInvoiceInfo;
    WCTableViewManager *m_tableViewMgr;
    GetWecoinBalanceResponse *_wecoinBalanceResponse;
    RingToneSettingCellHandler *_ringToneSettingCellHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneSettingCellHandler *ringToneSettingCellHandler; // @synthesize ringToneSettingCellHandler=_ringToneSettingCellHandler;
@property(retain, nonatomic) GetWecoinBalanceResponse *wecoinBalanceResponse; // @synthesize wecoinBalanceResponse=_wecoinBalanceResponse;
- (void)registerYReportSdk;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onFinderSvrExptConfigHitChanged:(long long)arg1;
- (void)didPatSuffixModified;
- (void)viewDidTransitionToNewSize;
- (void)setupDeepLinkConfig;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)onInfoChange;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)preLoadGlobalRing;
- (void)dealloc;
- (void)showWCCoinView;
- (void)showSocialInfo;
- (void)showInvoiceView;
- (void)showMyAddressInfoView;
- (void)showQRInfoView;
- (void)showModifyPatpatSuffixWithScene:(unsigned long long)arg1;
- (void)showModifyPatpatSuffix;
- (void)showModifyNickName;
- (void)makeChangeImg;
- (id)wccoinCellRightView;
- (void)fetchData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onChangeImg:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)updateTableCell;
- (void)showModifyUserNameProtocol;
- (_Bool)isNeedShowWCPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

