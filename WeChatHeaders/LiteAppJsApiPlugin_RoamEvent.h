//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiteAppJsApiPluginBase.h"

#import "IRoamServiceExt-Protocol.h"

@class NSString;

@interface LiteAppJsApiPlugin_RoamEvent : LiteAppJsApiPluginBase <IRoamServiceExt>
{
}

- (void)onRoamServiceBackuperStateChange:(id)arg1 toState:(int)arg2;
- (void)onRoamServiceGetChatLogSize:(unsigned long long)arg1;
- (void)onRoamServiceSelectAutoBackupTag:(id)arg1;
- (void)onRoamServiceSelectAutoBackupContact:(id)arg1;
- (void)onRoamServiceSelectRecover:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceSelectBackup:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceGetBackupInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamServiceGetStorageServerInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamServiceDeleteBackupRet:(int)arg1;
- (void)onRoamServiceRestoreCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceBackupCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceStopFinishRet:(int)arg1;
- (void)onRoamServiceResumeFinishRet:(int)arg1;
- (void)onRoamServicePauseFinishRet:(int)arg1;
- (void)onRoamServiceRestoreFinishRet:(int)arg1;
- (void)onRoamServiceBackupFinishRet:(int)arg1;
- (void)onRoamServiceDisconnect;
- (void)onRoamServiceConnectRet:(int)arg1;
- (void)onRoamServiceGetNewDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

