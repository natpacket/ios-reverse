//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface TextStatePassthroughIconList : NSObject <PBCoding>
{
    unsigned long long _key;
    NSMutableArray *_passthroughIconList;
}

+ (void)initialize;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_passthroughIconList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *passthroughIconList; // @synthesize passthroughIconList=_passthroughIconList;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)initWithAgenda:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

