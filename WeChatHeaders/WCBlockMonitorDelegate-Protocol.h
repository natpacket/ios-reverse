//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCBlockMonitorMgr;

@protocol WCBlockMonitorDelegate <NSObject>
- (void)onBlockMonitor:(WCBlockMonitorMgr *)arg1 runloopHangDetected:(unsigned long long)arg2;
- (void)onBlockMonitorMemoryExcessive:(WCBlockMonitorMgr *)arg1 exceeded:(_Bool)arg2 footprint:(unsigned long long)arg3 available:(unsigned long long)arg4;
- (void)onBlockMonitorMainThreadBlock:(WCBlockMonitorMgr *)arg1;
- (void)onBlockMonitorThermalStateChanged:(WCBlockMonitorMgr *)arg1 thermalState:(long long)arg2;
- (void)onBlockMonitorIntervalCPUTooHigh:(WCBlockMonitorMgr *)arg1;
- (void)onBlockMonitorCurrentCPUTooHigh:(WCBlockMonitorMgr *)arg1;
- (NSDictionary *)onBlockMonitor:(WCBlockMonitorMgr *)arg1 getCustomUserInfoForDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(WCBlockMonitorMgr *)arg1 getDumpFile:(NSString *)arg2 withDumpType:(unsigned long long)arg3;
- (void)onBlockMonitor:(WCBlockMonitorMgr *)arg1 dumpType:(unsigned long long)arg2 filter:(unsigned long long)arg3;
- (void)onBlockMonitor:(WCBlockMonitorMgr *)arg1 beginDump:(unsigned long long)arg2 blockTime:(unsigned long long)arg3 runloopThreshold:(unsigned int)arg4;
- (void)onBlockMonitor:(WCBlockMonitorMgr *)arg1 enterNextCheckWithDumpType:(unsigned long long)arg2;
@end

