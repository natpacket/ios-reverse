//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MsgDataDownloadDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CdnTaskInfo, MsgDataDownloadLogic, NSMutableArray, NSString;
@protocol UploadImageCDNMgrDelegate;

@interface UploadImageCDNMgr : MMObject <MsgDataDownloadDelegate, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <UploadImageCDNMgrDelegate> m_delegate;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

+ (unsigned int)CreateSendImageEvent:(id)arg1 clientMsgId:(id)arg2 md5:(id)arg3 hitMd5:(_Bool)arg4 imgType:(int)arg5 imgInfoBuffer:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) __weak id <UploadImageCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (_Bool)canAttachPrepareRequest:(id)arg1;
- (_Bool)canSendMsgFromCdn:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadImage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)CreateUploadEvent:(id)arg1 hitMd5:(_Bool)arg2;
- (void)updateClientMsgId;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)uploadWithDisableHitCheck;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2 cdnTask:(id)arg3 cgiResp:(id)arg4;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2 cgiResp:(id)arg3;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2 cdnTask:(id)arg3;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2;
- (void)UploadFail:(int)arg1;
- (void)UploadOkByCdn:(id)arg1;
- (void)UploadOk:(id)arg1;
- (void)cacheFileToHardLink:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (void)StopUploadImage:(id)arg1;
- (void)StopCurUpload;
- (void)StartUploadImage:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (_Bool)isEnableWxamUpload;
- (_Bool)isCurrentTaskBigHDImage;
- (_Bool)IsUploading:(id)arg1;
- (void)CheckQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

