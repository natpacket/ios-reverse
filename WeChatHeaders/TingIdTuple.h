//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface TingIdTuple : NSObject <PBCoding>
{
    NSString *listenId;
    NSString *baseListenId;
}

+ (void)initialize;
+ (void)PBArrayAdd_baseListenId;
+ (void)PBArrayAdd_listenId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *baseListenId; // @synthesize baseListenId;
@property(copy, nonatomic) NSString *listenId; // @synthesize listenId;
@property(readonly, copy) NSString *description;
- (id)initWithListenItem:(id)arg1;
- (id)initWithListenId:(id)arg1 baseListenId:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

