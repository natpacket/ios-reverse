//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface MMResCheckResponseData : NSObject <PBCoding>
{
    unsigned int _nextTime;
    NSData *_context;
}

+ (void)InvalidateCache;
+ (id)GetCached;
+ (_Bool)SaveData:(id)arg1;
+ (_Bool)SaveContext:(id)arg1 checkTime:(unsigned int)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_context;
+ (void)PBArrayAdd_nextTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(nonatomic) unsigned int nextTime; // @synthesize nextTime=_nextTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

