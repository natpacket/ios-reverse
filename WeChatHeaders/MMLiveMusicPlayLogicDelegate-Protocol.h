//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveMusicDataItem;

@protocol MMLiveMusicPlayLogicDelegate <NSObject>
- (void)onPlayMusicItemStoped:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItemResumed:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItemPaused:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItem:(MMLiveMusicDataItem *)arg1 completed:(long long)arg2;
- (void)onPlayMusicItem:(MMLiveMusicDataItem *)arg1 started:(long long)arg2;
- (void)onPlayMusicItemWillStart:(MMLiveMusicDataItem *)arg1;
@end

