//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol WCPaySingleDownloadLogicExt;

@interface WCPaySingleDownloadLogic : MMUserService <NSURLSessionDelegate, MMServiceProtocol>
{
    id <WCPaySingleDownloadLogicExt> _m_delegate;
    NSURLSession *_session;
    NSMutableArray *_arrDownloadingTaskQueue;
    NSMutableDictionary *_downloadTaskDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadTaskDict; // @synthesize downloadTaskDict=_downloadTaskDict;
@property(retain, nonatomic) NSMutableArray *arrDownloadingTaskQueue; // @synthesize arrDownloadingTaskQueue=_arrDownloadingTaskQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <WCPaySingleDownloadLogicExt> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)invalidate;
- (_Bool)checkIsTaskAlreadyExist:(id)arg1;
- (void)checkDownloadQueue;
- (id)getDownloadFileIdentifier:(id)arg1;
- (void)cancelDownloadTaskWithUrl:(id)arg1;
- (void)addDownloadTaskWithUrl:(id)arg1 info:(id)arg2;
- (void)startDownloadTaskWithUrl:(id)arg1 info:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

