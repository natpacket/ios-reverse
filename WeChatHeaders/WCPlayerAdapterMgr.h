//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCPlayerCoreAdapterDelegate-Protocol.h"

@class NSString;

@interface WCPlayerAdapterMgr : MMUserService <WCPlayerCoreAdapterDelegate, MMServiceProtocol>
{
}

- (id)GetAppVersion;
- (id)GetExpt:(id)arg1 withDef:(id)arg2;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)WCPlayerCoreLog:(int)arg1 toMMFile:(_Bool)arg2 module:(const char *)arg3 file:(const char *)arg4 line:(int)arg5 funcName:(const char *)arg6 message:(id)arg7;
- (id)generateReporterWithPlayerScene:(unsigned long long)arg1;
- (_Bool)justUseSystemDownloader;
- (_Bool)openTPPlayerABTestWithScene:(unsigned long long)arg1;
- (long long)getBufferSchedulerType;
- (_Bool)canUseTPPlayerWithPlayerScene:(unsigned long long)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

