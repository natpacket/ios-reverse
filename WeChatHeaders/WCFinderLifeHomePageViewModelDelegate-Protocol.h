//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderLifeHomePageViewModel;

@protocol WCFinderLifeHomePageViewModelDelegate <NSObject>
- (void)onPageViewModelStateChanged:(WCFinderLifeHomePageViewModel *)arg1;
- (void)onPageViewModel:(WCFinderLifeHomePageViewModel *)arg1 dataChanged:(NSArray *)arg2;
- (void)onPageViewModel:(WCFinderLifeHomePageViewModel *)arg1 requestDataFinish:(_Bool)arg2;
@end

