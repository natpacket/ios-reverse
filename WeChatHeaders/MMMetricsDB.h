//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMetricsNetworkDB, MMMetricsRecordDB, MMMetricsRootDB, NSString;

@interface MMMetricsDB : NSObject
{
    NSString *m_rootPath;
    MMMetricsRootDB *m_rootDB;
    MMMetricsRecordDB *m_recordDB;
    MMMetricsNetworkDB *m_networkDB;
}

- (void).cxx_destruct;
- (_Bool)insertImageInfos:(id)arg1;
- (id)getNetworkSamplesFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertNetworkSamples:(id)arg1;
- (id)getGpuRenderSamplesFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertGpuRenderSamples:(id)arg1;
- (id)getCpuTimeProfileSamplesFrom:(double)arg1 to:(double)arg2 minUsage:(float)arg3;
- (_Bool)insertCpuTimeProfileSamples:(id)arg1;
- (_Bool)insertOrUpdateLocationTask:(id)arg1;
- (_Bool)deleteAppRunningInfo:(id)arg1;
- (_Bool)insertOrUpdateAppRunningInfo:(id)arg1;
- (id)getAllAppRunningInfos;
- (_Bool)insertMetricsInfos:(id)arg1;
- (_Bool)networkDBRunTransaction:(CDUnknownBlockType)arg1;
- (_Bool)recordDBRunTransaction:(CDUnknownBlockType)arg1;
- (void)prepareUpload;
- (void)deleteAllDB:(unsigned long long)arg1;
- (void)deleteRecordDB:(unsigned long long)arg1;
- (id)networkDBPath:(unsigned long long)arg1;
- (id)recordDBPath:(unsigned long long)arg1;
- (id)rootDBPath;
- (id)initWithRootPath:(id)arg1 launchTime:(unsigned long long)arg2;

@end

