//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, MMLiveMakeupDataItem, UIButton, UILabel, UIView;

@interface MMLiveMakeupItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMLiveMakeupDataItem *_dataItem;
    UIView *_imageBackgroundView;
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
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveMakeupDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)fitTitleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

