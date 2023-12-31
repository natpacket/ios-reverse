//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, MMLiveRewardGiftSelectionView, NSDictionary, UIViewController, WCFinderJumpInfo, WCFinderJumpInfoParams;

@protocol MMLiveRewardGiftSelectionViewDelegate <NSObject>

@optional
- (NSDictionary *)getExtraActionResultDictForReportWithSelectionView:(MMLiveRewardGiftSelectionView *)arg1;
- (_Bool)onShowUnlockTipIfNeeded:(MMLiveRewardGiftSelectionView *)arg1 giftItem:(MMFinderLiveRewardGiftItem *)arg2;
- (void)onJumpWebView:(MMLiveRewardGiftSelectionView *)arg1 jumpParams:(WCFinderJumpInfoParams *)arg2 jumpInfo:(WCFinderJumpInfo *)arg3 fromVc:(UIViewController *)arg4;
- (void)onGotoBuyGiftPackets;
- (void)onRewardGiftSelectionViewCancel:(MMLiveRewardGiftSelectionView *)arg1;
- (void)onSelectGiftWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
- (void)onRewardGiftSelectionViewWillClose:(_Bool)arg1;
- (void)onJoinFansClubWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
- (void)onSelectRewardRecipientContact;
@end

