//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WCFinderLiveStreamPreFetchBaseCache : NSObject
{
    _Bool _skipFeedsReport;
    unsigned long long _scene;
    unsigned long long _prefetchType;
    unsigned long long _prefetchId;
    unsigned long long _cacheTime;
    NSData *_lastBuffer;
    unsigned long long _refreshInterval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(nonatomic) unsigned long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long prefetchId; // @synthesize prefetchId=_prefetchId;
@property(nonatomic) unsigned long long prefetchType; // @synthesize prefetchType=_prefetchType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)init;

@end

