//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, NSString, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderPhotoFeedHeaderView;

@protocol WCFinderPhotoFeedHeaderDelegate <NSObject>

@optional
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickLBSCardWithJumpInfo:(WCFinderJumpInfo *)arg2 style:(FinderJumpInfo_Style *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 lbsCardDidChangePoiFavState:(_Bool)arg2 withJumpInfo:(WCFinderJumpInfo *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickRedPacketJumpInfo:(WCFinderJumpInfo *)arg2 style:(FinderJumpInfo_Style *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentTopicAction:(NSString *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentMentionAction:(NSString *)arg2 nickname:(NSString *)arg3 contentVM:(WCFinderFeedContentVM *)arg4;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentUsernameAction:(NSString *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickCollectionAction:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickLinkEntry:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickEventEntry:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentPOIAction:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 refreshFriendLikeUI:(WCFinderFeedContentVM *)arg2;
- (void)headerViewHeightChanged:(WCFinderPhotoFeedHeaderView *)arg1;
@end

