//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface _TtC6WeChat42KaraProphetBehaviorExtractFeaturesAnalysis : NSObject <PBCoding, WCTColumnCoding>
{
    // Error parsing type: , name: time
    // Error parsing type: , name: heaviest
    // Error parsing type: , name: nulls
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_nulls;
+ (void)PBArrayAdd_heaviest;
+ (void)PBArrayAdd_time;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *nulls;
@property(nonatomic, copy) NSDictionary *heaviest;
@property(nonatomic, retain) NSNumber *time;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

