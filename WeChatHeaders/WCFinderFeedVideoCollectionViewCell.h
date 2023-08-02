//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"
#import "WCFinderFeedCollectionViewCellProtocol-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedImageViewProtocol-Protocol.h"
#import "WCFinderHalfScreenListenProtocol-Protocol.h"
#import "WCFinderPlayerControlViewDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"
#import "WCPlayerEventExt-Protocol.h"
#import "WCPlayerVolumeObserverDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, WCFinderFeedContentVM, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderFullNewMultiMediaView, WCFinderMediaInfo, WCFinderPlayerControlView, WCFinderShortTapGestureRecognizer, WCFinderVideoDragProgressReporter, WCFinderVideoPlayCellParams, WCPlayerView, WCPlayerVolumeObserver, WCWidgetPlayer;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderHalfScreenListenProtocol;

@interface WCFinderFeedVideoCollectionViewCell : UICollectionViewCell <WCFinderPlayerControlViewDelegate, WCFinderFeedImageViewProtocol, WCPlayerDownloaderExt, UIGestureRecognizerDelegate, WCAudioSessionExt, WCPlayerVolumeObserverDelegate, WCPlayerEventExt, WCFinderFeedContentVMExt, WCFinderFeedCollectionViewCellProtocol, WCFinderHalfScreenListenProtocol>
{
    _Bool _isSubScene;
    _Bool _originalVideoMute;
    _Bool _isCurrentPlaying;
    _Bool _needsRestThumb;
    _Bool _needsUpdateThumb;
    _Bool _hasCallStopCallBack;
    _Bool _isMediaContentReady;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate;
    unsigned long long _currentIndex;
    unsigned long long _scene;
    double _loadingTopOffset;
    WCFinderFullNewMultiMediaView *_mediaView;
    WCWidgetPlayer *_customWidgetPlayer;
    WCPlayerView *_playerView;
    WCFinderFeedImageView *_thumbImageView;
    WCFinderPlayerControlView *_playerConfigControlView;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
    WCFinderShortTapGestureRecognizer *_likeGes;
    NSString *_currentVideoTid;
    WCFinderFeedContentVM *_feedContentVM;
    long long _updateTag;
    WCFinderVideoPlayCellParams *_extParams;
    WCFinderVideoDragProgressReporter *_progressDragReporter;
    WCPlayerVolumeObserver *_volumeObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(retain, nonatomic) WCFinderVideoDragProgressReporter *progressDragReporter; // @synthesize progressDragReporter=_progressDragReporter;
@property(retain, nonatomic) WCFinderVideoPlayCellParams *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) _Bool isMediaContentReady; // @synthesize isMediaContentReady=_isMediaContentReady;
@property(nonatomic) _Bool hasCallStopCallBack; // @synthesize hasCallStopCallBack=_hasCallStopCallBack;
@property(nonatomic) long long updateTag; // @synthesize updateTag=_updateTag;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsUpdateThumb; // @synthesize needsUpdateThumb=_needsUpdateThumb;
@property(nonatomic) _Bool needsRestThumb; // @synthesize needsRestThumb=_needsRestThumb;
@property(retain, nonatomic) WCFinderShortTapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCFinderFeedImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCWidgetPlayer *customWidgetPlayer; // @synthesize customWidgetPlayer=_customWidgetPlayer;
@property(nonatomic) _Bool originalVideoMute; // @synthesize originalVideoMute=_originalVideoMute;
@property(nonatomic) __weak WCFinderFullNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) _Bool isSubScene; // @synthesize isSubScene=_isSubScene;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <WCFinderHalfScreenListenProtocol> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onVolumeDidChange:(double)arg1;
- (void)halfScreenMoveProgressChanged;
- (struct CGRect)getPlayerViewRect;
- (void)finderFeedCellRestoreMinimizeContentView:(id)arg1 forPlay:(_Bool)arg2;
- (CDUnknownBlockType)playerViewCreator;
- (id)finderFeedCellMinimizeContentView:(_Bool)arg1;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (_Bool)finderFeedCellIsCurrentMediaMute;
- (_Bool)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (_Bool)finderFeedCellIsCurrentMediaPlaying;
- (void)setAllowBackgroundPlay:(_Bool)arg1;
- (void)_reloadPlayView:(id)arg1;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)refreshImageIfFromShare;
- (_Bool)videoIsOnPlayState;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onPlayerStopPlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)loadingRetry;
- (void)updatePlayVolume:(_Bool)arg1;
- (void)tryDowngradePlayVideoIfSupport;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)onShowReloadAction;
- (void)checkPreloadTaskStatus;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)hideLoadingView;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)_pauseVideo:(_Bool)arg1 isFakeStopAction:(_Bool)arg2;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (double)getCurrentBatteryPowerPercent;
- (id)playInfoJson;
- (void)setPlayRate:(double)arg1;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (id)playSecondSet;
- (double)getCurrentPlayVideoTime;
- (void)pauseVideoIfSupport;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (id)getCurrendThumb;
- (void)progressBarValueChange:(double)arg1 playVideo:(_Bool)arg2 state:(struct WCFinderPlayerControlProgressState)arg3;
- (void)captureVideoIfPossible;
- (void)stopVideoIfSupport;
- (void)_performStopActionCallback;
- (void)updatePlayerReport;
- (_Bool)isH266;
- (_Bool)isH265;
- (void)fakeStopPlayAction;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)onLikeFeed;
- (void)addStartPlayReportInfo;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 pauseVideo:(_Bool)arg3 playRate:(double)arg4 extParams:(id)arg5;
- (void)createPlayerView:(double)arg1 commentScene:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)updateImage:(id)arg1;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)resetVideoReloadHidden:(_Bool)arg1;
- (void)initVideoReloadAction;
- (void)onClickRetry:(id)arg1;
- (id)generateConfig;
- (long long)getThumbMediaType;
- (void)updateMeidaWrap;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4 isFullScreen:(_Bool)arg5;
- (void)initSubView;
- (void)dealloc;
- (void)_relayoutCustomWidgetPlayer;
- (void)_restartCustomWidgetPlayer;
- (void)_seekCustomWidgetPlayerToTimeSec:(double)arg1;
- (void)_playCustomWidgetPlayer;
- (void)_pauseCustomWidgetPlayer;
- (void)_initCustomWidgetPlayer;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
