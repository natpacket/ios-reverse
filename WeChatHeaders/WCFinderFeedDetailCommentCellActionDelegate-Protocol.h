//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedCommentEventDelegate-Protocol.h"

@class CEmoticonWrap, NSIndexPath, NSString, WCFinderComment, WCFinderContact, WCFinderFeedSubCommentTableViewCell;

@protocol WCFinderFeedDetailCommentCellActionDelegate <WCFinderFeedCommentEventDelegate>

@optional
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 tapEmoticonView:(CEmoticonWrap *)arg2 comment:(WCFinderComment *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 likeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 onLongPressAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)onClickSubCommentNickname:(NSIndexPath *)arg1;
- (void)onClickSubCommentAvatar:(NSIndexPath *)arg1;
- (void)onClickSubCommentReadMore:(NSIndexPath *)arg1 isExpand:(_Bool)arg2;
@end

