//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXCTimedOutputDelegate-Protocol.h"
#import "TXICustomCapturerInterface-Protocol.h"
#import "TXIVideoCaptureInterface-Protocol.h"

@class NSMutableSet, NSString, TXCDispatchQueue, TXCPixelBufferPool, TXCTimedOutput, TXCVideoCaptureConfig;

@interface TXCCustomCapturer : NSObject <TXCTimedOutputDelegate, TXIVideoCaptureInterface, TXICustomCapturerInterface>
{
    _Bool _isRunning;
    _Bool _isTranscodingMode;
    unsigned int _currentPtsMs;
    unsigned long long captureType;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    TXCVideoCaptureConfig *_config;
    NSMutableSet *_subscribers;
    TXCPixelBufferPool *_bufferPool;
    CDUnknownBlockType _logger;
    long long _lastTicks;
    TXCTimedOutput *_timedOutput;
    unsigned long long _lastOutputMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTranscodingMode; // @synthesize isTranscodingMode=_isTranscodingMode;
@property(nonatomic) unsigned long long lastOutputMs; // @synthesize lastOutputMs=_lastOutputMs;
@property(nonatomic) unsigned int currentPtsMs; // @synthesize currentPtsMs=_currentPtsMs;
@property(retain, nonatomic) TXCTimedOutput *timedOutput; // @synthesize timedOutput=_timedOutput;
@property long long lastTicks; // @synthesize lastTicks=_lastTicks;
@property(copy) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) TXCPixelBufferPool *bufferPool; // @synthesize bufferPool=_bufferPool;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) TXCVideoCaptureConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (id)convertFrame:(id)arg1;
- (void)updateFps:(long long)arg1;
- (void)stopTimedOutput;
- (void)startTimedOutput;
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)sendVideoFrame:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long captureType; // @synthesize captureType;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
