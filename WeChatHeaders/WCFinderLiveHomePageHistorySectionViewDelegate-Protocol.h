//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderLiveHomePageHistoryCell, WCFinderLiveHomePageHistorySectionView, WCFinderLiveStreamElementModel;

@protocol WCFinderLiveHomePageHistorySectionViewDelegate <NSObject>

@optional
- (void)onHistorySectionView:(WCFinderLiveHomePageHistorySectionView *)arg1 deleteTid:(NSString *)arg2;
- (void)onHistorySectionViewFetchMoreLiveList:(WCFinderLiveHomePageHistorySectionView *)arg1;
- (void)onHistorySectionView:(WCFinderLiveHomePageHistorySectionView *)arg1 selectElementModel:(WCFinderLiveStreamElementModel *)arg2 cell:(WCFinderLiveHomePageHistoryCell *)arg3;
@end

