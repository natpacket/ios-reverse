//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveGetShopShelfResponse_ShopWindowProfileInfo;

@protocol MMFinderLiveShopShelfHeaderViewDelegate <NSObject>

@optional
- (FinderLiveGetShopShelfResponse_ShopWindowProfileInfo *)shopWindowProfileInfo;
- (_Bool)isDisplayWindowBtnHidden;
- (_Bool)isShoppingCartHidden;
- (_Bool)isGoodsOrderBtnHidden;
- (unsigned long long)headerViewShopAssistantButtonMode;
- (void)onHeaderViewDisplayWindowBtnClicked;
- (void)onHeaderViewAnchorSettingBtnClicked;
- (void)onHeaderViewGoodsOrderBtnClicked;
- (void)onHeaderViewShopAssistantBtnClicked;
- (void)onHeaderViewShoppingCartBtnClicked;
@end
