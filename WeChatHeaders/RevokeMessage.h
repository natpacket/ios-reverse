//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface RevokeMessage : NSObject <WCTTableCoding>
{
    long long m_n64SvrId;
    NSString *m_nsContent;
    unsigned int m_uiCreateTime;
    long long _MSG_REVOKE_COL_INTRES2;
    long long _MSG_REVOKE_COL_INTRES3;
    NSString *_MSG_REVOKE_COL_STRRES1;
    NSString *_MSG_REVOKE_COL_STRRES2;
    NSString *_MSG_REVOKE_COL_STRRES3;
}

+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_STRRES3;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)MSG_REVOKE_COL_STRRES3;
+ (id)swift_MSG_REVOKE_COL_STRRES2;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)MSG_REVOKE_COL_STRRES2;
+ (id)swift_MSG_REVOKE_COL_STRRES1;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)MSG_REVOKE_COL_STRRES1;
+ (id)swift_MSG_REVOKE_COL_INTRES3;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)MSG_REVOKE_COL_INTRES3;
+ (id)swift_MSG_REVOKE_COL_INTRES2;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)MSG_REVOKE_COL_INTRES2;
+ (id)swift_m_uiCreateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiCreateTime;
+ (id)swift_m_nsContent;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_nsContent;
+ (id)swift_m_n64SvrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_n64SvrId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES3; // @synthesize MSG_REVOKE_COL_STRRES3=_MSG_REVOKE_COL_STRRES3;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES2; // @synthesize MSG_REVOKE_COL_STRRES2=_MSG_REVOKE_COL_STRRES2;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES1; // @synthesize MSG_REVOKE_COL_STRRES1=_MSG_REVOKE_COL_STRRES1;
@property(nonatomic) long long MSG_REVOKE_COL_INTRES3; // @synthesize MSG_REVOKE_COL_INTRES3=_MSG_REVOKE_COL_INTRES3;
@property(nonatomic) long long MSG_REVOKE_COL_INTRES2; // @synthesize MSG_REVOKE_COL_INTRES2=_MSG_REVOKE_COL_INTRES2;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

