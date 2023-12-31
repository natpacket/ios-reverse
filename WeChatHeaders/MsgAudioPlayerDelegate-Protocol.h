//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioPlayerDelegate-Protocol.h"

@protocol MsgAudioPlayerProtocol;

@protocol MsgAudioPlayerDelegate <AudioPlayerDelegate>

@optional
- (void)audioPlayer:(id <MsgAudioPlayerProtocol>)arg1 didChangePeakPower:(float)arg2;
- (void)audioPlayerDidFinishPlaying:(id <MsgAudioPlayerProtocol>)arg1 isForceStop:(_Bool)arg2;
- (void)audioPlayerBeginPlaying:(id <MsgAudioPlayerProtocol>)arg1 success:(_Bool)arg2;
- (void)onEarTip;
@end

