//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMMenuControllerExt-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "RingBackInfoDisplaySheetViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderBulletCommentViewControllerDelegate-Protocol.h"
#import "WCFinderBulletGroupViewDelegate-Protocol.h"
#import "WCFinderCommentDetailViewControllerDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeListViewControllerDelegate-Protocol.h"
#import "WCFinderFeedListTransitionHelperBehavior-Protocol.h"
#import "WCFinderFullToolbarViewDelegate-Protocol.h"
#import "WCFinderHeadInfoViewDelegate-Protocol.h"
#import "WCFinderKeepHolderProtocol-Protocol.h"
#import "WCFinderLandScapeBasicTableViewCellDelegate-Protocol.h"
#import "WCFinderLandScapeVideoDisplayViewDelegate-Protocol.h"
#import "WCFinderMinimizeDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCMainWindowExt-Protocol.h"

@class NSString, UIImage, UILabel, UITableView, UIView, UIViewController, WCFinderAnimationLoadingView, WCFinderBulletGroupView, WCFinderExtStatsReporter, WCFinderFeedContentVM, WCFinderLandScapeReporter, WCFinderLandScapeVideoDisplayView, WCFinderRefreshTableFooterView, WCFinderScrollActionSheet, WCFinderVideoDragProgressReporter;
@protocol WCFinderCommentBaseViewProtocol, WCFinderLandScapeVideoViewDataSource, WCFinderLandScapeVideoViewDelegate;

@interface WCFinderLandScapeVideoView : MMUIView <WCFinderFeedListTransitionHelperBehavior, UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, WCFinderLandScapeVideoDisplayViewDelegate, WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, RingBackInfoDisplaySheetViewDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderCommentDetailViewControllerDelegate, MMMenuControllerExt, WCFinderBulletCommentViewControllerDelegate, WCFinderBulletGroupViewDelegate, WCMainWindowExt, WCFinderMinimizeDelegate, WCFinderLandScapeBasicTableViewCellDelegate, UIGestureRecognizerDelegate, WCFinderKeepHolderProtocol>
{
    _Bool _isPlayingBeforeDisappear;
    _Bool _needReloadListViewAtOrientaionChange;
    id <WCFinderLandScapeVideoViewDataSource> _dataSource;
    id <WCFinderLandScapeVideoViewDelegate> _delegate;
    WCFinderFeedContentVM *_currentPlayingContentVM;
    WCFinderRefreshTableFooterView *_footerView;
    UITableView *_tableView;
    WCFinderLandScapeReporter *_reporter;
    long long _videoStartPlayTime;
    WCFinderExtStatsReporter *_extStatReporter;
    WCFinderLandScapeVideoDisplayView *_displayView;
    UIView *_topSeparator;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_emptyTipsLabel;
    WCFinderScrollActionSheet *_currentActionSheet;
    UIImage *_minimizeCoverImage;
    UIView *_minimizeSnapshotView;
    WCFinderBulletGroupView *_bulletAnimationView;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    WCFinderVideoDragProgressReporter *_progressDragReporter;
    unsigned long long _style;
    double _lastMovementY;
    double _tableViewTopPosAtPanBegin;
    double _tableViewInitialY;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReloadListViewAtOrientaionChange; // @synthesize needReloadListViewAtOrientaionChange=_needReloadListViewAtOrientaionChange;
@property(nonatomic) double tableViewInitialY; // @synthesize tableViewInitialY=_tableViewInitialY;
@property(nonatomic) double tableViewTopPosAtPanBegin; // @synthesize tableViewTopPosAtPanBegin=_tableViewTopPosAtPanBegin;
@property(nonatomic) double lastMovementY; // @synthesize lastMovementY=_lastMovementY;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderVideoDragProgressReporter *progressDragReporter; // @synthesize progressDragReporter=_progressDragReporter;
@property(nonatomic) _Bool isPlayingBeforeDisappear; // @synthesize isPlayingBeforeDisappear=_isPlayingBeforeDisappear;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderBulletGroupView *bulletAnimationView; // @synthesize bulletAnimationView=_bulletAnimationView;
@property(retain, nonatomic) UIView *minimizeSnapshotView; // @synthesize minimizeSnapshotView=_minimizeSnapshotView;
@property(retain, nonatomic) UIImage *minimizeCoverImage; // @synthesize minimizeCoverImage=_minimizeCoverImage;
@property(retain, nonatomic) WCFinderScrollActionSheet *currentActionSheet; // @synthesize currentActionSheet=_currentActionSheet;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) WCFinderLandScapeVideoDisplayView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(nonatomic) long long videoStartPlayTime; // @synthesize videoStartPlayTime=_videoStartPlayTime;
@property(retain, nonatomic) WCFinderLandScapeReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) WCFinderFeedContentVM *currentPlayingContentVM; // @synthesize currentPlayingContentVM=_currentPlayingContentVM;
@property(nonatomic) __weak id <WCFinderLandScapeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderLandScapeVideoViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)feedViewControllerScene;
- (_Bool)isAuthor;
- (id)contentVMAtRow:(long long)arg1;
- (id)currentViewController;
- (id)gen21875DictWithFeedId:(id)arg1 nextId:(id)arg2;
- (id)gen21875DictWithFeedId:(id)arg1;
- (id)gen21874Dict;
- (void)statReportActionClickType:(unsigned long long)arg1;
- (void)statReportActionReport;
- (void)statReportActionEndPlay;
- (void)statReportActionStartPlay;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_pushProfileWithUserName:(id)arg1;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)_showScrollActionSheetWithContentVM:(id)arg1 shareButton:(id)arg2;
- (void)reportVideoStatTime;
- (id)createActionSheetWithContentVM:(id)arg1;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(_Bool)arg2;
- (id)minimizeConflictScrollViews;
- (_Bool)dismissMinimizeWhenLimitMode;
- (id)requestMinimizeInfo:(_Bool)arg1;
- (id)minimizePageBizKey;
- (void)updateNavigationBarItems;
- (_Bool)enableMinimize;
- (void)autoFoldDescView;
- (void)autoExpandDescView;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)onClickMinimizeBtn;
- (unsigned long long)landScapeCellGetCommentScene;
- (void)onTapBulletGroupViewDidSelectedItem:(_Bool)arg1;
- (void)onBulletCommentViewControllerClosed;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(_Bool)arg1;
- (void)onBulletCommentViewControllerDidComment:(id)arg1;
- (void)updateBulletAnimationViewWithText:(id)arg1 followBulletCommentId:(unsigned long long)arg2;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onRingToneSheetDisappear;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2 touchPoint:(struct CGPoint)arg3;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(_Bool)arg5 enterType:(unsigned long long)arg6;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (id)viewForKeepHoldAnimation;
- (id)snapshotImageForMedia;
- (id)currentFeedContentVM;
- (void)addToTingListenLater:(id)arg1;
- (void)snapshotForMinimize;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onHeaderFollowClickAction:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)showSpamTipsWithString:(id)arg1;
- (void)clickLiveNowView:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)clickAvatar:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)fetchBulletCommentWithTimestamp:(double)arg1;
- (void)updateBulletContentVM:(id)arg1 size:(struct CGSize)arg2;
- (void)updateBulletContentVM:(id)arg1;
- (void)updateBulletCommentLayout:(_Bool)arg1;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)modBlackListWithOpType:(long long)arg1 bulletItem:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)onBlockBulletComment:(id)arg1;
- (void)onUnBlockBulletComment:(id)arg1;
- (void)onFollowBulletComment:(id)arg1;
- (void)onReportBulletComment:(id)arg1;
- (void)onDeleteBulletComment:(id)arg1 result:(_Bool)arg2;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1;
- (void)onCopyBulletComment:(id)arg1;
- (void)onMoreBulletComment:(id)arg1;
- (void)setupMenuController:(id)arg1 menuItems:(id)arg2 targetRect:(struct CGRect)arg3;
- (void)showBulletMenuItems:(id)arg1 targetRect:(struct CGRect)arg2;
- (void)onFinderLandScapeVideoDisplayViewContentMediaDidEndPlay;
- (void)onFinderLandScapeVideoDisplayViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayNextVideoWithDataItem:(id)arg1;
- (id)finderLandScapeVideoDisplayViewGetNextPlayableContentVM;
- (void)onFinderLandScapeVideoDisplayViewDidClickFriendLikeViewWithContentVM:(id)arg1;
- (void)setPlayRate:(double)arg1 resumeMediaPlay:(_Bool)arg2;
- (void)stopSpeedPlay;
- (void)onFinderLandScapeVideoDisplayViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidStartLongPressSpeedPlay:(double)arg1;
- (double)getPlayVideoTotalTime;
- (void)onFinderLandScapeVideoDisplayViewEndPan;
- (void)onFinderLandScapeVideoDisplayViewStartPan;
- (void)onFinderLandScapeVideoDisplayViewDidClickHotCommentView:(id)arg1 contentVM:(id)arg2;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickReturnBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickRotateBtn;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (_Bool)getHomeIndicatorHiddenState;
- (void)setViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setViewDidBePopOrDissmiss;
- (void)setViewDidDisappearState;
- (void)setViewWillDisappearState;
- (void)setViewDidAppearState;
- (void)setViewWillAppearState;
- (void)forceAdjustSubviewsLayoutWithSize:(struct CGSize)arg1;
- (void)adjustSubviewsLayoutWithSizeIfNeeded:(struct CGSize)arg1;
- (void)adjustSubviewsLayout;
- (void)setState:(unsigned long long)arg1;
- (void)reloadFeedList;
- (void)reloadDisplayVideoWithContentVM:(id)arg1;
- (id)getPlayerView;
- (void)pauseVideo;
- (void)resumePlayVideo;
- (void)stopPlayVideo;
- (void)playVideo;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (id)transitionHelperFetchCurrentPlayTid;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

