//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface SessionDeleteInfo : NSObject <WCTTableCoding>
{
    NSString *m_userName;
    unsigned int m_lastMsgSequence;
    unsigned int m_deleteTime;
    long long _SESSION_DEL_COL_INTRES1;
    long long _SESSION_DEL_COL_INTRES2;
    long long _SESSION_DEL_COL_INTRES3;
    NSString *_SESSION_DEL_COL_STRRES1;
    NSString *_SESSION_DEL_COL_STRRES2;
    NSString *_SESSION_DEL_COL_STRRES3;
}

+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_STRRES3;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)SESSION_DEL_COL_STRRES3;
+ (id)swift_SESSION_DEL_COL_STRRES2;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)SESSION_DEL_COL_STRRES2;
+ (id)swift_SESSION_DEL_COL_STRRES1;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)SESSION_DEL_COL_STRRES1;
+ (id)swift_SESSION_DEL_COL_INTRES3;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)SESSION_DEL_COL_INTRES3;
+ (id)swift_SESSION_DEL_COL_INTRES2;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)SESSION_DEL_COL_INTRES2;
+ (id)swift_SESSION_DEL_COL_INTRES1;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)SESSION_DEL_COL_INTRES1;
+ (id)swift_m_deleteTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_deleteTime;
+ (id)swift_m_lastMsgSequence;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_lastMsgSequence;
+ (id)swift_m_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES3; // @synthesize SESSION_DEL_COL_STRRES3=_SESSION_DEL_COL_STRRES3;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES2; // @synthesize SESSION_DEL_COL_STRRES2=_SESSION_DEL_COL_STRRES2;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES1; // @synthesize SESSION_DEL_COL_STRRES1=_SESSION_DEL_COL_STRRES1;
@property(nonatomic) long long SESSION_DEL_COL_INTRES3; // @synthesize SESSION_DEL_COL_INTRES3=_SESSION_DEL_COL_INTRES3;
@property(nonatomic) long long SESSION_DEL_COL_INTRES2; // @synthesize SESSION_DEL_COL_INTRES2=_SESSION_DEL_COL_INTRES2;
@property(nonatomic) long long SESSION_DEL_COL_INTRES1; // @synthesize SESSION_DEL_COL_INTRES1=_SESSION_DEL_COL_INTRES1;
@property(nonatomic) unsigned int m_deleteTime; // @synthesize m_deleteTime;
@property(nonatomic) unsigned int m_lastMsgSequence; // @synthesize m_lastMsgSequence;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

