//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTS3MsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int userNameId;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int _reservedInt;
    NSString *msg;
    NSString *_reservedText;
}

+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_table_constraint_34:(void *)arg1;
+ (void)__wcdb_table_constraint_33:(void *)arg1;
+ (void)__wcdb_virtual_table_32:(void *)arg1;
+ (void)__wcdb_virtual_table_31:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_reservedInt;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)reservedInt;
+ (id)swift_msg;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)msg;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

