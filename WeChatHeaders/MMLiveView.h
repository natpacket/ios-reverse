//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveGestureAnimationContainerViewDelegate-Protocol.h"
#import "MMFinderLiveGestureAnimationPlaying-Protocol.h"
#import "MMFinderLiveScreenshotPosterLogicExt-Protocol.h"
#import "MMFinderLiveWcPlayerViewModelDelegate-Protocol.h"
#import "MMLiveContainerDisplayViewProtocol-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCLiveVideoViewDelegate-Protocol.h"

@class MMFinderLiveAdvertisementPlayerViewModel, MMFinderLiveConnectMicUsersInfo, MMFinderLiveGestureAnimationContainerView, MMFinderLiveResDownloadManager, MMFinderLiveSubTitleView, MMFinderLiveTask, MMFinderLiveWcPlayerView, MMLiveAudioModeAnimatedBackgroundPlayerViewModel, MMLivePauseView, MMLiveTaskId, MMUIActivityIndicatorView, MMUIButton, MMUIImageView, MMUILabel, MMWebImageView, NSMutableDictionary, NSString, UIImageView, UIPanGestureRecognizer, WCLiveVideoView, WeAvatarScreenView;
@protocol MMLiveViewDelegate;

@interface MMLiveView : UIView <WCLiveVideoViewDelegate, MMWebImageViewDelegate, UIGestureRecognizerDelegate, MMFinderLiveWcPlayerViewModelDelegate, MMFinderLiveGestureAnimationContainerViewDelegate, MMFinderLiveScreenshotPosterLogicExt, MMLiveContainerDisplayViewProtocol, MMFinderLiveGestureAnimationPlaying>
{
    _Bool _liveDidStart;
    _Bool _isShowingTips;
    _Bool _isShowingLoading;
    _Bool _isShowingPauseView;
    _Bool _shouldShowLiveRoomCoverImageView;
    _Bool _shouldLayoutAvatar;
    _Bool _isShowingScreenSharingView;
    _Bool _isInSwitchVideoViewAnimation;
    _Bool _isNextCdnPlayerViewFromTheLeftSide;
    _Bool _isShowingTrialTimeoutView;
    _Bool _isInBackground;
    _Bool _lastEnableShowLiveRoomCoverImageView;
    _Bool _curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame;
    _Bool _isInMemberLiveInterceptMode;
    _Bool _isInMinimizeMode;
    id <MMLiveViewDelegate> _actionDelegate;
    UIView *_blurBackgroundView;
    WCLiveVideoView *_localVideoView;
    WCLiveVideoView *_bigVideoView;
    WCLiveVideoView *_smallLocalVideoView;
    WCLiveVideoView *_smallRemoteVideoView;
    WCLiveVideoView *_otherConnectMicUserVideoView;
    MMWebImageView *_liveRoomCoverImageViewForAnchor;
    MMWebImageView *_liveRoomCoverImageViewForAudience;
    UIView *_cdnPlayerView;
    UIView *_screenSharingContainerView;
    UIView *_screenSharingContentView;
    MMUIButton *_smallVideoSwitchCameraButton;
    MMLiveTaskId *_taskId;
    NSString *_smallRemoteVideoViewUserId;
    MMFinderLiveConnectMicUsersInfo *_allMicUsersInfo;
    NSMutableDictionary *_micUserViewInfoDic;
    WeAvatarScreenView *_avatarView;
    UIView *_videoBottomView;
    MMFinderLiveSubTitleView *_subTitleView;
    CDUnknownBlockType _minTopMarginQueryBlock;
    UIView *_nextCdnPlayerView;
    MMFinderLiveAdvertisementPlayerViewModel *_advertisementPlayerViewModel;
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel *_audioModeBackgroundVideoViewModel;
    UIView *_plainBackgroundView;
    UIView *_liveStateContainerView;
    UIView *_landScapeBackGroundView;
    MMUILabel *_fullViewTipsLabel;
    MMUIImageView *_fullViewLoadingView;
    MMUILabel *_fullViewLoadingLabel;
    MMLivePauseView *_pauseView;
    UIPanGestureRecognizer *_bigVideoViewDraggableGestureRecognizer;
    UIView *_screenSharingSnapshotView;
    UIView *_focusedConnectMicUserContainerView;
    UIView *_connectMicUserContainerView;
    UIImageView *_connectMicBackgroundViewForTrtcUser;
    NSString *_otherConnectMicUserVideoViewUserId;
    UIView *_liveRoomCoverImageViewContainer;
    UIView *_coverImageShadingView;
    CDUnknownBlockType _videoBottomViewLayoutAction;
    NSString *_nextStreamId;
    UIView *_nextCdnPlayerBlurCoverView;
    MMWebImageView *_nextCdnPlayerCoverImageView;
    UIView *_nextCdnPlayerBlurContainerView;
    MMUIActivityIndicatorView *_nextCdnPlayerBlurCoverLoadingView;
    MMFinderLiveWcPlayerView *_advertisementPlayerView;
    MMUIActivityIndicatorView *_advertisementLoadingView;
    NSString *_audioModeBackgroundVideoUri;
    MMFinderLiveResDownloadManager *_downloadMgr;
    MMFinderLiveWcPlayerView *_audioModeBackgroundVideoView;
    MMFinderLiveGestureAnimationContainerView *_gestureAnimationContainerView;
    UIView *_videoContainerView;
    UIView *_connectMicUserWidgetContainerView;
    UIView *_cdnPlayerContainerView;
    struct CGSize _cdnUserConnectedRoomVideoViewSize;
    struct CGRect _currentMainVideoViewFrame;
    struct CGRect _nextVideoViewFrame;
    struct CGRect _currentConnectMicViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *cdnPlayerContainerView; // @synthesize cdnPlayerContainerView=_cdnPlayerContainerView;
@property(retain, nonatomic) UIView *connectMicUserWidgetContainerView; // @synthesize connectMicUserWidgetContainerView=_connectMicUserWidgetContainerView;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode=_isInMinimizeMode;
@property(nonatomic) _Bool isInMemberLiveInterceptMode; // @synthesize isInMemberLiveInterceptMode=_isInMemberLiveInterceptMode;
@property(retain, nonatomic) MMFinderLiveGestureAnimationContainerView *gestureAnimationContainerView; // @synthesize gestureAnimationContainerView=_gestureAnimationContainerView;
@property(nonatomic) _Bool curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame; // @synthesize curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame=_curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *audioModeBackgroundVideoView; // @synthesize audioModeBackgroundVideoView=_audioModeBackgroundVideoView;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSString *audioModeBackgroundVideoUri; // @synthesize audioModeBackgroundVideoUri=_audioModeBackgroundVideoUri;
@property(retain, nonatomic) MMUIActivityIndicatorView *advertisementLoadingView; // @synthesize advertisementLoadingView=_advertisementLoadingView;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *advertisementPlayerView; // @synthesize advertisementPlayerView=_advertisementPlayerView;
@property(nonatomic) _Bool lastEnableShowLiveRoomCoverImageView; // @synthesize lastEnableShowLiveRoomCoverImageView=_lastEnableShowLiveRoomCoverImageView;
@property(retain, nonatomic) MMUIActivityIndicatorView *nextCdnPlayerBlurCoverLoadingView; // @synthesize nextCdnPlayerBlurCoverLoadingView=_nextCdnPlayerBlurCoverLoadingView;
@property(retain, nonatomic) UIView *nextCdnPlayerBlurContainerView; // @synthesize nextCdnPlayerBlurContainerView=_nextCdnPlayerBlurContainerView;
@property(retain, nonatomic) MMWebImageView *nextCdnPlayerCoverImageView; // @synthesize nextCdnPlayerCoverImageView=_nextCdnPlayerCoverImageView;
@property(retain, nonatomic) UIView *nextCdnPlayerBlurCoverView; // @synthesize nextCdnPlayerBlurCoverView=_nextCdnPlayerBlurCoverView;
@property(copy, nonatomic) NSString *nextStreamId; // @synthesize nextStreamId=_nextStreamId;
@property(copy, nonatomic) CDUnknownBlockType videoBottomViewLayoutAction; // @synthesize videoBottomViewLayoutAction=_videoBottomViewLayoutAction;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) UIView *coverImageShadingView; // @synthesize coverImageShadingView=_coverImageShadingView;
@property(retain, nonatomic) UIView *liveRoomCoverImageViewContainer; // @synthesize liveRoomCoverImageViewContainer=_liveRoomCoverImageViewContainer;
@property(nonatomic) struct CGRect currentConnectMicViewFrame; // @synthesize currentConnectMicViewFrame=_currentConnectMicViewFrame;
@property(retain, nonatomic) NSString *otherConnectMicUserVideoViewUserId; // @synthesize otherConnectMicUserVideoViewUserId=_otherConnectMicUserVideoViewUserId;
@property(nonatomic) struct CGSize cdnUserConnectedRoomVideoViewSize; // @synthesize cdnUserConnectedRoomVideoViewSize=_cdnUserConnectedRoomVideoViewSize;
@property(retain, nonatomic) UIImageView *connectMicBackgroundViewForTrtcUser; // @synthesize connectMicBackgroundViewForTrtcUser=_connectMicBackgroundViewForTrtcUser;
@property(retain, nonatomic) UIView *connectMicUserContainerView; // @synthesize connectMicUserContainerView=_connectMicUserContainerView;
@property(retain, nonatomic) UIView *focusedConnectMicUserContainerView; // @synthesize focusedConnectMicUserContainerView=_focusedConnectMicUserContainerView;
@property(retain, nonatomic) UIView *screenSharingSnapshotView; // @synthesize screenSharingSnapshotView=_screenSharingSnapshotView;
@property(retain, nonatomic) UIPanGestureRecognizer *bigVideoViewDraggableGestureRecognizer; // @synthesize bigVideoViewDraggableGestureRecognizer=_bigVideoViewDraggableGestureRecognizer;
@property(nonatomic) _Bool isShowingTrialTimeoutView; // @synthesize isShowingTrialTimeoutView=_isShowingTrialTimeoutView;
@property(retain, nonatomic) MMLivePauseView *pauseView; // @synthesize pauseView=_pauseView;
@property(retain, nonatomic) MMUILabel *fullViewLoadingLabel; // @synthesize fullViewLoadingLabel=_fullViewLoadingLabel;
@property(retain, nonatomic) MMUIImageView *fullViewLoadingView; // @synthesize fullViewLoadingView=_fullViewLoadingView;
@property(retain, nonatomic) MMUILabel *fullViewTipsLabel; // @synthesize fullViewTipsLabel=_fullViewTipsLabel;
@property(retain, nonatomic) UIView *landScapeBackGroundView; // @synthesize landScapeBackGroundView=_landScapeBackGroundView;
@property(retain, nonatomic) UIView *liveStateContainerView; // @synthesize liveStateContainerView=_liveStateContainerView;
@property(retain, nonatomic) UIView *plainBackgroundView; // @synthesize plainBackgroundView=_plainBackgroundView;
@property(retain, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *audioModeBackgroundVideoViewModel; // @synthesize audioModeBackgroundVideoViewModel=_audioModeBackgroundVideoViewModel;
@property(nonatomic) __weak MMFinderLiveAdvertisementPlayerViewModel *advertisementPlayerViewModel; // @synthesize advertisementPlayerViewModel=_advertisementPlayerViewModel;
@property(nonatomic) _Bool isNextCdnPlayerViewFromTheLeftSide; // @synthesize isNextCdnPlayerViewFromTheLeftSide=_isNextCdnPlayerViewFromTheLeftSide;
@property(retain, nonatomic) UIView *nextCdnPlayerView; // @synthesize nextCdnPlayerView=_nextCdnPlayerView;
@property(nonatomic) _Bool isInSwitchVideoViewAnimation; // @synthesize isInSwitchVideoViewAnimation=_isInSwitchVideoViewAnimation;
@property(nonatomic) _Bool isShowingScreenSharingView; // @synthesize isShowingScreenSharingView=_isShowingScreenSharingView;
@property(copy, nonatomic) CDUnknownBlockType minTopMarginQueryBlock; // @synthesize minTopMarginQueryBlock=_minTopMarginQueryBlock;
@property(retain, nonatomic) MMFinderLiveSubTitleView *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) UIView *videoBottomView; // @synthesize videoBottomView=_videoBottomView;
@property(nonatomic) _Bool shouldLayoutAvatar; // @synthesize shouldLayoutAvatar=_shouldLayoutAvatar;
@property(retain, nonatomic) WeAvatarScreenView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSMutableDictionary *micUserViewInfoDic; // @synthesize micUserViewInfoDic=_micUserViewInfoDic;
@property(nonatomic) _Bool shouldShowLiveRoomCoverImageView; // @synthesize shouldShowLiveRoomCoverImageView=_shouldShowLiveRoomCoverImageView;
@property(nonatomic) struct CGRect nextVideoViewFrame; // @synthesize nextVideoViewFrame=_nextVideoViewFrame;
@property(nonatomic) struct CGRect currentMainVideoViewFrame; // @synthesize currentMainVideoViewFrame=_currentMainVideoViewFrame;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo; // @synthesize allMicUsersInfo=_allMicUsersInfo;
@property(nonatomic) _Bool isShowingPauseView; // @synthesize isShowingPauseView=_isShowingPauseView;
@property(nonatomic) _Bool isShowingLoading; // @synthesize isShowingLoading=_isShowingLoading;
@property(nonatomic) _Bool isShowingTips; // @synthesize isShowingTips=_isShowingTips;
@property(nonatomic) _Bool liveDidStart; // @synthesize liveDidStart=_liveDidStart;
@property(retain, nonatomic) NSString *smallRemoteVideoViewUserId; // @synthesize smallRemoteVideoViewUserId=_smallRemoteVideoViewUserId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUIButton *smallVideoSwitchCameraButton; // @synthesize smallVideoSwitchCameraButton=_smallVideoSwitchCameraButton;
@property(retain, nonatomic) UIView *screenSharingContentView; // @synthesize screenSharingContentView=_screenSharingContentView;
@property(retain, nonatomic) UIView *screenSharingContainerView; // @synthesize screenSharingContainerView=_screenSharingContainerView;
@property(retain, nonatomic) UIView *cdnPlayerView; // @synthesize cdnPlayerView=_cdnPlayerView;
@property(retain, nonatomic) MMWebImageView *liveRoomCoverImageViewForAudience; // @synthesize liveRoomCoverImageViewForAudience=_liveRoomCoverImageViewForAudience;
@property(retain, nonatomic) MMWebImageView *liveRoomCoverImageViewForAnchor; // @synthesize liveRoomCoverImageViewForAnchor=_liveRoomCoverImageViewForAnchor;
@property(retain, nonatomic) WCLiveVideoView *otherConnectMicUserVideoView; // @synthesize otherConnectMicUserVideoView=_otherConnectMicUserVideoView;
@property(retain, nonatomic) WCLiveVideoView *smallRemoteVideoView; // @synthesize smallRemoteVideoView=_smallRemoteVideoView;
@property(retain, nonatomic) WCLiveVideoView *smallLocalVideoView; // @synthesize smallLocalVideoView=_smallLocalVideoView;
@property(retain, nonatomic) WCLiveVideoView *bigVideoView; // @synthesize bigVideoView=_bigVideoView;
@property(retain, nonatomic) WCLiveVideoView *localVideoView; // @synthesize localVideoView=_localVideoView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) __weak id <MMLiveViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onScreenshotAssociatedImageRequestedForScreenshotPosterLogic:(id)arg1 asyncBeginBlock:(CDUnknownBlockType)arg2 asyncEndBlock:(CDUnknownBlockType)arg3;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(_Bool)arg2;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)onGestureAnimationViewWillBeginPlaying:(id)arg1;
- (void)onExitLive;
- (void)onLiveWcPlayerVideoPlayFailed:(id)arg1 errorType:(unsigned long long)arg2 error:(int)arg3 localizedErrorDes:(id)arg4;
- (void)onLiveWcPlayerVideoSizeChange:(id)arg1 videoSize:(struct CGSize)arg2;
- (void)onLiveWcPlayerHiddenBufferingView:(id)arg1;
- (void)onLiveWcPlayerShowBufferingView:(id)arg1;
- (void)onLiveWcPlayerStatusChanged:(id)arg1 status:(unsigned long long)arg2;
@property(readonly, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *opposingAnchorAudioModeBackgroundVideoViewModel;
- (_Bool)insertAudioModeBackgroundVideoViewToPIPRenderLayer;
- (_Bool)insertAdvertisementPlayerViewToPIPRenderLayer;
- (_Bool)insertCDNPlayerContainerViewToPIPRenderLayer;
- (_Bool)insertConnectMicVideoViewToPIPRenderLayer:(id)arg1;
- (_Bool)insertBigVideoViewToPIPRenderLayer;
- (_Bool)insertLiveBlurBackgroundViewToPIPRenderLayer;
- (_Bool)insertLiveAnchorAudioMicBackgroundVideoToPipRenderLayer:(id)arg1;
- (_Bool)insertLiveAnchorAudioMicCoverImageToPIPRenderLayer:(id)arg1;
- (_Bool)insertLiveConnectMicViewToPIPRenderLayer:(id)arg1;
- (_Bool)insertLiveRoomCoverImageViewForAnchorToPIPRenderLayer;
- (_Bool)insertLiveRoomCoverImageViewForAudienceToPIPRenderLayer;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) unsigned long long currentMainVideoDisplayType;
- (void)stopLoadingAnimation;
- (void)hideFullScreenLoading;
- (void)startLoadingAnimation;
- (void)onWCLiveVideoViewMoveEnd;
@property(readonly, nonatomic) struct CGRect currentMainContentFrame;
- (id)getLiveViewController;
@property(readonly, nonatomic) struct CGRect normalizedConnectMicUsersViewFrame;
- (_Bool)checkUpdateBackgroundBlurView:(id)arg1;
- (id)createAdvertisementPlayerViewModel:(id)arg1;
- (id)createAdvertisementPlayerViewModel:(id)arg1 initialPlayTime:(unsigned int)arg2;
- (id)finderLiveTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (double)videoViewTopMarginInConnectedRoomUI;
- (void)createPlainBackgroundView;
- (id)createBackgroundBlurViewWithLiveTaskId:(id)arg1;
- (void)updateLiveVideoViewAppearance:(_Bool)arg1;
- (void)updateLiveVideoViewAppearance:(_Bool)arg1 blurColor:(id)arg2;
@property(readonly, nonatomic) _Bool isShowingVideoView;
- (_Bool)isNeedClipTo9x16VideoView;
- (void)enterMemberLiveInterceptMode;
- (void)updateGestureAnimationContainerViewAppearance;
- (void)onOperationClearScreenChange:(_Bool)arg1;
- (void)onOrientationChanged;
- (_Bool)isShowVideoBottomView;
- (void)dismissVideoBottomView;
- (void)showVideoBottomViewWithLayoutAction:(CDUnknownBlockType)arg1;
- (void)updateBackgroundBlurView:(id)arg1;
- (void)checkAndUpdateBackgroundBlurView:(_Bool)arg1;
- (void)onDataItemUpdated;
- (void)checkAndStartRemoteVideoViewWithUserInfo:(id)arg1;
- (double)getTopMarginForConnectMicUserContent;
- (double)getLeftMarginForConnectMicUserContent;
- (void)updateConnectMicUserAudioModeBackgroundConfigurationForUserWithSdkUserId:(id)arg1;
- (void)bringAnchorComponentsToFrontInPip;
- (void)bringMicUserComponentsToFrontInPipWithMicViewInfo:(id)arg1;
- (void)reorderMicUserViewsInPipWithOrderedMicUsers:(id)arg1 anchorZOrder:(unsigned long long)arg2;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)configureMicFocusCdnViewMasks;
- (void)configureCoverImageViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(_Bool)arg2;
- (void)configureGestureAnimationContainerViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(_Bool)arg2;
- (void)configureUserViewBorderAndCornerRadiusForConnectMicViewInfo:(id)arg1;
- (void)configureUserViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(_Bool)arg2;
- (id)connectMicViewInfoForUser:(id)arg1;
- (_Bool)shouldConfigureConnectMicViewsForUser:(id)arg1;
- (void)updateConnectMicBackgroundViewImageAndHiddenForTrtcUser;
- (void)updateConnectMicViewsWithMicUsersInfo:(id)arg1;
- (void)refreshLiveMinimizeAudioMicWidgets;
- (void)notifyConnectMicStateChangedIfNeeded;
- (void)clearConnectMicViewInfo:(id)arg1;
- (void)clearConnectMicViewsAndDic;
- (struct CGSize)totalSizeForConnectMicViews;
@property(readonly, nonatomic) _Bool isInConnectedMicUI;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (void)updateLocalVideoViewForConnectMic:(_Bool)arg1;
- (struct CGRect)getSmallVideoMixRectRatio;
- (void)updatePauseViewWithAccumulatedTime:(long long)arg1;
- (void)hidePauseView;
- (void)updatePauseViewForMiniGame;
- (void)updateShowingPauseView:(_Bool)arg1;
- (void)showPauseView:(id)arg1;
- (void)showFullScreenLoadingWithoutDelay;
- (void)showFullScreenLoading:(_Bool)arg1 withLoadingText:(id)arg2 hasDelayed:(_Bool)arg3;
- (void)showFullScreenLoading:(_Bool)arg1 withLoadingText:(id)arg2;
- (void)showFullViewTipsWithText:(id)arg1;
- (void)hideTrialTimeoutView;
- (void)showTrialTimeoutView;
- (void)switchCamera;
- (void)startLocalVideo;
- (void)updateCdnPlayerView:(id)arg1;
- (void)hideAdvertisementVideoView:(_Bool)arg1;
- (void)preloadAdvertisementPlayer;
- (void)advertisementPlayFinish;
- (void)updateAdVideoLoadingShow:(_Bool)arg1;
- (void)showAdvertisementVideoView:(_Bool)arg1;
- (void)updateSubTitleViewHidden:(_Bool)arg1;
- (void)updateNextCdnPlayerBlurCoverViewAppearance:(_Bool)arg1;
- (_Bool)switchCdnPlayerViewToNext:(_Bool)arg1;
- (void)updateNextCdnPlayerViewPositionWithTranslationX:(double)arg1;
- (void)updateNextCdnPlayerBlurCoverViewFrame:(struct CGRect)arg1;
- (void)updateNextCdnPlayerBlurCoverLoadingViewSize;
- (_Bool)updateNextCdnPlayerView:(id)arg1 onTheLeftSide:(_Bool)arg2 nextStreamId:(id)arg3;
- (struct CGRect)getNormalizedNextVideoViewFrame;
- (struct CGRect)getNextVideoViewFrame;
- (void)onLoadImageOK:(id)arg1;
- (void)clearScreenSharingSnapshotViewIfNeeded;
- (void)regenerateScreenSharingSnapshotViewIfNeeded;
- (void)hideScreenSharingView;
- (void)showScreenSharingViewWithContentView:(id)arg1;
- (void)layoutScreenSharingContainerView;
- (double)windowWidth;
- (void)layoutConnectMicUsersView;
- (void)smallVideoSwitchCameraAction;
- (struct CGPoint)getAudienceRemoteVideoViewCenterForScene:(unsigned long long)arg1 withDisplaySize:(struct CGSize)arg2;
- (struct CGRect)createRemoteViewFrameWithDisplaySize:(struct CGSize)arg1 calculateDisplaySize:(struct CGSize)arg2 scene:(unsigned long long)arg3;
- (void)updateConnectMicViewFrame;
- (void)updateMainVideoViewFrame:(struct CGRect)arg1;
- (_Bool)shouldLayoutMainVideoView;
@property(readonly, nonatomic) struct CGRect minimizeSrcFrame;
@property(readonly, nonatomic) UIView *minimizeSrcView;
@property(readonly, nonatomic) UIView *mainVideoView;
- (void)willMoveToMinimizeContainerView;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)getNormalizedMinimizeSrcFrame;
- (void)updateCDNPlayerViewHidden:(_Bool)arg1;
- (void)hideAdvertisementBlurView;
- (void)showAdvertisementBlurView:(id)arg1;
- (_Bool)showAdvertisementAndMuteLive:(id)arg1 initialPlayTime:(unsigned int)arg2 animated:(_Bool)arg3;
- (_Bool)isVideoViewHidden;
- (id)getAudienceSelfConnectMicViewInfo;
- (id)getAudioModeBackgroundVideoView;
- (id)getAdvertisementPlayerView;
- (id)getOtherConnectMicUserVideoView;
- (id)getBigVideoView;
- (id)getCdnPlayerContainerView;
- (id)getLiveStateText;
- (id)getLiveAnchorBlurBackgroundView;
- (id)getAnchorAudioMicVideoBackgroundViewList;
- (id)getAnchorAudioMicCoverImageViewList;
- (id)getAudienceAudioMicUserViewList;
- (id)getOtherAudienceVideoMicUserViewList;
- (struct CGRect)normalizedFrameConvertedFromDisplayAspectRatio:(struct CGRect)arg1;
- (struct CGRect)normalizedFrameConvertedToDisplayAspectRatio:(struct CGRect)arg1;
- (struct CGRect)getNormalizedVideoBottomViewFrame;
- (struct CGRect)getNormalizedVideoContainerViewFrame;
- (struct CGRect)getAbsoluteTrtcConnectMicViewFrame;
- (struct CGRect)getNormalizedTrtcConnectMicViewFrame;
- (struct CGRect)getNormalizedMainVideoViewFrame;
- (double)getVideoContainerTopMargin;
- (struct CGRect)getAdvertisementVideoViewFrame:(struct CGSize)arg1;
- (struct CGRect)getMainVideoViewFrame;
- (struct CGRect)getVideoViewFrameWithFlag:(_Bool)arg1;
- (void)layoutAudioModeCoverImageView;
- (_Bool)enableShowLiveRoomCoverImageView;
- (void)updateCdnPlayerRenderEnableIfNeeded;
- (void)updateLiveRoomCoverImageWidgetsFrame:(struct CGRect)arg1;
- (void)updateLiveRoomCoverImageWidgetsHidden;
- (void)refreshAudioModeCoverImageView;
- (void)createLiveRoomCoverImageViewContainer;
- (void)createLiveRoomCoverImageViewForAnchor;
- (void)updateLiveRoomAudioModeBackgroundVideoUri:(id)arg1;
- (void)updateAnchorLiveRoomAudioModeBackgroundVideoPath:(id)arg1;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)updateAudienceLiveRoomCoverImageURLString:(id)arg1;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)arg1;
- (void)updateAnchorLiveRoomCoverImage:(id)arg1;
- (id)audioModeCoverImageUrlString;
- (double)getSubTitleViewLeftMargin;
- (void)updateSubTitleOrigin;
- (void)layoutSubTitleView;
- (void)updateCdnPlayerViewFrame;
- (void)layoutCDNView;
- (_Bool)isNeedBlackBack;
- (void)createLivePauseView;
- (void)updateBlurBackgroundViewHidden:(_Bool)arg1;
- (void)updateAdvertisementPlayerWithVideoUrl:(id)arg1 initialTime:(unsigned int)arg2;
- (void)layoutAdvertisementPlayerView;
- (void)layoutBlurBackgroundView;
- (void)layoutSmallVideoSwitchCameraButton;
- (void)layoutSmallRemoteVideoViewWithUserId:(id)arg1;
- (void)layoutSmallRemoteVideoView;
- (void)layoutSmallLocalVideoView;
- (void)handleBigVideoViewDraggableGestureRecognizer:(id)arg1;
- (void)layoutBigVideoView;
- (void)updateGestureAnimationContainerViewVisibility;
- (void)layoutGestureAnimationContainerView;
- (void)layoutVideoContainerView;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutUI;
- (void)forceLayoutForOrientationChanged;
- (void)layoutSubviews;
- (struct CGRect)smallRemoteVideoViewFrame;
- (struct CGRect)smallLocalVideoViewFrame;
- (struct CGRect)bigVideoViewFrame;
@property(readonly, nonatomic) _Bool isAudience;
@property(retain, nonatomic) NSString *backgroudImageUrl; // @dynamic backgroudImageUrl;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

