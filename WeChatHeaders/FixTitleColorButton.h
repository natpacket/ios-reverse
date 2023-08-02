//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class ButtonAttachManager, FixTitleColorButtonChainModel, NSMutableDictionary, NSMutableSet, UIColor;

@interface FixTitleColorButton : MMUIButton
{
    NSMutableSet *m_titleColorStateSet;
    NSMutableSet *m_backgroundImageStateSet;
    double m_fixHeight;
    double m_fixWidth;
    double m_fixLeftRightMargin;
    UIColor *m_fixBackgroundColor;
    _Bool _oldStyle;
    _Bool _wideStyle;
    _Bool _bigStyle;
    _Bool _halfScreenStyle;
    _Bool _smallStyle;
    _Bool _weakStyle;
    _Bool _chaosStyle;
    NSMutableDictionary *m_titleColorStateDict;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
    double _maxWidth;
    ButtonAttachManager *_attachManager;
    double _verticalPadding;
}

+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(retain, nonatomic) ButtonAttachManager *attachManager; // @synthesize attachManager=_attachManager;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool chaosStyle; // @synthesize chaosStyle=_chaosStyle;
@property(nonatomic) _Bool weakStyle; // @synthesize weakStyle=_weakStyle;
@property(nonatomic) _Bool smallStyle; // @synthesize smallStyle=_smallStyle;
@property(nonatomic) _Bool halfScreenStyle; // @synthesize halfScreenStyle=_halfScreenStyle;
@property(nonatomic) _Bool bigStyle; // @synthesize bigStyle=_bigStyle;
@property(nonatomic) _Bool wideStyle; // @synthesize wideStyle=_wideStyle;
@property(nonatomic) _Bool oldStyle; // @synthesize oldStyle=_oldStyle;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
@property(retain, nonatomic) NSMutableSet *m_backgroundImageStateSet; // @synthesize m_backgroundImageStateSet;
@property(retain, nonatomic) NSMutableDictionary *m_titleColorStateDict; // @synthesize m_titleColorStateDict;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFixLeftRightMargin:(double)arg1;
- (void)setFixHeight:(double)arg1;
- (double)fixWidth;
- (void)setFixWidth:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)adjustHeight;
- (double)adjustWidthForWidth:(double)arg1;
- (double)adjustWidthForWidth:(double)arg1 ignoreFixWidth:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)calcWidthNoAttr;
- (struct CGSize)calculateFittingSize;
- (double)calTitleVerticalEdge;
- (struct CGSize)calImageFitSizeByImage:(id)arg1;
- (struct UIEdgeInsets)titleEdgeInsets;
- (struct UIEdgeInsets)imageEdgeInsets;
- (struct CGSize)calAttributedSize;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateRedesignBackgroundColor;
- (_Bool)isClearColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) FixTitleColorButtonChainModel *zz_setup;

@end

