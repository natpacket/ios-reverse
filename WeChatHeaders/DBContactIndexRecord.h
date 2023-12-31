//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBContactIndexRecord : NSObject <WCTTableCoding>
{
    int _type;
    NSString *_maxIndexedUserName;
    NSString *_unIndexedUsernames;
}

+ (void)__wcdb_column_constraint_57:(void *)arg1;
+ (id)swift_unIndexedUsernames;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)unIndexedUsernames;
+ (id)swift_maxIndexedUserName;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)maxIndexedUserName;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)type;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *unIndexedUsernames; // @synthesize unIndexedUsernames=_unIndexedUsernames;
@property(retain, nonatomic) NSString *maxIndexedUserName; // @synthesize maxIndexedUserName=_maxIndexedUserName;
@property(nonatomic) int type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

