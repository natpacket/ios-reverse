//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCStoryPostLimitObj : NSObject <PBCoding>
{
    unsigned int _hadPostedCount;
    unsigned int _nextPostPeriod;
    unsigned int _lastPostSuccTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastPostSuccTime;
+ (void)PBArrayAdd_nextPostPeriod;
+ (void)PBArrayAdd_hadPostedCount;
@property(nonatomic) unsigned int lastPostSuccTime; // @synthesize lastPostSuccTime=_lastPostSuccTime;
@property(nonatomic) unsigned int nextPostPeriod; // @synthesize nextPostPeriod=_nextPostPeriod;
@property(nonatomic) unsigned int hadPostedCount; // @synthesize hadPostedCount=_hadPostedCount;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

