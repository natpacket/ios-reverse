//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMTableView, MMUIViewController, NSString;
@protocol WCTimelineLogicControllerImplProtocol;

@protocol WCTimelineLogicControllerDelegate <NSObject>
- (MMUIViewController *)getTimelineViewController;
- (long long)getDataItemIndexForSection:(long long)arg1;
- (MMTableView *)getContentTableView;

@optional
- (unsigned long long)sectionIndexForDataItemWithTid:(NSString *)arg1;
- (void)onLogicControllerDataTriggerContentTableViewReload:(id <WCTimelineLogicControllerImplProtocol>)arg1;
- (void)onLogicControllerDataWillChange:(id <WCTimelineLogicControllerImplProtocol>)arg1;
- (_Bool)isInJumpState;
@end

