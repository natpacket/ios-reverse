//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IStrongNotificationMgrExt <NSObject>

@optional
- (void)onStrongNotificationShow;
- (void)onAcceptWeAppStrongNotification:(NSString *)arg1 resultFlag:(_Bool)arg2 errorMsg:(NSString *)arg3;
- (void)onModifyStrongNotificationBanner;
- (void)onDeleteStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onAddStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onModifyStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2;
@end

