//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface WCStoryChatRoomSync : NSObject <WCTTableCoding>
{
    unsigned int _nextSyncTime;
    NSString *_chatRoomName;
    NSData *_buffer;
}

+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_buffer;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)buffer;
+ (id)swift_nextSyncTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)nextSyncTime;
+ (id)swift_chatRoomName;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)chatRoomName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int nextSyncTime; // @synthesize nextSyncTime=_nextSyncTime;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

