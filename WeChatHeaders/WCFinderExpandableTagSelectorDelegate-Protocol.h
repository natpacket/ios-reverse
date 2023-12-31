//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIView, WCFinderExpandableTagSelector;

@protocol WCFinderExpandableTagSelectorDelegate <NSObject>

@optional
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 willDisplayView:(UIView *)arg2 withIdentifier:(NSString *)arg3;
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 selectedAdded:(NSArray *)arg2 removes:(NSArray *)arg3;
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 onExpandPanelCloseForIndexPath:(NSIndexPath *)arg2;
- (void)onTagSelector:(WCFinderExpandableTagSelector *)arg1 clickIndexPath:(NSIndexPath *)arg2 group:(long long)arg3 index:(long long)arg4;
@end

