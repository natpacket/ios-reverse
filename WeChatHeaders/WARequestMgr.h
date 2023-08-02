//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WARequestMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicAppID2RequestHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (_Bool)verifyMethod:(id *)arg1;
- (id)getRequestHandler:(id)arg1;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)interruptRequestHandlerWithAppID:(id)arg1;
- (void)clearRequestHandlerWithAppID:(id)arg1;
- (void)clearAllRequestHandler;
- (_Bool)abortRequestTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)requestWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 ip:(id)arg6 port:(unsigned int)arg7 host:(id)arg8 forbidReuse:(_Bool)arg9 data:(id)arg10 httpHeaders:(id)arg11 method:(id)arg12 context:(id)arg13 isUseCronet:(_Bool)arg14 useQuic:(_Bool)arg15 useHttp2:(_Bool)arg16 useCache:(_Bool)arg17 useChunked:(_Bool)arg18 appType:(unsigned int)arg19 forceCellularNetwork:(_Bool)arg20 completionHandler:(CDUnknownBlockType)arg21;
- (id)genRequestTaskID;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

