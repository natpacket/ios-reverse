//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGameUserInfo, NSMutableArray, NSString;

@protocol MMFinderGameLivePrepareLogicDelegate <NSObject>
- (void)onGetGameUserInfoErr:(int)arg1 errMsg:(NSString *)arg2;
- (void)onUpdateGameSearchUserInfoList:(NSMutableArray *)arg1;
- (void)onUpdateShowSearch:(_Bool)arg1;
- (void)onUpdateGameUserStickerInfo:(MMFinderLiveGameUserInfo *)arg1;
- (void)onUpdateGameUserInfo:(MMFinderLiveGameUserInfo *)arg1;
- (void)onUpdateGameUserInfoList:(NSMutableArray *)arg1;
@end

