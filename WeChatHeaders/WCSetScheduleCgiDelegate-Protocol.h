//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCScheduleItem;

@protocol WCSetScheduleCgiDelegate <NSObject>

@optional
- (void)onCgiAddOnceRemind:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiDeleteSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiModSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiAddSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
@end
