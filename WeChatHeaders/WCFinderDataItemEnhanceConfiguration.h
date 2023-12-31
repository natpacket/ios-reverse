//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCFinderDataItemEnhanceConfiguration : NSObject <PBCoding, WCTColumnCoding>
{
    NSMutableArray *_listenEventList;
    NSMutableArray *_detail;
}

+ (id)configurationWithConfig:(id)arg1 isFeedContainVideo:(_Bool)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_detail;
+ (void)PBArrayAdd_listenEventList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSMutableArray *listenEventList; // @synthesize listenEventList=_listenEventList;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

