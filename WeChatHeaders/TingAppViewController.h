//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ITingApp-Protocol.h"

@class NSString, TingNavigationController, TingPlayerViewController;

@interface TingAppViewController : MMUIViewController <ITingApp>
{
    _Bool _shouldNotCallTingVCWillEvent;
    TingNavigationController *_contentNavigationController;
    unsigned long long _displayMode;
    TingPlayerViewController *_playerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldNotCallTingVCWillEvent; // @synthesize shouldNotCallTingVCWillEvent=_shouldNotCallTingVCWillEvent;
@property(retain, nonatomic) TingPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) TingNavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)callTingViewControllerDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)callTingViewControllerDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)callTingViewControllerWillDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)callTingViewControllerWillAppear:(id)arg1 animated:(_Bool)arg2;
- (id)inSightViewController;
- (void)setDisplayModeEndWithMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)playerBottomBarSize;
- (void)pushPage:(id)arg1;
- (void)setPages:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldDisableTingDismissGesture;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)useTransparentNavibar;
- (long long)navigationBarHiddenStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

