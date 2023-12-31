//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface WCVideoProducerPreloadConfigs : NSObject <NSCopying>
{
    long long _maxConcurrencyLimit;
    long long _maxCacheSizeLimit;
    long long _templateBufferCount;
    long long _musicBufferCount;
    unsigned long long _preloadRules;
}

+ (id)createFromConfigJson:(id)arg1;
@property(nonatomic) unsigned long long preloadRules; // @synthesize preloadRules=_preloadRules;
@property(nonatomic) long long musicBufferCount; // @synthesize musicBufferCount=_musicBufferCount;
@property(nonatomic) long long templateBufferCount; // @synthesize templateBufferCount=_templateBufferCount;
@property(nonatomic) long long maxCacheSizeLimit; // @synthesize maxCacheSizeLimit=_maxCacheSizeLimit;
@property(nonatomic) long long maxConcurrencyLimit; // @synthesize maxConcurrencyLimit=_maxConcurrencyLimit;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

