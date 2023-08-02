//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TPProxyServiceConfig : NSObject <NSCopying>
{
    _Bool _vodCachedEnable;
    _Bool _reportEnable;
    int _serviceType;
    NSString *_cacheDir;
    NSString *_dataDir;
    long long _maxUseMemoryMB;
    long long _maxUseStorageMB;
    NSString *_initConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initConfig; // @synthesize initConfig=_initConfig;
@property(nonatomic) _Bool reportEnable; // @synthesize reportEnable=_reportEnable;
@property(nonatomic) _Bool vodCachedEnable; // @synthesize vodCachedEnable=_vodCachedEnable;
@property(nonatomic) long long maxUseStorageMB; // @synthesize maxUseStorageMB=_maxUseStorageMB;
@property(nonatomic) long long maxUseMemoryMB; // @synthesize maxUseMemoryMB=_maxUseMemoryMB;
@property(retain, nonatomic) NSString *dataDir; // @synthesize dataDir=_dataDir;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

