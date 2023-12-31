//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSNumber, NSString;

@interface WCFinderListenEvent : NSObject <PBCoding>
{
    NSNumber *_listenEventType;
    double _playPercent;
    double _stayTimeSecond;
}

+ (void)initialize;
+ (void)PBArrayAdd_stayTimeSecond;
+ (void)PBArrayAdd_playPercent;
+ (void)PBArrayAdd_listenEventType;
- (void).cxx_destruct;
@property(nonatomic) double stayTimeSecond; // @synthesize stayTimeSecond=_stayTimeSecond;
@property(nonatomic) double playPercent; // @synthesize playPercent=_playPercent;
@property(retain, nonatomic) NSNumber *listenEventType; // @synthesize listenEventType=_listenEventType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

