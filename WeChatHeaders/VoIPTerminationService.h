//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "VoIPAudioServiceExtension-Protocol.h"
#import "VoipUIManagerExt-Protocol.h"

@class MMTimer, NSString;

@interface VoIPTerminationService : MMUserService <VoipUIManagerExt, PBMessageObserverDelegate, VoIPAudioServiceExtension, MMServiceProtocol>
{
    _Bool _isWorking;
    _Bool _isCaller;
    unsigned int _mTalkingTime;
    MMTimer *_mVoipTimer;
    double _lastBackgroundRemainingTime;
    double _lastCheckBackgroundRemainingTimeTimestamp;
}

+ (void)launchIfNeed;
- (void).cxx_destruct;
@property(nonatomic) double lastCheckBackgroundRemainingTimeTimestamp; // @synthesize lastCheckBackgroundRemainingTimeTimestamp=_lastCheckBackgroundRemainingTimeTimestamp;
@property(nonatomic) double lastBackgroundRemainingTime; // @synthesize lastBackgroundRemainingTime=_lastBackgroundRemainingTime;
@property(nonatomic) unsigned int mTalkingTime; // @synthesize mTalkingTime=_mTalkingTime;
@property(retain, nonatomic) MMTimer *mVoipTimer; // @synthesize mVoipTimer=_mVoipTimer;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)onSetIfIsIlink:(_Bool)arg1;
- (void)UIManagerDidClose;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 monoMsg:(id)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)checkBackgroundRemainingTime;
- (void)invalidVoIPTimer;
- (void)TimerCheck;
- (void)tickVoIPTimer;
- (void)handleShutDownResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)handleCancelInviteResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)handleLastTerminationIfNeed;
- (void)clearByReset;
- (void)storeRoomInfo;
- (void)storeRoomInfoWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2 inviteID:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

