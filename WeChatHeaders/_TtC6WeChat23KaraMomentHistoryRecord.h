//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat17KaraHistoryRecord.h"

#import "KaraHistoryRecordIdentifiable-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class KaraTextFeature_Embedding1x32, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat23KaraMomentHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: userName
    // Error parsing type: , name: isWeishang
    // Error parsing type: , name: cityOfPOI
    // Error parsing type: , name: feedWeishangType
    // Error parsing type: , name: sellerWeishangType
    // Error parsing type: , name: feedWeishangStatus
    // Error parsing type: , name: isTemplateFromMiaojian
    // Error parsing type: , name: textEmbedding1x32
}

+ (struct Expression)identified:(id)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_index_28:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_table_constraint_21:(void *)arg1;
+ (void)__wcdb_table_constraint_20:(void *)arg1;
+ (id)swift_textEmbedding1x32;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)textEmbedding1x32;
+ (id)swift_isTemplateFromMiaojian;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)isTemplateFromMiaojian;
+ (id)swift_feedWeishangStatus;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)feedWeishangStatus;
+ (id)swift_sellerWeishangType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)sellerWeishangType;
+ (id)swift_feedWeishangType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)feedWeishangType;
+ (id)swift_cityOfPOI;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)cityOfPOI;
+ (id)swift_isWeishang;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)isWeishang;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)userName;
+ (id)swift_position;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)position;
+ (id)swift_itemID;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)itemID;
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
@property(nonatomic, retain) KaraTextFeature_Embedding1x32 *textEmbedding1x32;
@property(nonatomic) _Bool isTemplateFromMiaojian; // @synthesize isTemplateFromMiaojian;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *feedWeishangStatus;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *sellerWeishangType;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *feedWeishangType;
@property(nonatomic, copy) NSString *cityOfPOI;
@property(nonatomic) _Bool isWeishang; // @synthesize isWeishang;
@property(nonatomic, copy) NSString *userName;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *position;
@property(nonatomic, copy) NSString *itemID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

