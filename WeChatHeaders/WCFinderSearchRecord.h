//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderSearchRecord : NSObject <WCTTableCoding>
{
    unsigned int _searchTime;
    NSString *_searchContent;
}

+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_searchTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)searchTime;
+ (id)swift_searchContent;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)searchContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int searchTime; // @synthesize searchTime=_searchTime;
@property(copy, nonatomic) NSString *searchContent; // @synthesize searchContent=_searchContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

