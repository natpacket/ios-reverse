//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAAnimationGroup, NSString;

@interface CameraScanGoodsScanDotView : MMUIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    CAAnimationGroup *_groupAnimation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
