//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class AdPushMsgDBMgr, NSString;

@interface MagicAdPushMgrService : MMUserService <MMServiceProtocol>
{
    AdPushMsgDBMgr *_dbMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AdPushMsgDBMgr *dbMgr; // @synthesize dbMgr=_dbMgr;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)handleAdMsg:(id)arg1;
- (_Bool)clearSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;
- (id)getSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
