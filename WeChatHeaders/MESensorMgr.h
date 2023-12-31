//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, MEFramework;

@interface MESensorMgr : NSObject
{
    CMMotionManager *_motionMgr;
    MEFramework *_framework;
    double _interval;
}

+ (id)SafeNumber:(double)arg1 To:(double)arg2;
+ (id)SafeNumber:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) MEFramework *framework; // @synthesize framework=_framework;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (_Bool)enableAccelerometer;

@end

