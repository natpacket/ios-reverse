//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AssetSetItemDataField, MMAssetSelectCheckButton, UIImage, UIView, WCCDNImageView;

@interface AssetCollectionViewCell : UICollectionViewCell
{
    _Bool _bInSelectMode;
    _Bool _bSelected;
    AssetSetItemDataField *_data;
    UIImage *_thumbImage;
    WCCDNImageView *_imageView;
    UIView *_maskView;
    MMAssetSelectCheckButton *_selectCheckButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton; // @synthesize selectCheckButton=_selectCheckButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCCDNImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) AssetSetItemDataField *data; // @synthesize data=_data;
@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) _Bool bInSelectMode; // @synthesize bInSelectMode=_bInSelectMode;
- (_Bool)isAccessibilityElement;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutContentView:(struct CGRect)arg1;
- (void)initContentView;
- (void)setComponentHidden:(_Bool)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)loadImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end
