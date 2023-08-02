//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveMgrExt-Protocol.h"
#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "MMLiveRewardGiftCollectionViewCellDelegate-Protocol.h"
#import "MMLiveRewardGiftCustomizationTextPageSheetDelegate-Protocol.h"
#import "MMLiveRewardGiftCustomizationTipViewDelegate-Protocol.h"
#import "MMLiveRewardGiftPreviewWindowDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CAGradientLayer, CALayer, CAShapeLayer, FanClubPanelInfo, FinderLiveRewardGiftExtInfo, MMCPLabel, MMFinderLiveGlobalRankSignView, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMHeadImageView, MMLiveHalfScreenTitleBarView, MMLiveRewardGiftCoinButton, MMLiveRewardGiftCustomizationTipView, MMLiveRewardGiftHorizontalLayout, MMLiveRewardGiftPreviewWindow, MMLiveRewardGiftSendingCountMenuBar, MMNormalTipsView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSMutableSet, NSString, UICollectionView, UIImageView, UILabel, UIPageControl, UIScrollView, UIView;
@protocol MMLiveRewardGiftSelectionLogicDelegate, MMLiveRewardGiftSelectionViewDelegate;

@interface MMLiveRewardGiftSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, WCActionSheetDelegate, MMFinderLiveMgrExt, MMLiveRewardGiftCollectionViewCellDelegate, MMLiveRewardGiftPreviewWindowDelegate, MMLiveRewardGiftCustomizationTipViewDelegate, MMLiveRewardGiftCustomizationTextPageSheetDelegate>
{
    _Bool _isRewardOpening;
    _Bool _wecoinBalanceUpdated;
    _Bool _fetchWecoinBalanceFinished;
    _Bool _isLastLayoutOrientationIsPortrait;
    _Bool _navigatedToTopup;
    MMFinderLiveTaskId *_taskId;
    id <MMLiveRewardGiftSelectionViewDelegate> _viewDelegate;
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate;
    NSArray *_giftItems;
    unsigned long long _selectionMode;
    id _userInfo;
    CDUnknownBlockType _onCancel;
    FinderLiveRewardGiftExtInfo *_externRewardExtInfo;
    MMLiveHalfScreenTitleBarView *_mainTitleBar;
    MMUIView *_titleView;
    MMCPLabel *_titleLabel;
    MMHeadImageView *_curRewardRecipientHeadImageView;
    MMCPLabel *_curRewardRecipientNickNameLabel;
    UIImageView *_switchRewardUserIconView;
    UIPageControl *_giftPageControl;
    UICollectionView *_giftCollectionView;
    MMLiveRewardGiftHorizontalLayout *_giftCollectionLayout;
    MMLiveRewardGiftCoinButton *_coinsButton;
    MMLiveRewardGiftPreviewWindow *_previewWindow;
    MMLiveRewardGiftSendingCountMenuBar *_sendingCountMenuBar;
    MMFinderLiveRewardGiftItem *_longPressedGiftItem;
    MMNormalTipsView *_giftMultipleSendTipsView;
    MMUIView *_contentView;
    CAShapeLayer *_shapeLayer;
    MMUILabel *_currentTabDescLabel;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
    NSMutableSet *_exposedProductIdSet;
    long long _balance;
    NSString *_subTitle;
    long long _firstPopularPage;
    UIScrollView *_giftGroupLabelContrainerView;
    NSMutableArray *_giftGroupLabels;
    NSString *_currentSelectGiftGroupLabel;
    UIView *_privilegeEntranceView;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    UILabel *_identityStatusLabel;
    MMCPLabel *_nextLevelWecoinAmountLabel;
    UIImageView *_arrowView;
    UIView *_wholeProgressView;
    UIView *_currentProgressView;
    CAGradientLayer *_currentProgressGradientLayer;
    CALayer *_currentProgressColorLayer;
    FanClubPanelInfo *_currentFanClubInfo;
    CDUnknownBlockType _relocateTabBlock;
    MMLiveRewardGiftCustomizationTipView *_customizationTipView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool navigatedToTopup; // @synthesize navigatedToTopup=_navigatedToTopup;
@property(retain, nonatomic) MMLiveRewardGiftCustomizationTipView *customizationTipView; // @synthesize customizationTipView=_customizationTipView;
@property(copy, nonatomic) CDUnknownBlockType relocateTabBlock; // @synthesize relocateTabBlock=_relocateTabBlock;
@property(retain, nonatomic) FanClubPanelInfo *currentFanClubInfo; // @synthesize currentFanClubInfo=_currentFanClubInfo;
@property(retain, nonatomic) CALayer *currentProgressColorLayer; // @synthesize currentProgressColorLayer=_currentProgressColorLayer;
@property(retain, nonatomic) CAGradientLayer *currentProgressGradientLayer; // @synthesize currentProgressGradientLayer=_currentProgressGradientLayer;
@property(retain, nonatomic) UIView *currentProgressView; // @synthesize currentProgressView=_currentProgressView;
@property(retain, nonatomic) UIView *wholeProgressView; // @synthesize wholeProgressView=_wholeProgressView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMCPLabel *nextLevelWecoinAmountLabel; // @synthesize nextLevelWecoinAmountLabel=_nextLevelWecoinAmountLabel;
@property(retain, nonatomic) UILabel *identityStatusLabel; // @synthesize identityStatusLabel=_identityStatusLabel;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) UIView *privilegeEntranceView; // @synthesize privilegeEntranceView=_privilegeEntranceView;
@property(retain, nonatomic) NSString *currentSelectGiftGroupLabel; // @synthesize currentSelectGiftGroupLabel=_currentSelectGiftGroupLabel;
@property(retain, nonatomic) NSMutableArray *giftGroupLabels; // @synthesize giftGroupLabels=_giftGroupLabels;
@property(retain, nonatomic) UIScrollView *giftGroupLabelContrainerView; // @synthesize giftGroupLabelContrainerView=_giftGroupLabelContrainerView;
@property(nonatomic) long long firstPopularPage; // @synthesize firstPopularPage=_firstPopularPage;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool isLastLayoutOrientationIsPortrait; // @synthesize isLastLayoutOrientationIsPortrait=_isLastLayoutOrientationIsPortrait;
@property(nonatomic) _Bool fetchWecoinBalanceFinished; // @synthesize fetchWecoinBalanceFinished=_fetchWecoinBalanceFinished;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSMutableSet *exposedProductIdSet; // @synthesize exposedProductIdSet=_exposedProductIdSet;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) MMUILabel *currentTabDescLabel; // @synthesize currentTabDescLabel=_currentTabDescLabel;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMNormalTipsView *giftMultipleSendTipsView; // @synthesize giftMultipleSendTipsView=_giftMultipleSendTipsView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *longPressedGiftItem; // @synthesize longPressedGiftItem=_longPressedGiftItem;
@property(retain, nonatomic) MMLiveRewardGiftSendingCountMenuBar *sendingCountMenuBar; // @synthesize sendingCountMenuBar=_sendingCountMenuBar;
@property(retain, nonatomic) MMLiveRewardGiftPreviewWindow *previewWindow; // @synthesize previewWindow=_previewWindow;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinsButton; // @synthesize coinsButton=_coinsButton;
@property(retain, nonatomic) MMLiveRewardGiftHorizontalLayout *giftCollectionLayout; // @synthesize giftCollectionLayout=_giftCollectionLayout;
@property(retain, nonatomic) UICollectionView *giftCollectionView; // @synthesize giftCollectionView=_giftCollectionView;
@property(retain, nonatomic) UIPageControl *giftPageControl; // @synthesize giftPageControl=_giftPageControl;
@property(retain, nonatomic) UIImageView *switchRewardUserIconView; // @synthesize switchRewardUserIconView=_switchRewardUserIconView;
@property(retain, nonatomic) MMCPLabel *curRewardRecipientNickNameLabel; // @synthesize curRewardRecipientNickNameLabel=_curRewardRecipientNickNameLabel;
@property(retain, nonatomic) MMHeadImageView *curRewardRecipientHeadImageView; // @synthesize curRewardRecipientHeadImageView=_curRewardRecipientHeadImageView;
@property(retain, nonatomic) MMCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar; // @synthesize mainTitleBar=_mainTitleBar;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *externRewardExtInfo; // @synthesize externRewardExtInfo=_externRewardExtInfo;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) _Bool isRewardOpening; // @synthesize isRewardOpening=_isRewardOpening;
@property(retain, nonatomic) NSArray *giftItems; // @synthesize giftItems=_giftItems;
@property(nonatomic) __weak id <MMLiveRewardGiftSelectionLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) __weak id <MMLiveRewardGiftSelectionViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)commitCustomizationForModel:(id)arg1 blocking:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)indexPathForGiftItemWithProductId:(id)arg1;
- (void)onGiftTextCustomizationCleared:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationConfirmed:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationCanceled:(id)arg1 model:(id)arg2;
- (void)onGiftCustomizationTipViewTextCustomizationButtonTapped:(id)arg1;
- (void)onGiftCustomizationTipViewStyleSelectionChanged:(id)arg1;
- (void)onGiftCustomizationTipViewExpandButtonTapped:(id)arg1;
- (void)layoutCustomizationTipViewAnimated:(_Bool)arg1 prelayoutActions:(CDUnknownBlockType)arg2;
- (unsigned int)getIntimacyLevel;
- (void)onClickActivityUnlockGiftJumpAction:(id)arg1 giftItem:(id)arg2;
- (void)reportTabExposeEvent:(id)arg1 tabPage:(unsigned long long)arg2;
- (void)reportCustomEvent:(id)arg1;
- (void)reportGiftExposeEventWithViewId:(id)arg1 indexPath:(id)arg2 andProductId:(id)arg3;
- (void)reportAllExposedGifts;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 indexPath:(id)arg3 andProductId:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onFetchRewardGiftListWithLiveTaskId:(id)arg1 liveGiftItems:(id)arg2;
- (void)onPurchaseGiftPackageSucceed;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onTapGroupLabel:(id)arg1;
- (void)handlePrivilegeEntranceGestureRecognizer:(id)arg1;
- (void)onTitleViewTaped:(id)arg1;
- (void)onPanGestureRecognizerBegan;
- (void)onCoinButtonClicked;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setNavigatingToTopup;
- (void)showMenuItemVcFromSelectedGiftItem;
- (void)setSubtitle:(id)arg1;
- (void)updateWecoinBalance:(long long)arg1;
- (void)fetchWecoinBalance;
- (void)reloadAndRefreshData;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (_Bool)collectionViewhasTopPadding;
- (double)getCurrentSectionInsetTop;
- (void)layoutPrivilegeEntranceView;
- (void)layoutGiftGroupViews;
- (void)layoutTitleView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dismissAccessories;
- (void)showGiftMultipleSendTipsViewIfNeed;
- (void)createCurrentProgressColorLayer;
- (void)createCurrentProgressGradientLayer;
- (void)updateCurrentProgressLayers;
- (void)scrollToTapGroupLabel:(id)arg1;
- (void)updateGroupLabelWithCurrentPage:(unsigned long long)arg1;
- (void)adjustContentOffsetWithGroupLabel:(id)arg1;
- (double)currentContentViewHeight;
- (void)updateHeadImageConerRadius:(double)arg1;
- (id)liveTask;
- (void)restoreLastGiftPage;
- (void)saveLastGiftPage;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)updatePageControl;
- (void)updateCollectionLayout;
- (void)reloadDataForGiftGroupLabels;
- (void)reloadDataForPrivilegeEntranceView;
- (void)reloadDataForTitleView;
- (void)initTitleView;
- (void)initNotifications;
- (void)initView;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 selectionMode:(unsigned long long)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
