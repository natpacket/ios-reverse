//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class MMImageCropPopTransitionContext, NSString;
@protocol MMImageCropVCAnimatedTransitionDelegate;

@interface MMImageCropPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    MMImageCropPopTransitionContext *_context;
    id <MMImageCropVCAnimatedTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMImageCropVCAnimatedTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMImageCropPopTransitionContext *context; // @synthesize context=_context;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

