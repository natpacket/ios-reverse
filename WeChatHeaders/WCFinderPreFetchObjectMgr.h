//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLRUCache, MMTimer, NSMutableDictionary;
@protocol WCFinderPreFetchObjectMgrDelegate;

@interface WCFinderPreFetchObjectMgr : NSObject
{
    MMLRUCache *_feedPreFetchValidityPeriodCache;
    NSMutableDictionary *_feedRequestDict;
    MMTimer *_requestTimer;
    id <WCFinderPreFetchObjectMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPreFetchObjectMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) NSMutableDictionary *feedRequestDict; // @synthesize feedRequestDict=_feedRequestDict;
@property(retain, nonatomic) MMLRUCache *feedPreFetchValidityPeriodCache; // @synthesize feedPreFetchValidityPeriodCache=_feedPreFetchValidityPeriodCache;
- (_Bool)dataItemCanPreFetchWithId:(id)arg1;
- (void)updateDataItemPreFetchTime:(id)arg1 validityPeriod:(unsigned long long)arg2;
- (void)checkAndStarRequest;
- (void)startRequest;
- (void)addPrefetchObject:(id)arg1 scene:(unsigned long long)arg2;
- (void)preFetchDataItemWithTid:(id)arg1 exportId:(id)arg2 nonceID:(id)arg3 scene:(unsigned long long)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
