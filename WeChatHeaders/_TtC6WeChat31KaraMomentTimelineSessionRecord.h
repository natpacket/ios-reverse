//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat17KaraHistoryRecord.h"

#import "KaraHistoryRecordIdentifiable-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSDate, NSString;

@interface _TtC6WeChat31KaraMomentTimelineSessionRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_index_41:(void *)arg1;
+ (void)__wcdb_index_40:(void *)arg1;
+ (void)__wcdb_index_39:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)dayOfTheWeek;
+ (id)swift_hourOfTheDay;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)hourOfTheDay;
+ (id)swift_dateThatRecalled;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)dateThatRecalled;
+ (id)swift_dateThatHappened;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)dateThatHappened;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (id)init;
@property(nonatomic, copy) NSDate *dateThatLeaved;
@property(nonatomic, copy) NSDate *dateThatEntered;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

