//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WSNumberRedPointList : NSObject <PBCoding>
{
    unsigned long long _clearedNumSeq;
    NSMutableArray *_redPointArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_clearedNumSeq;
+ (void)PBArrayAdd_redPointArr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *redPointArr; // @synthesize redPointArr=_redPointArr;
@property(nonatomic) unsigned long long clearedNumSeq; // @synthesize clearedNumSeq=_clearedNumSeq;
- (id)dictInfo;
- (_Bool)insertRedPointInfo:(id)arg1;
- (void)safeAddObject:(id)arg1;
- (id)firstObject;
- (unsigned long long)count;
- (void)clear:(unsigned long long)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

