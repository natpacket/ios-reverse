//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "SetWCPayWebLogicStateExt-Protocol.h"
#import "WCPayDigitalCertManageViewControllerDelegate-Protocol.h"
#import "WCPayPaySecurityCgiDelegate-Protocol.h"
#import "WCPayWalletEntranceStateViewControllerDelegate-Protocol.h"
#import "WCPayWalletLockSettingLogicDelegate-Protocol.h"

@class NSString, PaySecurityResp, WCPayDigitalCertManageViewController, WCPayPaySecurityCgi;
@protocol WCPaySecuritySettingViewControllerDelegate;

@interface WCPaySecuritySettingViewController : WCPayBaseViewController <WCPayWalletEntranceStateViewControllerDelegate, MMTipsViewControllerDelegate, WCPayPaySecurityCgiDelegate, WCPayDigitalCertManageViewControllerDelegate, WCPayWalletLockSettingLogicDelegate, MMUseCaseCallback, SetWCPayWebLogicStateExt>
{
    unsigned int _entryScene;
    id <WCPaySecuritySettingViewControllerDelegate> _m_delegate;
    WCPayPaySecurityCgi *_cgi;
    PaySecurityResp *_response;
    WCPayDigitalCertManageViewController *_digitalCertVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayDigitalCertManageViewController *digitalCertVC; // @synthesize digitalCertVC=_digitalCertVC;
@property(retain, nonatomic) PaySecurityResp *response; // @synthesize response=_response;
@property(retain, nonatomic) WCPayPaySecurityCgi *cgi; // @synthesize cgi=_cgi;
@property __weak id <WCPaySecuritySettingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int entryScene; // @synthesize entryScene=_entryScene;
- (void)call:(id)arg1;
- (void)onWCPayWalletEntranceStateViewControllerCallRefresh;
- (void)onClickDialogBtn:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)setWCPayWebLogicStateJsapi:(id)arg1 didGetInfo:(id)arg2;
- (void)patternLockDidSetup:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (void)updateDigitalCert;
- (void)onWCPayDigitalCertManageViewControllerCallRefresh;
- (void)paySecurityCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)paySecurityCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)updateBackward;
- (void)clickPaySecurityDialog;
- (void)clickInsuranceCell:(id)arg1;
- (void)clickBalancePrivacyCell:(id)arg1;
- (void)clickWalletLockCell:(id)arg1;
- (void)clickDigitalCertCell:(id)arg1;
- (void)clickBasicInfo;
- (void)makeBalancePrivacy:(id)arg1 cellInfo:(id)arg2;
- (void)makeInsuranceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeWalletLockCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDigitalCertCell:(id)arg1 cellInfo:(id)arg2;
- (void)setCell:(id)arg1 title:(id)arg2 desc:(id)arg3 image:(id)arg4 imageUrl:(id)arg5 status:(id)arg6;
- (id)tableHeaderView;
- (void)reloadTableView;
- (double)calCellHeightWithTitle:(id)arg1 desc:(id)arg2 status:(id)arg3;
- (void)setupNavigationBar;
- (void)getData;
- (void)viewDidLayoutSubviews;
- (void)showSecurityTips;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

