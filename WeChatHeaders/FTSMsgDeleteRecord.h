//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSMsgDeleteRecord : NSObject <WCTTableCoding>
{
    unsigned int _userNameId;
    unsigned int _localId;
}

+ (void)__wcdb_table_constraint_53:(void *)arg1;
+ (void)__wcdb_table_constraint_52:(void *)arg1;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)localId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

