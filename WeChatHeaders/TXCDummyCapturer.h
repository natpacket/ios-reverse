//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICameraCapturerInterface-Protocol.h"
#import "TXICustomCapturerInterface-Protocol.h"
#import "TXIVideoCaptureInterface-Protocol.h"
#import "TXIVirtualCapturerInterface-Protocol.h"

@class NSString, TXCDispatchQueue, TXCVideoCaptureConfig;

@interface TXCDummyCapturer : NSObject <TXICameraCapturerInterface, TXIVideoCaptureInterface, TXIVirtualCapturerInterface, TXICustomCapturerInterface>
{
    _Bool isRunning;
    unsigned long long captureType;
    TXCDispatchQueue *_queue;
    TXCVideoCaptureConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoCaptureConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly) _Bool isRunning; // @synthesize isRunning;
@property(readonly, nonatomic) unsigned long long captureType; // @synthesize captureType;
- (void)sendVideoFrame:(id)arg1;
- (void)setStillImage:(id)arg1;
- (void)enableZoom:(_Bool)arg1;
- (void)setExposureTargetBias:(float)arg1;
- (_Bool)isFaceDetectEnabled;
- (void)setTorchOn:(_Bool)arg1;
- (_Bool)isTorchSupported;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)enablesFaceDetect:(_Bool)arg1;
- (_Bool)isAutoFocusSupported;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(_Bool)arg2;
- (double)zoomMaxRatio;
- (_Bool)isZoomSupported;
- (void)setFront:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (void)setCaptureResolution:(struct CGSize)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithQueue:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
