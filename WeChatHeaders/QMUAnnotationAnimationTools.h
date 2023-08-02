//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QMUAnnotationAnimationTools : NSObject
{
}

+ (_Bool)checkPointOnSegment:(struct CLLocationCoordinate2D)arg1 withStartPoint:(struct CLLocationCoordinate2D)arg2 andEndPoint:(struct CLLocationCoordinate2D)arg3;
+ (double)getTranslateTotalDistance:(id)arg1;
+ (double)annotationViewRotation:(id)arg1;
+ (id)compressLocationData:(id)arg1;
+ (id)validateLocationData:(id)arg1;
+ (id)createRotateAnimationWithLocations:(id)arg1 initialRotation:(double)arg2 duration:(double)arg3 distance:(double)arg4;
+ (id)createTranslateAnimationWithLocations:(id)arg1 duration:(double)arg2;

@end

