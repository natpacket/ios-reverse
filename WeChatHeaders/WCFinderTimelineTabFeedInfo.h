//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderTimelineTabFeedInfo : NSObject <WCTTableCoding>
{
    NSString *_tid;
    unsigned long long _tabType;
    unsigned long long _feedIndex;
    unsigned long long _feedType;
}

+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_feedType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)feedType;
+ (id)swift_feedIndex;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)feedIndex;
+ (id)swift_tabType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)tabType;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long feedIndex; // @synthesize feedIndex=_feedIndex;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

