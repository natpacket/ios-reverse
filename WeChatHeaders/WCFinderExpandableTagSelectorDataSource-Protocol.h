//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCFinderExpandableTagSelector;

@protocol WCFinderExpandableTagSelectorDataSource <NSObject>
- (NSString *)tagSelector:(WCFinderExpandableTagSelector *)arg1 displayTitleForIdentifier:(NSString *)arg2;
- (NSString *)tagSelector:(WCFinderExpandableTagSelector *)arg1 groupTitleForIdentifier:(NSString *)arg2 section:(long long)arg3;
- (NSString *)tagSelector:(WCFinderExpandableTagSelector *)arg1 identifierAtIndex:(NSIndexPath *)arg2 forParent:(NSString *)arg3;
- (long long)tagSelector:(WCFinderExpandableTagSelector *)arg1 subItemCountForIdentifier:(NSString *)arg2 indexPath:(NSIndexPath *)arg3;

@optional
- (long long)tagSelector:(WCFinderExpandableTagSelector *)arg1 numberOfGroup:(NSString *)arg2;
@end
