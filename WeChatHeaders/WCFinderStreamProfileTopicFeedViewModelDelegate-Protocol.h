//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderChangeSet, WCFinderStreamProfileTopicFeedViewModel;

@protocol WCFinderStreamProfileTopicFeedViewModelDelegate <NSObject>
- (void)topicFeedVM:(WCFinderStreamProfileTopicFeedViewModel *)arg1 changeFeed:(WCFinderChangeSet *)arg2;
- (void)topicFeedVMFetchStateChanged:(WCFinderStreamProfileTopicFeedViewModel *)arg1;
- (void)topicFeedVMPageNeedReloadData:(WCFinderStreamProfileTopicFeedViewModel *)arg1;
- (void)topicFeedVMRequestDataFaield:(WCFinderStreamProfileTopicFeedViewModel *)arg1;
- (void)topicFeedVMBeginRequestFirstPage:(WCFinderStreamProfileTopicFeedViewModel *)arg1;
- (void)topicFeedVMFirstPageLoadFinishWithDataItemChanged:(WCFinderStreamProfileTopicFeedViewModel *)arg1;
@end

