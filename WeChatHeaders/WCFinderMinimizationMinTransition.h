//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class MinimizeTaskData, NSString;
@protocol MinimizeTransitionInterface;

@interface WCFinderMinimizationMinTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString *_taskBizName;
    NSString *_taskBizKey;
    MinimizeTaskData *_taskData;
    id <MinimizeTransitionInterface> _transitionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MinimizeTransitionInterface> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(copy, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
- (struct CGRect)calculateNoScaleRectFromOriginRect:(struct CGRect)arg1 minimizeFrame:(struct CGRect)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

