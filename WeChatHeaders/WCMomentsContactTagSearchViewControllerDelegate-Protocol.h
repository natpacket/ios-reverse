//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, WCMomentsContactTagSearchViewController;

@protocol WCMomentsContactTagSearchViewControllerDelegate <NSObject>
- (void)searchViewController:(WCMomentsContactTagSearchViewController *)arg1 didSelectTagDataSet:(NSSet *)arg2;
- (NSArray *)searchViewController:(WCMomentsContactTagSearchViewController *)arg1 searchWithQuery:(NSString *)arg2;
@end

