//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface DeviceStepItem : MMObject <PBCoding>
{
    unsigned int _uiTimeStamp;
    unsigned int _uiStep;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiStep;
+ (void)PBArrayAdd_uiTimeStamp;
@property(nonatomic) unsigned int uiStep; // @synthesize uiStep=_uiStep;
@property(nonatomic) unsigned int uiTimeStamp; // @synthesize uiTimeStamp=_uiTimeStamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

