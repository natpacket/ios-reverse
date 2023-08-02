//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class MemoryMappedKV, NSString;

@interface BrandTLCanvasCardMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV *_mappedKV;
}

+ (_Bool)isAdRecConflicCheckABTestClose;
+ (double)delayTimeForAdvanceLaunchJsEngine;
+ (_Bool)isPkgMgrUseDebugAppId;
+ (_Bool)isAdvanceLaunchJSCoreOpen;
+ (_Bool)isAdRequestOpen;
+ (_Bool)isAdCardOpen;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleBizAdNotifyNewXml:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (_Bool)isPreviewModeOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

