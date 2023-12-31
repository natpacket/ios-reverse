//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IFunctionMsgExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString, NotifyMsgDB;

@interface ServiceNotifyMsgMgr : MMUserService <IMsgExt, IFunctionMsgExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicClientReqInfo;
    NSMutableDictionary *_dicRefreshMsg;
    NSMutableDictionary *_dicExposeLiveNotifyMsg;
    NotifyMsgDB *_notifyDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NotifyMsgDB *notifyDB; // @synthesize notifyDB=_notifyDB;
@property(retain, nonatomic) NSMutableDictionary *dicExposeLiveNotifyMsg; // @synthesize dicExposeLiveNotifyMsg=_dicExposeLiveNotifyMsg;
@property(retain, nonatomic) NSMutableDictionary *dicRefreshMsg; // @synthesize dicRefreshMsg=_dicRefreshMsg;
@property(retain, nonatomic) NSMutableDictionary *dicClientReqInfo; // @synthesize dicClientReqInfo=_dicClientReqInfo;
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)arg1 functionMsgId:(id)arg2;
- (void)onFunctionMgrWillShowMsg:(id)arg1 bussinessId:(unsigned long long)arg2 canShow:(id)arg3;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (id)getReportInfoWithExtInfos:(id)arg1 msgSvrID:(long long)arg2;
- (void)replaceUnReadLiveEndWithMsgID:(id)arg1 arrNewTipsID:(id)arg2;
- (void)onFunctionMgrShowMsgs:(id)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)isInTemplateMsgSeesion;
- (void)updateXmlInfoWithMsg:(id)arg1 notify:(_Bool)arg2;
- (_Bool)canShowNotifyMsg:(id)arg1;
- (void)modAcceptFansGroupLiveMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(_Bool)arg4 finderUsername:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)modAcceptTeamupMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(_Bool)arg4 finderUsername:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (void)modifyFollowNotifyWithMsgWrap:(id)arg1 blockNotify:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)requestNewMsgWithCustomBuff:(id)arg1;
- (void)makeExposedWithMsgs:(id)arg1;
- (void)onRefreshSuccWithResponse:(id)arg1;
- (void)tryRefreshMsgContent:(id)arg1 bForceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onSessionEndExposeMsgs;
- (void)onSessionExposeMsgs:(id)arg1 reportAfterRefresh:(_Bool)arg2;
- (void)onSessionExposeMsgs:(id)arg1;
- (void)onMainFrameMsgClick:(id)arg1 rowIndex:(unsigned long long)arg2;
- (void)onMainFrameExposeMsg:(id)arg1 rowIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

