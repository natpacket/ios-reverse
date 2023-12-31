//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MultiTalkHDHeadView, UIImageView;

@interface VoIPHeadImageBlurView : UIView
{
    _Bool _shouldIgnoreHeadViewCenterYCompatibilityInSmall;
    int _scene;
    UIImageView *_blurView;
    MultiTalkHDHeadView *_headImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool shouldIgnoreHeadViewCenterYCompatibilityInSmall; // @synthesize shouldIgnoreHeadViewCenterYCompatibilityInSmall=_shouldIgnoreHeadViewCenterYCompatibilityInSmall;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
- (void)layoutBackground;
- (void)updateViewInfo:(id)arg1 scene:(int)arg2;
- (void)updateScene:(int)arg1;
- (void)layoutHeadView;
- (void)layoutBlurView;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

