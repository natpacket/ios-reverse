//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCCommonCacheObj : MMObject <WCTTableCoding>
{
    unsigned int _lastUseTime;
    unsigned int _mediaType;
    NSString *_fileMd5;
    NSString *_filePath;
    NSString *_aggregateName;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_aggregateName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)aggregateName;
+ (id)swift_mediaType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)mediaType;
+ (id)swift_lastUseTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastUseTime;
+ (id)swift_filePath;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)filePath;
+ (id)swift_fileMd5;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)fileMd5;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aggregateName; // @synthesize aggregateName=_aggregateName;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int lastUseTime; // @synthesize lastUseTime=_lastUseTime;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
- (id)getAbsolutePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
