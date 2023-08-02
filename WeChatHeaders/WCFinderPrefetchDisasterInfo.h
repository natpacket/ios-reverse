//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderPrefetchDisasterInfo : NSObject <PBCoding>
{
    unsigned long long _lastRequestTimestamp;
    unsigned long long _requestInterval;
}

+ (void)initialize;
+ (void)PBArrayAdd_requestInterval;
+ (void)PBArrayAdd_lastRequestTimestamp;
@property(nonatomic) unsigned long long requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) unsigned long long lastRequestTimestamp; // @synthesize lastRequestTimestamp=_lastRequestTimestamp;
@property(readonly, copy) NSString *description;
- (unsigned long long)nextAllowedRequestTimestamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
