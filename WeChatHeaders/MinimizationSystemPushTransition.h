//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMUIViewControllerTransitionInfo-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIViewController;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationSystemPushTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    id <MinimizationNewTransitionDelegate> _delegate;
    UIViewController *_animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(nonatomic) __weak id <MinimizationNewTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
