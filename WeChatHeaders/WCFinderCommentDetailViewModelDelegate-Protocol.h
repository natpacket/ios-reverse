//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCFinderComment;

@protocol WCFinderCommentDetailViewModelDelegate <NSObject>

@optional
- (void)finderSelectAccountChange;
- (void)finderFeedCommentCloseStatusChange;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedSubCommentPostTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentFetchByRefCommentWithTid:(NSString *)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedDataItemUpdate:(NSString *)arg1;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(NSString *)arg2 comment:(WCFinderComment *)arg3;
- (void)finderFeedCommentPostTid:(NSString *)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(NSString *)arg2 direction:(unsigned long long)arg3;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentClickRefcontentFullTextTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickFullTextTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1;
- (void)finderFeedCommentDataChange:(NSString *)arg1;
- (void)finderFeedCommentIsEmpty:(NSString *)arg1;
- (void)finderFeedCommentNoMoreData:(NSString *)arg1 direction:(unsigned long long)arg2;
@end

