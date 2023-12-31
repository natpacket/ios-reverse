//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "FavAudioRecorderDelegate-Protocol.h"
#import "IRecordPermissionCheckExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class FavAudioRecorder, MMTimer, NSString;

@interface WebviewRecorderManager : MMUserService <MMServiceProtocol, FavAudioRecorderDelegate, IRecordPermissionCheckExt>
{
    FavAudioRecorder *_recorder;
    int _recordStatus;
    NSString *_lastFilePath;
    unsigned long long _startRecordTime;
    unsigned long long _endRecordTime;
    MMTimer *_recordTimer;
    long long _stopReason;
    long long _recordTimeoutValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastFilePath; // @synthesize lastFilePath=_lastFilePath;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavBeginRecording:(int)arg1;
- (_Bool)internalStopRecord;
- (void)stopTime;
- (void)onTimeCount;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (_Bool)endRecord;
- (_Bool)stopRecord;
- (_Bool)startRecord:(long long)arg1 duration:(unsigned long long)arg2;
- (int)getRecordStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

