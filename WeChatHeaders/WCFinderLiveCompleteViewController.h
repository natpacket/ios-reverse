//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCompleteViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMLiveMorphDismissTarget-Protocol.h"
#import "MMLivePivotCollecitonViewZoomAnimatorExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderLiveCompleteLiveContentViewDelegate-Protocol.h"
#import "WCFinderLiveCompleteLiveVideoContentViewDelegate-Protocol.h"
#import "WCFinderLiveCompleteRecommendContentViewDelegate-Protocol.h"
#import "WCFinderLiveStatDataViewCellDelegate-Protocol.h"

@class FinderGetWindowProductProfileCardInfoResponse, FinderJumpInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveInfo, FinderLiveNoticeInfo, FinderLiveTabInfo, FinderObject, MMFinderLiveReplayOpenTipView, MMFinderLiveReplaySettingContainerView, MMFinderLiveTask, MMHeadImageView, MMUIButton, MMUILabel, MMUIView, MMWebImageView, NSArray, NSData, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIScrollView, UIView, WCFinderDataItem, WCFinderLiveAudienceLogReporter, WCFinderLiveCompleteLiveContentView, WCFinderLiveCompleteLiveReplayView, WCFinderLiveCompleteLiveVideoContentView, WCFinderLiveCompleteRecommendContentView, WCFinderLiveCompleteShoppingView, WCFinderLiveOverReporter, WCFinderMoreLiveReporter;

@interface WCFinderLiveCompleteViewController : MMLiveCompleteViewController <WCFinderLiveStatDataViewCellDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, ILinkEventExt, WCActionSheetDelegate, MMLivePivotCollecitonViewZoomAnimatorExt, WCFinderLiveCompleteLiveContentViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderLiveCompleteLiveVideoContentViewDelegate, WCFinderLiveCompleteRecommendContentViewDelegate, MMLiveMorphDismissTarget>
{
    WCFinderLiveCompleteLiveContentView *_liveContainerView;
    _Bool _isAudience;
    _Bool _isPrevNavBarNeedToShown;
    _Bool _isCloseByAnchor;
    _Bool _isNotFirstEnter;
    _Bool _isBizLive;
    _Bool _enteredForCompletion;
    _Bool _isEnterDiagnose;
    _Bool _needHideNavBarForDisappear;
    _Bool _isHiddenVideoListContainerView;
    _Bool _replayPrivilege;
    _Bool _hasCheckFinderVideoContainer;
    _Bool _hasCheckHasLiveOrSubscribeContainer;
    _Bool _isInBackground;
    _Bool _isDataStatDetailButtonFirstExposed;
    _Bool _isReplaySettingFirstExposed;
    _Bool _isDataStatContainerFirstExposed;
    unsigned int _liveDurationSeconds;
    unsigned int _liveAudiencesNum;
    unsigned int _maxOnlineCount;
    unsigned int _audiencesAvgSeconds;
    unsigned int _liveNewFansNum;
    unsigned int _bizLiveNewFansNum;
    MMFinderLiveTask *_liveTask;
    unsigned long long _liveId;
    NSString *_roomId;
    unsigned long long _liveBeLikedNum;
    unsigned long long _liveRewardAmountInWecoin;
    unsigned long long _liveHeatValue;
    unsigned long long _heatPromotionAudienceTotalCount;
    unsigned long long _heatPromotionNewFansTotalCount;
    unsigned long long _heatPromotionPayTotalAmountInCents;
    unsigned long long _totalGmv;
    unsigned long long _livePaidAudiencesNum;
    unsigned long long _detailLabelState;
    FinderLiveInfo *_finderLiveInfo;
    FinderJumpInfo *_loyaltyCardJumpInfo;
    NSMutableArray *_finderLiveStatDataItemList;
    UIView *_backgroundView;
    UIView *_liveStatDataContainerView;
    MMUILabel *_liveStatDataTitleLabel;
    UIView *_liveStatDataTitleSeperatorLine;
    UICollectionView *_liveStatDataCollectionView;
    UICollectionViewFlowLayout *_liveStatDataCollectionLayout;
    MMFinderLiveReplaySettingContainerView *_liveReplaySettingContainerView;
    MMFinderLiveReplayOpenTipView *_replayOpenTipView;
    MMUIView *_headImageBorderBgView;
    MMHeadImageView *_finderAnchorHeadImageView;
    UIView *_toAnchorProfileView;
    MMUILabel *_finderAnchorNameLabel;
    MMUIButton *_finderToAnchorProfileLabel;
    UIImageView *_finderToAnchorProfileArrow;
    MMWebImageView *_finderAnchorAuthIconView;
    MMUILabel *_finderAnchorFollowCountLabel;
    MMUILabel *_finderAnchorAuthLabel;
    MMUILabel *_liveEndingLabel;
    MMUILabel *_liveVideoLengthLabel;
    MMUIButton *_backBarButton;
    MMUIButton *_anchorTaskButton;
    WCFinderLiveOverReporter *_reporter;
    WCFinderLiveAudienceLogReporter *_audienceReporter;
    MMUILabel *_liveEndingDescLabel;
    unsigned long long _contentType;
    double _liveContainerViewHeight;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderObject *_finderObject;
    UIView *_anchorDiagnoseEducationView;
    UIImageView *_anchorDiagnoseTipImageView;
    MMUILabel *_anchorDiagnoseTitleLabel;
    UIImageView *_anchorDiagnoseArrowView;
    NSArray *_jumpInfos;
    double _enterDiagnoseTime;
    WCFinderLiveCompleteRecommendContentView *_recommendContentView;
    WCFinderLiveCompleteLiveVideoContentView *_videoContentView;
    NSArray *_dataItemList;
    NSData *_lastBuffer;
    MMUILabel *_liveEndingReplayStatusLabel;
    double _lastViewBottom;
    UIScrollView *_scrollView;
    NSMutableArray *_recommendDataItemArrCache;
    FinderLiveTabInfo *_tabInfoCache;
    WCFinderMoreLiveReporter *_exposeReporter;
    MMUIButton *_liveStatDataDetailButton;
    UIView *_liveStatDataHLine;
    UIImageView *_liveStatDataDetailArrow;
    FinderLiveAbnormalClosedPageInfo *_audienceAbnormalClosedPageInfo;
    WCFinderLiveCompleteLiveReplayView *_replayView;
    WCFinderDataItem *_replayDataItem;
    WCFinderDataItem *_anchorReplayDataItem;
    WCFinderLiveCompleteShoppingView *_shoppingView;
    FinderGetWindowProductProfileCardInfoResponse *_shopInfo;
    unsigned long long _displayElementFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long displayElementFlag; // @synthesize displayElementFlag=_displayElementFlag;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) WCFinderLiveCompleteShoppingView *shoppingView; // @synthesize shoppingView=_shoppingView;
@property(retain, nonatomic) WCFinderDataItem *anchorReplayDataItem; // @synthesize anchorReplayDataItem=_anchorReplayDataItem;
@property(retain, nonatomic) WCFinderDataItem *replayDataItem; // @synthesize replayDataItem=_replayDataItem;
@property(retain, nonatomic) WCFinderLiveCompleteLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *audienceAbnormalClosedPageInfo; // @synthesize audienceAbnormalClosedPageInfo=_audienceAbnormalClosedPageInfo;
@property(nonatomic) _Bool isDataStatContainerFirstExposed; // @synthesize isDataStatContainerFirstExposed=_isDataStatContainerFirstExposed;
@property(nonatomic) _Bool isReplaySettingFirstExposed; // @synthesize isReplaySettingFirstExposed=_isReplaySettingFirstExposed;
@property(nonatomic) _Bool isDataStatDetailButtonFirstExposed; // @synthesize isDataStatDetailButtonFirstExposed=_isDataStatDetailButtonFirstExposed;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) UIImageView *liveStatDataDetailArrow; // @synthesize liveStatDataDetailArrow=_liveStatDataDetailArrow;
@property(retain, nonatomic) UIView *liveStatDataHLine; // @synthesize liveStatDataHLine=_liveStatDataHLine;
@property(retain, nonatomic) MMUIButton *liveStatDataDetailButton; // @synthesize liveStatDataDetailButton=_liveStatDataDetailButton;
@property(retain, nonatomic) WCFinderMoreLiveReporter *exposeReporter; // @synthesize exposeReporter=_exposeReporter;
@property(nonatomic) _Bool hasCheckHasLiveOrSubscribeContainer; // @synthesize hasCheckHasLiveOrSubscribeContainer=_hasCheckHasLiveOrSubscribeContainer;
@property(nonatomic) _Bool hasCheckFinderVideoContainer; // @synthesize hasCheckFinderVideoContainer=_hasCheckFinderVideoContainer;
@property(retain, nonatomic) FinderLiveTabInfo *tabInfoCache; // @synthesize tabInfoCache=_tabInfoCache;
@property(retain, nonatomic) NSMutableArray *recommendDataItemArrCache; // @synthesize recommendDataItemArrCache=_recommendDataItemArrCache;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double lastViewBottom; // @synthesize lastViewBottom=_lastViewBottom;
@property(retain, nonatomic) MMUILabel *liveEndingReplayStatusLabel; // @synthesize liveEndingReplayStatusLabel=_liveEndingReplayStatusLabel;
@property(nonatomic) _Bool replayPrivilege; // @synthesize replayPrivilege=_replayPrivilege;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSArray *dataItemList; // @synthesize dataItemList=_dataItemList;
@property(nonatomic) _Bool isHiddenVideoListContainerView; // @synthesize isHiddenVideoListContainerView=_isHiddenVideoListContainerView;
@property(retain, nonatomic) WCFinderLiveCompleteLiveVideoContentView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(nonatomic) _Bool needHideNavBarForDisappear; // @synthesize needHideNavBarForDisappear=_needHideNavBarForDisappear;
@property(retain, nonatomic) WCFinderLiveCompleteRecommendContentView *recommendContentView; // @synthesize recommendContentView=_recommendContentView;
@property(nonatomic) _Bool isEnterDiagnose; // @synthesize isEnterDiagnose=_isEnterDiagnose;
@property(nonatomic) double enterDiagnoseTime; // @synthesize enterDiagnoseTime=_enterDiagnoseTime;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos=_jumpInfos;
@property(retain, nonatomic) UIImageView *anchorDiagnoseArrowView; // @synthesize anchorDiagnoseArrowView=_anchorDiagnoseArrowView;
@property(retain, nonatomic) MMUILabel *anchorDiagnoseTitleLabel; // @synthesize anchorDiagnoseTitleLabel=_anchorDiagnoseTitleLabel;
@property(retain, nonatomic) UIImageView *anchorDiagnoseTipImageView; // @synthesize anchorDiagnoseTipImageView=_anchorDiagnoseTipImageView;
@property(retain, nonatomic) UIView *anchorDiagnoseEducationView; // @synthesize anchorDiagnoseEducationView=_anchorDiagnoseEducationView;
@property(nonatomic) _Bool enteredForCompletion; // @synthesize enteredForCompletion=_enteredForCompletion;
@property(nonatomic) _Bool isBizLive; // @synthesize isBizLive=_isBizLive;
@property(nonatomic) unsigned int bizLiveNewFansNum; // @synthesize bizLiveNewFansNum=_bizLiveNewFansNum;
@property(nonatomic) _Bool isNotFirstEnter; // @synthesize isNotFirstEnter=_isNotFirstEnter;
@property(retain, nonatomic) FinderObject *finderObject; // @synthesize finderObject=_finderObject;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(nonatomic) double liveContainerViewHeight; // @synthesize liveContainerViewHeight=_liveContainerViewHeight;
@property(readonly, nonatomic) WCFinderLiveCompleteLiveContentView *liveContainerView; // @synthesize liveContainerView=_liveContainerView;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) MMUILabel *liveEndingDescLabel; // @synthesize liveEndingDescLabel=_liveEndingDescLabel;
@property(retain, nonatomic) WCFinderLiveAudienceLogReporter *audienceReporter; // @synthesize audienceReporter=_audienceReporter;
@property(retain, nonatomic) WCFinderLiveOverReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isCloseByAnchor; // @synthesize isCloseByAnchor=_isCloseByAnchor;
@property(nonatomic) _Bool isPrevNavBarNeedToShown; // @synthesize isPrevNavBarNeedToShown=_isPrevNavBarNeedToShown;
@property(retain, nonatomic) MMUIButton *anchorTaskButton; // @synthesize anchorTaskButton=_anchorTaskButton;
@property(retain, nonatomic) MMUIButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) MMUILabel *liveVideoLengthLabel; // @synthesize liveVideoLengthLabel=_liveVideoLengthLabel;
@property(retain, nonatomic) MMUILabel *liveEndingLabel; // @synthesize liveEndingLabel=_liveEndingLabel;
@property(retain, nonatomic) MMUILabel *finderAnchorAuthLabel; // @synthesize finderAnchorAuthLabel=_finderAnchorAuthLabel;
@property(retain, nonatomic) MMUILabel *finderAnchorFollowCountLabel; // @synthesize finderAnchorFollowCountLabel=_finderAnchorFollowCountLabel;
@property(retain, nonatomic) MMWebImageView *finderAnchorAuthIconView; // @synthesize finderAnchorAuthIconView=_finderAnchorAuthIconView;
@property(retain, nonatomic) UIImageView *finderToAnchorProfileArrow; // @synthesize finderToAnchorProfileArrow=_finderToAnchorProfileArrow;
@property(retain, nonatomic) MMUIButton *finderToAnchorProfileLabel; // @synthesize finderToAnchorProfileLabel=_finderToAnchorProfileLabel;
@property(retain, nonatomic) MMUILabel *finderAnchorNameLabel; // @synthesize finderAnchorNameLabel=_finderAnchorNameLabel;
@property(retain, nonatomic) UIView *toAnchorProfileView; // @synthesize toAnchorProfileView=_toAnchorProfileView;
@property(retain, nonatomic) MMHeadImageView *finderAnchorHeadImageView; // @synthesize finderAnchorHeadImageView=_finderAnchorHeadImageView;
@property(retain, nonatomic) MMUIView *headImageBorderBgView; // @synthesize headImageBorderBgView=_headImageBorderBgView;
@property(retain, nonatomic) MMFinderLiveReplayOpenTipView *replayOpenTipView; // @synthesize replayOpenTipView=_replayOpenTipView;
@property(retain, nonatomic) MMFinderLiveReplaySettingContainerView *liveReplaySettingContainerView; // @synthesize liveReplaySettingContainerView=_liveReplaySettingContainerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *liveStatDataCollectionLayout; // @synthesize liveStatDataCollectionLayout=_liveStatDataCollectionLayout;
@property(retain, nonatomic) UICollectionView *liveStatDataCollectionView; // @synthesize liveStatDataCollectionView=_liveStatDataCollectionView;
@property(retain, nonatomic) UIView *liveStatDataTitleSeperatorLine; // @synthesize liveStatDataTitleSeperatorLine=_liveStatDataTitleSeperatorLine;
@property(retain, nonatomic) MMUILabel *liveStatDataTitleLabel; // @synthesize liveStatDataTitleLabel=_liveStatDataTitleLabel;
@property(retain, nonatomic) UIView *liveStatDataContainerView; // @synthesize liveStatDataContainerView=_liveStatDataContainerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *finderLiveStatDataItemList; // @synthesize finderLiveStatDataItemList=_finderLiveStatDataItemList;
@property(retain, nonatomic) FinderJumpInfo *loyaltyCardJumpInfo; // @synthesize loyaltyCardJumpInfo=_loyaltyCardJumpInfo;
@property(retain, nonatomic) FinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(nonatomic) unsigned long long detailLabelState; // @synthesize detailLabelState=_detailLabelState;
@property(nonatomic) unsigned long long livePaidAudiencesNum; // @synthesize livePaidAudiencesNum=_livePaidAudiencesNum;
@property(nonatomic) unsigned long long totalGmv; // @synthesize totalGmv=_totalGmv;
@property(nonatomic) unsigned long long heatPromotionPayTotalAmountInCents; // @synthesize heatPromotionPayTotalAmountInCents=_heatPromotionPayTotalAmountInCents;
@property(nonatomic) unsigned long long heatPromotionNewFansTotalCount; // @synthesize heatPromotionNewFansTotalCount=_heatPromotionNewFansTotalCount;
@property(nonatomic) unsigned long long heatPromotionAudienceTotalCount; // @synthesize heatPromotionAudienceTotalCount=_heatPromotionAudienceTotalCount;
@property(nonatomic) unsigned long long liveHeatValue; // @synthesize liveHeatValue=_liveHeatValue;
@property(nonatomic) unsigned long long liveRewardAmountInWecoin; // @synthesize liveRewardAmountInWecoin=_liveRewardAmountInWecoin;
@property(nonatomic) unsigned int liveNewFansNum; // @synthesize liveNewFansNum=_liveNewFansNum;
@property(nonatomic) unsigned int audiencesAvgSeconds; // @synthesize audiencesAvgSeconds=_audiencesAvgSeconds;
@property(nonatomic) unsigned int maxOnlineCount; // @synthesize maxOnlineCount=_maxOnlineCount;
@property(nonatomic) unsigned long long liveBeLikedNum; // @synthesize liveBeLikedNum=_liveBeLikedNum;
@property(nonatomic) unsigned int liveAudiencesNum; // @synthesize liveAudiencesNum=_liveAudiencesNum;
@property(nonatomic) unsigned int liveDurationSeconds; // @synthesize liveDurationSeconds=_liveDurationSeconds;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (unsigned long long)getCurrentRefReplayObjectId;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)registerYReportSdk;
- (long long)overrideUserInterfaceStyle;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (id)toAudienceReporter;
- (void)report21053ClickActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)report21053ExposeActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)openMoreLiveFromMMLiveOperationWithTabId:(unsigned long long)arg1;
- (void)liveCompleteRecommendLiveItemViewReport:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteRecommendLiveItemViewClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteRecommendLiveMoreButtonClick:(id)arg1 tabId:(unsigned long long)arg2;
- (void)onFinderLiveCloseWithAbnormalClosedPageInfoWithLiveId:(unsigned long long)arg1 closePageInfo:(id)arg2;
- (void)reportAnchorDiagnose:(long long)arg1;
- (id)getDisplayVoiceOverLiveLength:(unsigned int)arg1;
- (void)updateAfterZoomIn;
- (void)doZoomInAnimator;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomOut;
- (void)doZoomOutAnimator;
- (void)updateBeforeZoomOut;
- (void)reportLiveContainerViewWithAction:(unsigned long long)arg1 isLive:(_Bool)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)createVerticalSeperator;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (_Bool)isLimitMode;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickLiveStatDataDetailButton:(id)arg1;
- (void)createReplayRequest:(unsigned long long)arg1 isAgreementChecked:(_Bool)arg2;
- (void)reportReplayData:(_Bool)arg1;
- (void)updateReplayStatus:(unsigned int)arg1;
- (void)anchorJumpReplayFeed;
- (void)handelAnchorJumpReplayFeed;
- (void)createReplaySetting:(unsigned int)arg1 isChargableLive:(_Bool)arg2;
- (void)onFinderLiveStatDataViewCellClicked:(id)arg1;
- (void)onFinderLiveStatDataViewCellExtraCardClick:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)getCurrentJumpInfo;
- (void)onClickEnterAnchorLiveEducationFinderFeed:(id)arg1;
- (void)onAnchorTaskButtonClicked:(id)arg1;
- (void)onDoneButtonClicked:(id)arg1;
- (void)gotoFinderBrandLiveSubscribeProfile;
- (void)onGoToProfilePage;
- (void)onClickProfileLabel;
- (void)delayRequestCGIIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)isFromQRCode;
- (id)finderLiveTaskId;
- (_Bool)shouldShowAnchorDiagnose;
- (_Bool)shouldShowLikeEntry;
- (_Bool)shouldShowReplayOpenTipView;
- (_Bool)shouldShowRelayStatusLabel;
- (_Bool)shouldShowReplaySwitch;
@property(readonly, nonatomic) _Bool shouldPaymentEntry;
@property(readonly, nonatomic) _Bool shouldShowGiftEntry;
- (void)updateContentViewHeight:(unsigned long long)arg1;
- (void)layoutActionButtonWhenClick:(int)arg1;
- (void)handleLiveNoticeForUser:(unsigned long long)arg1;
- (void)onClickRLivePreview:(unsigned long long)arg1;
- (void)liveCompleteLiveVideoContentViewMediaReport:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteLiveVideoContentViewMediaClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteLiveVideoContentViewActionButtonClick:(id)arg1;
- (void)actionButtonClick:(unsigned long long)arg1;
- (void)deleteVCWhenFromStreamProfile;
- (void)onClickWatchLive;
- (void)actionButtonClick:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateAbnormalClosedWording;
- (_Bool)checkHasDataDetailEntrance;
- (void)updateItemsPosition;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)layoutLiveRecommendContentView;
- (double)videoContentViewWidthAndHeightScale;
- (void)updateScrollViewContentSize:(struct CGSize)arg1;
- (void)layoutVideoContentContainerView;
- (void)liveReplayViewClick:(id)arg1;
- (_Bool)hasReplayView;
- (void)layoutShoppingView;
- (void)layoutLiveLiveReplayView;
- (void)layoutLiveContainerView:(unsigned long long)arg1;
- (void)layoutAnchorTaskButton;
- (void)updateCollectionLayoutForWidth:(double)arg1;
- (void)layoutAnchorDiagnoseEducationView;
- (void)layoutReplayStatusLabel;
- (void)layoutLiveReplaySettingViews;
- (void)onLiveReplaySettingDetailLinkClicked;
- (void)layoutLiveStatDataViews;
- (void)layoutAnchorView;
- (void)updateExtraInfoForAudience;
- (void)layoutAudienceView:(double)arg1;
- (void)layoutAudienceView;
- (void)layoutLiveEndingDescLabel;
- (void)layoutTopLabels;
- (void)layoutBackBarButton;
- (void)layoutAllAudienceItemsView;
- (void)layoutUI;
- (void)setupBlurBackground;
- (_Bool)canShowShop;
- (_Bool)canShowRecommendLive;
- (_Bool)canShowVideoList;
- (_Bool)canShowLiveContainer;
- (void)updateWithLiveInfo;
- (void)updateLiveDuration;
- (void)updateGoToProfileButtonState;
- (long long)updateWithVideoList:(id)arg1;
- (void)checkAndUpdateRecommendContentView:(id)arg1 tabInfo:(id)arg2;
- (_Bool)defaultReplayEnableOnOff;
- (void)loadData;
- (void)loadDataDelayCGIIfNeeded:(_Bool)arg1;
- (void)updateReport;
- (void)beginUpdateLiveContainerViewData;
- (void)updateLiveContainerViewData:(_Bool)arg1;
- (void)fetchProfileExtInfo;
- (void)fetchShopInfo;
- (void)handleFetchProfileReplayInfoFailure;
- (void)fetchProfileReplayInfo:(_Bool)arg1;
- (void)checkReport;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldInteractivePop;
- (_Bool)useBlackStatusbar;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)checkNeedUpdateCollectionLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithLiveTask:(id)arg1 reporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

