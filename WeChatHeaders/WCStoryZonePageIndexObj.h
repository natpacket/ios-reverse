//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCStoryZonePageIndexObj : NSObject <WCTTableCoding>
{
    int _localTimeZone;
    NSString *_date;
    NSString *_tid;
    unsigned long long _count;
}

+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (id)swift_count;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)count;
+ (id)swift_localTimeZone;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)localTimeZone;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)tid;
+ (id)swift_date;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)date;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) int localTimeZone; // @synthesize localTimeZone=_localTimeZone;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

