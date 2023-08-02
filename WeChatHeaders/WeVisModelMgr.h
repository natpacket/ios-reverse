//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "IWeVisModelProvider-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MemoryMappedKV, NSMutableArray, NSMutableSet, NSString, WeVisModelResponse;

@interface WeVisModelMgr : MMUserService <MMResourceMgrExt, IMsgExt, IWeVisModelProvider, MMServiceProtocol>
{
    MemoryMappedKV *_mmkv;
    NSMutableArray *_checkResTypeList;
    NSMutableArray *_localConfigList;
    WeVisModelResponse *_localModelInfo;
    WeVisModelResponse *_targetModelInfo;
    NSMutableSet *_invalidModelList;
}

+ (id)resFileMd5:(int)arg1 subtype:(int)arg2;
+ (id)modelPathOfType:(int)arg1 subtype:(int)arg2 filename:(id)arg3;
+ (id)modelPathOfInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *invalidModelList; // @synthesize invalidModelList=_invalidModelList;
@property(retain, nonatomic) WeVisModelResponse *targetModelInfo; // @synthesize targetModelInfo=_targetModelInfo;
@property(retain, nonatomic) WeVisModelResponse *localModelInfo; // @synthesize localModelInfo=_localModelInfo;
@property(retain, nonatomic) NSMutableArray *localConfigList; // @synthesize localConfigList=_localConfigList;
@property(retain, nonatomic) NSMutableArray *checkResTypeList; // @synthesize checkResTypeList=_checkResTypeList;
- (void)scheduleReportUsage;
- (void)reportUsage;
- (id)getCgiModelInfo;
- (id)getInvalidModelInfo;
- (id)getModelInfo;
- (void)copyResFile:(id)arg1 resPath:(id)arg2;
- (void)checkCopyResFile;
- (id)findInfoOfType:(int)arg1 subtype:(int)arg2;
- (void)updateCheckTypeList;
- (void)updateLocalModelInfo;
- (_Bool)cgiEnable;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceInit;
- (id)modelVersionWithKey:(id)arg1;
- (id)modelPathWithKey:(id)arg1;
- (void)onCgiCompletion:(id)arg1 errCode:(unsigned int)arg2;
- (id)displayModelInfo;
- (void)retryCgi;
- (void)loadRemoteInfo;
- (void)scheduleLoadRemoteInfo:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
