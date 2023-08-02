//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableSet, NSRecursiveLock, NSString;

@interface WebNetComMgr : MMRootService <MMServiceProtocol>
{
    struct shared_ptr<WebNetCallBack> m_spCallback;
    NSMutableSet *m_TaskCallbackSet;
    NSRecursiveLock *m_CallbackLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)OnUploadCompleted:(id)arg1 response:(id)arg2;
- (void)OnProgressChanged:(id)arg1 completedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)UnRegisterTaskCallBack:(id)arg1;
- (void)RegisterTaskCallBack:(id)arg1;
- (_Bool)StartURLDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
