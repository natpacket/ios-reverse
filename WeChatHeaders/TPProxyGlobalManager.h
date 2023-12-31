//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPDLProxyLogDelegate-Protocol.h"
#import "TPNetworkReachabilityDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TPLock;

@interface TPProxyGlobalManager : NSObject <TPDLProxyLogDelegate, TPNetworkReachabilityDelegate>
{
    NSMutableDictionary *_proxyMaps;
    NSMutableDictionary *_proxyInitErrorCodeMap;
    TPLock *_lock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) TPLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *proxyInitErrorCodeMap; // @synthesize proxyInitErrorCodeMap=_proxyInitErrorCodeMap;
@property(retain, nonatomic) NSMutableDictionary *proxyMaps; // @synthesize proxyMaps=_proxyMaps;
- (void)logDebug:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logError:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logWarn:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logInfo:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)onNetworkReachStateChanged:(long long)arg1;
- (void)setNetworkReachState:(long long)arg1 toProxy:(id)arg2;
- (void)updateDataReportEnableWithServiceType:(int)arg1 dataReportEnable:(_Bool)arg2;
- (void)updateDataReportEnable:(_Bool)arg1;
- (void)updateVodCachedEnableWithServiceType:(int)arg1 vodCacheEnable:(_Bool)arg2;
- (void)updateVodCachedEnable:(_Bool)arg1;
- (void)updateMaxUseMemoryMBWithServiceType:(int)arg1 maxUseMemoryMB:(long long)arg2;
- (void)updateMaxUseMemoryMB:(long long)arg1;
- (void)updateMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (void)updateMaxStorageSizeMB:(long long)arg1;
- (int)getProxyInitErrorCodeWithServiceType:(long long)arg1;
- (void)updateAppVersion:(id)arg1 buildVerson:(id)arg2;
- (void)updateUserUin:(id)arg1 isVip:(_Bool)arg2;
- (void)updateUserUpc:(id)arg1 userUpcState:(long long)arg2;
- (id)getPlayerProxyWithServiceType:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

