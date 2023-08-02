//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBufferUploadExt-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMAppAttachFileMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "RecordUploadTaskDelegate-Protocol.h"

@class CMessageWrap, NSMutableArray, NSString, OpenBufferUploadMgr, RecordUploadTask;
@protocol RecordUploadCDNMgrDelegate;

@interface RecordUploadCDNMgr : NSObject <RecordUploadTaskDelegate, IBufferUploadExt, MMAppAttachFileMgrExt, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    CMessageWrap *m_curMsgWrap;
    RecordUploadTask *m_curUploadTask;
    RecordUploadTask *m_recordSelfUploadTask;
    OpenBufferUploadMgr *m_openBufferUploadMgr;
    int m_sendRetryCount;
    NSMutableArray *m_bigFileTasks;
    unsigned long long m_uiCurUploadTaskTotalSize;
    NSMutableArray *m_favTranCDNItemArr;
    NSMutableArray *m_favTranCDNItemRespArr;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <RecordUploadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (unsigned long long)remainUploadSize:(id)arg1 exceptTask:(id)arg2;
- (void)calTotalUploadSize;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (id)exportCurMsg;
- (_Bool)UploadCurAppMsg;
- (void)onBatchCheckBigFileUploadResult:(_Bool)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkBigFileTaskAndUpload;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)OnRecordUploadTask:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnRecordUploadTaskFinish:(id)arg1 uploadTask:(id)arg2;
- (void)OnRecordUploadTaskFail:(id)arg1;
- (void)makeMessageUploadFail;
- (void)OnSetCdnDnsInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSendMsgResp:(id)arg1;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)TryNextMsgWrap;
- (void)SendMsgOK:(id)arg1;
- (void)SendMsgFail;
- (_Bool)SendCurAppMsg;
- (void)clearLocalProperty:(id)arg1;
- (_Bool)handleFinishRecordUpload;
- (void)RemoveMsgWrap:(id)arg1;
- (void)sendBatchTranCDNItem;
- (void)BatchTransCDNItemForFav;
- (id)genBatchTransItemArrayWithDataList:(id)arg1 withClientStrId:(id)arg2;
- (void)BatchTransCDNItemForMsg;
- (void)AddUploadTaskForDataList:(id)arg1;
- (void)tryAddAssetSetThumbUploadTask:(id)arg1;
- (void)UploadRecordData;
- (void)onAssetSetMsgStartUpload:(id)arg1;
- (void)CheckCDNUploadMsgQueue;
- (void)StopCurUpload;
- (void)setDelegate:(id)arg1;
- (_Bool)isUploadSameMsg:(id)arg1 compare:(id)arg2;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (_Bool)IsRecordMsgUploading:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

