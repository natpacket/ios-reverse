//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MidasIAPConcurrentJob.h"

@class MidasIAPCacheItem;

@interface MidasIAPInfoJob : MidasIAPConcurrentJob
{
    _Bool _started;
    _Bool _isTimeout;
    MidasIAPCacheItem *_cacheItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(retain, nonatomic) MidasIAPCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
- (void)_handleJob:(id)arg1;
- (void)jobMainProc;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
