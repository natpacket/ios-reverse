//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MinimizeAdsorbFloatingViewInfo : MMObject <PBCoding>
{
    double _positionX;
    double _positionY;
    NSString *_aggreSessionId;
    unsigned long long _aggreSessionIdCreateTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_aggreSessionIdCreateTime;
+ (void)PBArrayAdd_aggreSessionId;
+ (void)PBArrayAdd_positionY;
+ (void)PBArrayAdd_positionX;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aggreSessionIdCreateTime; // @synthesize aggreSessionIdCreateTime=_aggreSessionIdCreateTime;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(nonatomic) double positionY; // @synthesize positionY=_positionY;
@property(nonatomic) double positionX; // @synthesize positionX=_positionX;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

