//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCUnReadStory : NSObject <WCTTableCoding>
{
    unsigned int _postTime;
    unsigned int _readTimestamp;
    NSString *_username;
    NSString *_maxTid;
    NSString *_readTid;
}

+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_readTimestamp;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)readTimestamp;
+ (id)swift_postTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)postTime;
+ (id)swift_readTid;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)readTid;
+ (id)swift_maxTid;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)maxTid;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int readTimestamp; // @synthesize readTimestamp=_readTimestamp;
@property(nonatomic) unsigned int postTime; // @synthesize postTime=_postTime;
@property(retain, nonatomic) NSString *readTid; // @synthesize readTid=_readTid;
@property(retain, nonatomic) NSString *maxTid; // @synthesize maxTid=_maxTid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

