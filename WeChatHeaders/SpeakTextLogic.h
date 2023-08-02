//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVSpeechSynthesizerDelegate-Protocol.h"
#import "CommonPlayerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "SpeakTextLogicObj-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"
#import "WCProximityStateRecognizerDelegate-Protocol.h"

@class AVSpeechSynthesizer, NSString, SilkAudioPlayerV2, SpeakTextReporter;
@protocol SpeakTextDelegate;

@interface SpeakTextLogic : NSObject <PBMessageObserverDelegate, CommonPlayerDelegate, AVSpeechSynthesizerDelegate, WCProximityStateRecognizerDelegate, WCAudioSessionExt, SpeakTextLogicObj>
{
    SilkAudioPlayerV2 *m_audioPlayer;
    AVSpeechSynthesizer *m_synthesizer;
    NSString *m_playingText;
    NSString *m_requestingText;
    _Bool m_playOnMessageReturn;
    _Bool m_isPaused;
    _Bool m_ignoreCache;
    int m_offset;
    int m_localEngineOffset;
    _Bool _isHeaderRequest;
    _Bool _useLocalSpeaker;
    int _systemSpeakCount;
    int _wxSpeakCount;
    id <SpeakTextDelegate> _m_delegate;
    NSString *_reportIdentifier;
    unsigned long long _prepareSpeakTime;
    unsigned long long _startSpeakTime;
    SpeakTextReporter *_reporter;
}

+ (_Bool)forceUseLocalSpeak;
+ (_Bool)checkUseLocalSpeaker:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1;
+ (_Bool)hasLanguageOtherThanCN:(id)arg1;
+ (id)getNextRequestStr:(id)arg1 offset:(int *)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) SpeakTextReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long startSpeakTime; // @synthesize startSpeakTime=_startSpeakTime;
@property(nonatomic) unsigned long long prepareSpeakTime; // @synthesize prepareSpeakTime=_prepareSpeakTime;
@property(nonatomic) int wxSpeakCount; // @synthesize wxSpeakCount=_wxSpeakCount;
@property(nonatomic) int systemSpeakCount; // @synthesize systemSpeakCount=_systemSpeakCount;
@property(nonatomic) _Bool useLocalSpeaker; // @synthesize useLocalSpeaker=_useLocalSpeaker;
@property(nonatomic) _Bool isHeaderRequest; // @synthesize isHeaderRequest=_isHeaderRequest;
@property(retain, nonatomic) NSString *reportIdentifier; // @synthesize reportIdentifier=_reportIdentifier;
@property(nonatomic) __weak id <SpeakTextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onProximityStateChangeToCloseEar;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)addProximityMonitorIfNeed;
- (void)startAudioSession;
- (void)saveSpeakTextItem:(id)arg1;
- (id)loadSpeakTextItem:(id)arg1 position:(unsigned int)arg2;
- (id)getPBFilePath:(id)arg1 position:(unsigned int)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)speakNextBySynthesizer;
- (void)onCgiFail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestCgi:(id)arg1;
- (void)playNextPiece:(id)arg1;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerPlay;
- (_Bool)IsPlaying;
- (void)onSpeakEndWithFinished:(_Bool)arg1;
- (void)EndSpeak;
- (void)ResumeSpeak;
- (void)PauseSpeak;
- (_Bool)StartSpeakText:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
