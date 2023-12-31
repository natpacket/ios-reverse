//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptServiceExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "NewTipsNetworkLogicDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NewTipsNetworkLogic, NewTipsUtils;

@interface MMNewTipsMgr : MMUserService <MMServiceProtocol, IMsgExt, NewTipsNetworkLogicDelegate, IExptServiceExt>
{
    NewTipsUtils *_tipsUtils;
    NewTipsNetworkLogic *_networkLogic;
    NSMutableDictionary *_dicTipsInfo;
    NSMutableDictionary *_dicPathInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPathInfo; // @synthesize dicPathInfo=_dicPathInfo;
@property(retain, nonatomic) NSMutableDictionary *dicTipsInfo; // @synthesize dicTipsInfo=_dicTipsInfo;
@property(retain, nonatomic) NewTipsNetworkLogic *networkLogic; // @synthesize networkLogic=_networkLogic;
@property(retain, nonatomic) NewTipsUtils *tipsUtils; // @synthesize tipsUtils=_tipsUtils;
- (void)onExptItemListChange;
- (void)onServerRejectShowTipsId:(unsigned int)arg1 UID:(id)arg2;
- (void)updateAndNotifyPathKeysWithTipsInfo:(id)arg1;
- (void)disposePreviousTipsWithTipsInfo:(id)arg1;
- (void)onGetNewTipsXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)requestLocalTipsWithID:(unsigned int)arg1;
- (void)checkLocalConfigForPath;
- (void)updatePathsInfoWithTipsInfo:(id)arg1;
- (void)onServiceInit;
- (id)getNewTipsInfoWithId:(unsigned int)arg1;
- (void)disposeRedPointWithKey:(id)arg1;
- (id)getShowInfoWitPathKey:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

