//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

#import "CommonPlayerDelegate-Protocol.h"

@class NSRecursiveLock, NSString, WavAudioPlayer;

@interface SPXAudioRecorder : BaseAudioRecorder <CommonPlayerDelegate>
{
    NSRecursiveLock *mPrepareSentLock;
    _Bool mIsPrepareSent;
    int mSlientTime;
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsNeedWaitForTipAudio;
    WavAudioPlayer *_m_wavAudioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(nonatomic) _Bool needWaitForTipAudio; // @synthesize needWaitForTipAudio=mIsNeedWaitForTipAudio;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (long long)getVoiceFormat;
- (void)autostop;
- (void)stop;
- (void)cleanResource;
- (void)record;
- (void)playEndTipAudio;
- (void)playBeginTipAudio;
- (_Bool)prepareSend;
- (void)createFile:(id)arg1;
- (void)createSpeexFile:(id)arg1;
- (void)createWaveFile:(id)arg1;
- (_Bool)prepareRecord:(_Bool)arg1 cache:(_Bool)arg2;
- (_Bool)prepareRecord;
- (void)setSlientTime:(int)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (void)onCommonPlayerPlayAtTime:(double)arg1;
- (void)onCommonPlayerError:(id)arg1;
- (void)onCommonPlayerPause;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerStop;
- (void)onCommonPlayerPlay;
- (void)setMagicCookieToAudioFile;
- (void)createAudioFile_WAVE:(id)arg1;
- (void)prepareBuffers;
- (void)setDataFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

