//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderMinimizeBizKeyProvider-Protocol.h"

@class MMUIViewController, WCFinderFeedListView;

@protocol WCFinderFeedListViewMinimizeDelegate <WCFinderMinimizeBizKeyProvider>
- (_Bool)finderFeedListViewControllerSupportMinimize:(WCFinderFeedListView *)arg1;

@optional
- (MMUIViewController *)finderFeedListViewMinimizeStoreVC;
- (void)finderFeedListViewControllerExpandPageFromMinimize:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewControllerShouldAutoMinimize;
- (_Bool)finderFeedListViewShouldDragDownCloseInvoke;
- (_Bool)finderFeedListViewControllerForbidenDragDownClose;
@end

