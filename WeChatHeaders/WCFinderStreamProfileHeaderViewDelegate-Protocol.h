//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo, FinderLiteAppParam, NSString, WCFinderBrandInfo, WCFinderHeadImageView, WCFinderStreamProfileHeaderView;

@protocol WCFinderStreamProfileHeaderViewDelegate <NSObject>

@optional
- (void)onClickLocationForHeaderView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onBottomLiveButtonClick;
- (void)onBottomPostButtonClick;
- (void)onFinderAuthViewDidClicked;
- (void)onShowMoreAction:(id)arg1;
- (void)onClickHistoryLiveListBtn;
- (void)onClickFriendAlsoFollowBtn;
- (void)onClickRedPacket:(NSString *)arg1;
- (void)onClickLiteApp:(FinderLiteAppParam *)arg1;
- (void)onClickJumpInfo:(FinderJumpInfo *)arg1;
- (void)onClickServiceViewWithFinderJumpInfo:(FinderJumpInfo *)arg1;
- (void)onClickSignatureAtText:(NSString *)arg1;
- (void)onTapRedPacketEvent;
- (void)onClickShowWXProfileSwitch:(_Bool)arg1;
- (void)onClickGoToWxProfileView;
- (void)onFullProfileAction:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickPOIView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMiniApp:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickPostButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickClubMemberView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickFansView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickWeconKFMessage:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMessageButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickUnFollowButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickFollowButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickBrand:(id)arg1 brandInfo:(WCFinderBrandInfo *)arg2;
- (void)onClickSignatureGuide:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMoreActionView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onHeaderView:(WCFinderStreamProfileHeaderView *)arg1 clickHeadImageView:(WCFinderHeadImageView *)arg2;
@end

