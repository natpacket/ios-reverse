//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCTimelineTrashNextActionRecorder : NSObject <PBCoding>
{
    NSMutableDictionary *_records;
}

+ (void)clearAll;
+ (void)tryReportNextLocalId:(id)arg1 nextPublishId:(id)arg2;
+ (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_records;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

