//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;
@protocol MMFinderLiveEnterSqaurePanGestureHandlerDelegate;

@interface MMFinderLiveEnterSqaurePanGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isInteracting;
    _Bool _isAnimating;
    _Bool _forbidTransition;
    id <MMFinderLiveEnterSqaurePanGestureHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    UIPanGestureRecognizer *_panGesutre;
    struct CGPoint _gestureStartPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint gestureStartPoint; // @synthesize gestureStartPoint=_gestureStartPoint;
@property(nonatomic) _Bool forbidTransition; // @synthesize forbidTransition=_forbidTransition;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesutre; // @synthesize panGesutre=_panGesutre;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) __weak id <MMFinderLiveEnterSqaurePanGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationEnd:(_Bool)arg1;
- (double)progressFromPanGesture:(id)arg1 startY:(double)arg2;
- (double)progressFromCurGesturer:(id)arg1;
- (void)finishGestureRecognizer:(double)arg1;
- (void)finishGestureRecognizer:(double)arg1 completeProgress:(double)arg2;
- (void)updateGestureRecognizer:(double)arg1;
- (void)startGestureRecognizer;
- (void)setupGestureHandlerTarget:(id)arg1;
- (void)onHandleGesture:(id)arg1;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

