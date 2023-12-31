//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WALocalStorageDataInfo_1 : NSObject <WCTTableCoding>
{
    int _storageId;
    unsigned int _keyAndDataLength;
    unsigned int _lastModifyTime;
    NSString *_key;
    NSString *_dataType;
    NSString *_data;
}

+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (id)swift_data;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)data;
+ (id)swift_dataType;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)dataType;
+ (id)swift_lastModifyTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)lastModifyTime;
+ (id)swift_keyAndDataLength;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)keyAndDataLength;
+ (id)swift_key;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)key;
+ (id)swift_storageId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)storageId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int keyAndDataLength; // @synthesize keyAndDataLength=_keyAndDataLength;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int storageId; // @synthesize storageId=_storageId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

