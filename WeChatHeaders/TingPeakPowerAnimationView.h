//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CircleView, NSMutableArray, UIColor;

@interface TingPeakPowerAnimationView : MMUIView
{
    _Bool _animating;
    _Bool _circleAnimating;
    NSMutableArray *_peakPowerArray;
    CircleView *_circleView;
    CircleView *_circleView2;
    CircleView *_circleView3;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CircleView *circleView3; // @synthesize circleView3=_circleView3;
@property(retain, nonatomic) CircleView *circleView2; // @synthesize circleView2=_circleView2;
@property(retain, nonatomic) CircleView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) _Bool circleAnimating; // @synthesize circleAnimating=_circleAnimating;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableArray *peakPowerArray; // @synthesize peakPowerArray=_peakPowerArray;
- (void)startPeakPowerAnimate;
- (void)animateCircle3;
- (void)setPeakPower:(float)arg1;
- (void)stopAnimate;
- (void)startAnimate;
- (void)initCircleView3WithSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andColor:(id)arg2;

@end

