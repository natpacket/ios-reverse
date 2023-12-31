//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, RoamStorageServerInfo, WXGRoamDeviceInfo;

@protocol WXGRoamDiskBridgeDelegate <NSObject>

@optional
- (void)onRoamDiskBridgeVersionConflict:(int)arg1 clientVersion:(NSString *)arg2 serverVersion:(NSString *)arg3;
- (void)onRoamDiskBridgeRequireChatSize:(NSArray *)arg1 isAll:(_Bool)arg2;
- (void)onRoamDiskBridgeStateChange:(NSString *)arg1 toState:(int)arg2;
- (void)onRoamDiskBridgeGetBackupInfo:(NSArray *)arg1 ret:(int)arg2;
- (void)onRoamDiskBridgeGetStorageServerInfo:(RoamStorageServerInfo *)arg1 ret:(int)arg2;
- (void)onRoamDiskBridgeDeleteBackupRet:(int)arg1;
- (void)onRoamDiskBridgeRestoreCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamDiskBridgeBackupCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamDiskBridgeStopFinishRet:(int)arg1;
- (void)onRoamDiskBridgeResumeFinishRet:(int)arg1;
- (void)onRoamDiskBridgePauseFinishRet:(int)arg1;
- (void)onRoamDiskBridgeImportFinish;
- (void)onRoamDiskBridgeRestoreFinishRet:(int)arg1;
- (void)onRoamDiskBridgeStartRestore:(NSString *)arg1;
- (void)onRoamDiskBridgeBackupFinishRet:(int)arg1;
- (void)onRoamDiskBridgeStartBackup:(NSString *)arg1;
- (void)onRoamDiskBridgeDisconnect;
- (void)onRoamDiskBridgeConnectDeviceID:(NSString *)arg1 error:(int)arg2;
- (void)onRoamDiskBridgeGetNewDevice:(WXGRoamDeviceInfo *)arg1;
@end

