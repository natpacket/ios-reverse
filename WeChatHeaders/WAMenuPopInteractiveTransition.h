//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol WAPopInteractiveTransitionDelegate;

@interface WAMenuPopInteractiveTransition : NSObject <UIGestureRecognizerDelegate>
{
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    _Bool _shouldForceCancel;
    _Bool _isLeftEdge;
    _Bool _shouldAutoComplete;
    id <WAPopInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAutoComplete; // @synthesize shouldAutoComplete=_shouldAutoComplete;
@property(nonatomic) _Bool isLeftEdge; // @synthesize isLeftEdge=_isLeftEdge;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
@property(nonatomic) __weak id <WAPopInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (_Bool)isInteracting;
- (id)interactivePopTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
