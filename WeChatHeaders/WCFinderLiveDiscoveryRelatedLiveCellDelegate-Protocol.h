//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderDataItem, WCFinderLiveDiscoveryRelatedLiveCell;

@protocol WCFinderLiveDiscoveryRelatedLiveCellDelegate <NSObject>

@optional
- (void)onNearbyRelatedLiveCellForwardAction:(WCFinderLiveDiscoveryRelatedLiveCell *)arg1;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 dataItem:(WCFinderDataItem *)arg2;
@end
