//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OMJCamSink, UIView;
@protocol OMJCamSessionDelegate;

@interface OMJCamSession : NSObject
{
    OMJCamSink *_camSink;
    id <OMJCamSessionDelegate> _delegate;
    SharedPtr_8d35978a _backingSession;
    shared_ptr_85cde1ea _backingRenderView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_85cde1ea backingRenderView; // @synthesize backingRenderView=_backingRenderView;
@property(nonatomic) SharedPtr_8d35978a backingSession; // @synthesize backingSession=_backingSession;
@property(nonatomic) __weak id <OMJCamSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OMJCamSink *camSink; // @synthesize camSink=_camSink;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getCamGestureRecognizerSettings;
- (id)backingRenderViewCon;
- (void)setAudioDeviceType:(long long)arg1;
- (unsigned long long)getPreferredCameraDimensionLevel;
- (void)resumeBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getCurrentBackgroundMusicDesc;
- (void)clearBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getColorAdjustmentDesc;
- (void)setColorAdjustment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getFilterDesc;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getBeautyAdjustmentDesc;
- (void)clearBeautyAdjustmentDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIView *renderView;
- (_Bool)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (void)resumePreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pausePreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportPhotoWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3 shouldTeardownSession:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)exportPhotoWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3 outputFilePath:(id)arg4 shouldTeardownSession:(_Bool)arg5 photoSettings:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)stopRecordingWithShouldTeardownSession:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getMultiFilterDescs;
- (void)setFilterDescsToTemplateDefaultWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearTemplateWithOverridingParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)switchToTemplateWithID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long state;
- (void)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPreviewingWithVideoRemixTemplateID:(id)arg1 videoRemixParams:(id)arg2 settings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPreviewingWithTemplateID:(id)arg1 overridingParams:(id)arg2 settings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPreviewingWithSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupFirstFrameDidPresentCallback;
- (void)setupRecordingTimeDidChangeCallback;
- (void)setupRecordingDidFailCallback;
- (id)initWithBackingSession:(const void *)arg1;

@end

