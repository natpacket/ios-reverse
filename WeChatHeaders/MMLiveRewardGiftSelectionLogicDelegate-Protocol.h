//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, MMLiveRewardGiftSelectionView;

@protocol MMLiveRewardGiftSelectionLogicDelegate <NSObject>

@optional
- (void)onBuyCoin:(MMLiveRewardGiftSelectionView *)arg1 rechargeScene:(unsigned int)arg2;
- (void)onNeedBuyCoin:(MMLiveRewardGiftSelectionView *)arg1 currentBalance:(long long)arg2;
- (void)onSendingRewardGiftDirectly:(MMFinderLiveRewardGiftItem *)arg1 rewardExtInfo:(FinderLiveRewardGiftExtInfo *)arg2 comboGiftCount:(unsigned int)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(_Bool)arg5;
- (void)onSelectRewardGift:(MMFinderLiveRewardGiftItem *)arg1 rewardExtInfo:(FinderLiveRewardGiftExtInfo *)arg2 currentBalance:(long long)arg3 wecoinBalanceUpdated:(_Bool)arg4;
@end
