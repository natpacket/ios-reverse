//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveEnterSqaureTransitionContext, MMFinderLiveTaskId, MMLiveContainerLogic, MMUIViewController;

@protocol MMLiveContainerLogicTargetViewControllerDelegate <NSObject>

@optional
- (MMFinderLiveEnterSqaureTransitionContext *)getTargetTransitionContext:(_Bool)arg1 fromVC:(MMUIViewController *)arg2;
- (void)onFromVcTransitionEnd:(MMLiveContainerLogic *)arg1 liveTaskId:(MMFinderLiveTaskId *)arg2 isPop:(_Bool)arg3 isComplete:(_Bool)arg4;
- (void)onFromVcTransitionBegin:(MMLiveContainerLogic *)arg1 liveTaskId:(MMFinderLiveTaskId *)arg2 isPop:(_Bool)arg3;
@end
