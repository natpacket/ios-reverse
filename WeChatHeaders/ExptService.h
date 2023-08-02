//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptAppLogicCallback-Protocol.h"
#import "IExptLogicCallback-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "ReportDelegate-Protocol.h"
#import "SessionFlowSwizzleExt-Protocol.h"

@class ExptAppLogic, ExptDebugReportLogic, ExptLogic, MMLRUCache, NSMutableDictionary, NSRecursiveLock, NSString;

@interface ExptService : MMUserService <IExptLogicCallback, IMsgExt, MMKernelExt, ReportDelegate, SessionFlowSwizzleExt, IExptAppLogicCallback, MMServiceProtocol>
{
    _Bool _hadLoadedExpt;
    _Bool _hadLoadedAppExpt;
    NSMutableDictionary *_exptItemMap;
    NSMutableDictionary *_exptKeyMap;
    ExptLogic *_exptLogic;
    ExptDebugReportLogic *_debugReportLogic;
    NSString *_exptKVDebugKey;
    ExptAppLogic *_exptAppLogic;
    NSMutableDictionary *_exptAppItemMap;
    NSMutableDictionary *_exptAppKeyMap;
    MMLRUCache *_logControlCache;
    NSRecursiveLock *_logLock;
}

+ (_Bool)isVoIPPMEnabled;
+ (_Bool)WCCC_isEnabled;
+ (_Bool)WCRM_isEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *logLock; // @synthesize logLock=_logLock;
@property(retain, nonatomic) MMLRUCache *logControlCache; // @synthesize logControlCache=_logControlCache;
@property(retain, nonatomic) NSMutableDictionary *exptAppKeyMap; // @synthesize exptAppKeyMap=_exptAppKeyMap;
@property(retain, nonatomic) NSMutableDictionary *exptAppItemMap; // @synthesize exptAppItemMap=_exptAppItemMap;
@property(retain, nonatomic) ExptAppLogic *exptAppLogic; // @synthesize exptAppLogic=_exptAppLogic;
@property(nonatomic) _Bool hadLoadedAppExpt; // @synthesize hadLoadedAppExpt=_hadLoadedAppExpt;
@property(retain, nonatomic) NSString *exptKVDebugKey; // @synthesize exptKVDebugKey=_exptKVDebugKey;
@property(retain, nonatomic) ExptDebugReportLogic *debugReportLogic; // @synthesize debugReportLogic=_debugReportLogic;
@property(retain, nonatomic) ExptLogic *exptLogic; // @synthesize exptLogic=_exptLogic;
@property(nonatomic) _Bool hadLoadedExpt; // @synthesize hadLoadedExpt=_hadLoadedExpt;
@property(retain, nonatomic) NSMutableDictionary *exptKeyMap; // @synthesize exptKeyMap=_exptKeyMap;
@property(retain, nonatomic) NSMutableDictionary *exptItemMap; // @synthesize exptItemMap=_exptItemMap;
- (void)reportApp;
- (void)getAppSvrExpt;
- (void)asyncOnGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3;
- (void)onGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3;
- (void)getLocalAppExptList:(id)arg1;
- (id)getAppExpt:(id)arg1;
- (void)tryToSaveAppExpt;
- (void)tryToLoadAppExpt;
- (void)sendSession:(id)arg1;
- (void)onViewDidDisappear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)kvReport:(id)arg1 logid:(unsigned int)arg2;
- (void)startMonitorKV:(id)arg1 isAuto:(_Bool)arg2;
- (void)startMonitorKV:(id)arg1;
- (void)stopMonitorKV;
- (_Bool)isOpenMonitorKV;
- (id)mmExptPath:(id)arg1 md5:(id)arg2;
- (id)mmExptPath:(id)arg1;
- (_Bool)checkNeedDelAllExpt:(unsigned int)arg1;
- (void)asyncGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)onGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (id)sharedSerialQueue;
- (void)getLocalExptList:(id)arg1;
- (void)tryToSaveExpt;
- (void)tryToLoadExpt;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)willEnterForeground;
- (void)getSvrExptByManulLogin;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)getSvrExpt;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getExptId:(id)arg1;
- (id)getAllExpt;
- (_Bool)checkNeedLog:(id)arg1 andVal:(id)arg2 andNow:(unsigned long long)arg3;
- (id)getStringExpt:(id)arg1 andNeedReport:(_Bool)arg2;
- (id)getStringExpt:(id)arg1;
- (long long)getIntegerExpt:(id)arg1 withDef:(long long)arg2;
- (float)getFloatExpt:(id)arg1 withDef:(float)arg2;
- (id)getNumberExpt:(id)arg1;
- (id)getExptReadOnly:(id)arg1 withDef:(id)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (long long)getIntegerExptReadOnly:(id)arg1 withDef:(long long)arg2;
- (float)getFloatExptReadOnly:(id)arg1 withDef:(float)arg2;
- (_Bool)getExptReadOnly:(id)arg1 withBoolDef:(_Bool)arg2;
- (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
- (id)stringValueForExptKey:(id)arg1;
- (id)numberValueForExptKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

