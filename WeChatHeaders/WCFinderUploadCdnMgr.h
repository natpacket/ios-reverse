//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"

@class NSMutableArray, NSString, WCFinderUploadTask;
@protocol OS_dispatch_queue, WCFinderUploadCdnMgrDelegate;

@interface WCFinderUploadCdnMgr : NSObject <INetworkStatusMgrExt, ICdnComMgrExt>
{
    NSMutableArray *_taskQueue;
    NSMutableArray *_retryQueue;
    NSMutableArray *_deleteQueue;
    NSMutableArray *_backupQueue;
    NSString *_taskRetryPath;
    NSString *_taskUploadingPath;
    NSString *_taskUploadingShouldDeletePath;
    NSString *_taskUploadingBackupPath;
    WCFinderUploadTask *_currentTask;
    id <WCFinderUploadCdnMgrDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic) __weak id <WCFinderUploadCdnMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSString *taskUploadingBackupPath; // @synthesize taskUploadingBackupPath=_taskUploadingBackupPath;
@property(retain, nonatomic) NSString *taskUploadingShouldDeletePath; // @synthesize taskUploadingShouldDeletePath=_taskUploadingShouldDeletePath;
@property(retain, nonatomic) NSString *taskUploadingPath; // @synthesize taskUploadingPath=_taskUploadingPath;
@property(retain, nonatomic) NSString *taskRetryPath; // @synthesize taskRetryPath=_taskRetryPath;
@property(retain, nonatomic) NSMutableArray *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(retain, nonatomic) NSMutableArray *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(retain, nonatomic) NSMutableArray *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void)reportUploadResultWithMediaTaskInfo:(id)arg1 taskInfo:(id)arg2 retCode:(long long)arg3;
- (_Bool)checkDataItemInCDNUploadQueue:(id)arg1;
- (_Bool)busy;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnInit;
- (void)moveFileToDataItemPath:(id)arg1;
- (void)finderUploadCDNSuccess:(id)arg1;
- (void)updateMentionedHistoryArray:(id)arg1;
- (void)handleSnsDataTiemConvertLogic:(id)arg1;
- (void)addPostTaskToUploadQueue:(id)arg1;
- (void)finderPost;
- (void)finderMusicDraftPost;
- (void)clearLiveUploadTask;
- (void)megaVideoPost;
- (void)onDraftCDNUploadFailed;
- (void)afterDraftPostTaskFailed:(long long)arg1 tid:(id)arg2;
- (void)afterPostTaskFinish:(id)arg1;
- (void)draftPost;
- (void)startUploadCGIPost;
- (_Bool)hasSamePrefixWithFirstString:(id)arg1 secondString:(id)arg2;
- (id)handleCDNResultCombineLogic;
- (_Bool)checkFileExistsWithTask:(id)arg1;
- (void)startUploadCdnMediaTask;
- (void)startUploadCdnTask;
- (void)startUploadFinderCoverWithPostSession:(id)arg1;
- (id)checkPostInvalidAddQueue:(id)arg1;
- (id)createPostTaskOrRaiseError:(id)arg1;
- (void)startUploadFinderLiveWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)startUploadFinderWithPostSession:(id)arg1;
- (id)_getShouldUploadTaskByPostSession:(id)arg1;
- (void)preCancelUploadFinderWithPostSession:(id)arg1;
- (void)preUploadFinderWithPostSession:(id)arg1;
- (void)startUploadFinderDraft:(id)arg1;
- (void)uploadMgrIdle;
- (void)checkRetryQueue;
- (void)checkQueue;
- (void)syncQueueToLocal;
- (void)startWithTaskInfo:(id)arg1;
- (id)getUploadTaskWithTid:(id)arg1 fromQueue:(id)arg2;
- (id)getUploadTaskWithTid:(id)arg1;
- (void)deleteUploadTaskWithTid:(id)arg1;
- (void)deleteTaskInAllQueueWithTid:(id)arg1;
- (_Bool)uploadTaskNeedDeleteWithTid:(id)arg1;
- (_Bool)deleteTaskTid:(id)arg1 inQueue:(id)arg2;
- (_Bool)checkDataItemHasUpload:(id)arg1;
- (_Bool)checkDataItem:(id)arg1 inQueue:(id)arg2;
- (void)finderUploadRetryFail:(id)arg1;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)clearInvalidUploadTask;
- (void)filterIgnoreTask;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

