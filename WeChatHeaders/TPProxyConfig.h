//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TPLock;

@interface TPProxyConfig : NSObject
{
    _Bool _proxyEnable;
    long long _defaultServiceType;
    NSMutableDictionary *_configs;
    TPLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) TPLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *configs; // @synthesize configs=_configs;
@property(nonatomic) long long defaultServiceType; // @synthesize defaultServiceType=_defaultServiceType;
@property _Bool proxyEnable; // @synthesize proxyEnable=_proxyEnable;
- (void)addServiceConfig:(id)arg1;
- (id)serviceConfigWithServiceType:(int)arg1;
- (id)dlInitParamWithServiceType:(int)arg1;
- (void)setIniConfigWithServiceType:(int)arg1 iniConfig:(id)arg2;
- (void)setReportEnableWithServiceType:(int)arg1 reportEnable:(_Bool)arg2;
- (void)setReportEnable:(_Bool)arg1;
- (void)setVodCacheEnableWithServiceType:(int)arg1 vodCachedEnable:(_Bool)arg2;
- (void)setVodCachedEnable:(_Bool)arg1;
- (void)setMaxUseStorageMBWithServiceType:(int)arg1 maxUseStorageMB:(long long)arg2;
- (void)setMaxUseStorageMB:(long long)arg1;
- (void)setMaxUseMemoryMBWithServiceType:(int)arg1 maxUseMemoryMB:(long long)arg2;
- (void)setMaxUseMemoryMB:(long long)arg1;
- (void)addProxyConfig:(id)arg1;
- (void)addProxyConfigWithServiceType:(int)arg1 cacheDir:(id)arg2 dataDir:(id)arg3;
- (id)proxyConfigWithServiceType:(int)arg1;
- (id)init;

@end

