//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ValueAnimatorListener;

@interface ValueAnimator : NSObject
{
    long long duration;
    long long startTime;
    long long playTime;
    int repeatCount;
    int repeatedTimes;
    unsigned long long animatorId;
    id <ValueAnimatorListener> animatorListener;
}

+ (void)RemoveAnimator:(long long)arg1;
+ (long long)AddAnimator:(id)arg1;
+ (void)HandleDisplayLink:(id)arg1;
+ (void)StopDisplayLink;
+ (void)StartDisplayLink;
- (long long)animatorId;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)setRepeatCount:(int)arg1;
- (void)setRepeatedTimes:(int)arg1;
- (int)repeatedTimes;
- (_Bool)isPlaying;
- (void)setCurrentPlayTime:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (long long)duration;
- (void)setListener:(id)arg1;
- (void)onAnimationFrame:(long long)arg1;
- (id)init;

@end

