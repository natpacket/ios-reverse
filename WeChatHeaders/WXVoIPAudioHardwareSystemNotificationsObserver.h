//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WXVoIPAudioHardwareSystemNotificationsObserver : NSObject
{
    _Bool _isOtherAPPPlaying;
    _Bool _isInVOIPMode;
    _Bool _isCaptureObservationStarted;
    _Bool _isPlayObservationStarted;
    int _playDeviceType;
    int _playHardwareVolume;
    struct AudioHardwareSystemNotificationsCallback *_callback;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_systemStatusObserver;
}

+ (int)getPlayHardwareVolume;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayObservationStarted; // @synthesize isPlayObservationStarted=_isPlayObservationStarted;
@property(nonatomic) _Bool isCaptureObservationStarted; // @synthesize isCaptureObservationStarted=_isCaptureObservationStarted;
@property(nonatomic) int playHardwareVolume; // @synthesize playHardwareVolume=_playHardwareVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *systemStatusObserver; // @synthesize systemStatusObserver=_systemStatusObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property int playDeviceType; // @synthesize playDeviceType=_playDeviceType;
@property _Bool isInVOIPMode; // @synthesize isInVOIPMode=_isInVOIPMode;
@property _Bool isOtherAPPPlaying; // @synthesize isOtherAPPPlaying=_isOtherAPPPlaying;
@property(nonatomic) struct AudioHardwareSystemNotificationsCallback *callback; // @synthesize callback=_callback;
- (void)reportRouteChangeEvent:(id)arg1 result:(struct DeviceErrorApple)arg2;
- (struct RouteChangeDetails)getRouteChangeDetails:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)reportHardwareVolumeIfChanged;
- (void)handleIfOtherAPPPlayingStateChanged;
- (void)stopObservingSystemNotifications;
- (void)observeSystemNotifications;
- (void)stopObservingSystemStatus;
- (void)observeSystemStatus;
- (void)stopObservingIfPlayAndeCaptureBothStopped;
- (void)observeIfPlayOrCaptureFirstStarted;
- (void)stopPlayObservation;
- (void)restartPlayObservation:(const struct Hardware *)arg1;
- (void)startPlayObservation:(const struct Hardware *)arg1;
- (void)stopCaptureObservation;
- (void)restartCaptureObservation:(const struct Hardware *)arg1;
- (void)startCaptureObservation:(const struct Hardware *)arg1;
- (id)init:(id)arg1;

@end

