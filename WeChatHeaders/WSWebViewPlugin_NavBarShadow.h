//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSWebViewPluginBase.h"

@class UIView;

@interface WSWebViewPlugin_NavBarShadow : WSWebViewPluginBase
{
    _Bool _enableAddShadow;
    UIView *_navShadowView;
    double _animateDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableAddShadow; // @synthesize enableAddShadow=_enableAddShadow;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(retain, nonatomic) UIView *navShadowView; // @synthesize navShadowView=_navShadowView;
- (void)hideNavBarShadow:(id)arg1;
- (void)manuallyHideNavShadowView;
- (double)shadowViewHeight;
- (void)layoutNavShadowView;
- (void)showNavBarShadow:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

