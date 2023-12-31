//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterStreamHandler-Protocol.h"
#import "FlutterTexture-Protocol.h"
#import "ITPPlayerDelegate-Protocol.h"

@class FLTFrameUpdater, FlutterEventChannel, NSString, NSTimer;
@protocol ITPPlayer;

@interface VideoPlayer : NSObject <ITPPlayerDelegate, FlutterTexture, FlutterStreamHandler>
{
    _Bool _disposed;
    _Bool _isBuffering;
    FlutterEventChannel *_eventChannel;
    FLTFrameUpdater *_frameUpdater;
    double _volume;
    CDUnknownBlockType _eventSink;
    struct __CVBuffer *_lastBuffer;
    struct __CVBuffer *_latestPixelBuffer;
    NSTimer *_timer;
    id <ITPPlayer> _player;
    NSObject *_initialEvent;
    NSObject *_errorEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *errorEvent; // @synthesize errorEvent=_errorEvent;
@property(retain, nonatomic) NSObject *initialEvent; // @synthesize initialEvent=_initialEvent;
@property(retain, nonatomic) id <ITPPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) struct __CVBuffer *latestPixelBuffer; // @synthesize latestPixelBuffer=_latestPixelBuffer;
@property(nonatomic) struct __CVBuffer *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) FLTFrameUpdater *frameUpdater; // @synthesize frameUpdater=_frameUpdater;
@property(retain, nonatomic) FlutterEventChannel *eventChannel; // @synthesize eventChannel=_eventChannel;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 captureVideoFailed:(long long)arg2;
- (void)onPlayer:(id)arg1 captureVideoSuccess:(id)arg2;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onStopAsyncComplete:(id)arg1;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onSeekComplete:(id)arg1;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onCompletion:(id)arg1;
- (void)onPrepared:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)onTextureUnregistered:(id)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)enqueueEvent:(id)arg1;
- (id)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (void)captureVideo;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)reset;
- (void)stopAsync;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)setVideoInfo:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSource:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
- (void)setReportInfoWith:(long long)arg1;
- (void)dispose;
- (void)disposePlayer;
- (void)setPlaybackSpeed:(double)arg1;
@property(readonly, nonatomic) unsigned long long videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) unsigned long long currentState;
@property(readonly, nonatomic) long long currentPositionMs;
@property(readonly, nonatomic) long long durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams;
@property(nonatomic) double audioGainRatio;
@property(nonatomic) _Bool outputMute;
- (void)bufferingUpdate;
- (id)initWithFrameUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

