//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCIdOwner : NSObject <WCTTableCoding>
{
    NSString *_Id;
    NSString *_username;
}

+ (void)__wcdb_column_constraint_78:(void *)arg1;
+ (void)__wcdb_column_constraint_77:(void *)arg1;
+ (void)__wcdb_column_constraint_76:(void *)arg1;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (const void *)username;
+ (id)swift_Id;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (const void *)Id;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *Id; // @synthesize Id=_Id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
