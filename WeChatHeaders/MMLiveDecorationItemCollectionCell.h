//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CAShapeLayer, MMLiveDecorationDataItem, MMWebImageView, SightIconView, UILabel, UIView;

@interface MMLiveDecorationItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMLiveDecorationDataItem *_dataItem;
    UIView *_imageBackgroundView;
    UIView *_bgBlurView;
    MMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_disableLabel;
    CALayer *_borderLayer;
    CAShapeLayer *_shapeLayer;
    SightIconView *_stateView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UILabel *disableLabel; // @synthesize disableLabel=_disableLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveDecorationDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)setIconType:(int)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

