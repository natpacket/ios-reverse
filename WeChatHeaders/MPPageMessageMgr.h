//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString, WCEliminatedSlotMMKV;

@interface MPPageMessageMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    WCEliminatedSlotMMKV *_messageSlotMMKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *messageSlotMMKV; // @synthesize messageSlotMMKV=_messageSlotMMKV;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)markLastMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getLastMsgSendTimeToPage:(id)arg1;
- (void)markFirstMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getFirstMsgSendTimeToPage:(id)arg1;
- (void)markLastReferMsgSendToPage:(id)arg1 msgWrap:(id)arg2;
- (_Bool)hasSendReferMsgToPage:(id)arg1 withinTime:(unsigned int)arg2;
- (unsigned int)lastMsgExpireTime;
- (unsigned int)referMsgExpireTime;
- (void)openBrandController:(id)arg1 navigationController:(id)arg2 modelModel:(unsigned int)arg3 pageIdentityInfo:(id)arg4 referMsg:(id)arg5;
- (void)clearData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
