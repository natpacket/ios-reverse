//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveActivityTaskId, MMFinderLiveTaskId, NSArray;

@protocol MMFinderLiveOlyBarrageDataItemTransferExt <NSObject>

@optional
- (void)onFinderLiveBarrageDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLiveOlyBarrageDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveActivityTaskId *)arg2;
@end
