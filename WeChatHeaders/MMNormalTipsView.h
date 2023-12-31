//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRectTriangleArrowView.h"

@class MMNormalTipsViewCloseButtonConfig, MMUIButton, MMUILabel, NSAttributedString, NSString, UIColor;

@interface MMNormalTipsView : MMRectTriangleArrowView
{
    _Bool _showCloseButton;
    unsigned int _payment;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUILabel *_giftDescLabel;
    MMUIButton *_closeButton;
    UIColor *_titleColor;
    CDUnknownBlockType _tapAction;
    MMNormalTipsViewCloseButtonConfig *_closeButtonConfig;
}

+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(_Bool)arg5 minWidth:(double)arg6 maxWidth:(double)arg7;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 withCloseButton:(_Bool)arg3 minWidth:(double)arg4 maxWidth:(double)arg5;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 minWidth:(double)arg5 maxWidth:(double)arg6;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 minWidth:(double)arg3 maxWidth:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MMNormalTipsViewCloseButtonConfig *closeButtonConfig; // @synthesize closeButtonConfig=_closeButtonConfig;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) unsigned int payment; // @synthesize payment=_payment;
@property(readonly, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) MMUILabel *giftDescLabel; // @synthesize giftDescLabel=_giftDescLabel;
@property(readonly, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
@property(retain, nonatomic) NSAttributedString *attriButedDesc;
- (void)removeAllSubViews;
@property(retain, nonatomic) NSString *giftDesc;
@property(retain, nonatomic) NSString *desc;
- (void)setAttributeTitle:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 withCloseButton:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 withCloseButtonConfig:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 titleColor:(id)arg3 withCloseButtonConfig:(id)arg4;

@end

