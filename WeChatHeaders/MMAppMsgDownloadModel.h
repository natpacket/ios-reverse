//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMAppMsgDownloadModel : MMObject <NSCopying, WCTTableCoding>
{
    unsigned int _m_uiMesLocalID;
    unsigned int _appMsgState;
    unsigned int _msgCreateTime;
    NSString *_m_nsFromUsr;
    long long _newMsgId;
}

+ (id)genAMDItem:(id)arg1 state:(unsigned int)arg2;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)msgCreateTime;
+ (id)swift_appMsgState;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appMsgState;
+ (id)swift_m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiMesLocalID;
+ (id)swift_newMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)newMsgId;
+ (id)swift_m_nsFromUsr;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsFromUsr;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) unsigned int appMsgState; // @synthesize appMsgState=_appMsgState;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID=_m_uiMesLocalID;
@property(nonatomic) long long newMsgId; // @synthesize newMsgId=_newMsgId;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr=_m_nsFromUsr;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
