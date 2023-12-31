//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderContact, WCFinderDataItem, WCFinderLiveHomePageBannerCell, WCFinderLiveHomePageBannerSectionView, WCFinderLiveStreamContainerModel, WCFinderLiveStreamElementModel;

@protocol WCFinderLiveHomePageBannerSectionViewDelegate <NSObject>

@optional
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 forwardAction:(WCFinderLiveStreamElementModel *)arg2;
- (void)onBannerSectionViewStartInnerPlay:(WCFinderLiveHomePageBannerSectionView *)arg1 containerModel:(WCFinderLiveStreamContainerModel *)arg2;
- (_Bool)shouldBannerSectionViewHandleSelectAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 selectElementModel:(WCFinderLiveStreamElementModel *)arg2 cell:(WCFinderLiveHomePageBannerCell *)arg3;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 clickRecommendUrl:(NSURL *)arg2;
- (void)onBannerSectionView:(WCFinderLiveHomePageBannerSectionView *)arg1 clickContact:(WCFinderContact *)arg2 dataItem:(WCFinderDataItem *)arg3;
@end

