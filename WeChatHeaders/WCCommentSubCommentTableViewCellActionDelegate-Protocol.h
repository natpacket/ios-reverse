//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCCommentSubCommentTableViewCell, WCFinderComment, WCFinderContact;

@protocol WCCommentSubCommentTableViewCellActionDelegate <NSObject>

@optional
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 dislikeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 didClickMediaViewWithComment:(WCFinderComment *)arg2;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 likeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)onClickSubCommentAvatar:(NSIndexPath *)arg1;
- (void)feedDetailCommentCellOnLongPress:(NSIndexPath *)arg1;
- (void)onClickSubCommentReadMore:(NSIndexPath *)arg1 isExpand:(_Bool)arg2;
@end

