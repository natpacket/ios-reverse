//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAGReflectDeviceDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, NSArray, NSString;
@protocol CameraVideoDeviceDelegate, OS_dispatch_queue;

@interface CameraDevice : NSObject <YTAGReflectDeviceDelegate>
{
    AVCaptureDevice *inputCamera;
    AVCaptureDeviceInput *videoInput;
    NSObject<OS_dispatch_queue> *deviceOperationQueue;
    NSArray *observers;
    _Bool cameraConfiguring;
    _Bool focusListening;
    _Bool _running;
    _Bool _pause;
    _Bool _lowLightBoost;
    _Bool _isCustomExposureSupported;
    int _flashMode;
    NSObject<CameraVideoDeviceDelegate> *_delegate;
    AVCaptureSession *_session;
    double _DeviceISO;
    double _Device_minISO;
    double _Device_maxISO;
    double _DeviceAperture;
    AVCaptureSession *_captureSession;
    struct CGPoint _focusPoint;
    struct CGPoint _exposurePoint;
    CDStruct_1b6d18a9 _DeviceExposureDuration;
}

+ (_Bool)deviceDenied;
- (void).cxx_destruct;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool isCustomExposureSupported; // @synthesize isCustomExposureSupported=_isCustomExposureSupported;
@property(nonatomic) CDStruct_1b6d18a9 DeviceExposureDuration; // @synthesize DeviceExposureDuration=_DeviceExposureDuration;
@property(nonatomic) double DeviceAperture; // @synthesize DeviceAperture=_DeviceAperture;
@property(nonatomic) double Device_maxISO; // @synthesize Device_maxISO=_Device_maxISO;
@property(nonatomic) double Device_minISO; // @synthesize Device_minISO=_Device_minISO;
@property(nonatomic) double DeviceISO; // @synthesize DeviceISO=_DeviceISO;
@property(nonatomic) _Bool lowLightBoost; // @synthesize lowLightBoost=_lowLightBoost;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) struct CGPoint exposurePoint; // @synthesize exposurePoint=_exposurePoint;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak NSObject<CameraVideoDeviceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFocusChangeListener;
- (void)addFocusChangeListener;
- (void)changeDevicePosition;
- (id)deviceWithType:(id)arg1 position:(long long)arg2;
- (void)restartDevcie;
- (void)commitConfiguration;
- (void)beginConfiguration;
- (id)deviceQueue;
- (void)stopDevice;
- (void)startDevice;
@property(readonly, nonatomic) _Bool hasFront;
@property(readonly, nonatomic) _Bool hasFlash;
@property(nonatomic) long long whiteBalanceMode;
@property(nonatomic) long long exposureMode;
@property(nonatomic) long long focusMode;
@property(nonatomic) long long position;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (id)getCaptureDevice;
- (void)dealloc;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
