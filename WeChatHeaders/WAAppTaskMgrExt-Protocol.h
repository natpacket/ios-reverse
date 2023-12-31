//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAContact;

@protocol WAAppTaskMgrExt <NSObject>

@optional
- (void)onBackgroundLocatingWeAppCountChanged;
- (void)onAppTaskWillChangeOrientation:(NSString *)arg1 to:(long long)arg2;
- (void)onAppTaskDidEnterBackground:(NSString *)arg1 mode:(long long)arg2;
- (void)onLeaveWeAppWhenClickBackBtnOrWeAppTerminateWithUsername:(NSString *)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(NSString *)arg1;
- (void)onAppTaskTerminateWithContact:(WAContact *)arg1;
- (void)onAppTaskTerminate:(NSString *)arg1;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidCancelColdLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidColdLaunchFailedWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishHotLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishColdLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishLaunchWithAppId:(NSString *)arg1;
@end

