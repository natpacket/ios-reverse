//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAExptPermissionInfo : NSObject <WCTTableCoding>
{
    NSString *_appID;
    long long _issueTime;
    NSString *_opConfig;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_opConfig;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)opConfig;
+ (id)swift_issueTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)issueTime;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *opConfig; // @synthesize opConfig=_opConfig;
@property(nonatomic) long long issueTime; // @synthesize issueTime=_issueTime;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

