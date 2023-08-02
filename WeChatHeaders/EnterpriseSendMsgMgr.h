//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol EnterpriseSendMsgMgrDelegate;

@interface EnterpriseSendMsgMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *arySendMsgRunningQueue;
    NSMutableArray *arySendMsgWaitingQueue;
    id <EnterpriseSendMsgMgrDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseSendMsgMgrDelegate> delegate; // @synthesize delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSendMsgListSuc:(id)arg1 microMsgReqList:(id)arg2;
- (void)handleSendMsgListFail:(id)arg1;
- (id)microMsgReq2WrapMsg:(id)arg1;
- (void)batchSendMsg:(id)arg1;
- (void)checkWaitingQueue;
- (void)sendMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

