//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TranslateMsgMgr : MMUserService <MMServiceProtocol, IMMNewSessionMgrExt, IMsgExt, PBMessageObserverDelegate>
{
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned int _sequence;
    _Bool _isWorking;
}

- (void).cxx_destruct;
- (void)removeAllCacheForUsr:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncNotifyTranslateMsgChanged:(id)arg1;
- (void)notifyTranslateMsgChanged:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)resetTranslatingStatus:(id)arg1;
- (void)saveSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (_Bool)taskInQueue:(id)arg1;
- (_Bool)showTranslatedTextNow:(id)arg1;
- (id)getTranslateInfo:(id)arg1;
- (void)reportTranslationError:(id)arg1 errorType:(unsigned int)arg2;
- (void)tryTranslateMsgs;
- (void)translateMsg:(id)arg1;
- (id)getRealContentWithMsg:(id)arg1;
- (void)stopAllScrollUp:(id)arg1;
- (void)changeLanguageAndCleanAllCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

