//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIView, UIViewController, WCFinderArbitraryPageView;

@protocol WCFinderArbitraryPageViewDataSource <NSObject>
- (NSString *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageTabNameForIndex:(long long)arg2;
- (long long)pageNumberOfArbitraryTabView:(WCFinderArbitraryPageView *)arg1;

@optional
- (double)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 bannerHeightForIndex:(long long)arg2;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 bannerViewForIndex:(long long)arg2;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageTabViewForIndex:(long long)arg2;
- (NSObject *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 uniqueObjectForPage:(long long)arg2;
- (UIViewController *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageViewControllerInIndex:(long long)arg2;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageViewForIndex:(long long)arg2;
@end
