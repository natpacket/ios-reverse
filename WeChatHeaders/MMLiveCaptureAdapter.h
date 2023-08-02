//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMLiveManagerCaptureDelegate-Protocol.h"
#import "MMLiveManagerMetricsDelegate-Protocol.h"
#import "MMLiveMangerPusherDelegate-Protocol.h"

@class MMLiveManger, NSString;
@protocol MMLiveCaptureAdapterDelegate;

@interface MMLiveCaptureAdapter : NSObject <MMLiveMangerPusherDelegate, MMLiveManagerMetricsDelegate, MMLiveManagerCaptureDelegate>
{
    id <MMLiveCaptureAdapterDelegate> _captureDelegate;
    MMLiveManger *_liveCapture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveManger *liveCapture; // @synthesize liveCapture=_liveCapture;
@property(nonatomic) __weak id <MMLiveCaptureAdapterDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
- (void)liveManager:(id)arg1 didOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveManager:(id)arg1 didOutputSampleBufferForRender:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveManager:(id)arg1 didFinishCollectingCaptureMetrics:(id)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (id)getLiveCaptureVideoFrameWidgetManageLogic;
- (void)updateFocusAtPoint:(struct CGPoint)arg1;
- (void)updateZoomScaleWithGestureScale:(double)arg1;
- (void)refreshViewCaptureConfigurations;
- (void)resumeViewCapture;
- (void)pauseViewCapture;
- (void)stopViewCapture;
- (void)startViewCaptureWithView:(id)arg1;
- (void)setCustomCameraConfigs:(id)arg1;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)setEnableZoom:(_Bool)arg1;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setRemoteMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setRotation:(int)arg1;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolution:(long long)arg1;
- (void)setFaceDetect:(_Bool)arg1;
- (void)setFront:(_Bool)arg1;
- (void)setFrameRate:(int)arg1;
- (void)switchCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchCamera;
- (void)stopCameraCapture;
- (void)startCameraCaptureWithContainerView:(id)arg1 useFrontCamera:(_Bool)arg2;
- (void)startCameraCaptureWithContainerView:(id)arg1;
- (void)initLiveCaptureDelegatesAndEffectManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

