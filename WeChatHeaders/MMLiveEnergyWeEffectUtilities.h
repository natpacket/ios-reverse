//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveEnergyWeEffectUtilities : NSObject
{
}

+ (int)occlusionSegmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
+ (long long)occlusionSegmentItemLevelFromConfig:(int)arg1;
+ (int)faceAlignmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
+ (long long)faceAlignmentItemLevelFromConfig:(int)arg1;
+ (_Bool)isFaceAlignmentEqualWithSettings1:(const void *)arg1 settings2:(const void *)arg2;
+ (_Bool)adjustSettings:(void *)arg1 toLevel:(long long)arg2;
+ (long long)faceAlignmentSettingsLevelFromSettings:(const void *)arg1;

@end

