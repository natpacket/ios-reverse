//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "IWCLabsMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MemoryMappedKV, NSString;

@interface WCNearbyMgr : MMUserService <IMsgExt, IWCLabsMgrExt, MMConfigMgrExt, MMServiceProtocol>
{
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)onMMDynamicConfigUpdated;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onWechatEntranceRedPointChange;
- (void)checkAndTryPrefetchApp;
- (_Bool)checkAndUpdateRedDot:(_Bool)arg1 withType:(int)arg2 text:(id)arg3 andImageURL:(id)arg4;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
@property(readonly, nonatomic) NSString *redDotImageURL;
@property(readonly, nonatomic) NSString *redDotText;
- (void)checkOldUserRedNewValue;
- (void)markOpenNearbyAppAtFFView;
- (_Bool)shouldShowNearbyEntry;
@property(readonly, nonatomic) _Bool shouldShowRedNew;
@property(readonly, nonatomic) _Bool shouldBringRedDotWhenOpenApp;
@property(readonly, nonatomic) _Bool shouldShowRedDot;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

