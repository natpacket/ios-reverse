//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPPlayerBase-Protocol.h"
#import "TPAVPlayerDelegate-Protocol.h"
#import "TPAudioInterruptionDelegate-Protocol.h"
#import "TPHeadphoneManagerDelegate-Protocol.h"
#import "TPPictureInPictureDelegate-Protocol.h"
#import "TPPlayerVideoPrivateDelegate-Protocol.h"
#import "TPSubtitleParserWrapperCallback-Protocol.h"

@class NSMutableArray, NSString, TPDynamicStatisticParams, TPGeneralPlayFlowParams, TPPictureInPictureController, TPPlayerLayerViewContainer, TPPlayerLogContext, TPPlayerQueue, TPPlayerVideo, TPSubtitleData, TPSubtitleParserWrapper, TPSubtitleRenderModel, TPTimer, UIImageView, UIView;
@protocol ITPAVPlayer, ITPPlayerBaseDelegate;

@interface TPSystemPlayer : NSObject <TPPlayerVideoPrivateDelegate, TPPictureInPictureDelegate, TPAudioInterruptionDelegate, TPHeadphoneManagerDelegate, TPAVPlayerDelegate, TPSubtitleParserWrapperCallback, ITPPlayerBase>
{
    _Bool _outputMute;
    _Bool _externalPlaybackActive;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _enableResourceLoader;
    _Bool _pictureInPicturePossible;
    _Bool _pictureInPictureActive;
    _Bool _pictureInPictureSupported;
    _Bool _enableSnapshot;
    _Bool _enableVideoFrameOutput;
    _Bool _isLoopback;
    _Bool _isPrepared;
    _Bool _isBuffering;
    _Bool _isHadCallbackBufferingStart;
    _Bool _isHadCallbackBufferingBlockDelay;
    _Bool _firstVideoFrameRendered;
    _Bool _isNeedToNotifySeekComplete;
    _Bool _enableAccurateStartPos;
    _Bool _isSwitchingDefinition;
    _Bool _isReopening;
    _Bool _isFailedToPlayToEnd;
    _Bool _hasEnterBackground;
    _Bool _enableAutoPictureInPicture;
    _Bool _airplaySeeking;
    _Bool _airplayHoldSeekPosition;
    int _subtitleOutputType;
    id <ITPPlayerBaseDelegate> _delegate;
    UIView *_playerView;
    double _audioGainRatio;
    double _playSpeedRatio;
    TPPlayerQueue *_playerQueue;
    unsigned long long _videoGravity;
    unsigned long long _externalPlaybackVideoGravity;
    long long _playerId;
    NSString *_audioNormalizeVolumeParams;
    unsigned long long currentState;
    unsigned long long _videoWidth;
    unsigned long long _videoHeight;
    long long _playerType;
    long long _playStartPos;
    long long _playSkipEndPos;
    long long _loopbackStartPos;
    long long _loopbackSkipEndPos;
    long long _bufferingTimeoutMs;
    long long _preferredForwardBufferDurationMs;
    unsigned long long _allowedAudioSpatializationFormats;
    long long _pictureInPictureStartDelayMs;
    long long _state;
    TPPlayerVideo *_video;
    NSObject<ITPAVPlayer> *_player;
    TPPlayerLayerViewContainer *_innerPlayerView;
    UIImageView *_subtitleView;
    TPPictureInPictureController *_pipController;
    TPSubtitleParserWrapper *_subtitleParser;
    TPTimer *_subtitleTimer;
    TPTimer *_bufferingTimeoutTimer;
    id _currentDataSource;
    long long _definitionId;
    CDUnknownBlockType _bufferingStartCallbackBlock;
    long long _airplaySeekPosition;
    NSMutableArray *_outerTracks;
    long long _selectedTrackIndex;
    long long _selectedTrackOpaque;
    TPSubtitleData *_lastSubtitleData;
    TPPlayerLogContext *_log;
    TPSubtitleRenderModel *_subtitleRenderModel;
}

+ (id)playerWithType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TPSubtitleRenderModel *subtitleRenderModel; // @synthesize subtitleRenderModel=_subtitleRenderModel;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) TPSubtitleData *lastSubtitleData; // @synthesize lastSubtitleData=_lastSubtitleData;
@property(nonatomic) long long selectedTrackOpaque; // @synthesize selectedTrackOpaque=_selectedTrackOpaque;
@property(nonatomic) long long selectedTrackIndex; // @synthesize selectedTrackIndex=_selectedTrackIndex;
@property(retain, nonatomic) NSMutableArray *outerTracks; // @synthesize outerTracks=_outerTracks;
@property(nonatomic) long long airplaySeekPosition; // @synthesize airplaySeekPosition=_airplaySeekPosition;
@property _Bool airplayHoldSeekPosition; // @synthesize airplayHoldSeekPosition=_airplayHoldSeekPosition;
@property _Bool airplaySeeking; // @synthesize airplaySeeking=_airplaySeeking;
@property(copy, nonatomic) CDUnknownBlockType bufferingStartCallbackBlock; // @synthesize bufferingStartCallbackBlock=_bufferingStartCallbackBlock;
@property(nonatomic) _Bool enableAutoPictureInPicture; // @synthesize enableAutoPictureInPicture=_enableAutoPictureInPicture;
@property(nonatomic) _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
@property(nonatomic) _Bool isFailedToPlayToEnd; // @synthesize isFailedToPlayToEnd=_isFailedToPlayToEnd;
@property(nonatomic) _Bool isReopening; // @synthesize isReopening=_isReopening;
@property(nonatomic) long long definitionId; // @synthesize definitionId=_definitionId;
@property(nonatomic) _Bool isSwitchingDefinition; // @synthesize isSwitchingDefinition=_isSwitchingDefinition;
@property(nonatomic) _Bool enableAccurateStartPos; // @synthesize enableAccurateStartPos=_enableAccurateStartPos;
@property(nonatomic) _Bool isNeedToNotifySeekComplete; // @synthesize isNeedToNotifySeekComplete=_isNeedToNotifySeekComplete;
@property(nonatomic) _Bool firstVideoFrameRendered; // @synthesize firstVideoFrameRendered=_firstVideoFrameRendered;
@property(nonatomic) _Bool isHadCallbackBufferingBlockDelay; // @synthesize isHadCallbackBufferingBlockDelay=_isHadCallbackBufferingBlockDelay;
@property(nonatomic) _Bool isHadCallbackBufferingStart; // @synthesize isHadCallbackBufferingStart=_isHadCallbackBufferingStart;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) id currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(retain, nonatomic) TPTimer *bufferingTimeoutTimer; // @synthesize bufferingTimeoutTimer=_bufferingTimeoutTimer;
@property(retain, nonatomic) TPTimer *subtitleTimer; // @synthesize subtitleTimer=_subtitleTimer;
@property(retain, nonatomic) TPSubtitleParserWrapper *subtitleParser; // @synthesize subtitleParser=_subtitleParser;
@property(nonatomic) int subtitleOutputType; // @synthesize subtitleOutputType=_subtitleOutputType;
@property(retain, nonatomic) TPPictureInPictureController *pipController; // @synthesize pipController=_pipController;
@property(retain, nonatomic) UIImageView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) TPPlayerLayerViewContainer *innerPlayerView; // @synthesize innerPlayerView=_innerPlayerView;
@property(retain, nonatomic) NSObject<ITPAVPlayer> *player; // @synthesize player=_player;
@property(retain, nonatomic) TPPlayerVideo *video; // @synthesize video=_video;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long pictureInPictureStartDelayMs; // @synthesize pictureInPictureStartDelayMs=_pictureInPictureStartDelayMs;
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats; // @synthesize allowedAudioSpatializationFormats=_allowedAudioSpatializationFormats;
@property(nonatomic) long long preferredForwardBufferDurationMs; // @synthesize preferredForwardBufferDurationMs=_preferredForwardBufferDurationMs;
@property(nonatomic) long long bufferingTimeoutMs; // @synthesize bufferingTimeoutMs=_bufferingTimeoutMs;
@property(nonatomic) long long loopbackSkipEndPos; // @synthesize loopbackSkipEndPos=_loopbackSkipEndPos;
@property(nonatomic) long long loopbackStartPos; // @synthesize loopbackStartPos=_loopbackStartPos;
@property(nonatomic) _Bool isLoopback; // @synthesize isLoopback=_isLoopback;
@property(nonatomic) _Bool enableVideoFrameOutput; // @synthesize enableVideoFrameOutput=_enableVideoFrameOutput;
@property(nonatomic) long long playSkipEndPos; // @synthesize playSkipEndPos=_playSkipEndPos;
@property(nonatomic) long long playStartPos; // @synthesize playStartPos=_playStartPos;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams; // @synthesize audioNormalizeVolumeParams=_audioNormalizeVolumeParams;
@property(nonatomic) _Bool enableSnapshot; // @synthesize enableSnapshot=_enableSnapshot;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader=_enableResourceLoader;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic) double playSpeedRatio; // @synthesize playSpeedRatio=_playSpeedRatio;
@property(nonatomic) double audioGainRatio; // @synthesize audioGainRatio=_audioGainRatio;
@property(nonatomic) _Bool outputMute; // @synthesize outputMute=_outputMute;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyDetailInfoWithType:(long long)arg1;
- (id)imageFromSubitltTPFrame:(struct TPFrame *)arg1;
- (void)onBufferingTimeout;
- (void)stopBufferingTimeoutCheck;
- (void)startBufferingTimeoutCheck;
- (void)notifyBufferingEndWithBufferingType:(long long)arg1;
- (void)notifyBufferingStartWithBufferingType:(long long)arg1;
- (void)applySubtitleRenderModel:(id)arg1;
- (void)reopenPlayer;
- (void)switchDefinitionImplWithDefinitionId:(long long)arg1 dataSourceBlock:(CDUnknownBlockType)arg2;
- (id)avLayerGravityWithTPPlayerGravity:(unsigned long long)arg1;
- (long long)outerTrackIndexWithIndex:(long long)arg1;
- (void)invalidateSubtitleTimer;
- (void)notifySelectSubtitleTrackErrorWithErrorCode:(long long)arg1;
- (void)handlePlayerStateChangeWhenPipActive:(long long)arg1;
- (void)handleOnErrorWithError:(id)arg1;
- (void)handleErrorWhenReopening;
- (void)handleErrorWhenSwitchingDefinition;
- (void)handleBufferingEnd;
- (void)handleBufferingStart;
- (void)handeOnCompletion;
- (void)handleResumePlay;
- (void)handleStartPlay;
- (long long)handleSetDataSourceWithMediaAsset:(id)arg1;
- (void)handleSetDataSourceWithUrl:(id)arg1 httpHeader:(id)arg2;
- (void)handlePrepareAsync;
- (void)handleReset;
- (void)handleReopenEnd;
- (void)handleSwitchDefinitionEnd;
- (void)handlePrepared;
- (void)setPlayerPropertiesAfterPrepared;
- (void)disableHoldSeekPosition;
- (void)currentTimeChanged:(CDStruct_1b6d18a9)arg1;
- (_Bool)needNotifyInvalidSourceWithPosition:(long long)arg1 video:(id)arg2;
- (void)updatePlayerView;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)player:(id)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 endOfOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 startOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)player:(id)arg1 onVideoFrame:(struct __CVBuffer *)arg2;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(struct CGSize)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 seekCompleted:(_Bool)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)audioRouteDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)audioInterruptionEnded;
- (void)audioInterruptionBegan;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
@property(readonly, nonatomic) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible; // @synthesize pictureInPicturePossible=_pictureInPicturePossible;
@property(readonly, nonatomic) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
- (void)skipEndPosDidChange:(id)arg1;
- (void)startPosDidChange:(id)arg1;
- (void)onSubtitleNote:(id)arg1;
- (void)onSubtitleFrame:(struct TPFrame *)arg1;
- (long long)onGetCurrentPlayPositionMs;
- (void)onSubtitleError:(int)arg1 errorCode:(int)arg2;
- (void)onSelectResult:(id)arg1 errorCode:(int)arg2 opaque:(long long)arg3;
- (void)onLoadResult:(id)arg1 errorCode:(int)arg2;
@property(nonatomic) unsigned long long videoGravity; // @synthesize videoGravity=_videoGravity;
@property(readonly, nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (void)updateContext:(id)arg1;
- (id)getDynamicStatisticParamsAndReset;
@property(readonly, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;
@property(readonly, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;
@property(readonly, nonatomic) long long demuxerOffsetInFile;
- (id)getPlayer;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getTrackInfo;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (void)onUpdateSubtitle;
- (id)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
@property(readonly, nonatomic) long long currentClipIndex;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent;
@property(readonly, nonatomic) long long currentPositionMs;
@property(readonly, nonatomic) long long durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (id)subtitleSnapshot;
- (id)snapshot;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 httpHeader:(id)arg3 mode:(long long)arg4;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 httpHeader:(id)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)prepare;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSource:(id)arg1;
- (long long)setPlayerBeforeOptionalParam:(id)arg1;
- (long long)setPlayerGlobalOptionalParam:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
- (id)logTag;
- (void)dealloc;
- (id)init;
- (void)clearOptional;
- (void)clearProperty;
- (void)clearVideo;
- (void)clearPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

