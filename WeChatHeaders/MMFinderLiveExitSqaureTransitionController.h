//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveEnterSqaureTransitionController.h"

#import "MMFinderLiveEnterSqaurePanGestureHandlerDelegate-Protocol.h"

@class MMFinderLiveEnterSqaureTransitionContext, NSString;

@interface MMFinderLiveExitSqaureTransitionController : MMFinderLiveEnterSqaureTransitionController <MMFinderLiveEnterSqaurePanGestureHandlerDelegate>
{
    double _currentPlayerBottonHeight;
    struct CGRect _originPlayerControlViewFrame;
}

@property(nonatomic) double currentPlayerBottonHeight; // @synthesize currentPlayerBottonHeight=_currentPlayerBottonHeight;
@property(nonatomic) struct CGRect originPlayerControlViewFrame; // @synthesize originPlayerControlViewFrame=_originPlayerControlViewFrame;
- (void)animationDidEnd:(_Bool)arg1;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (void)performRecoverAnimator;
- (void)performAniamtorDelay:(double)arg1;
- (void)prepareForAnimation;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3 isPop:(_Bool)arg4;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(_Bool)arg1;
- (_Bool)isSpecialState;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

