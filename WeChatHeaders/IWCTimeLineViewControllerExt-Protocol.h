//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCDataItem, WCTimeLineViewController;

@protocol IWCTimeLineViewControllerExt <NSObject>

@optional
- (void)onTimeLineFoldedStateChanged;
- (void)onTimeLineViewClearEarlierContentTipsItem;
- (void)onTimeLineViewFakeScrollToUnreadItemEnd:(NSString *)arg1;
- (void)onTimeLineViewFakeScrollToUnreadItem:(NSString *)arg1;
- (void)onTimeLineViewWillDisplayDataItem:(WCDataItem *)arg1;
- (void)onTimeLineViewDealloc;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)onTimelineDidLeavePage:(WCTimeLineViewController *)arg1;
- (void)onTimelineWillEnterPage:(WCTimeLineViewController *)arg1;
@end
