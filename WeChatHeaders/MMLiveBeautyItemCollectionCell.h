//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MMLiveBeautyItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    _Bool _hasAdjust;
    NSString *_beautyTitle;
    UIView *_imageBackgroundView;
    UIImageView *_coverImageView;
    UIButton *_coverImageButton;
    UILabel *_titleLabel;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    UIView *_adjustLogo;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *adjustLogo; // @synthesize adjustLogo=_adjustLogo;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *coverImageButton; // @synthesize coverImageButton=_coverImageButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool hasAdjust; // @synthesize hasAdjust=_hasAdjust;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *beautyTitle; // @synthesize beautyTitle=_beautyTitle;
- (void)fitTitleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

