//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UIView;

@interface MMUINavigationBar : UINavigationBar
{
    _Bool _disable;
    _Bool _customBlurEffectHidden;
    UIView *_effectSubview;
    long long _lastUpdateStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastUpdateStyle; // @synthesize lastUpdateStyle=_lastUpdateStyle;
@property(retain, nonatomic) UIView *effectSubview; // @synthesize effectSubview=_effectSubview;
@property(nonatomic) _Bool customBlurEffectHidden; // @synthesize customBlurEffectHidden=_customBlurEffectHidden;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (id)currentViewController;
- (id)navigationContentView;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isTransparentNavBar;
- (id)getTopViewController;
- (void)setAlpha:(double)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (id)findBlurEffectView:(id)arg1;
- (void)adjustBlurEffect;
- (void)adjustContentViewToFitMargin;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configCustomBlurEffect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

