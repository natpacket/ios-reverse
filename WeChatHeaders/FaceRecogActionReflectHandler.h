//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FaceRecogFlashHandler.h"

#import "FaceRecogBaseViewDelegate-Protocol.h"
#import "FaceRecogCheckBrightnessLogicDelegate-Protocol.h"
#import "FaceRecogGuideViewDelegate-Protocol.h"

@class CameraReflectDevice, FaceRecogCheckBrightnessLogic, FaceRecogFlashView, FaceRecogReflectGuideView, MMTimer, NSString;

@interface FaceRecogActionReflectHandler : FaceRecogFlashHandler <FaceRecogGuideViewDelegate, FaceRecogBaseViewDelegate, FaceRecogCheckBrightnessLogicDelegate>
{
    MMTimer *_reflectTimer;
    long long _triggerTimes;
    double _oldScreenBrightness;
    FaceRecogReflectGuideView *_guideVc;
    _Bool _isReflecting;
    _Bool _shouldWaitForFaceDetect;
    _Bool _isWaitingToReflect;
    _Bool _hasDetectFace;
    _Bool _shouldShowTipsAtRetry;
    FaceRecogCheckBrightnessLogic *_brightnessCheckLogic;
    FaceRecogFlashView *_verifyView;
    CameraReflectDevice *_lightDetector;
    double _cameraStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowTipsAtRetry; // @synthesize shouldShowTipsAtRetry=_shouldShowTipsAtRetry;
@property(nonatomic) _Bool hasDetectFace; // @synthesize hasDetectFace=_hasDetectFace;
@property(nonatomic) _Bool isWaitingToReflect; // @synthesize isWaitingToReflect=_isWaitingToReflect;
@property(nonatomic) _Bool shouldWaitForFaceDetect; // @synthesize shouldWaitForFaceDetect=_shouldWaitForFaceDetect;
@property(nonatomic) double cameraStartTime; // @synthesize cameraStartTime=_cameraStartTime;
@property(nonatomic) _Bool isReflecting; // @synthesize isReflecting=_isReflecting;
@property(retain, nonatomic) CameraReflectDevice *lightDetector; // @synthesize lightDetector=_lightDetector;
@property(retain, nonatomic) FaceRecogFlashView *verifyView; // @synthesize verifyView=_verifyView;
@property(retain, nonatomic) FaceRecogCheckBrightnessLogic *brightnessCheckLogic; // @synthesize brightnessCheckLogic=_brightnessCheckLogic;
- (void)faceRecogDidRotate;
- (void)onFaceRecogGuideFinished;
- (void)onDidCheckBrightnessDoneWithIsOK:(_Bool)arg1 brightnessValue:(float)arg2;
- (double)faceRectWidth;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(_Bool)arg4;
- (void)onReflectStart:(long long)arg1;
- (void)didDetectFace;
- (void)onPipelineReset;
- (void)onStartVerifyResult:(id)arg1;
- (_Bool)onStartRequestConfig:(id)arg1;
- (void)requestRetry;
- (void)requestStop;
- (void)onPipelineFinishWithSuccess:(_Bool)arg1;
- (void)onReflectColorChange:(unsigned int)arg1 light:(double)arg2;
- (void)onFlashActionFinish;
- (void)onShowUITips:(id)arg1;
- (void)presentFaceViewController;
- (void)showView;
- (void)onCameraStart;
- (void)didAccessVideo;
- (void)initView;
- (void)dealloc;
- (id)initWithWorkMode:(long long)arg1 scene:(unsigned int)arg2;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

