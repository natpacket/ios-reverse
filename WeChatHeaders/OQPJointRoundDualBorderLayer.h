//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface OQPJointRoundDualBorderLayer : CAShapeLayer
{
    CAShapeLayer *_innerBorderLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *innerBorderLayer; // @synthesize innerBorderLayer=_innerBorderLayer;
- (void)layoutSublayers;
@property(nonatomic) struct CGColor *innerBorderColor;
@property(nonatomic) struct CGColor *outerBorderColor;
@property(nonatomic) double innerBorderWidth;
@property(nonatomic) double outerBorderWidth;
- (void)setFrame:(struct CGRect)arg1 animationDuration:(double)arg2 timingFunction:(id)arg3;
- (id)init;

@end

