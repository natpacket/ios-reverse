//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALoadingViewController.h"

@class MMProgressViewEx, MMUIButton, UIImageView, WATitleView;

@interface WASimulatedNativeImageLoadingViewController : WALoadingViewController
{
    MMUIButton *_quitButton;
    WATitleView *_titleView;
    long long _orientation;
    UIImageView *_loadingImageView;
    MMProgressViewEx *_loadingView;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)setThumbImage:(id)arg1;
- (void)showBufferingView;
- (void)showTitleLoading;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end

