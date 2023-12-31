//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "IExptServiceExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCCrashBlockConfigMgr : MMRootService <IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicMainThreadMonitorCongfig;
}

+ (id)getConfigFilePath;
+ (_Bool)isMMLiveHeavyUser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig; // @synthesize dicMainThreadMonitorCongfig=_dicMainThreadMonitorCongfig;
- (_Bool)getCoreDumpEnabledAtNonCrash;
- (_Bool)getCoreDumpEnabledAtCrash;
- (_Bool)getMoreKSCrashLogsEnabled;
- (_Bool)getMoreThreadInfoEnabled;
- (unsigned int)getBusyThreadProfileInterval;
- (unsigned int)getBusyThreadProfileDuration;
- (_Bool)getBusyThreadProfileEnabled;
- (_Bool)getShouldPrintVMSummary;
- (unsigned int)getLagDumpDailyLimit;
- (_Bool)getShouldEnableSnapshot;
- (_Bool)getShouldSuspendAllThreads;
- (_Bool)getRunloopSensitiveHangDetectionEnabled;
- (_Bool)getRunloopDynamicThresholdEnabled;
- (unsigned int)getRunloopLowThreshold;
- (unsigned int)getRunloopDefaultThreshold;
- (_Bool)getShouldPrintCPUFrequency;
- (float)getPowerConsumeCPULimit;
- (_Bool)getShouldGetPowerConsumeStack;
- (_Bool)getShouldGetCPUHighLog;
- (_Bool)getMainThreadProfileEnabled;
- (unsigned int)getPerStackInterval;
- (int)getDeviceUnder;
- (_Bool)getMainThreadHandle;
- (float)getLowerCPUUsage;
- (float)getCPUUsagePercent;
- (_Bool)getBlockMonitorOpen;
- (void)saveDumpReportConfig;
- (void)loadDumpReportConfig;
- (void)onExptItemListChange;
- (id)getBlockMointorConfiguration;
- (_Bool)isLiveHeavyUser;
- (float)finderSampleRatio;
- (float)liveUserSampleRatio;
- (void)addCustomStrategy:(id)arg1 sampleRatio:(float)arg2 lagMaxCount:(long long)arg3 network:(unsigned long long)arg4;
- (void)setupStrategy;
- (void)lazyInitConfigMgr;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

