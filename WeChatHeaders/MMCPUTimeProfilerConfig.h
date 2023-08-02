//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMCPUTimeProfilerConfig : NSObject <PBCoding>
{
    _Bool _enabled;
    unsigned int _checkTime;
    unsigned int _checkCount;
    unsigned int _criticalEventReportLimit;
    unsigned int _criticalEventReportCount;
    double _dumpInternal;
    double _minCpuUsageToDump;
    double _criticalUsage;
    double _averageUsageMax;
    double _minCpuUsageToReport;
    double _criticalEventLastReportTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_minCpuUsageToReport;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_criticalEventReportLimit;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_minCpuUsageToDump;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_enabled;
@property(nonatomic) double criticalEventLastReportTime; // @synthesize criticalEventLastReportTime=_criticalEventLastReportTime;
@property(nonatomic) double minCpuUsageToReport; // @synthesize minCpuUsageToReport=_minCpuUsageToReport;
@property(nonatomic) double averageUsageMax; // @synthesize averageUsageMax=_averageUsageMax;
@property(nonatomic) double criticalUsage; // @synthesize criticalUsage=_criticalUsage;
@property(nonatomic) unsigned int criticalEventReportCount; // @synthesize criticalEventReportCount=_criticalEventReportCount;
@property(nonatomic) unsigned int criticalEventReportLimit; // @synthesize criticalEventReportLimit=_criticalEventReportLimit;
@property(nonatomic) unsigned int checkCount; // @synthesize checkCount=_checkCount;
@property(nonatomic) unsigned int checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) double minCpuUsageToDump; // @synthesize minCpuUsageToDump=_minCpuUsageToDump;
@property(nonatomic) double dumpInternal; // @synthesize dumpInternal=_dumpInternal;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)updateWithXLabConfig:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

