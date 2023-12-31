//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSVideoFlowBaseViewController.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WSVideoFlowDataDelegate-Protocol.h"
#import "WSVideoPagingPlayerViewDelegate-Protocol.h"
#import "WSVideoWowEducateDelegate-Protocol.h"

@class MMUILabel, NSString, UIButton, UIView, WCPlayerPlayArgs, WCPlayerView, WCTimeLineFooterView, WSVideoModel, WSVideoPagingPlayerView, WSVideoTagInfo;

@interface WSVideoFlowPagingViewController : WSVideoFlowBaseViewController <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, WSVideoFlowDataDelegate, MMRefreshTableFooterDelegate, WSVideoPagingPlayerViewDelegate, ICdnComMgrExt, WSVideoWowEducateDelegate>
{
    UIView *_navBarBkg;
    MMUILabel *_mainTagTitle;
    WSVideoModel *_initVideoModel;
    WCTimeLineFooterView *_footerView;
    _Bool _canAutoPlay;
    _Bool _bDisplayNoDefaultVideo;
    _Bool _hasLoadFirstPage;
    _Bool _hasDidBePushed;
    _Bool _isSingleVideoPlay;
    _Bool _initLoading;
    WSVideoTagInfo *_initTagInfo;
    int _cgiStatus;
    long long _curVideoIndex;
    _Bool _isDebugingExchange;
    long long _orientation;
    NSString *_lastPlayedNetStatus;
    NSString *_lastLoadingVid;
    WCPlayerView *_playerView;
    WSVideoPagingPlayerView *_controlView;
    WCPlayerPlayArgs *_playerInfo;
    WSVideoPagingPlayerView *_recommendCell;
    UIButton *_recommendCellTapButton;
    UIButton *_firstCellTapButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *firstCellTapButton; // @synthesize firstCellTapButton=_firstCellTapButton;
@property(retain, nonatomic) UIButton *recommendCellTapButton; // @synthesize recommendCellTapButton=_recommendCellTapButton;
@property(retain, nonatomic) WSVideoPagingPlayerView *recommendCell; // @synthesize recommendCell=_recommendCell;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WSVideoPagingPlayerView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (_Bool)isCurrentCdnTaskId:(id)arg1;
- (void)debugRetryNextUrl:(id)arg1;
- (void)onFloatViewCommentClick:(id)arg1;
- (void)onWSVideoWowEducateClose;
- (void)handleWowSuccess:(_Bool)arg1;
- (void)retryNextUrlInCurrentModel;
- (void)OnCdnDownload:(id)arg1;
- (void)resetVideoPlay;
- (void)playCurrentVideo;
- (void)refreshVideoPlay:(_Bool)arg1;
- (void)refreshVideoPlay;
- (void)configurePlayerView;
- (id)getPagingControlView;
- (void)notifyVideoPlayMuteChange;
- (void)didVideoFeedBackConfirmWithReasons:(id)arg1;
- (void)onClickMoreButton:(id)arg1 inView:(id)arg2 withVideoModel:(id)arg3;
- (void)onClickFeedBackButton:(id)arg1 sender:(id)arg2;
- (void)onClickSource:(id)arg1;
- (void)onClickShare:(id)arg1;
- (void)onClickTag:(id)arg1 sender:(id)arg2;
- (void)onClickTitle:(id)arg1;
- (void)tapNavigationTitle;
- (void)didNetworkChange;
- (void)resetCurrentVideo;
- (void)resumeCurrentVideo;
- (void)pauseCurrentVideo;
- (_Bool)isVideoPlaying;
- (id)currentVideoModel;
- (long long)getOrientation;
- (id)currentIndexPath;
- (void)afterFoldInputView:(id)arg1;
- (void)breakDeepPlayingVideoMode;
- (void)deepShowPlayingVideo;
- (void)delayToShowDeepPlayingMode:(double)arg1;
- (void)delayToShowDeepPlayingMode;
- (void)onRecordNetPauseAndPlay;
- (void)onCdnVideoDownLoadFinishForVideoModel:(id)arg1 retCode:(int)arg2 cdnTaskInfo:(id)arg3;
- (void)onPlayerViewResetAndPlay;
- (_Bool)canPlayNextVideo;
- (void)onPlayerViewReplayForUpdatedUrl;
- (_Bool)onPlayerViewUpdateVideoUrl:(id)arg1;
- (void)onPlayerViewPlayToEnd:(id)arg1;
- (void)onVideoPanGestureEndOrCancel:(id)arg1;
- (void)onVideoPanGestureBeginDrag:(id)arg1;
- (void)onPlayerViewClickToPlay;
- (void)onClickMaskViewPlayButton;
- (_Bool)canBeginPlayVideoUnderMobileNetwork;
- (void)onShowBufferingView;
- (void)onHideControlViews;
- (void)onShowControlViews;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onTryResumeExpiredPlayer:(id)arg1;
- (_Bool)onCheckCurrentVideoHandlingExpired;
- (void)onDefaultVideoUpdated;
- (void)onSingleVideoFetchEnd:(id)arg1;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchToWangka:(_Bool)arg1;
- (void)showWangkaToast;
- (void)showRecommendCellWhenPlayToEnd:(id)arg1;
- (void)configureRecommendCellView:(id)arg1 forCellAtindexPath:(id)arg2;
- (void)expandRecommendCell;
- (void)pullVideoFlowWhenScrollFromRecommend;
- (void)viewDidTransitionToNewSize;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)canPlayDefaultVideo;
- (void)viewDidLayoutSubviews;
- (id)getNormalTitle;
- (void)initNavigateItem;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initView;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (void)fetchNextPage;
- (void)checkAndFetch;
- (_Bool)useTransparentNavibar;
- (unsigned long long)judgeNetLogicChange;
- (void)decideNetLayer;
- (void)initDataLogic:(id)arg1;
- (void)initCustomWebSearchMgr;
- (void)dealloc;
- (void)forcePagingPortrait;
- (void)appWillResignActive:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (id)initWithMinimizeData:(id)arg1 taskData:(id)arg2;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

