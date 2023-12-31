//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IUiUtilExt-Protocol.h"
#import "WCSplitDetailTransitionDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface WCSplitViewController : UIViewController <WCSplitDetailTransitionDelegate, IUiUtilExt>
{
    double _primaryWidth;
    UIViewController *_primaryViewController;
    UIViewController *_detailEmptyViewController;
    long long _displayMode;
    UIView *_separatorLine;
    UIImageView *_snapshotImageView;
    struct CGSize _lastSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UIViewController *detailEmptyViewController; // @synthesize detailEmptyViewController=_detailEmptyViewController;
@property(retain, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property(nonatomic) double primaryWidth; // @synthesize primaryWidth=_primaryWidth;
- (void)removeDetailSnapshot;
- (void)addDetailSnapshot;
- (_Bool)shouldUseSplitMode;
- (_Bool)detailViewControllerForceFullscreen;
- (void)updateDetailViewControllerDisplayMode:(long long)arg1;
- (void)changeDisplayMode:(long long)arg1;
- (void)updateContentLayout;
- (_Bool)isInSplitMode;
- (_Bool)detailForceFullscreen;
- (void)onDetailViewControllerDidChangeMode:(_Bool)arg1;
- (void)onDetailViewControllerWillChangeMode:(_Bool)arg1;
- (void)onPresentingEndAppearance;
- (void)onPresentingBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)transitionTypeForAnimator:(id)arg1;
- (void)setPrimaryHidden:(_Bool)arg1;
- (void)dismissDetailViewController:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDetailViewController:(_Bool)arg1;
@property(readonly, nonatomic) long long currentDetailShowType;
@property(readonly, nonatomic) long long currentDisplayMode;
- (void)presentDetailViewController:(id)arg1 showType:(long long)arg2 forceFullScreen:(_Bool)arg3 animated:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (void)internelShowDetailViewController:(id)arg1 canMixed:(_Bool)arg2 showType:(long long)arg3 forceFullScreen:(_Bool)arg4 animated:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2 animated:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2;
@property(readonly, nonatomic) UIViewController *detailViewController;
- (void)onMainWindowFrameChanged;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

