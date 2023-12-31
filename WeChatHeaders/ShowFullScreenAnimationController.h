//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;
@protocol TransitioningAnimationDelegate;

@interface ShowFullScreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    id <TransitioningAnimationDelegate> m_delegate;
    _Bool _shouldUpdateFromViewWhenEnter;
    double _duration;
    struct CGRect _rcOriginFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUpdateFromViewWhenEnter; // @synthesize shouldUpdateFromViewWhenEnter=_shouldUpdateFromViewWhenEnter;
@property(nonatomic) struct CGRect rcOriginFrame; // @synthesize rcOriginFrame=_rcOriginFrame;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <TransitioningAnimationDelegate> delegate; // @synthesize delegate=m_delegate;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

