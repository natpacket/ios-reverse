//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSContactSearchItem : NSObject <WCTTableCoding>
{
    unsigned long long _contactType;
    NSString *_userName;
    NSString *_mainSearchContent;
    NSString *_groupMembers;
    NSString *_associatedGroups;
    NSString *_reservedText1;
    NSString *_reservedText2;
}

+ (void)__wcdb_column_constraint_94:(void *)arg1;
+ (void)__wcdb_column_constraint_93:(void *)arg1;
+ (void)__wcdb_column_constraint_92:(void *)arg1;
+ (void)__wcdb_virtual_table_91:(void *)arg1;
+ (void)__wcdb_virtual_table_90:(void *)arg1;
+ (id)swift_reservedText2;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (const void *)reservedText2;
+ (id)swift_reservedText1;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (const void *)reservedText1;
+ (id)swift_associatedGroups;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (const void *)associatedGroups;
+ (id)swift_contactType;
+ (const void *)__wcdb_synthesize_86:(void *)arg1;
+ (const void *)contactType;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_85:(void *)arg1;
+ (const void *)userName;
+ (id)swift_groupMembers;
+ (const void *)__wcdb_synthesize_84:(void *)arg1;
+ (const void *)groupMembers;
+ (id)swift_mainSearchContent;
+ (const void *)__wcdb_synthesize_83:(void *)arg1;
+ (const void *)mainSearchContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText2; // @synthesize reservedText2=_reservedText2;
@property(retain, nonatomic) NSString *reservedText1; // @synthesize reservedText1=_reservedText1;
@property(retain, nonatomic) NSString *associatedGroups; // @synthesize associatedGroups=_associatedGroups;
@property(retain, nonatomic) NSString *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) NSString *mainSearchContent; // @synthesize mainSearchContent=_mainSearchContent;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long contactType; // @synthesize contactType=_contactType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

