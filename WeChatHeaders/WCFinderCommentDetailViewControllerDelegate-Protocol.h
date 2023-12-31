//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderContentTableViewCellDelegate-Protocol.h"

@class MMUIViewController, NSString, NSURL, WCFinderContact, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderCommentDetailViewControllerDelegate <WCFinderContentTableViewCellDelegate>

@optional
- (void)onClickContentCollectionAction:(WCFinderFeedContentVM *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 dataItem:(WCFinderDataItem *)arg3 commentVC:(MMUIViewController *)arg4 sucBlock:(void (^)(void))arg5;
- (void)onClickContentTopicAction:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2 commentVC:(MMUIViewController *)arg3;
- (void)onClickContentExtReadingAction:(NSURL *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)onClickContentUsernameAction:(WCFinderFeedContentVM *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)clickContentPOIAction:(WCFinderDataItem *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)updateCommentDetailVCPushState:(MMUIViewController *)arg1;
- (void)clickCommentNickname:(MMUIViewController *)arg1 username:(NSString *)arg2 contact:(WCFinderContact *)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(WCFinderDataItem *)arg5;
- (void)clickAuthorCommentAvatarWhenInProfile:(MMUIViewController *)arg1;
@end

