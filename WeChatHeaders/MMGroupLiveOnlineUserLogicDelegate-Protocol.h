//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOnlineUserLogicDelegate-Protocol.h"

@class NSArray, NSError, NSString;

@protocol MMGroupLiveOnlineUserLogicDelegate <MMLiveOnlineUserLogicDelegate>
- (void)onKickAudienceForGroupLiveWithError:(NSError *)arg1 userName:(NSString *)arg2;
- (void)onFetchGroupOnlineUserListWithError:(NSError *)arg1 userList:(NSArray *)arg2;
@end

