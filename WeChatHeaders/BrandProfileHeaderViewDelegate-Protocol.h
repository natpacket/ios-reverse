//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSString, WxaEcEntranceInfo_LiteAppJumpInfo;

@protocol BrandProfileHeaderViewDelegate <NSObject>
- (void)onReserveFinderLiveShowMoreNoticeButtonClicked;
- (void)onReserveFinderLiveCardExpose;
- (void)onReserveFinderLiveButtonClicked:(_Bool)arg1;
- (void)onHeaderViewLayoutChanged;
- (void)onLiveStatusBtnClicked:(CContact *)arg1;
- (void)onPersonalVerifiedLabelClicked:(CContact *)arg1;
- (void)onFinderButtonClicked:(NSString *)arg1;
- (void)onShopWindowButtonClicked:(WxaEcEntranceInfo_LiteAppJumpInfo *)arg1;
- (void)onShopWindowButtonExpose;
- (void)onFoldButtonClicked:(CContact *)arg1;
- (void)onUnfocusButtonClicked:(CContact *)arg1;
- (void)onEnterButtonClicked:(CContact *)arg1;
- (void)onFocusButtonClicked:(CContact *)arg1;
- (void)onBrandAvatarClicked:(struct CGRect)arg1;

@optional
- (void)onHalfScreenMoreClick;
- (void)onHalfScreenSearchClick;
- (_Bool)isHalfScreen;
- (void)onFriendSubscribeBtnClicked:(NSString *)arg1;
- (void)onFriendSubscribeBtnExposed:(NSString *)arg1;
- (void)onRedPacketBannerClicked:(NSString *)arg1;
- (void)onRedPacketBannerExposed;
- (void)onNameLabelClicked;
@end
