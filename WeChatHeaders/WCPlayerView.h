//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "TLProfileBaseMediaView-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCAudioModuleDelegate-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"
#import "WCCorePlayerDelegate-Protocol.h"
#import "WCPlayerPlaybackInfoDelegate-Protocol.h"
#import "WCPlayerPredicterDelegate-Protocol.h"
#import "WCPlayerProtocol-Protocol.h"
#import "WCPlayerResourceLoaderDelegate-Protocol.h"

@class MMImageScrollViewHelper, NSArray, NSObject, NSRecursiveLock, NSString, UIImageView, WCCorePlayer, WCPlayerFairPlayResourceLoader, WCPlayerLayerView, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerPredicter, WCPlayerReporter, WCPlayerResourceLoader;
@protocol TLProfileBaseMediaViewDelegate, WCPlayerControlProtocol, WCPlayerViewUIDelegate;

@interface WCPlayerView : UIScrollView <TLProfileBaseMediaView, WCPlayerPlaybackInfoDelegate, WCAudioSessionExt, WCAudioModuleDelegate, WCCorePlayerDelegate, WCPlayerResourceLoaderDelegate, WCPlayerPredicterDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCPlayerProtocol>
{
    _Bool _bAutoPlayWhenReady;
    _Bool _zoomEnabled;
    _Bool _bFirstReadyToPlay;
    _Bool _isNotifyOthersAudioModule;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    UIImageView *_thumbImageView;
    WCPlayerLayerView *_displayView;
    NSObject<WCPlayerControlProtocol> *_controller;
    id <WCPlayerViewUIDelegate> _uiDelegate;
    WCPlayerReporter *_reporter;
    unsigned long long _seekStartTime;
    WCCorePlayer *_player;
    NSString *_groupName;
    NSRecursiveLock *_lock;
    WCPlayerPredicter *_predicter;
    WCPlayerResourceLoader *_resourceloader;
    WCPlayerResourceLoader *_switchingResourceloader;
    WCPlayerFairPlayResourceLoader *_fairPlayResourceloader;
    MMImageScrollViewHelper *_scrollViewHelper;
}

+ (id)generatePlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper; // @synthesize scrollViewHelper=_scrollViewHelper;
@property(retain, nonatomic) WCPlayerFairPlayResourceLoader *fairPlayResourceloader; // @synthesize fairPlayResourceloader=_fairPlayResourceloader;
@property(retain, nonatomic) WCPlayerResourceLoader *switchingResourceloader; // @synthesize switchingResourceloader=_switchingResourceloader;
@property(retain, nonatomic) WCPlayerResourceLoader *resourceloader; // @synthesize resourceloader=_resourceloader;
@property(retain, nonatomic) WCPlayerPredicter *predicter; // @synthesize predicter=_predicter;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) WCCorePlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isNotifyOthersAudioModule; // @synthesize isNotifyOthersAudioModule=_isNotifyOthersAudioModule;
@property(nonatomic) unsigned long long seekStartTime; // @synthesize seekStartTime=_seekStartTime;
@property(nonatomic) _Bool bFirstReadyToPlay; // @synthesize bFirstReadyToPlay=_bFirstReadyToPlay;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) __weak id <WCPlayerViewUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak NSObject<WCPlayerControlProtocol> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) WCPlayerLayerView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool bAutoPlayWhenReady; // @synthesize bAutoPlayWhenReady=_bAutoPlayWhenReady;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
- (void)onDoubleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onSuggestSwitchDataSourceWithMediaWrap:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)makeMuteWhenOtherAppStop;
- (void)makeMuteWhenOtherAppStart;
- (void)asyncSetPlayerAudioPropertyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isReceiveAllVideoData;
- (void)checkTaskDownloadState;
- (struct CGSize)getPlayerPresentationSize;
- (void)releaseAudioModuleRegisterDuty;
- (void)deactiveAudioModule;
- (_Bool)activeAudioModuleWithOptions:(unsigned long long)arg1;
- (void)setAudioModuleGroupName:(id)arg1;
- (void)setNotifyOthersAudioModule:(_Bool)arg1;
- (_Bool)isAudioModuleActiving;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onSwitchDataSource:(id)arg1;
- (void)onM3u8Ready;
- (void)onVideoMoovReady;
- (void)onChangeVideoSource;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onRecieveAllVideoData;
- (void)onRequestDataAvailable;
- (void)onRecieveSeekLoadingRequest;
- (void)onResponseDataToResourceLoaderFail:(id)arg1;
- (id)generateResourceloaderWithDownloadArgsWrap:(id)arg1;
- (id)generaterFairPlayResourceLoader;
- (void)destoryResourceLoader;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)onVideoFrameRendered:(id)arg1;
- (void)onFirstVideoFrameRendered;
- (void)onPlayerVideoSizeChange:(struct CGSize)arg1;
- (void)onPlayerStateReady;
- (void)onPlayerPlayablePosUpdate:(double)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerErrorWithType:(unsigned long long)arg1 errorCode:(long long)arg2 errorDesc:(id)arg3;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onDataSourceChangeSuccess;
- (id)makeSwitchingResouloaderToFormat;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerAssetCreated;
- (void)onLocalServerReinitFail;
- (void)onLocalServerReinit;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (double)maxSeekPosition;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)addNotification;
- (void)removeTimeObserver;
- (void)changeToDownloadFirstMode;
- (CDUnknownBlockType)getPlayCallBackBlock;
- (void)CaluDecStuck;
- (void)updateVideoPlayArgs:(_Bool)arg1;
- (void)updateBufferPercent:(double)arg1;
- (void)internalPlayVideo;
- (_Bool)shouldOpenNetworkAdapter;
- (void)initPredicter;
- (_Bool)trySwitchToAVPlayer;
- (void)initPlayerWithType:(int)arg1;
- (void)initPlayer;
- (_Bool)shouldUpdatePlayArgs;
- (void)startBuffering;
- (id)parseVideoMetadata;
- (void)parseVideoMetaWithDefalut:(int)arg1;
- (int)getDynamicPlayerType;
- (id)getAVPlayerItemVideoOutput;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)forceChangeToSwitchingDataSource;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1 mode:(long long)arg2;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1;
- (id)getPlayerItem;
- (id)getPlayerAsset;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)forceSetPlayerToMuted:(_Bool)arg1;
- (void)setPlayBeginPos:(float)arg1 playEndPos:(float)arg2;
- (void)setPlayerAllowsExternalPlayback:(_Bool)arg1;
- (void)setPlayerMaxBufferLength:(unsigned int)arg1;
- (void)resumeVideoDownload;
- (void)stopVideoDowload;
- (void)resumeFetchAllVideoData;
- (void)stopFetchAllVideoData;
- (void)fetchAllVideoData;
- (double)currentTime;
- (void)checkStreamPlayerState;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)stopPlayer;
- (void)startAutoPlay;
- (void)startPlayer;
- (void)preload;
- (void)configPlayerWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)configWithPlayerInfo:(id)arg1 ControlView:(id)arg2;
- (void)configReporter;
- (void)displayWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resizeToCropDisplayView;
- (void)updateShowArea:(struct WCShowArea)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setThumbImageContentMode:(long long)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setThumbImage:(id)arg1;
- (void)dealloc;
- (id)initPlayerViewWithPlayArgs:(id)arg1;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (_Bool)tl_invalid;
@property(nonatomic) _Bool tl_muted;
- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;
@property(readonly, nonatomic) double tl_mediaAspectRatio;
- (void)attachVideoModel:(id)arg1;
- (id)videoModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate;
@property(nonatomic) double zoomScale;

@end

