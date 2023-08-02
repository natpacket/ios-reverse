//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPThumbPlayerLogDelegate-Protocol.h"

@class NSString;

@interface TPPlayerMgr : NSObject <TPThumbPlayerLogDelegate>
{
    _Bool _initialized;
}

+ (id)sharedManager;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)logWithLevel:(long long)arg1 tag:(id)arg2 content:(id)arg3;
- (void)setProxyVodCachedEnableWithServiceType:(int)arg1 vodCachedEnable:(_Bool)arg2;
- (void)setProxyMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (void)setProxyConfigWithServiceType:(int)arg1 cacheDir:(id)arg2 dataDir:(id)arg3;
- (id)getPropertyString:(unsigned long long)arg1;
- (void)setPropertyString:(unsigned long long)arg1 propertyValue:(id)arg2;
- (_Bool)getPropertyBool:(unsigned long long)arg1;
- (void)setPropertyBool:(unsigned long long)arg1 propertyValue:(_Bool)arg2;
- (long long)getCellularDataCost;
- (long long)getSuggestedBitrate;
- (long long)getOfflineRecordDurationMs:(id)arg1 format:(id)arg2;
- (id)getOfflineRecordVinfo:(id)arg1 format:(id)arg2;
- (id)playerCoreVersion;
- (id)thumbPlayerVersion;
- (id)downloadProxyVersion;
- (void)setOutNetIP:(id)arg1;
- (void)setAppInfoWithAppVersion:(id)arg1 buildVerson:(id)arg2;
- (void)setUpcInfoWithUpc:(id)arg1 upcState:(long long)arg2;
- (void)setUserInfoWithUin:(id)arg1 isVip:(_Bool)arg2;
- (void)setProxyConfigWithEnableCheckLocalServer:(_Bool)arg1 enableCheckLocalServerOnCreate:(_Bool)arg2 timeoutMs:(int)arg3 serverCheckTimeInterval:(int)arg4;
- (void)setProxyConfigWithPlatform:(long long)arg1 cacheDir:(id)arg2 dataDir:(id)arg3 configStr:(id)arg4;
- (void)setProxyMaxStorageSizeMB:(long long)arg1;
- (void)setProxyEnable:(_Bool)arg1;
- (void)setProxyServiceType:(long long)arg1;
- (void)setLogDelegate:(id)arg1;
- (void)initSDKWithGuid:(id)arg1 platform:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

