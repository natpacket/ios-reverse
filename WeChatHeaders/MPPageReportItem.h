//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MPPageReportItem : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _itemId;
    unsigned int _a8KeyScene;
    unsigned int _enterScene;
    unsigned int _enterSubscene;
    long long _reportTime;
    NSString *_url;
    NSString *_sessionId;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)sessionId;
+ (id)swift_enterSubscene;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)enterSubscene;
+ (id)swift_enterScene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)enterScene;
+ (id)swift_a8KeyScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)a8KeyScene;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)url;
+ (id)swift_reportTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)reportTime;
+ (id)swift_itemId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)itemId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int enterSubscene; // @synthesize enterSubscene=_enterSubscene;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int a8KeyScene; // @synthesize a8KeyScene=_a8KeyScene;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

