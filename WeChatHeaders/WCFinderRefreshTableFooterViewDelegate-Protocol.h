//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderRefreshTableFooterView;

@protocol WCFinderRefreshTableFooterViewDelegate <NSObject>

@optional
- (_Bool)finderFooterStatrLoadingWithoutDragging;
- (void)finderFooterViewWillStopLoading:(WCFinderRefreshTableFooterView *)arg1;
- (void)finderFooterViewWillStartLoading:(WCFinderRefreshTableFooterView *)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(WCFinderRefreshTableFooterView *)arg1;
- (void)finderFooterDidTriggerRefresh:(WCFinderRefreshTableFooterView *)arg1;
- (void)didClickFooterRefreshRetry:(WCFinderRefreshTableFooterView *)arg1;
@end

