//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BizManager : NSObject
{
    struct BizManagerCallbackBridge *callback_;
}

+ (id)shareInstance;
- (void)requestMoreRecDataAsync:(int)arg1 scene:(int)arg2;
- (void)getNewMsgLinePosAsync:(int)arg1;
- (void)getRecListStartPosAsync:(int)arg1;
- (void)removeAllDataAsync:(int)arg1;
- (void)resetAllData;
- (unsigned long long)getLastMsgTimeByUserName:(id)arg1;
- (id)getLastMsgInfo;
- (int)getLastMsgTime;
- (void)setFirstVisibleItemAsync:(int)arg1 pos:(int)arg2;
- (int)getUnReadCount;
- (void)debugPrintSnapshotList:(_Bool)arg1;
- (void)ignoreResortNextReqTimeCheck:(int)arg1;
- (void)disableResortForDebug:(_Bool)arg1;
- (void)callOnRecDataChange:(int)arg1 recInfo:(id)arg2;
- (void)callOnDataChange:(int)arg1 msgInfo:(id)arg2 userName:(id)arg3;
- (void)deleteByUserNameAndSvrIdAsync:(int)arg1 userName:(id)arg2 svrId:(unsigned long long)arg3;
- (void)deleteByUserNameAsync:(int)arg1 userName:(id)arg2;
- (_Bool)deleteByMsgId:(unsigned long long)arg1 msgType:(int)arg2;
- (void)updateMsgContentAsync:(int)arg1 localId:(unsigned long long)arg2 msgViewType:(int)arg3 content:(id)arg4;
- (void)mockInsertRecCardAsync:(int)arg1 msgCard:(id)arg2;
- (void)insertAsync:(int)arg1 msgInfo:(id)arg2;
- (void)onExpandAsync:(int)arg1 localId:(unsigned long long)arg2;
- (void)onRecCardExposeAsync:(int)arg1 localId:(unsigned long long)arg2 type:(int)arg3;
- (void)onMsgClickAsync:(int)arg1 localId:(unsigned long long)arg2 postInCard:(int)arg3;
- (void)onExposeAsync:(int)arg1 localId:(unsigned long long)arg2 validExpose:(_Bool)arg3 sessionId:(int)arg4;
- (void)resetAllNewMsgFlagAsync:(int)arg1;
- (void)resetNewMsgLineAsync:(int)arg1 localId:(unsigned long long)arg2;
- (void)setIsKeepPosAsync:(int)arg1 keepPos:(_Bool)arg2;
- (void)onExitAsync:(int)arg1;
- (void)onEnterAsync:(int)arg1 sessionId:(int)arg2 digestMsgId:(unsigned long long)arg3;
- (void)onAppForegroundAsync:(int)arg1;
- (_Bool)hasInit;
- (void)initWithTaskIdConfigDirUinClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(int)arg1 configDir:(id)arg2 uin:(id)arg3 clientVersion:(int)arg4 isStandalone:(_Bool)arg5 isDebug:(_Bool)arg6 resetData:(_Bool)arg7 adOpen:(_Bool)arg8;
- (id)getTopNData:(int)arg1;
- (void)getDataAsync:(int)arg1 isInit:(_Bool)arg2 isReset:(_Bool)arg3 resetSize:(int)arg4 lastLocalId:(unsigned long long)arg5;
- (struct BizManagerBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

