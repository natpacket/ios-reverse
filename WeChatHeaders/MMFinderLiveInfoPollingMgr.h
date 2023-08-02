//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMFinderLiveInfoPollingMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary *_cacheItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheItems; // @synthesize cacheItems=_cacheItems;
- (void)getLiveInfoWithReferenceId:(id)arg1 liveId:(unsigned long long)arg2 finderUsername:(id)arg3 scene:(unsigned int)arg4 overrideCache:(_Bool)arg5 sucessBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (void)onServiceInit;
- (void)getLiveInfoWithLiveId:(unsigned long long)arg1 finderUsername:(id)arg2 scene:(unsigned int)arg3 overrideCache:(_Bool)arg4 sucessBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
