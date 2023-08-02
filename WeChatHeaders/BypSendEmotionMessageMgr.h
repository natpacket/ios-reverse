//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EmoticonUploaderDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"

@class BypEmoticonUploadInfo, EmoticonUploader, NSMutableArray, NSString, StoreEmotionBatchEmojiDownLoadCgi, WCCgiBlockHelper;
@protocol BypSendEmotionMessageMgrDelegate;

@interface BypSendEmotionMessageMgr : NSObject <EmoticonUploaderDelegate, IMsgExt>
{
    NSMutableArray *_uploadInfoQueue;
    BypEmoticonUploadInfo *_curUploadInfo;
    EmoticonUploader *_emoticonUploader;
    StoreEmotionBatchEmojiDownLoadCgi *_emojiDownloadCgi;
    id <BypSendEmotionMessageMgrDelegate> _delegate;
    WCCgiBlockHelper *_curCgiBlockHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *curCgiBlockHelper; // @synthesize curCgiBlockHelper=_curCgiBlockHelper;
@property(nonatomic) __weak id <BypSendEmotionMessageMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)arg1;
- (void)onSendSuccessedWithSvrId:(long long)arg1;
- (id)createEmojiPack;
- (_Bool)bypSendMsg;
- (void)ClearCurUpload;
- (void)StopCurUpload;
- (void)UploadFail;
- (_Bool)StartCdnUpload;
- (_Bool)CreateUploadEvent;
- (void)CheckUpload;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StartUpload:(id)arg1;
- (_Bool)InsertMessageToUploadQueue:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
