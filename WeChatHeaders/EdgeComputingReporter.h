//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class EdgeComputingRtReportCache;

@interface EdgeComputingReporter : NSObject <PBMessageObserverDelegate>
{
    EdgeComputingRtReportCache *m_realtimeReportCache;
    unsigned long long m_reportPeriod;
    unsigned long long m_lastReportTime;
}

- (void).cxx_destruct;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onFailure:(id)arg1;
- (void)onSuccess:(id)arg1 withNextPeriod:(unsigned long long)arg2 withDropFlags:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportItemsByKv:(id)arg1;
- (_Bool)reportItemsByCgi:(id)arg1;
- (void)realRtReport;
- (void)rtKVReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)rtKVReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)kvReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)kvReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)batchRtReport;
- (void)cacheRtFieldData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (void)cahceRtStrData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (void)dealloc;
- (id)init;

@end

