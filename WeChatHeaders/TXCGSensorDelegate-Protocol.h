//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TXCGSensor;

@protocol TXCGSensorDelegate <NSObject>

@optional
- (void)gSensor:(TXCGSensor *)arg1 onChangeRenderRotation:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
- (void)gSensor:(TXCGSensor *)arg1 onRotationChange:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
@end
