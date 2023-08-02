//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMusicPlayerExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMMusicInfo, NSString;

@interface ShakeMusicUtility : MMUserService <IMusicPlayerExt, MMServiceProtocol>
{
    MMMusicInfo *_lastPlayingMusic;
    double _lastMusicOffset;
}

+ (id)genReportSongId:(unsigned int)arg1;
+ (unsigned long long)getCopyRightWithShakeMusicInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastMusicOffset; // @synthesize lastMusicOffset=_lastMusicOffset;
@property(retain, nonatomic) MMMusicInfo *lastPlayingMusic; // @synthesize lastPlayingMusic=_lastPlayingMusic;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)isLastPlayMusicExists;
- (void)clearLastPlayingMusic;
- (void)resumeLastPlayingMusic;
- (void)recordPlayingMusicAndPause:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

