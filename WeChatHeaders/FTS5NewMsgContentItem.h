//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTS5NewMsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _reservedInt;
    NSString *_msg;
    NSString *_reservedText;
}

+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_virtual_table_16:(void *)arg1;
+ (void)__wcdb_virtual_table_15:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_reservedInt;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)reservedInt;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)userNameId;
+ (id)swift_msg;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)msg;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

