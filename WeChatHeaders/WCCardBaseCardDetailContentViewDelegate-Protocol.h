//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCCardFieldItem;

@protocol WCCardBaseCardDetailContentViewDelegate <NSObject>
- (void)onJumpToFinderBtnClick:(WCCardFieldItem *)arg1;
- (void)onShareCardImageClick:(WCCardFieldItem *)arg1;
- (void)onShareCardBtnClick;
- (void)onAcceptCardBtnClick:(_Bool)arg1;
- (void)onCardHeaderViewOperateBtnClick;
- (void)onCardHeaderViewApplyBtnClick;
- (_Bool)isNeedToDisplayDeeplinkJunmpTips;
- (void)giftCardToFriend;
- (void)openCellList0Item:(WCCardFieldItem *)arg1;
- (void)openGiftCardInfoViewConroller;
- (void)openBrandProfileView;
- (void)openUsedStoresView;
- (void)openNearbyShopInfo;
- (void)openCardDetailView;
- (void)openOperationView;
- (void)openSecondaryField:(WCCardFieldItem *)arg1;
- (void)openTinyAppWithUserName:(NSString *)arg1 path:(NSString *)arg2;
- (void)openUrl:(NSString *)arg1;
- (void)onClickNearbyPhoneBtn;
- (_Bool)bIsCardFromOutAppScene;
- (double)getViewControllerContentViewHeight;
- (NSString *)getGiftCardShareFromUserName;
- (_Bool)shouldShowGiftFromUserHeaderView;
- (NSArray *)getUsedStoreList;
- (int)getCardStatus;
- (_Bool)shouldHideAcceptBtn;
- (_Bool)canShowUseBtnInHeader;
@end

