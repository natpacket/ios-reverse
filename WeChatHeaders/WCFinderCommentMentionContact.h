//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderCommentMentionContact : NSObject <WCTTableCoding>
{
    NSString *_username;
    unsigned long long _mentionedTime;
}

+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_mentionedTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)mentionedTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mentionedTime; // @synthesize mentionedTime=_mentionedTime;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

