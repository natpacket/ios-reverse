//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IAUAudioDeviceExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCAVAudioSessionSwizzleExtension-Protocol.h"
#import "WCAudioModuleDelegate-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class NSString;

@interface VoIPAudioService : MMUserService <WCAudioSessionExt, WCAudioModuleDelegate, IAUAudioDeviceExt, WCAVAudioSessionSwizzleExtension, MMServiceProtocol>
{
    _Bool _isWorking;
    _Bool _isActived;
    _Bool _isCallKit;
    _Bool _hasAudioUnitCallbackFirst;
    _Bool _isInBackground;
    unsigned long long _roomID;
    long long _roomKey;
    unsigned long long _audioDeviceModeBeforeClosing;
    unsigned long long _currentDeviceMode;
    CDUnknownBlockType _resumeAfterInterruptionBlock;
}

+ (void)loadStatusWithCompletion:(CDUnknownBlockType)arg1 callbackInMainThead:(_Bool)arg2;
+ (void)loadStatusWithRouteChange:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackInMainThead:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resumeAfterInterruptionBlock; // @synthesize resumeAfterInterruptionBlock=_resumeAfterInterruptionBlock;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool hasAudioUnitCallbackFirst; // @synthesize hasAudioUnitCallbackFirst=_hasAudioUnitCallbackFirst;
@property(nonatomic) _Bool isCallKit; // @synthesize isCallKit=_isCallKit;
@property(nonatomic) unsigned long long currentDeviceMode; // @synthesize currentDeviceMode=_currentDeviceMode;
@property(nonatomic) unsigned long long audioDeviceModeBeforeClosing; // @synthesize audioDeviceModeBeforeClosing=_audioDeviceModeBeforeClosing;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned long long roomID; // @synthesize roomID=_roomID;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)arg1 error:(id)arg2 ret:(_Bool)arg3;
- (void)onMediaServicesWereReset:(id)arg1;
- (void)onMediaServicesWereLost:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirst;
- (void)audioDeviceDidReceivePlaybackCallbackFirst;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceWillStart;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (id)init;
- (void)receiveAudioUnitCallbackFirst;
- (void)refreshStatus;
- (void)refreshStatusWithRouteChange:(id)arg1;
- (_Bool)isUsingEarDeviceInLastTalk;
- (_Bool)isUsingBuiltInReceiverInLastTalk;
- (unsigned long long)audioDeviceModeInLastTalk;
- (void)stop;
- (void)start;
- (void)close;
- (_Bool)openIfIsCallKit:(_Bool)arg1;
- (void)clearResumeAfterInterruptionBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

