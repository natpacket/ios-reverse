//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCStoryUserData : NSObject <WCTTableCoding>
{
    unsigned int _postCount;
    unsigned int _lastPostTime;
    NSString *_userName;
}

+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_lastPostTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)lastPostTime;
+ (id)swift_postCount;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)postCount;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastPostTime; // @synthesize lastPostTime=_lastPostTime;
@property(nonatomic) unsigned int postCount; // @synthesize postCount=_postCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
