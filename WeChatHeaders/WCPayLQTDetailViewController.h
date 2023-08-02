//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMUseCaseCallback-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFirstPurchaseModalDelegate-Protocol.h"
#import "WCPayLQTTipsPanelViewDelegate-Protocol.h"
#import "WCPayWebImageViewDelegate-Protocol.h"
#import "WCPlayerConfigViewControllerDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, TimeoutNumber, UIImageView, WCPayFirstPurchaseModal, WCPayLQTPageSheet, WCPayLQTTipsPanelView;
@protocol WCPayLQTDetailViewControllerDelegate;

@interface WCPayLQTDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WAAppTaskMgrExt, WCPayFirstPurchaseModalDelegate, WCPayLQTTipsPanelViewDelegate, MMUseCaseCallback, WCPayWebImageViewDelegate, WCPlayerConfigViewControllerDelegate>
{
    _Bool _bIsClosingAccount;
    _Bool _bHasReportLctOperationShow;
    _Bool _bHasReportLctOperationV2Show;
    _Bool _bHasReportSecurityEntryShow;
    _Bool _bHasReportFixedDepositEntryShow;
    _Bool _bHasShowDetailHalfPage;
    _Bool _bHasShowFirstPurchaseModal;
    _Bool _bHasShowKnowLQTHalfPage;
    id <WCPayLQTDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_infoNodeListArray;
    WCPayLQTTipsPanelView *_tipsPanelView;
    TimeoutNumber *_timeoutNumber;
    long long _tableRowCount;
    UIImageView *_lqtSecurityReddotView;
    NSMutableDictionary *_redDotReportStateDict;
    WCPayLQTPageSheet *_detailPopupHalfPage;
    WCPayFirstPurchaseModal *_firstPurchaseModal;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasShowKnowLQTHalfPage; // @synthesize bHasShowKnowLQTHalfPage=_bHasShowKnowLQTHalfPage;
@property(retain, nonatomic) WCPayFirstPurchaseModal *firstPurchaseModal; // @synthesize firstPurchaseModal=_firstPurchaseModal;
@property(nonatomic) _Bool bHasShowFirstPurchaseModal; // @synthesize bHasShowFirstPurchaseModal=_bHasShowFirstPurchaseModal;
@property(retain, nonatomic) WCPayLQTPageSheet *detailPopupHalfPage; // @synthesize detailPopupHalfPage=_detailPopupHalfPage;
@property(nonatomic) _Bool bHasShowDetailHalfPage; // @synthesize bHasShowDetailHalfPage=_bHasShowDetailHalfPage;
@property(retain, nonatomic) NSMutableDictionary *redDotReportStateDict; // @synthesize redDotReportStateDict=_redDotReportStateDict;
@property(retain, nonatomic) UIImageView *lqtSecurityReddotView; // @synthesize lqtSecurityReddotView=_lqtSecurityReddotView;
@property(nonatomic) _Bool bHasReportFixedDepositEntryShow; // @synthesize bHasReportFixedDepositEntryShow=_bHasReportFixedDepositEntryShow;
@property(nonatomic) _Bool bHasReportSecurityEntryShow; // @synthesize bHasReportSecurityEntryShow=_bHasReportSecurityEntryShow;
@property(nonatomic) _Bool bHasReportLctOperationV2Show; // @synthesize bHasReportLctOperationV2Show=_bHasReportLctOperationV2Show;
@property(nonatomic) _Bool bHasReportLctOperationShow; // @synthesize bHasReportLctOperationShow=_bHasReportLctOperationShow;
@property(nonatomic) long long tableRowCount; // @synthesize tableRowCount=_tableRowCount;
@property(retain) TimeoutNumber *timeoutNumber; // @synthesize timeoutNumber=_timeoutNumber;
@property(retain, nonatomic) WCPayLQTTipsPanelView *tipsPanelView; // @synthesize tipsPanelView=_tipsPanelView;
@property(retain, nonatomic) NSMutableArray *infoNodeListArray; // @synthesize infoNodeListArray=_infoNodeListArray;
@property(nonatomic) _Bool bIsClosingAccount; // @synthesize bIsClosingAccount=_bIsClosingAccount;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayLQTDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)middleNoticeBannerClick;
- (_Bool)detectNewDocumentItemHasValidJumpData:(id)arg1;
- (void)showLqtMiddleNoticeBanner:(id)arg1;
- (void)lqtSecurityEntryClick;
- (void)showLqtSecurityEntryWithHeader:(id)arg1;
- (void)processFixedDepositItem:(id)arg1;
- (void)call:(id)arg1;
- (void)reportLctOperateV2WithReportScene:(int)arg1 clickIndex:(int)arg2;
- (void)showFirstEntryTipsIfNecessary;
- (void)lctOperationProductItemCoverBtnClick;
- (void)lctOperationTitleItemCoverBtnClick;
- (void)makeLctOperationV2ContentWithProductList:(id)arg1 logo:(id)arg2 arrow:(id)arg3 cell:(id)arg4;
- (void)makeLctOperationV2ContentWithoutProductList:(id)arg1 logo:(id)arg2 arrow:(id)arg3 cell:(id)arg4;
- (void)makeLctOperationContentWithProduct:(id)arg1;
- (void)lctOperationCoverBtnClick;
- (void)makeLctOperationContentWithoutProduct:(id)arg1;
- (void)makeLctOperationContent:(id)arg1;
- (double)calcOpeContentHeightWithProduct;
- (double)calcOpeContentHeightWithoutProduct;
- (double)calcLctOperationContentHeight;
- (_Bool)isLctOperationCellIndexPath:(id)arg1;
- (_Bool)hasLctOperationInfoData;
- (long long)overrideUserInterfaceStyle;
- (id)getTempDirectory;
- (id)getFormatVideoPath:(id)arg1;
- (id)getTempVideoPath:(id)arg1;
- (id)generateDownloadArgsWrap:(id)arg1;
- (id)genStaticVideoPlayInfo:(id)arg1;
- (void)handleStaticVideoThumbImageClick:(id)arg1;
- (void)handleVideoFeedThumbImageClick:(id)arg1;
- (void)onLQTTipsPanelViewDismiss;
- (void)moneyCoverBtnCancel:(id)arg1;
- (void)moneyCoverBtnDown:(id)arg1;
- (void)moneyCoverBtnClick:(id)arg1;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (id)convertFromDocument:(id)arg1;
- (void)incomeCoverBtnClick;
- (void)gainRateCoverBtnClick;
- (void)handleClickLQTTinyApp;
- (_Bool)hasTinyAppEnterance;
- (void)bannerBtnClick;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)openH5WithString:(id)arg1;
- (void)handleNewDocumentItemClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)fetchBtnClick;
- (void)onClickH5:(id)arg1;
- (void)onClickTinyApp:(id)arg1;
- (void)saveBtnClick;
- (void)financialInfoBtnCancel:(id)arg1;
- (void)financialInfoBtnDown:(id)arg1;
- (void)financialInfoBtnClick:(id)arg1;
- (void)fofButtonCancel:(id)arg1;
- (void)fofButtonDown:(id)arg1;
- (void)fofButtonClick:(id)arg1;
- (void)footerButtonCancel:(id)arg1;
- (void)footerButtonDown:(id)arg1;
- (void)footerButtonClick:(id)arg1;
- (void)actionSheetItemClick;
- (void)rightBarButtonClick;
- (void)leftBarButtonClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeTinyAppContent:(id)arg1;
- (void)makeSepbarCellContent:(id)arg1;
- (void)makeDetailEnteranceContent:(id)arg1 indexPath:(id)arg2;
- (void)onClickActivityBtn:(id)arg1;
- (void)makeDetailMainContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableFooterView;
- (id)genBottomButton:(id)arg1 actionClick:(SEL)arg2 actionDown:(SEL)arg3 actionCancel:(SEL)arg4;
- (void)setupTableHeaderView;
- (void)setupTipsPanelView;
- (void)scrollToBottomIfNeed;
- (void)setupContentView;
- (double)tableViewTinyAppContentHeight;
- (double)tableViewOtherContentHeight;
- (double)tableViewMainContentHeight;
- (double)diffHeightForFundName:(id)arg1;
- (double)heightForLabelTitle:(id)arg1 withImg:(_Bool)arg2;
- (void)onTipsModalOutSide;
- (void)onTipsModalRightBtn;
- (void)onTipsModalLeftBtn;
- (void)showFirstPurchaseModal;
- (void)showDetailPopupHalfPage;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)startMoneyTimeout;
- (void)stopMoneyTimeout;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

