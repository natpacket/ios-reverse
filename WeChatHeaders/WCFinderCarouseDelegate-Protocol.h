//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderCarouselView;

@protocol WCFinderCarouseDelegate <NSObject>
- (void)carouselView:(WCFinderCarouselView *)arg1 didSelectedAtIndex:(long long)arg2;

@optional
- (void)carouselView:(WCFinderCarouselView *)arg1 didEndScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
- (void)carouselView:(WCFinderCarouselView *)arg1 didStartScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
@end

