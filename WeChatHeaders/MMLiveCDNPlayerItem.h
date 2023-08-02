//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TRTCCdnPlayerManagerDelegate-Protocol.h"
#import "TXAudioRawDataDelegate-Protocol.h"
#import "TXLivePlayListener-Protocol.h"

@class MMLiveCommonSEIMsg, NSArray, NSString, TRTCCdnPlayerManager, UIView;
@protocol MMLiveCDNPlayerItemDelegate;

@interface MMLiveCDNPlayerItem : NSObject <TXLivePlayListener, TRTCCdnPlayerManagerDelegate, TXAudioRawDataDelegate>
{
    _Bool _hasPlayBegan;
    _Bool _hasReceivedFirstIFrame;
    _Bool _hasConnectedSuccess;
    _Bool _isMuted;
    _Bool _interruptedWhenAppResignActive;
    _Bool _shouldStartInBackground;
    _Bool _enableBackgroundDecoding;
    _Bool _hasSetPlayerOrientation;
    _Bool _hasSetPlayerRenderMode;
    _Bool _hasSetPlayerCacheType;
    _Bool _hasSetPlayerCacheConfig;
    _Bool _hasEnteredBackgroundWhenWaitingPlayingOK;
    int _liveVrType;
    int _encryptMode;
    int _channelCount;
    int _sampleRate;
    int _minPlayerCache;
    int _maxPlayerCache;
    int _wavejbmFlag;
    int _wavejbmMode;
    float _wavejbmMinSpeedRate;
    float _wavejbmMaxSpeedRate;
    int _customRenderVal;
    NSString *_itemId;
    UIView *_videoView;
    NSString *_url;
    NSString *_streamId;
    NSString *_originalUrl;
    long long _renderMode;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    unsigned long long _firstIFrameTimestamp;
    unsigned long long _playBeginTimestamp;
    unsigned long long _state;
    unsigned long long _lastScene;
    unsigned long long _currentScene;
    MMLiveCommonSEIMsg *_lastConnectMicSEIMsg;
    MMLiveCommonSEIMsg *_lastAnchorStatusSEIMsg;
    NSArray *_cachedMicUsersList;
    NSString *_anchorNickname;
    TRTCCdnPlayerManager *_cdnPlayer;
    id <MMLiveCDNPlayerItemDelegate> _delegate;
    long long _playerOrientation;
    unsigned long long _playerCacheType;
    NSString *_encryptKey;
    NSString *_encryptIV;
    NSString *_encryptUrl;
    unsigned long long _reportInitialScene;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEnteredBackgroundWhenWaitingPlayingOK; // @synthesize hasEnteredBackgroundWhenWaitingPlayingOK=_hasEnteredBackgroundWhenWaitingPlayingOK;
@property(nonatomic) unsigned long long reportInitialScene; // @synthesize reportInitialScene=_reportInitialScene;
@property(nonatomic) int customRenderVal; // @synthesize customRenderVal=_customRenderVal;
@property(copy, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(copy, nonatomic) NSString *encryptIV; // @synthesize encryptIV=_encryptIV;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(nonatomic) float wavejbmMaxSpeedRate; // @synthesize wavejbmMaxSpeedRate=_wavejbmMaxSpeedRate;
@property(nonatomic) float wavejbmMinSpeedRate; // @synthesize wavejbmMinSpeedRate=_wavejbmMinSpeedRate;
@property(nonatomic) int wavejbmMode; // @synthesize wavejbmMode=_wavejbmMode;
@property(nonatomic) int wavejbmFlag; // @synthesize wavejbmFlag=_wavejbmFlag;
@property(nonatomic) _Bool hasSetPlayerCacheConfig; // @synthesize hasSetPlayerCacheConfig=_hasSetPlayerCacheConfig;
@property(nonatomic) int maxPlayerCache; // @synthesize maxPlayerCache=_maxPlayerCache;
@property(nonatomic) int minPlayerCache; // @synthesize minPlayerCache=_minPlayerCache;
@property(nonatomic) unsigned long long playerCacheType; // @synthesize playerCacheType=_playerCacheType;
@property(nonatomic) _Bool hasSetPlayerCacheType; // @synthesize hasSetPlayerCacheType=_hasSetPlayerCacheType;
@property(nonatomic) _Bool hasSetPlayerRenderMode; // @synthesize hasSetPlayerRenderMode=_hasSetPlayerRenderMode;
@property(nonatomic) long long playerOrientation; // @synthesize playerOrientation=_playerOrientation;
@property(nonatomic) _Bool hasSetPlayerOrientation; // @synthesize hasSetPlayerOrientation=_hasSetPlayerOrientation;
@property(nonatomic) __weak id <MMLiveCDNPlayerItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableBackgroundDecoding; // @synthesize enableBackgroundDecoding=_enableBackgroundDecoding;
@property(retain, nonatomic) TRTCCdnPlayerManager *cdnPlayer; // @synthesize cdnPlayer=_cdnPlayer;
@property(copy, nonatomic) NSString *anchorNickname; // @synthesize anchorNickname=_anchorNickname;
@property(retain, nonatomic) NSArray *cachedMicUsersList; // @synthesize cachedMicUsersList=_cachedMicUsersList;
@property(retain, nonatomic) MMLiveCommonSEIMsg *lastAnchorStatusSEIMsg; // @synthesize lastAnchorStatusSEIMsg=_lastAnchorStatusSEIMsg;
@property(retain, nonatomic) MMLiveCommonSEIMsg *lastConnectMicSEIMsg; // @synthesize lastConnectMicSEIMsg=_lastConnectMicSEIMsg;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) _Bool shouldStartInBackground; // @synthesize shouldStartInBackground=_shouldStartInBackground;
@property(nonatomic) _Bool interruptedWhenAppResignActive; // @synthesize interruptedWhenAppResignActive=_interruptedWhenAppResignActive;
@property(nonatomic) int encryptMode; // @synthesize encryptMode=_encryptMode;
@property(nonatomic) int liveVrType; // @synthesize liveVrType=_liveVrType;
@property(nonatomic) unsigned long long currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) unsigned long long lastScene; // @synthesize lastScene=_lastScene;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) unsigned long long playBeginTimestamp; // @synthesize playBeginTimestamp=_playBeginTimestamp;
@property(nonatomic) unsigned long long firstIFrameTimestamp; // @synthesize firstIFrameTimestamp=_firstIFrameTimestamp;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(nonatomic) _Bool hasConnectedSuccess; // @synthesize hasConnectedSuccess=_hasConnectedSuccess;
@property(nonatomic) _Bool hasReceivedFirstIFrame; // @synthesize hasReceivedFirstIFrame=_hasReceivedFirstIFrame;
@property(nonatomic) _Bool hasPlayBegan; // @synthesize hasPlayBegan=_hasPlayBegan;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void)setEnhanceOptions:(unsigned long long)arg1;
- (unsigned long long)enhanceOptions;
- (void)onPcmDataAvailable:(id)arg1 pts:(unsigned long long)arg2;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
- (void)setCDNPlayDecryption:(id)arg1 encMode:(unsigned int)arg2 encKey:(id)arg3 encIV:(id)arg4;
- (void)verifyAndSetDecryptionParams:(id)arg1;
- (void)setCDNPlayDecryptionParams:(id)arg1 encMode:(unsigned int)arg2 encKey:(id)arg3 encIV:(id)arg4;
- (void)setCustomRenderParam:(unsigned int)arg1;
- (_Bool)isCDNPlayerNeedStopRenderPixel;
- (void)onPlayerPixelBufferRefresh:(struct __CVBuffer *)arg1;
- (int)getSharpenInfo;
- (int)getCustomRenderMode;
- (int)getCustomRenderEnable;
- (void)resetVideoZoomAndYaw;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (int)switchStream:(id)arg1 andOriginalUrl:(id)arg2;
- (int)switchStream:(id)arg1;
- (void)setCacheConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)setGameAppId:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3;
- (void)setOrientation:(long long)arg1;
- (_Bool)isCurrentEnableCdnRenderPixelBuffer;
- (void)enableCdnRenderPixelBuffer;
- (void)unableCdnRenderPixelBuffer;
@property(readonly, nonatomic) float currentVideoDisplayScale;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)enableBackgroundDecoding:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)resume;
- (void)pause;
- (void)stopPlay;
- (void)delayStopPlayingForPreload;
- (void)switchToPlayingForPreloadWithDelayStopTime:(double)arg1;
- (_Bool)startPlayForPreloadWithUrl:(id)arg1 originalUrl:(id)arg2 andDelayStopTime:(double)arg3;
- (_Bool)startPlayForPreloadWithUrl:(id)arg1 andDelayStopTime:(double)arg2;
- (void)switchToPlaying;
- (void)resetTRTCCdnPlayerDefaultParams;
- (void)resetTRTCCdnPlayerParams;
- (void)cdnPlayerStartPlayWithUrl:(id)arg1 isMuted:(_Bool)arg2;
- (void)callExperimentalAPI:(id)arg1;
- (void)startPlayWithUrl:(id)arg1 andOriginalUrl:(id)arg2;
- (void)startPlayWithUrl:(id)arg1;
- (_Bool)isSameStreamIdFromUrl:(id)arg1;
- (void)clearDelegate;
- (void)onNetStatus:(id)arg1;
- (void)tryReportPlayTimeCostLog;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)resetPlayEventValues:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isLiveRoomPreparedItem;
@property(readonly, nonatomic) _Bool isInLiveRoom;
- (void)onEnterBackground;
- (void)dealloc;
- (id)initWithItemId:(id)arg1 delegate:(id)arg2 playScene:(unsigned long long)arg3 liveVrType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
