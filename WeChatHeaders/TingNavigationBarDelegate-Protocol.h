//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TingNavigationBar;

@protocol TingNavigationBarDelegate <NSObject>

@optional
- (_Bool)tingNavigationBarIsInRootPage:(TingNavigationBar *)arg1;
- (void)tingNavigationBarDidClickClose:(TingNavigationBar *)arg1;
- (_Bool)tingNavigationBarShouldShowMoreInTingViewController:(TingNavigationBar *)arg1;
- (void)tingNavigationBarDidClickMore:(TingNavigationBar *)arg1;
- (_Bool)tingNavigationBarIsShowingTingViewController:(TingNavigationBar *)arg1;
- (void)tingNavigationBarDidClickHome:(TingNavigationBar *)arg1;
@end

