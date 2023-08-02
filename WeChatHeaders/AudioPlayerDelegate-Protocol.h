//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AudioPlayerProtocol;

@protocol AudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(id <AudioPlayerProtocol>)arg1 didChangePeakPower:(float)arg2;
- (void)audioPlayerDidFinishPlaying:(id <AudioPlayerProtocol>)arg1;
- (void)audioPlayerBeginPlaying:(id <AudioPlayerProtocol>)arg1 success:(_Bool)arg2;
@end
