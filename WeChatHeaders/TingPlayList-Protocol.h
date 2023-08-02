//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol TingPlayListListener, TingPlayTaskService;

@protocol TingPlayList <NSObject>
- (_Bool)getEnableRecommendListSource;
- (void)setEnableRecommendListSource:(_Bool)arg1;
- (void)removePlayListListener:(id <TingPlayListListener>)arg1;
- (void)addPlayListListener:(id <TingPlayListListener>)arg1;
- (NSArray *)getItems;
- (void)setShuffled:(_Bool)arg1 topClientId:(NSString *)arg2;
- (void)setRandomPlaylist:(_Bool)arg1;
- (_Bool)getRandomPlaylist;
- (void)clear;
- (_Bool)moveToFirst:(NSString *)arg1;
- (NSData *)getPlaylistItem:(int)arg1;
- (int)getPlaylistCount;
- (void)setPlayTaskServiceAsync:(id <TingPlayTaskService>)arg1 callback:(void (^)(void))arg2;
- (void)setPlayTaskService:(id <TingPlayTaskService>)arg1;
- (id <TingPlayTaskService>)getRecommendListSource;
- (id <TingPlayTaskService>)getPlayTaskService;
@end

