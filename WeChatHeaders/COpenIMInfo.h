//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface COpenIMInfo : NSObject <PBCoding>
{
    unsigned int _customInfoVisible;
    unsigned int _resSubType;
    NSString *_openIMDescId;
    NSString *_finderUsername;
    unsigned long long _flags;
    NSString *_customInfo;
    NSArray *_customItems;
}

+ (void)initialize;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_resSubType;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_customInfoVisible;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned int customInfoVisible; // @synthesize customInfoVisible=_customInfoVisible;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId=_openIMDescId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
