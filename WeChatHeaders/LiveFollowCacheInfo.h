//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface LiveFollowCacheInfo : NSObject <PBCoding>
{
    _Bool _isFinderBizLive;
    unsigned int _liveStartTime;
    unsigned long long _liveTaskId;
}

+ (void)initialize;
+ (void)PBArrayAdd_isFinderBizLive;
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_liveTaskId;
@property(nonatomic) _Bool isFinderBizLive; // @synthesize isFinderBizLive=_isFinderBizLive;
@property(nonatomic) unsigned int liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(nonatomic) unsigned long long liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
