//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface IntelligentClassification : NSObject
{
    _Bool m_intelligentClassificationInitSuccess;
    NSRecursiveLock *m_lock;
    struct XChatCls m_imglabel;
    _Bool m_intelligentClassificationGPUInitSuccess;
    struct XChatCls m_imglabelGPU;
    _Bool m_intelligentClassificationNPUInitSuccess;
    struct XChatCls m_imglabelNPU;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getIntelligentClsPerfEveryDayId;
- (void)doReportIntelligentClsPerfEveryDay:(id)arg1 inferenceCost:(float)arg2;
- (void)releaseInternalMemory;
- (id)searchSynonymLabelInfoDic:(id)arg1 useFuzzyQuery:(_Bool)arg2 isAlwaySimplifyChina:(_Bool)arg3;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getSynonymLabelIdListWithQuery:(id)arg1;
- (id)searchSynonymLabelInfoDic:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1 useFuzzyQuery:(_Bool)arg2 isAlwaySimplifyChina:(_Bool)arg3;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getLabelIdListWithQuery:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1;
- (id)getLabelNameWithLabelId:(unsigned int)arg1;
- (id)batchExecuteClassification:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassificationCPU:(id)arg1 error:(id)arg2;
- (void)decreaseCrashCount:(id)arg1;
- (id)batchExecuteClassificationGPU:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassificationNPU:(id)arg1 error:(id)arg2;
- (id)getNPUClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (id)getClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (_Bool)checkClassificationInitSuccess;
- (_Bool)checkModelFilesExist;
- (_Bool)isCanSupportAMX;
- (_Bool)isCanSupportNPU;
- (_Bool)isGPUIntelligentPattern;
- (_Bool)isCanSupportGPU;
- (void)InitModel;
- (id)init;

@end

