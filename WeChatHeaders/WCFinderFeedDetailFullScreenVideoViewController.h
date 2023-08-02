//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WCFinderFeedDetailContentViewDelegate-Protocol.h"

@class NSString, UIView, WCFinderFeedContentVM, WCFinderFeedDetailContentView;
@protocol WCFinderFeedDetailFullScreenVideoViewControllerDelegate;

@interface WCFinderFeedDetailFullScreenVideoViewController : MMUIViewController <WCFinderFeedDetailContentViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    _Bool _rotating;
    _Bool _isPullingDown;
    _Bool _isViewWillAppear;
    id <WCFinderFeedDetailFullScreenVideoViewControllerDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    WCFinderFeedDetailContentView *_mediaContentView;
    UIView *_bgView;
    struct CGPoint _panStartPoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isViewWillAppear; // @synthesize isViewWillAppear=_isViewWillAppear;
@property(nonatomic) _Bool isPullingDown; // @synthesize isPullingDown=_isPullingDown;
@property(nonatomic) struct CGPoint panStartPoint; // @synthesize panStartPoint=_panStartPoint;
@property(nonatomic) _Bool rotating; // @synthesize rotating=_rotating;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) WCFinderFeedDetailContentView *mediaContentView; // @synthesize mediaContentView=_mediaContentView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderFeedDetailFullScreenVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)onFeedDetailContentViewVideoExitIPhoneLandscape;
- (void)onFeedDetailContentViewVideoExitFullScreen;
- (void)onFeedDetailContentViewClickPlayerFullScreen;
- (void)onFeedDetailContentViewClickPhotoImageWithIndex:(unsigned long long)arg1;
- (id)feedDetailContentViewCurrentViewController;
- (void)restorePullingDownWithDuration:(double)arg1;
- (void)handlePan:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGRect)mediaViewFullScreenFrame;
- (void)setupGestures;
- (void)layoutViews;
- (void)setupSubviews;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentVM:(id)arg1;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (_Bool)useCustomNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

