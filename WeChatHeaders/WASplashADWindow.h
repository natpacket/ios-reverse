//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "CAAnimationDelegate-Protocol.h"
#import "WAAppTansitionControllerDelegate-Protocol.h"

@class NSString, UIViewController, WAAppTansitionController, WASplashADViewController;

@interface WASplashADWindow : MMUIWindow <CAAnimationDelegate, WAAppTansitionControllerDelegate>
{
    WASplashADViewController *_adRootViewController;
    UIViewController *_firstScreenViewController;
    WAAppTansitionController *_transitionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppTansitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) UIViewController *firstScreenViewController; // @synthesize firstScreenViewController=_firstScreenViewController;
@property(retain, nonatomic) WASplashADViewController *adRootViewController; // @synthesize adRootViewController=_adRootViewController;
- (_Bool)dismissControllerNeedMask;
- (_Bool)dismissControllerNeedZoom;
- (_Bool)presentationControllerNeedMask;
- (_Bool)presentationControllerNeedZoom;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doCircleRevealAnimationWith:(double)arg1 view:(id)arg2 cirleCenter:(struct CGPoint)arg3 finalHeihgt:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)closeRootViewControllerAnimated:(_Bool)arg1 circleCenter:(struct CGPoint)arg2 finalHeihgt:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

