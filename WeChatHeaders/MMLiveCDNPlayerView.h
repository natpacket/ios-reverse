//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILiveTaskMgrExt-Protocol.h"
#import "MMFinderLiveActivityTaskExt-Protocol.h"
#import "MMFinderLiveCDNPlayerMicLogicDelegate-Protocol.h"
#import "MMFinderLiveTaskExt-Protocol.h"
#import "MMLiveCDNPlayerItemDelegate-Protocol.h"
#import "MMLiveMorphTransitionExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WCAudioModuleDelegate-Protocol.h"
#import "WCFinderFeedImageCDNViewDelegate-Protocol.h"

@class LiveSdkChannelParams, MMFinderLiveCDNPlayerMicLogic, MMFinderLiveCDNPlayerMicUserInfoView, MMFinderLiveConnectMicUsersInfo, MMLiveCDNPlayerItem, MMLiveCDNPlayerViewStartPlayStateInfo, MMLiveSEIConnectMicMsg, MMWebImageView, NSString, UIImageView, UILabel, WCFinderAnimationLoadingView, WCFinderDataItem, WCFinderFeedImageCDNView;
@protocol MMLiveCDNPlayerViewDelegate;

@interface MMLiveCDNPlayerView : UIView <MMLiveCDNPlayerItemDelegate, WCFinderFeedImageCDNViewDelegate, ILiveTaskMgrExt, MMFinderLiveTaskExt, MMFinderLiveCDNPlayerMicLogicDelegate, MMLiveMorphTransitionExt, MMWebImageViewDelegate, MMFinderLiveActivityTaskExt, WCAudioModuleDelegate>
{
    _Bool _hiddenLoading;
    _Bool _hiddenVideo;
    _Bool _isOuterMuted;
    _Bool _isUsingPreloadPlayerItem;
    _Bool _automaticallyMutesWhileExternalPlaybackMode;
    _Bool _shouldStartInBackground;
    _Bool _needGetLiveStatus;
    _Bool _isMuted;
    _Bool _isPlayerLoading;
    _Bool _isCoverLoading;
    _Bool _isRemoteH;
    _Bool _isAudioMode;
    _Bool _isScreenSharing;
    _Bool _useOuterMicLogic;
    _Bool _invokeMorphTransform;
    _Bool _isMorphTransforming;
    _Bool _isInDelaySwitchStreamProcess;
    _Bool _shouldRestartPlayAfterPaid;
    _Bool _isWinterOlympicLive;
    _Bool _paidLiveTrialEndedChecked;
    unsigned int _liveVrType;
    unsigned int _remainTime;
    unsigned long long _scene;
    unsigned long long _commentScene;
    WCFinderFeedImageCDNView *_coverView;
    id <MMLiveCDNPlayerViewDelegate> _delegate;
    NSString *_url;
    WCFinderDataItem *_finderDataItem;
    WCFinderAnimationLoadingView *_loadingView;
    MMLiveCDNPlayerItem *_cdnPlayerItem;
    UIImageView *_backgroundBlurView;
    MMWebImageView *_customCoverView;
    NSString *_customCoverUrl;
    long long _renderMode;
    UIView *_videoContainerView;
    UIView *_micUserBackContainerView;
    MMFinderLiveCDNPlayerMicUserInfoView *_micUserInfoView;
    MMFinderLiveCDNPlayerMicLogic *_micLogic;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    MMLiveSEIConnectMicMsg *_seiMicMsgInfo;
    UILabel *_coverEffectLabel;
    unsigned long long _blurEffectType;
    LiveSdkChannelParams *_channelParams;
    MMLiveCDNPlayerViewStartPlayStateInfo *_startPlayStateInfo;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCDNPlayerViewStartPlayStateInfo *startPlayStateInfo; // @synthesize startPlayStateInfo=_startPlayStateInfo;
@property(nonatomic) _Bool paidLiveTrialEndedChecked; // @synthesize paidLiveTrialEndedChecked=_paidLiveTrialEndedChecked;
@property(retain, nonatomic) LiveSdkChannelParams *channelParams; // @synthesize channelParams=_channelParams;
@property(nonatomic) unsigned long long blurEffectType; // @synthesize blurEffectType=_blurEffectType;
@property(retain, nonatomic) UILabel *coverEffectLabel; // @synthesize coverEffectLabel=_coverEffectLabel;
@property(nonatomic) _Bool isWinterOlympicLive; // @synthesize isWinterOlympicLive=_isWinterOlympicLive;
@property(nonatomic) _Bool shouldRestartPlayAfterPaid; // @synthesize shouldRestartPlayAfterPaid=_shouldRestartPlayAfterPaid;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) _Bool isInDelaySwitchStreamProcess; // @synthesize isInDelaySwitchStreamProcess=_isInDelaySwitchStreamProcess;
@property(nonatomic) _Bool isMorphTransforming; // @synthesize isMorphTransforming=_isMorphTransforming;
@property(nonatomic) _Bool invokeMorphTransform; // @synthesize invokeMorphTransform=_invokeMorphTransform;
@property(nonatomic) _Bool useOuterMicLogic; // @synthesize useOuterMicLogic=_useOuterMicLogic;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsgInfo; // @synthesize seiMicMsgInfo=_seiMicMsgInfo;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) MMFinderLiveCDNPlayerMicLogic *micLogic; // @synthesize micLogic=_micLogic;
@property(retain, nonatomic) MMFinderLiveCDNPlayerMicUserInfoView *micUserInfoView; // @synthesize micUserInfoView=_micUserInfoView;
@property(retain, nonatomic) UIView *micUserBackContainerView; // @synthesize micUserBackContainerView=_micUserBackContainerView;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(copy, nonatomic) NSString *customCoverUrl; // @synthesize customCoverUrl=_customCoverUrl;
@property(retain, nonatomic) MMWebImageView *customCoverView; // @synthesize customCoverView=_customCoverView;
@property(retain, nonatomic) UIImageView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(nonatomic) _Bool isScreenSharing; // @synthesize isScreenSharing=_isScreenSharing;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(nonatomic) _Bool isRemoteH; // @synthesize isRemoteH=_isRemoteH;
@property(nonatomic) _Bool isCoverLoading; // @synthesize isCoverLoading=_isCoverLoading;
@property(nonatomic) _Bool isPlayerLoading; // @synthesize isPlayerLoading=_isPlayerLoading;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem; // @synthesize cdnPlayerItem=_cdnPlayerItem;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MMLiveCDNPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool needGetLiveStatus; // @synthesize needGetLiveStatus=_needGetLiveStatus;
@property(nonatomic) _Bool shouldStartInBackground; // @synthesize shouldStartInBackground=_shouldStartInBackground;
@property(nonatomic) _Bool automaticallyMutesWhileExternalPlaybackMode; // @synthesize automaticallyMutesWhileExternalPlaybackMode=_automaticallyMutesWhileExternalPlaybackMode;
@property(nonatomic) _Bool isUsingPreloadPlayerItem; // @synthesize isUsingPreloadPlayerItem=_isUsingPreloadPlayerItem;
@property(nonatomic) _Bool isOuterMuted; // @synthesize isOuterMuted=_isOuterMuted;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned int liveVrType; // @synthesize liveVrType=_liveVrType;
@property(nonatomic) _Bool hiddenVideo; // @synthesize hiddenVideo=_hiddenVideo;
@property(nonatomic) _Bool hiddenLoading; // @synthesize hiddenLoading=_hiddenLoading;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (_Bool)isInAudioModuleSceneCDNPlayer;
- (_Bool)isMultiTalkLive;
- (void)revertToOriginCategoryOptions;
- (void)changeToCDNPlayerCategoryPlayback;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)morphTransitionCanceled;
- (void)morphTransitionEnding;
- (void)morphTransitionStartedWithDuration:(double)arg1;
- (void)morphTransitionStarting;
- (void)updateConnectMicViewsWithMicUsersInfo:(id)arg1;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (void)onFinderLiveActivityWinterOlympicStreamStatusChanged:(unsigned int)arg1 withTid:(id)arg2;
- (_Bool)isWinterOlympicLiveWithoutVideo;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)asyncUpdateAudioCategoryAndSetActive;
- (void)updateAudioCategory:(id)arg1;
- (void)updatePlayerMuted;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate:(id)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 netStatus:(id)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (void)removeVrLivelurEffect;
- (void)finderFeedImageLoadFinish;
- (void)didChangeScreenCapture:(id)arg1;
- (void)checkPaidLiveTrialEnded;
- (void)onStopCountDown;
- (void)stopCountDown;
- (void)countDown;
- (void)startCountDown;
- (_Bool)isNotPurchasedChargeableLive;
- (_Bool)isLiveTrialTimeout;
- (_Bool)shouldForbidCapture;
- (unsigned long long)getLiveCDNPlayerItemScene;
- (void)updateConnectMicOtherAnchorCoverViewAppearance;
- (void)updateSeiMsg:(id)arg1;
- (id)otherMicAnchorSdkUserId;
- (void)updatePlaySize:(struct CGSize)arg1;
- (void)hiddenLoadingView;
- (void)showLoadingView;
- (void)prepareForMorphTransition;
- (void)updateLoadingViewToCenter;
- (_Bool)isAlreadyConfigured;
- (void)updateCustomImageUrl:(id)arg1;
- (void)updateImageWithMediaWrap:(id)arg1 downloadFlag:(unsigned long long)arg2 isPriority:(_Bool)arg3;
- (void)checkStartPlayStateInfoAndShowLive;
- (void)clearStartPlayStateInfo;
- (void)delayShowLive;
- (void)checkAndShowLiveWhenReceiveFirstIFrame;
- (void)showLive;
- (void)showCover;
- (void)tryHideAudioModeImageThumb;
- (void)tryShowAudioModeImageThumb;
- (_Bool)isPlaying;
- (void)removeCoverImage;
@property(nonatomic) _Bool interruptedWhenAppResignActive;
- (_Bool)shouldMuteForExternalPlaybackMode;
- (void)setMute:(_Bool)arg1;
- (_Bool)isPaused;
- (void)pause;
- (void)resume;
- (void)checkAndRemovePlayerItem;
- (void)stopPlayByUserTapped:(_Bool)arg1;
- (void)stopPlay;
- (void)clearDelaySwitchStreamFlag;
- (void)delaySwitchStream;
- (_Bool)checkPlayerItemAndNotifyStartPlayEvent;
- (void)reclaimVideoView;
- (void)checkAndCreateVideoContainerView;
- (void)applyCdnPlayerItem;
- (void)updatePlayerItemEncryptionParams;
- (void)realStartPlay;
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2 useOuterMicLogic:(_Bool)arg3;
- (void)startPlayWithUrl:(id)arg1 channelParams:(id)arg2;
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2;
- (void)realLayoutAllMicViews;
- (void)layoutAllMicViews;
- (void)clearAllMicViews;
- (void)configAllMicViews;
- (void)tryRemoveCoverBlurEffect;
- (void)tryUpdateBlurEffectWithType:(unsigned long long)arg1;
- (void)layoutCoverEffectView;
- (void)removeCoverSpamEffect;
- (void)updateCoverSpamEffect:(id)arg1;
- (void)checkAndInitLoadingView;
- (void)updateCoverViewBlurStateFeed;
- (id)realCoverView;
- (void)checkAndInitCustomCoverView;
- (void)checkAndInitCoverImageView;
- (void)checkAndInitBackgroundBlurView;
- (void)layoutUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)clearVideoContainerViewMask;
- (void)hideAllMicViews;
- (unsigned long long)getLiveCDNPlayerType;
- (void)prepareForReuse;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned long long)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

