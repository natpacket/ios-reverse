//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCCrashBlockMonitorDelegate-Protocol.h"

@class NSString;

@interface WCCrashBlockHandler : NSObject <WCCrashBlockMonitorDelegate>
{
    unsigned int _reportCount;
    unsigned long long _readSize;
    unsigned long long _writeSize;
}

@property(nonatomic) unsigned int reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) unsigned long long writeSize; // @synthesize writeSize=_writeSize;
@property(nonatomic) unsigned long long readSize; // @synthesize readSize=_readSize;
- (void)onMMCrashGetFile:(id)arg1;
- (void)p_reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3 dumpType:(unsigned long long)arg4;
- (void)onCrashBlockMonitorMemoryExcessive:(_Bool)arg1 footprint:(unsigned long long)arg2 available:(unsigned long long)arg3;
- (void)onCrashBlockMonitorMainThreadBlock;
- (void)onCrashBlockMonitorThermalStateChanged:(long long)arg1;
- (void)onCrashBlockMonitorDiskIOReportRepeat;
- (void)onCrashBlockMonitorDiskIOReportReadDump:(_Bool)arg1 writeDump:(_Bool)arg2;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (id)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2;
- (void)onCrashBlockMonitorGetDumpFile:(id)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2 runloopThreshold:(unsigned int)arg3;
- (void)tryGetInfomationOfFileDescriptorOfDumpType:(unsigned long long)arg1;
- (void)onClientVersionChange;
- (void)refreshKSCrashReportAppVersion;
- (id)getCrashBlockPluginConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
