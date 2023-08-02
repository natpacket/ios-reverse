//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import "MMLiveObjectManipulationGestureRecognizing-Protocol.h"

@class NSString, UIView;

@interface MMLiveObjectSingleTouchManipulationGestureRecognizer : UIGestureRecognizer <MMLiveObjectManipulationGestureRecognizing>
{
    UIView *_manipulatedView;
    struct CGPoint _touchOffset;
    struct CGAffineTransformComponents _transformComponents;
    struct CGAffineTransformComponents _transformComponentsAtGesetureBeginning;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(nonatomic) __weak UIView *manipulatedView; // @synthesize manipulatedView=_manipulatedView;
@property(nonatomic) struct CGAffineTransformComponents transformComponentsAtGesetureBeginning; // @synthesize transformComponentsAtGesetureBeginning=_transformComponentsAtGesetureBeginning;
@property(nonatomic) struct CGAffineTransformComponents transformComponents; // @synthesize transformComponents=_transformComponents;
- (struct CGAffineTransformComponents)decomposeManipulationTransform:(struct CGAffineTransform)arg1;
- (void)resetState;
- (void)updateTransformWithTouch:(id)arg1;
- (void)updateTransformAndTouchPositionWithTouches:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)overrideCurrentTransformComponents:(struct CGAffineTransformComponents)arg1;
@property(readonly, nonatomic) struct CGAffineTransform transformAtGesetureBeginning;
@property(readonly, nonatomic) struct CGAffineTransform transform;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
