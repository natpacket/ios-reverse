//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBRoomHistory : NSObject <WCTTableCoding>
{
    NSString *_chatName;
    unsigned long long _historyId;
    long long _msgServerId;
}

+ (void)__wcdb_index_176:(void *)arg1;
+ (void)__wcdb_index_175:(void *)arg1;
+ (void)__wcdb_table_constraint_174:(void *)arg1;
+ (void)__wcdb_table_constraint_173:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_172:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_historyId;
+ (const void *)__wcdb_synthesize_171:(void *)arg1;
+ (const void *)historyId;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_170:(void *)arg1;
+ (const void *)chatName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

