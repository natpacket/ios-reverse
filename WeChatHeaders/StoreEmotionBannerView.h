//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ColorGradientView, EmotionBannerSet, MMUILabel, MMWebImageView;

@interface StoreEmotionBannerView : UIView
{
    EmotionBannerSet *_banner;
    MMUILabel *_titleLabel;
    MMUILabel *_markLabel;
    UIView *_markBgView;
    MMWebImageView *_coverImageView;
    ColorGradientView *_gradientView;
}

+ (struct CGSize)size;
- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *markBgView; // @synthesize markBgView=_markBgView;
@property(retain, nonatomic) MMUILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EmotionBannerSet *banner; // @synthesize banner=_banner;
- (id)getDynamicColorFrom:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
