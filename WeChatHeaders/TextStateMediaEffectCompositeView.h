//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewPropertyAnimator, UIVisualEffectView;

@interface TextStateMediaEffectCompositeView : UIView
{
    unsigned int _effects;
    double _transitionProgress;
    UIView *_darkenView;
    UIView *_blurContainerView;
    UIVisualEffectView *_blurView;
    UIViewPropertyAnimator *_blurAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *blurAnimator; // @synthesize blurAnimator=_blurAnimator;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *blurContainerView; // @synthesize blurContainerView=_blurContainerView;
@property(retain, nonatomic) UIView *darkenView; // @synthesize darkenView=_darkenView;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) unsigned int effects; // @synthesize effects=_effects;
- (void)willEnterForeground;
- (void)didMoveToWindow;
- (void)removeBlurViewEffect;
- (void)addBlurViewEffect;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
