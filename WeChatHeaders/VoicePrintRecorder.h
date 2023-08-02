//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVoicePrintMgrExt-Protocol.h"
#import "WCAudioModuleDelegate-Protocol.h"

@class MMTimer, NSString, VoicePrintMgr;
@protocol VoicePrintRecorderDelegate;

@interface VoicePrintRecorder : NSObject <WCAudioModuleDelegate, IVoicePrintMgrExt>
{
    _Bool _recording;
    _Bool _active;
    _Bool _recordingTooShort;
    unsigned int _resourceId;
    unsigned int _voiceId;
    unsigned int _retryCount;
    id <VoicePrintRecorderDelegate> _delegate;
    VoicePrintMgr *_voicePrintManager;
    double _recordingBeginTime;
    MMTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic, getter=isRecordingTooShort) _Bool recordingTooShort; // @synthesize recordingTooShort=_recordingTooShort;
@property(nonatomic) double recordingBeginTime; // @synthesize recordingBeginTime=_recordingBeginTime;
@property(retain, nonatomic) VoicePrintMgr *voicePrintManager; // @synthesize voicePrintManager=_voicePrintManager;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId=_voiceId;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) unsigned int resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) __weak id <VoicePrintRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnStartRecord;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)stopRecord;
- (void)startRecordForResourceId:(unsigned int)arg1 isFirstStep:(_Bool)arg2;
- (void)deactiveAudio;
- (void)dealloc;
- (id)initWithManger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
