//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString, OrderedDictionary;

@interface MMFinderLiveInfoMgr : MMUserService <MMServiceProtocol>
{
    _Bool _isInBackground;
    OrderedDictionary *_liveInfoWrapDict;
    NSMutableDictionary *_fetchLiveActivityFinderDataItemDict;
    double _nextFetchLiveActivityInterval;
    NSMutableDictionary *_fetchNavLiveHomePageDataItemDict;
    double _nextFetchNavLiveHomePageStatusInterval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) double nextFetchNavLiveHomePageStatusInterval; // @synthesize nextFetchNavLiveHomePageStatusInterval=_nextFetchNavLiveHomePageStatusInterval;
@property(retain, nonatomic) NSMutableDictionary *fetchNavLiveHomePageDataItemDict; // @synthesize fetchNavLiveHomePageDataItemDict=_fetchNavLiveHomePageDataItemDict;
@property(nonatomic) double nextFetchLiveActivityInterval; // @synthesize nextFetchLiveActivityInterval=_nextFetchLiveActivityInterval;
@property(retain, nonatomic) NSMutableDictionary *fetchLiveActivityFinderDataItemDict; // @synthesize fetchLiveActivityFinderDataItemDict=_fetchLiveActivityFinderDataItemDict;
@property(retain, nonatomic) OrderedDictionary *liveInfoWrapDict; // @synthesize liveInfoWrapDict=_liveInfoWrapDict;
- (void)updateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)arg1 isAudioMode:(_Bool)arg2 andTid:(id)arg3;
- (void)updateFinderLiveStreamTypeInfo:(id)arg1 withTid:(id)arg2;
- (id)getFinderLiveStreamTypeInfoByTid:(id)arg1 withLiveInfo:(id)arg2;
- (id)generateFinderLiveStreamTypeInfoWithLiveInfo:(id)arg1;
- (void)updateFinderNavLiveHomePageStatus:(id)arg1 withTid:(id)arg2;
- (void)batchGetNavLiveStatus;
- (void)unregisterFetchAllNavLiveHomePageStatus;
- (id)allRegisteredFetchNavLiveHomePageStatusDataItems;
- (void)delayBatchGetNavLiveStatus;
- (void)unregisterFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)registerFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)batchGetLiveActivity;
- (id)allRegisteredFetchLiveActivityDataItems;
- (void)delayBatchGetLiveActivity;
- (void)unregisterFetchLiveActivityWithFinderDataItem:(id)arg1;
- (void)registerFetchLiveActivityWithFinderDataItem:(id)arg1;
- (unsigned long long)getFinderLiveActivityTypeByTid:(id)arg1;
- (void)markFinderLiveEndWithTid:(id)arg1;
- (void)markFinderLiveEndWithObjectId:(unsigned long long)arg1;
- (void)updateFinderLiveActivityType:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveActivityType:(id)arg1 withObjectId:(unsigned long long)arg2;
- (unsigned long long)getFinderLiveActivityTypeFromList:(id)arg1;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2 updateActivityType:(_Bool)arg3;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveInfo:(id)arg1 withObjectId:(unsigned long long)arg2;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

