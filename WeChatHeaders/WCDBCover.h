//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface WCDBCover : NSObject <WCTTableCoding>
{
    int _codingType;
    NSString *_username;
    NSString *_tid;
    NSData *_buffer;
}

+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_column_constraint_68:(void *)arg1;
+ (void)__wcdb_column_constraint_67:(void *)arg1;
+ (void)__wcdb_column_constraint_66:(void *)arg1;
+ (void)__wcdb_column_constraint_65:(void *)arg1;
+ (id)swift_codingType;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (const void *)codingType;
+ (id)swift_buffer;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (const void *)buffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (const void *)tid;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int codingType; // @synthesize codingType=_codingType;
@property(copy, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

