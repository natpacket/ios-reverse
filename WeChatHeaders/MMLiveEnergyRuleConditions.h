//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface MMLiveEnergyRuleConditions : NSObject
{
    NSArray *_thermalStates;
    NSArray *_overheatingTorchStatuses;
    NSArray *_batteryStates;
    NSNumber *_minimumBatteryLevel;
    NSNumber *_maximumBatteryLevel;
    NSArray *_networkTypes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *networkTypes; // @synthesize networkTypes=_networkTypes;
@property(retain, nonatomic) NSNumber *maximumBatteryLevel; // @synthesize maximumBatteryLevel=_maximumBatteryLevel;
@property(retain, nonatomic) NSNumber *minimumBatteryLevel; // @synthesize minimumBatteryLevel=_minimumBatteryLevel;
@property(copy, nonatomic) NSArray *batteryStates; // @synthesize batteryStates=_batteryStates;
@property(copy, nonatomic) NSArray *overheatingTorchStatuses; // @synthesize overheatingTorchStatuses=_overheatingTorchStatuses;
@property(copy, nonatomic) NSArray *thermalStates; // @synthesize thermalStates=_thermalStates;

@end
