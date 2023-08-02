//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingPlayer-Protocol.h"

@class NSString;

@interface TingPlayerCpp : NSObject <TingPlayer>
{
}

- (void)removePlayerStateClient:(id)arg1;
- (void)addPlayerStateClient:(id)arg1;
- (float)getPlayRate;
- (long long)getPlayerDownloadPercent;
- (long long)getPlayerDuration;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerPosition;
- (int)getPlayerState;
- (void)update:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)seek:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)play:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

