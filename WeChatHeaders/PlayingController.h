//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioReceiverExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"

@class CMessageWrap;

@interface PlayingController : MMObject <ISysCallCheckExt, IAudioReceiverExt>
{
    _Bool m_bPlaying;
    unsigned int m_uiMesLocalID;
    CMessageWrap *m_msgWrap;
    _Bool _shouldAsyncStartPlayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAsyncStartPlayer; // @synthesize shouldAsyncStartPlayer=_shouldAsyncStartPlayer;
- (void)dealloc;
- (void)Reset;
- (void)OnEarTip;
- (void)OnBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)reportStopVoice:(int)arg1;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)onResignActive;
- (void)StopPlayMessageWithUsrName:(id)arg1;
- (void)StopPlayMessage:(id)arg1;
- (void)SeekVoiceMsg:(id)arg1 toTime:(unsigned int)arg2;
- (void)StartPlayMessage:(id)arg1 Resume:(_Bool)arg2;
- (id)currentPlayingMsg;
- (_Bool)isPlaying;
- (void)UnRegister;
- (void)Register;
- (id)init;

@end
