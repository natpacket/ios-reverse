//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderRotationHelper : NSObject
{
}

+ (void)adjustCurrentSupportOrientationWith:(id)arg1;
+ (void)startForcedRotationToPortraitWithVC:(id)arg1;
+ (void)forceRotateToOrientation:(long long)arg1 vc:(id)arg2;
+ (long long)transferOrientationMaskToOrientation:(unsigned long long)arg1;
+ (unsigned long long)transferToOrientationMaskFromOrientation:(long long)arg1;

@end

