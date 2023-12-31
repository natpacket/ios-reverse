//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IMigrationClientExt <NSObject>

@optional
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onTerminateMigration;
- (void)onStartMigration;
@end

