//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDBMigrationTagObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    NSString *m_fileName;
    long long m_startTime;
    long long m_endTime;
}

+ (id)swift_m_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_endTime;
+ (id)swift_m_startTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_startTime;
+ (id)swift_m_fileName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_fileName;
+ (id)swift_m_sessionName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;
@property(retain, nonatomic) NSString *m_fileName; // @synthesize m_fileName;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

