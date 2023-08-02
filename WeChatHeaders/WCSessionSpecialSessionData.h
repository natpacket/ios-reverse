//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface WCSessionSpecialSessionData : MMObject <NSCopying>
{
    unsigned int _logID;
    NSString *_sid;
    NSString *_sessionId;
    NSString *_pageName;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    unsigned long long _hashcode;
    NSString *_finderContextID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSString *finderContextID; // @synthesize finderContextID=_finderContextID;
@property(nonatomic) unsigned long long hashcode; // @synthesize hashcode=_hashcode;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;

@end
