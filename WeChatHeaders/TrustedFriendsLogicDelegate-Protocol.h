//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TrustedFriendsLogic;

@protocol TrustedFriendsLogicDelegate <NSObject>
- (void)didRemoveTrustedFriendsLocally:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didAddTrustedFriendsLocally:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFinishSyncTrustedFriends:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFinishGetTrustedFriends:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(NSString *)arg3;
- (void)didStartCGI:(unsigned int)arg1;

@optional
- (void)didAlertViewWithReason:(unsigned int)arg1 isCancelButton:(_Bool)arg2;
@end

