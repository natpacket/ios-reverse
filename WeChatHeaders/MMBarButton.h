//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIColor, UIView;

@interface MMBarButton : MMUIButton
{
    long long iContentWidth;
    long long iContentHight;
    long long iOriginWidth;
    long long iOriginHeight;
    unsigned long long eBarButtonStyle;
    UIView *redDotView;
    UIColor *_normalBackgroundColor;
    UIColor *_titleColorInNormal;
    UIColor *_titleColorInHilighted;
    UIColor *_titleColorInDisabled;
    UIColor *_backgroundColorInDisabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColorInDisabled; // @synthesize backgroundColorInDisabled=_backgroundColorInDisabled;
@property(retain, nonatomic) UIColor *titleColorInDisabled; // @synthesize titleColorInDisabled=_titleColorInDisabled;
@property(retain, nonatomic) UIColor *titleColorInHilighted; // @synthesize titleColorInHilighted=_titleColorInHilighted;
@property(retain, nonatomic) UIColor *titleColorInNormal; // @synthesize titleColorInNormal=_titleColorInNormal;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) unsigned long long eBarButtonStyle; // @synthesize eBarButtonStyle;
@property(nonatomic) long long iOriginHeight; // @synthesize iOriginHeight;
@property(nonatomic) long long iOriginWidth; // @synthesize iOriginWidth;
@property(nonatomic) long long iContentHight; // @synthesize iContentHight;
@property(nonatomic) long long iContentWidth; // @synthesize iContentWidth;
- (void)layoutSubviews;
@property(nonatomic) _Bool showRedDot;
- (void)updateColor;
- (void)setEnabled:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

