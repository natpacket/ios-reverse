//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "INewABTestLogicExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NewABTestKeyMgr : MMUserService <MMServiceProtocol, INewABTestLogicExt>
{
    NSMutableDictionary *cachedABTestItems;
    _Bool _bABTestCacheLoaded;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(retain, nonatomic) NSMutableDictionary *cachedABTestItems; // @synthesize cachedABTestItems;
- (void)onGetABTestExpKeyItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (void)handleNewABTestList:(id)arg1;
- (_Bool)saveNewABTestCache;
- (id)pathForNewABTestCache;
- (_Bool)tryLoadNewABTestCache;
- (void)reportABTestRunning:(id)arg1;
- (id)getExpItemsArray;
- (void)filterExpsUsingBlock:(CDUnknownBlockType)arg1;
- (id)getTestValueWithKey:(id)arg1 reportABTestRunning:(_Bool)arg2;
- (id)getTestValueWithAutoReportForKey:(id)arg1;
- (id)getTestValueWithoutReportForKey:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (id)genWCSnsExpStatString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

