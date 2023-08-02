//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMMetricsRecordDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableMetricsInfo;
    WCTTable *m_tableStackInfo;
    WCTTable *m_tableImageInfo;
    WCTTable *m_tableCpuTimeProfileSample;
    WCTTable *m_tableGpuRenderSample;
    WCTTable *m_tableLocationTask;
}

- (void).cxx_destruct;
- (_Bool)insertImageInfos:(id)arg1;
- (_Bool)insertStackInfos:(id)arg1;
- (id)getGpuRenderSamplesFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertGpuRenderSamples:(id)arg1;
- (id)getCpuTimeProfileSamplesFrom:(double)arg1 to:(double)arg2 minUsage:(float)arg3;
- (_Bool)insertCpuTimeProfileSamples:(id)arg1;
- (_Bool)insertOrUpdateLocationTask:(id)arg1;
- (_Bool)insertMetricsInfos:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (id)initWithDBPath:(id)arg1;

@end
