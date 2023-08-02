//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IGroupMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MessageDBExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMAppMsgUploadDataBase, NSMutableDictionary, NSString;

@interface MMAppMsgUploadMgr : MMUserService <PBMessageObserverDelegate, IMsgExt, IGroupMgrExt, MessageDBExt, MMServiceProtocol>
{
    _Bool _shouldStopClean;
    NSMutableDictionary *_msgWrapDict;
    MMAppMsgUploadDataBase *_database;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStopClean; // @synthesize shouldStopClean=_shouldStopClean;
@property(retain, nonatomic) MMAppMsgUploadDataBase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)calcMd5ForMessage:(id)arg1;
- (_Bool)checkAppMsgUploadExceedTime:(id)arg1;
- (_Bool)checkAppMsgShowRevokeMenu:(id)arg1;
- (unsigned int)getAppMsgUploadUiPercent:(id)arg1;
- (void)appMsgUploadStop:(id)arg1;
- (void)appMsgUploadComplete:(id)arg1;
- (void)appMsgUploadPause:(id)arg1;
- (void)handleSendAppMsgResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)appMsgUploadStartInternal:(id)arg1;
- (_Bool)appMsgUploadStart:(id)arg1;
- (void)cleanData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

