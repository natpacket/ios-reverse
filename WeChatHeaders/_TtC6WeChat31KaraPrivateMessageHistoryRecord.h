//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat17KaraHistoryRecord.h"

#import "KaraHistoryRecordIdentifiable-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat31KaraPrivateMessageHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: isWeComContact
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (id)swift_isWeComContact;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)isWeComContact;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)localID;
+ (id)swift_session;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)session;
+ (id)swift_svrid;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)svrid;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)dayOfTheWeek;
+ (id)swift_hourOfTheDay;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)hourOfTheDay;
+ (id)swift_dateThatRecalled;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)dateThatRecalled;
+ (id)swift_dateThatHappened;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)dateThatHappened;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isWeComContact; // @synthesize isWeComContact;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *localID;
@property(nonatomic, copy) NSString *session;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *svrid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
