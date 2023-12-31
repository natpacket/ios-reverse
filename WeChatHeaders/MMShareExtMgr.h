//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class ForwardMessageLogicController, MMTimer, NSMutableDictionary, NSMutableSet, NSString;

@interface MMShareExtMgr : MMUserService <MMKernelExt, IMMNewSessionMgrExt, ICdnComMgrExt, PBMessageObserverDelegate, IMsgExt, ForwardMessageLogicDelegate, INetworkStatusMgrExt, MMServiceProtocol>
{
    ForwardMessageLogicController *m_forwardLogic;
    _Bool _sessionDidChanged;
    _Bool _isMsgFailChecking;
    _Bool _didHandleShareExtEventAfterActive;
    _Bool _isRefreshingSessionKey;
    MMTimer *_msgFailCkeckTimer;
    NSMutableDictionary *_msgClientIdDict;
    NSMutableSet *_headImgHashUsernameSet;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *headImgHashUsernameSet; // @synthesize headImgHashUsernameSet=_headImgHashUsernameSet;
@property(nonatomic) _Bool isRefreshingSessionKey; // @synthesize isRefreshingSessionKey=_isRefreshingSessionKey;
@property(nonatomic) _Bool didHandleShareExtEventAfterActive; // @synthesize didHandleShareExtEventAfterActive=_didHandleShareExtEventAfterActive;
@property(retain, nonatomic) NSMutableDictionary *msgClientIdDict; // @synthesize msgClientIdDict=_msgClientIdDict;
@property(nonatomic) _Bool isMsgFailChecking; // @synthesize isMsgFailChecking=_isMsgFailChecking;
@property(retain, nonatomic) MMTimer *msgFailCkeckTimer; // @synthesize msgFailCkeckTimer=_msgFailCkeckTimer;
@property(nonatomic) _Bool sessionDidChanged; // @synthesize sessionDidChanged=_sessionDidChanged;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (unsigned long long)clearShareExtResourceInternal;
- (void)clearShareExtResource;
- (void)handleShareExtKVReportAfterAppActive;
- (void)handleShareExtIdKeyReportAfterAppActive;
- (void)handleShareExtFavFileUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavVideoUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavUrlUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavImageUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavRequestAfterAppActive;
- (void)handleAppMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleAppMsgSendStatus:(id)arg1;
- (void)saveVideoMsgFileData:(id)arg1 videoInfo:(id)arg2;
- (void)handleVideoMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleVideoMsgSendStatus:(id)arg1;
- (_Bool)saveImageMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)saveImageMsgImg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleImageMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleImageMsgSendStatus:(id)arg1;
- (void)handleAppMsgNewXml:(id)arg1;
- (void)handleVideoMsgNewXml:(id)arg1;
- (void)handleImageMsgNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)reportSendMsgFailIdKeyWithStatuscode:(long long)arg1;
- (void)reportSendTimelineFailIdKeyWithStatuscode:(long long)arg1;
- (void)handleMessageUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleTimelineUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAppmsgClientID:(id)arg1;
- (void)addVideoMsgClientID:(id)arg1;
- (void)addImageMsgClientID:(id)arg1;
- (_Bool)hasFailMessageTask;
- (void)removeAppMsgID:(id)arg1;
- (void)removeVideoMsgID:(id)arg1;
- (void)removeImageMsgID:(id)arg1;
- (void)onMsgFailCheckTimeout;
- (void)genMsgFailClientIdDict;
- (void)removeMessageMetaDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
- (void)handleShareExtMessageFailRequestAfterServiceActive;
- (void)handleShareExtTimelineFailRequestAfterAppActive;
- (void)updateShareExtKeyAfterServiceActive;
- (void)handleShareExtEventAfterServiceActive;
- (void)refreshExtraSessionListUpdateTime;
- (id)getUserNamesOnContactsListMaxCount:(unsigned int)arg1;
- (void)refreshExtraSessionListData;
- (_Bool)needRefreshExtraShareSession;
- (void)shareMessageToFriend:(long long)arg1 scene:(int)arg2;
- (id)genMsgByTransmitVideoData:(id)arg1;
- (id)genMsgByTransmitFileData:(id)arg1;
- (id)genMsgByTransmitUrlData:(id)arg1;
- (id)genMsgByTransmitImageData:(id)arg1;
- (id)getRecentShareSessionWithSessionList:(id)arg1;
- (void)refreshShareSessionIfNeed;
- (void)refreshShareSessionData;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onNeedReload;
- (void)refreshServerIPForExtension;
- (_Bool)isSupportExtension;
- (void)OnUpdatedCdnDnsInfo:(id)arg1 snsCdnInfo:(id)arg2 appCdnInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)refershExtensionKey;
- (void)onPreQuit;
- (void)saveShareExtUserData;
- (void)onAuthOK;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

