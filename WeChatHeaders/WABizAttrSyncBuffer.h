//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface WABizAttrSyncBuffer : NSObject <WCTTableCoding>
{
    unsigned int _lastUpdateTime;
    NSString *_userName;
    NSData *_version;
}

+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)version;
+ (id)swift_lastUpdateTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)lastUpdateTime;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

