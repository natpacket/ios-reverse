//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSContactPinyinSearchItem : NSObject <WCTTableCoding>
{
    NSString *_pinyinContent;
    NSString *_reservedText;
}

+ (void)__wcdb_virtual_table_98:(void *)arg1;
+ (void)__wcdb_virtual_table_97:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_pinyinContent;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (const void *)pinyinContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(retain, nonatomic) NSString *pinyinContent; // @synthesize pinyinContent=_pinyinContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

