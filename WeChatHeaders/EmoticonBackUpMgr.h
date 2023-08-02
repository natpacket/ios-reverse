//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "EmoticonRecover-Protocol.h"
#import "EmoticonRecoverLogicObjectDelegate-Protocol.h"
#import "EmoticonServerNotifyTaskDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonBackUpMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>
{
    _Bool _m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int _m_lastManageViewUploadTime;
    EmoticonRecoverLogicObject *_m_recoverLogicObject;
    NSMutableArray *_m_notifyTaskList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) unsigned int m_lastManageViewUploadTime; // @synthesize m_lastManageViewUploadTime=_m_lastManageViewUploadTime;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover=_m_hasOnceStartRecover;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList=_m_notifyTaskList;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject=_m_recoverLogicObject;
- (void)runNotifyTask;
- (void)onLogicDidResumed:(id)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)setNeedsRecoverAndNeedClearData:(_Bool)arg1;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isInManageView;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (_Bool)needRecover;
- (void)checkRecoverEmoticonFromServer;
- (void)tryRecoverAnotherPart;
- (_Bool)isFirstRecoverAfterAuth;
- (_Bool)isRecoveringStatusSafeForOperation;
- (_Bool)isRecoveringEmoticonFromServer;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticon;
- (_Bool)recoverEmoticonFromServer;
- (void)recoverEmoticonFromManageView;
- (_Bool)canStartCgiNow;
- (void)onServiceClearData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
