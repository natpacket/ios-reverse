//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderFeedSessionModel : NSObject <WCTTableCoding>
{
    NSString *_tid;
    unsigned long long _scene;
    NSString *_sessionBuffer;
    unsigned long long _cacheTime;
    unsigned long long _exposeTimeInMS;
    unsigned long long _exposeCount;
    NSString *_extraKey;
}

+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_extraKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)extraKey;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_sessionBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sessionBuffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
@property(nonatomic) unsigned long long exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long exposeTimeInMS; // @synthesize exposeTimeInMS=_exposeTimeInMS;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
