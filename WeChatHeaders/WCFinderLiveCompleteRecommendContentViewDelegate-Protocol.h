//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderLiveCompleteRecommendContentView;

@protocol WCFinderLiveCompleteRecommendContentViewDelegate <NSObject>
- (void)liveCompleteRecommendLiveItemViewReport:(WCFinderLiveCompleteRecommendContentView *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)liveCompleteRecommendLiveItemViewClick:(WCFinderLiveCompleteRecommendContentView *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)liveCompleteRecommendLiveMoreButtonClick:(WCFinderLiveCompleteRecommendContentView *)arg1 tabId:(unsigned long long)arg2;
@end

