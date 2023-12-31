//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRemoteControlCheckExt-Protocol.h"

@class AVPlayer, NSMutableArray;

@interface MMFinderLiveBackgroundMusicLogic : NSObject <IRemoteControlCheckExt>
{
    _Bool _canPlayMusic;
    NSMutableArray *_musicURLList;
    unsigned long long _currentIndex;
    AVPlayer *_audioPlayer;
    unsigned long long _playerErrorCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playerErrorCount; // @synthesize playerErrorCount=_playerErrorCount;
@property(retain, nonatomic) AVPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *musicURLList; // @synthesize musicURLList=_musicURLList;
@property(nonatomic) _Bool canPlayMusic; // @synthesize canPlayMusic=_canPlayMusic;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appDidBecomeActive:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)removeAudioSessionObserver;
- (void)addAudioSessionObserver;
- (void)removeAudioPlayerObserver;
- (void)addAudioPlayerObserver;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)onPlayerDidFinishPlaying;
- (void)checkAndResumeAfterEvent;
- (void)handlePlayerError;
- (void)createMusicURLListWithList:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long musicCount;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)stop;
- (void)pause;
- (void)resumeOrPlayNext;
- (void)playNext;
- (void)play;
- (id)initWithMusicList:(id)arg1;

@end

