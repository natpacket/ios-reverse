//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMLocationDBRecord : NSObject <WCTTableCoding>
{
    int _m_latitude;
    int _m_longitude;
    int _m_type;
    NSString *_m_address;
}

+ (id)swift_m_type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_type;
+ (id)swift_m_address;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_address;
+ (id)swift_m_longitude;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_longitude;
+ (id)swift_m_latitude;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_latitude;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int m_type; // @synthesize m_type=_m_type;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
@property(nonatomic) int m_longitude; // @synthesize m_longitude=_m_longitude;
@property(nonatomic) int m_latitude; // @synthesize m_latitude=_m_latitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
