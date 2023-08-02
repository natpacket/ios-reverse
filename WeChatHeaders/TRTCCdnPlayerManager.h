//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CdnNotifyDelegate-Protocol.h"
#import "TXVideoCustomProcessDelegate-Protocol.h"

@class CdnRenderView, NSMutableArray, NSString, TRTCCdnPlayerConfig, TXLivePlayer, UIView;
@protocol OS_dispatch_semaphore, TRTCCdnPlayerManagerDelegate, TXLivePlayListener;

@interface TRTCCdnPlayerManager : NSObject <CdnNotifyDelegate, TXVideoCustomProcessDelegate>
{
    _Bool _useCdnRenderer;
    _Bool _forbidRenderPixel;
    int _cdnRenderParam;
    int _customrenderInfo;
    TXLivePlayer *_player;
    TRTCCdnPlayerConfig *_config;
    id <TXLivePlayListener> _delegate;
    id <TRTCCdnPlayerManagerDelegate> _cdnPlayerDelegate;
    unsigned long long _enhanceOptions;
    CdnRenderView *_renderView;
    UIView *_containView;
    long long _customrenderMode;
    long long _wavejbm_factory;
    NSMutableArray *_tempARGBColorRequestTaskList;
    NSMutableArray *_tempYUVColorRequestTaskList;
    NSObject<OS_dispatch_semaphore> *_tempARGBReqTaskLock;
    NSObject<OS_dispatch_semaphore> *_tempYUVReqTaskLock;
    NSObject<OS_dispatch_semaphore> *_forbidRenderPixelChangedLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *forbidRenderPixelChangedLock; // @synthesize forbidRenderPixelChangedLock=_forbidRenderPixelChangedLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempYUVReqTaskLock; // @synthesize tempYUVReqTaskLock=_tempYUVReqTaskLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempARGBReqTaskLock; // @synthesize tempARGBReqTaskLock=_tempARGBReqTaskLock;
@property(retain, nonatomic) NSMutableArray *tempYUVColorRequestTaskList; // @synthesize tempYUVColorRequestTaskList=_tempYUVColorRequestTaskList;
@property(retain, nonatomic) NSMutableArray *tempARGBColorRequestTaskList; // @synthesize tempARGBColorRequestTaskList=_tempARGBColorRequestTaskList;
@property long long wavejbm_factory; // @synthesize wavejbm_factory=_wavejbm_factory;
@property(nonatomic) _Bool forbidRenderPixel; // @synthesize forbidRenderPixel=_forbidRenderPixel;
@property(nonatomic) int customrenderInfo; // @synthesize customrenderInfo=_customrenderInfo;
@property(nonatomic) long long customrenderMode; // @synthesize customrenderMode=_customrenderMode;
@property int cdnRenderParam; // @synthesize cdnRenderParam=_cdnRenderParam;
@property _Bool useCdnRenderer; // @synthesize useCdnRenderer=_useCdnRenderer;
@property(retain) UIView *containView; // @synthesize containView=_containView;
@property(retain) CdnRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) unsigned long long enhanceOptions; // @synthesize enhanceOptions=_enhanceOptions;
@property(nonatomic) __weak id <TRTCCdnPlayerManagerDelegate> cdnPlayerDelegate; // @synthesize cdnPlayerDelegate=_cdnPlayerDelegate;
@property(nonatomic) __weak id <TXLivePlayListener> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TRTCCdnPlayerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXLivePlayer *player; // @synthesize player=_player;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)addPerfWarningObserve;
- (int)getSharpenInfo;
- (int)getCustomRenderMode;
- (int)getCustomRenderEnable;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)enableReportStreamRspInfo;
- (_Bool)forbidAdjustCDNEnhanceOptions;
- (void)updatePlayerAudioJitterBufferConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)updatePlayerCache;
- (void)callExperimentalAPI:(id)arg1;
- (void)setCustomRenderParam:(int)arg1;
- (void)setCloseHWDecoder;
- (void)setEnableMessage:(_Bool)arg1;
- (void)setConnectRetryInterval:(int)arg1;
- (void)setConnectRetryCount:(int)arg1;
- (void)setCacheConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)initCacheConfig;
- (void)setDefaultPlayerConfig;
- (void)setGameAppId:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3;
- (void)setRenderMode:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setDebugLogEnabled:(_Bool)arg1;
- (void)enableMetalRender:(_Bool)arg1;
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
- (void)removeRenderer;
- (int)switchStream:(id)arg1;
- (void)startPlay:(id)arg1;
- (void)setRenderer;
- (void)setupRenderer;
- (void)applyConfigToPlayer;
- (_Bool)onPlayerPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (void)initDefaultData;
- (id)initWithContainerView:(id)arg1 delegate:(id)arg2 liveVrType:(int)arg3;
- (CDStruct_77932685)readYUVColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (CDStruct_abf36e01)readARGBColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (struct CGPoint)convertNormalizedCoordinate:(struct CGPoint)arg1 toPointInPixelBuffer:(struct __CVBuffer *)arg2 pixelBufferDisplayNormalizedFrame:(struct CGRect)arg3;
- (struct CGRect)convertNormalizedDisplayFrameFromPixelBuffer:(struct __CVBuffer *)arg1 withDisplaySize:(struct CGSize)arg2;
- (void)extractPixelColorWithRequestTaskList:(id)arg1 fromPixelBufferIfNeeded:(struct __CVBuffer *)arg2;
- (void)checkTempARGBColorRequestTaskListOverLimit;
- (void)checkTempYUVColorRequestTaskListOverLimit;
- (void)extractPixelColorInfoFromPixelBufferIfNeeded:(struct __CVBuffer *)arg1;
- (void)addTempYUVColorRequestTask:(id)arg1;
- (void)addTempARGBColorRequestTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
