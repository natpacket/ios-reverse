//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMLiveMorphDismissTarget-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PAGViewListener-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "RingBackInfoDisplaySheetViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCardWebViewControllerDelegate-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedDetailViewControllerDelegate-Protocol.h"
#import "WCFinderFeedFlowViewDataSource-Protocol.h"
#import "WCFinderFeedFlowViewDelegate-Protocol.h"
#import "WCFinderFeedFlowViewLayoutDelegate-Protocol.h"
#import "WCFinderFeedFollowVMDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeListViewControllerDelegate-Protocol.h"
#import "WCFinderFollowViewControllerProtocol-Protocol.h"
#import "WCFinderFullMultiMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderMoreHotContentTableViewCellDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderShareCustomTransitionProtocol-Protocol.h"
#import "WCFinderTabViewControllerProtocol-Protocol.h"
#import "WCFinderTimelineNetworkTipProtocol-Protocol.h"
#import "WCFinderVideoTemplateSelectVCDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class MMTipsViewController, NSIndexPath, NSMutableDictionary, NSString, UITableView, UIView, WCFinderExtStatsReporter, WCFinderFeedFlowView, WCFinderFeedFollowVM, WCFinderFlowFollowTabVCParam, WCFinderOpenTimelineParams;
@protocol WCFinderFollowViewControllerDelegate;

@interface WCFinderFlowFollowTabViewController : MMUIViewController <WCFinderRedDotNotifyExt, WCFinderFullMultiMediaTableViewCellDelegate, WCActionSheetDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderRedDotExt, WCFinderFeedFollowVMDelegate, WCFinderMoreHotContentTableViewCellDelegate, WCGeneralMonitorDelegate, MMTipsViewControllerDelegate, RecentForwardScrollViewDelegate, WCFinderCardWebViewControllerDelegate, ForwardMessageLogicDelegate, WCFinderTimelineNetworkTipProtocol, MMLiveMorphDismissTarget, RingBackInfoDisplaySheetViewDelegate, PAGViewListener, WCFinderPostViewControllerDelegate, WCFinderVideoTemplateSelectVCDelegate, MMSightCameraViewControllerDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderShareCustomTransitionProtocol, WCFinderDataItemExt, WCFinderFeedDetailViewControllerDelegate, WCFinderTabViewControllerProtocol, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowViewControllerProtocol>
{
    _Bool _postFeedInsertMachineTab;
    _Bool _hasReportCreateEvent;
    _Bool _footerNoMoreData;
    _Bool _isEnableMarkRead;
    _Bool _isViewWillAppeaer;
    _Bool _hasFetchData;
    _Bool _enableAutoRefresh;
    WCFinderFlowFollowTabVCParam *_param;
    UIView *_fakeNaviBackView;
    WCFinderFeedFlowView *_feedFlowView;
    UITableView *_tableView;
    WCFinderFeedFollowVM *_feedVM;
    NSIndexPath *_currentForceIndexPath;
    NSMutableDictionary *_exposureDict;
    NSString *_currentVideoTid;
    NSString *_currentForceTid;
    long long _lastDisappearSecond;
    MMTipsViewController *_shareToSnsTips;
    UIView *_maskView;
    unsigned long long _enterTime;
    id <WCFinderFollowViewControllerDelegate> _delegate;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    WCFinderExtStatsReporter *_extStatReporter;
}

+ (id)flowViewIndexPathForVMIndexPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) __weak id <WCFinderFollowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMTipsViewController *shareToSnsTips; // @synthesize shareToSnsTips=_shareToSnsTips;
@property(nonatomic) _Bool enableAutoRefresh; // @synthesize enableAutoRefresh=_enableAutoRefresh;
@property(nonatomic) long long lastDisappearSecond; // @synthesize lastDisappearSecond=_lastDisappearSecond;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *currentForceTid; // @synthesize currentForceTid=_currentForceTid;
@property(nonatomic) _Bool isViewWillAppeaer; // @synthesize isViewWillAppeaer=_isViewWillAppeaer;
@property(nonatomic) _Bool isEnableMarkRead; // @synthesize isEnableMarkRead=_isEnableMarkRead;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool footerNoMoreData; // @synthesize footerNoMoreData=_footerNoMoreData;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(retain, nonatomic) WCFinderFeedFollowVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) UIView *fakeNaviBackView; // @synthesize fakeNaviBackView=_fakeNaviBackView;
@property(retain, nonatomic) WCFinderFlowFollowTabVCParam *param; // @synthesize param=_param;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(nonatomic) _Bool postFeedInsertMachineTab; // @synthesize postFeedInsertMachineTab=_postFeedInsertMachineTab;
- (void)onFeedDetailAbnormalFeedWithContentVM:(id)arg1;
- (void)onFeedDetailDislikeFeedWithContentVM:(id)arg1;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(unsigned long long)arg3;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (id)timelineTabViewController;
- (void)networkTipDidDisappear;
- (void)networkTipDidAppear;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)reportItemsExposed:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)onMoreHotContentCellClick;
- (void)onClickRealNameAction;
- (id)getCurMaskView;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)getCurViewModelLastBuff;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (unsigned long long)getCurTableViewVisibleBottomIndex;
- (_Bool)tabViewControllerGetSelectState;
- (void)handleHotContentExposeLogic;
- (void)tabViewControllerDidChangeOrientation:(_Bool)arg1;
- (void)tabViewControllerStopCurrentPlayVideo;
- (void)handleDataReportLogicViewHidden;
- (void)triggerDeselectLogic;
- (void)triggerSelectLogic;
- (void)tabViewControllerSelectionDidChange:(_Bool)arg1;
- (void)tabViewControllerSelectionWillChange:(_Bool)arg1;
- (void)tabViewControllerInitIfNeeded;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (_Bool)onFeedFollowVMGetHotTabNeedTopRefresh;
- (id)onFeedFollowVMGetHotTabLastBuff;
- (void)onFeedFollowVMShouldReloadAtIndexPath:(id)arg1;
- (_Bool)WCFinderFeedFollowVMIsSelected;
- (unsigned long long)followVMGetVCCommentScene;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)enableTriggerRefreshAction:(_Bool)arg1;
- (id)currentFeedMediaCell;
- (id)currentFeedContentVM;
- (_Bool)isTopRrefreshing;
- (_Bool)isCurrentMediaBeginPlayed;
- (void)cellEndExpose;
- (void)tabViewControllerRecordEnterInfo;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)markNeedReloadWhenAppear;
- (_Bool)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)resetRefreshState;
- (void)handleDataReportLogicViewShow;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)pourStateIntoPool:(id)arg1;
- (void)exposeMarkRead:(id)arg1;
- (void)handleFeedExposeLogic;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (_Bool)currentSelectedMediaIsPlay;
- (id)contentScrollView;
- (id)minimizePlayInfo:(_Bool)arg1;
- (void)inPicture;
- (void)clickRecommendUrl:(id)arg1;
- (struct CGPoint)nearestTargetOffsetForOffset:(struct CGPoint)arg1;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)reloadDataWrap;
- (id)specialParamsForFeedId:(id)arg1;
- (id)feedIdByIndex:(id)arg1;
- (_Bool)isInSubScene;
- (void)finderFeedFlowView:(id)arg1 didClickFollowTagLabel:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didClickLinkWithUrl:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (void)notifyTopRefreshFinish:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)triggerHeaderRefreshLoading;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2;
- (void)onFeedVMDataFootRefreshError;
- (void)updateFlowViewState;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedVMDataPullRefreshStopLoading;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)feedFollowScrollToTargetIndexPath:(id)arg1;
- (id)feedFollowVCCurrentForceTid;
- (void)onFeedFollowVMUploadSucWithDataItem:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showShareToSnsTipsWith:(id)arg1;
- (void)onFeedVMDataChangedByPublish:(id)arg1 dataItem:(id)arg2;
- (void)onFeedVMDataAppend:(id)arg1;
- (void)onFeedVMInsertContentVM:(id)arg1 section:(long long)arg2;
- (void)scrollToNextVisibleCellAfterLoading:(struct CGRect)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(id)arg1;
- (void)onFeedVMDataDeleteWithIndexSet:(id)arg1;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
- (void)onFeedVMDataLocalEmpty;
- (void)transferToRecommond;
- (void)fetchNextPage;
- (void)currentForceIndexPathWillChanged;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)reportFullStatsImmediately;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)reloadRowAtIndexPath:(id)arg1 contentVM:(id)arg2 animation:(long long)arg3;
- (void)scrollTimelineToTopWithAnimation:(_Bool)arg1;
- (void)scrollTimelineToTop;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopPreloadVisibleVideo;
- (void)viewWillLayoutSubviews;
- (id)indexPathWithDataIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)onFinderTabAppear:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)currentVCTabType;
- (struct CGRect)getCurSearchBarFrame;
- (void)setupFeedFlowView;
- (void)setupFakeNavigationBackGoundView;
- (void)initSubview;
- (_Bool)useTransparentNavibar;
- (void)updateFinderInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (id)initWithParam:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

