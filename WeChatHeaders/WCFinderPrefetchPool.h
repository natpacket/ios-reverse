//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderPrefetchPool : NSObject
{
    NSMutableDictionary *_cacheDict;
    NSMutableDictionary *_waitingCgiDict;
    NSMutableDictionary *_waitingToDropDict;
    NSMutableDictionary *_droppedCacheDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *droppedCacheDict; // @synthesize droppedCacheDict=_droppedCacheDict;
@property(retain, nonatomic) NSMutableDictionary *waitingToDropDict; // @synthesize waitingToDropDict=_waitingToDropDict;
@property(retain, nonatomic) NSMutableDictionary *waitingCgiDict; // @synthesize waitingCgiDict=_waitingCgiDict;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (id)finderPrefetchCGIMMKV;
- (id)defaultMMKVMapID;
- (id)waitingToDropKeyWith:(unsigned long long)arg1 cachedKey:(id)arg2;
- (id)droppedCachesAfterTimestamp:(unsigned long long)arg1 cachedKey:(id)arg2;
- (void)removeAllDroppedCachesWithCachedKey:(id)arg1;
- (void)addDroppedCache:(id)arg1 cachedKey:(id)arg2;
- (id)waitingToDropCacheWithRequestId:(unsigned long long)arg1 cachedKey:(id)arg2;
- (void)removeWaitingToDropCacheWithRequestId:(unsigned long long)arg1 cachedKey:(id)arg2;
- (void)addWaitingToDropCache:(id)arg1 cachedKey:(id)arg2;
- (void)_cleanExpiredCache;
- (void)cleanExpiredCache;
- (id)waitingCgiWithCachedKey:(id)arg1;
- (void)removeWaitingCgiWithCachedKey:(id)arg1;
- (void)addWaitingCgi:(id)arg1 cachedKey:(id)arg2;
- (void)removePrefetchCacheWithCachedKey:(id)arg1;
- (id)prefetchCacheWithCachedKey:(id)arg1;
- (void)saveResponse:(id)arg1 validityPeriod:(unsigned long long)arg2 cachedKey:(id)arg3;
- (void)saveRequest:(id)arg1 extraData:(id)arg2 cachedKey:(id)arg3;
- (id)init;

@end

