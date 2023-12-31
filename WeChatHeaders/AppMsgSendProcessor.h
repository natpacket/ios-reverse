//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UploadStateProcessor.h"

#import "IBufferUploadExt-Protocol.h"

@class CMessageWrap, NSData, NSString, OpenBufferUploadMgr;

@interface AppMsgSendProcessor : UploadStateProcessor <IBufferUploadExt>
{
    unsigned int _sendRetryCount;
    CMessageWrap *_msgWrap;
    NSString *_appMsgContent;
    NSData *_appMsgContentData;
    OpenBufferUploadMgr *_openBufferUploadMgr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sendRetryCount; // @synthesize sendRetryCount=_sendRetryCount;
@property(retain, nonatomic) OpenBufferUploadMgr *openBufferUploadMgr; // @synthesize openBufferUploadMgr=_openBufferUploadMgr;
@property(retain, nonatomic) NSData *appMsgContentData; // @synthesize appMsgContentData=_appMsgContentData;
@property(retain, nonatomic) NSString *appMsgContent; // @synthesize appMsgContent=_appMsgContent;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)SendMsgOK:(id)arg1;
- (void)sendCurAppMsg;
- (id)getSendAppMsgRequest;
- (void)startUploadMsgXmlData;
- (id)getStateName;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

