//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDBSessionLastTimeObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    unsigned int m_sessionLastTime;
}

+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_m_sessionLastTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_sessionLastTime;
+ (id)swift_m_sessionName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_sessionLastTime; // @synthesize m_sessionLastTime;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

