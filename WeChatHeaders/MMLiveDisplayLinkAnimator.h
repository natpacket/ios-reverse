//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface MMLiveDisplayLinkAnimator : NSObject
{
    double _duration;
    CDUnknownBlockType _animation;
    CDUnknownBlockType _completed;
    double _startTime;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completed; // @synthesize completed=_completed;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)invalidate;
- (void)animateWithDisplayLink:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDuration:(double)arg1 animationBlock:(CDUnknownBlockType)arg2 completedBlock:(CDUnknownBlockType)arg3;

@end

