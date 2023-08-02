//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIViewPropertyAnimator;

@interface MMModalTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _transitionType;
    double _velocityThreshold;
    CDUnknownBlockType _transitionComplete;
    UIPanGestureRecognizer *_panGesture;
    UIViewPropertyAnimator *_animator;
    unsigned long long _panGestureType;
    struct CGRect _presentedFinianFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long panGestureType; // @synthesize panGestureType=_panGestureType;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType transitionComplete; // @synthesize transitionComplete=_transitionComplete;
@property(nonatomic) struct CGRect presentedFinianFrame; // @synthesize presentedFinianFrame=_presentedFinianFrame;
@property(nonatomic) double velocityThreshold; // @synthesize velocityThreshold=_velocityThreshold;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void)handlePanGesture:(id)arg1;
- (void)setPanGesture:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)wantsInteractiveStart;
- (double)transitionDuration:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)setupAnimatorForTransition:(id)arg1;
- (struct CGRect)finalFrameForPresentedView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

