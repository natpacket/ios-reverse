//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString, WXPBGeneratedMessage;

@interface GameChatRoomPbDbData : NSObject <WCTTableCoding>
{
    NSString *_keyWithCategroy;
    NSData *_pbData;
    NSString *_additionalInfo;
    NSString *_pbClassName;
    double _createTime;
    double _expireDuration;
    WXPBGeneratedMessage *_pbMsg;
    NSString *_category;
}

+ (id)dbKeyFromCategory:(id)arg1 key:(id)arg2;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)swift_additionalInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)additionalInfo;
+ (id)swift_expireDuration;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)expireDuration;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_pbClassName;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)pbClassName;
+ (id)swift_pbData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)pbData;
+ (id)swift_category;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)category;
+ (id)swift_keyWithCategroy;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)keyWithCategroy;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) WXPBGeneratedMessage *pbMsg; // @synthesize pbMsg=_pbMsg;
@property(nonatomic) double expireDuration; // @synthesize expireDuration=_expireDuration;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *pbClassName; // @synthesize pbClassName=_pbClassName;
@property(retain, nonatomic) NSString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) NSData *pbData; // @synthesize pbData=_pbData;
@property(retain, nonatomic) NSString *keyWithCategroy; // @synthesize keyWithCategroy=_keyWithCategroy;
- (_Bool)isOfPbClass:(Class)arg1;
- (id)initWithCategory:(id)arg1 key:(id)arg2 pbData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
