//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MinimizeIconAndStateView : UIView
{
    NSArray *_icons;
    UIView *_colorMaskView;
}

+ (id)getIconMaskPath:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorMaskView; // @synthesize colorMaskView=_colorMaskView;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void)startSwitchingAnimation;
- (void)updateLoopIconList:(id)arg1;
- (void)setRoundViewMaskPath:(double)arg1 RoundView:(id)arg2;
- (void)makeSureColorMaskViewInited;
- (void)setMaskColorAlpha:(double)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
