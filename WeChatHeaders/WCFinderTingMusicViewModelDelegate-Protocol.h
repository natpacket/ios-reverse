//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderPostSessionModel;

@protocol WCFinderTingMusicViewModelDelegate <NSObject>
- (void)onTingMusicTopicRelatedVideoChanged;
- (void)onTingMusicTopicMusicVideoChanged;
- (void)onTingMusicTopicInfoFetchWithErrorCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)onTingMusicTopicInfoFetchNetError;
- (void)onTingMusicTopicInfoFetchAllInfoSuc;
- (void)onTingMusicTopicBeginUpload:(WCFinderPostSessionModel *)arg1;
- (void)onTingMusicTopicInfoFetchHeaderSuc:(unsigned long long)arg1;
@end

