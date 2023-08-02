//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WAPermissionLaunchRuntimeInfo : NSObject <PBCoding, WCTColumnCoding>
{
    _Bool _canShowStartWording;
    unsigned int _blockReason;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_canShowStartWording;
+ (void)PBArrayAdd_blockReason;
@property(nonatomic) _Bool canShowStartWording; // @synthesize canShowStartWording=_canShowStartWording;
@property(nonatomic) unsigned int blockReason; // @synthesize blockReason=_blockReason;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

