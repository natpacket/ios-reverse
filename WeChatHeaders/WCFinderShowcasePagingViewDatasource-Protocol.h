//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderShowcasePagingView;

@protocol WCFinderShowcasePagingViewDatasource <NSObject>
- (void)showcaseView:(WCFinderShowcasePagingView *)arg1 updateCell:(UIView *)arg2 atIdx:(long long)arg3;
- (long long)numberOfShowcaseView:(WCFinderShowcasePagingView *)arg1;
@end
