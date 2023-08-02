//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, UIImageView, UIView;

@interface MMStoreEmotionStoreListCell : UICollectionViewCell
{
    UIView *_baseViewContainer;
    MMUILabel *_nameLabel;
    MMUILabel *_introduceLabel;
    MMWebImageView *_webImageView;
    MMWebImageView *_tagImageView;
    UIImageView *_imageViewNew;
    UIImageView *_rightArrowImage;
    UIView *_rightContentContainer;
    UIView *_lineView;
    UIView *_accessibilityView;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *rightContentContainer; // @synthesize rightContentContainer=_rightContentContainer;
@property(retain, nonatomic) UIImageView *rightArrowImage; // @synthesize rightArrowImage=_rightArrowImage;
@property(retain, nonatomic) UIImageView *imageViewNew; // @synthesize imageViewNew=_imageViewNew;
@property(retain, nonatomic) MMWebImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) MMUILabel *introduceLabel; // @synthesize introduceLabel=_introduceLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *baseViewContainer; // @synthesize baseViewContainer=_baseViewContainer;
- (void)updateAccessibilityLabel;
- (void)layoutRightViewContainer;
- (void)layoutBaseViewContainer;
- (void)layoutContentView;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)setIntroduceLabelText:(id)arg1;
- (void)setNameLabelAttrText:(id)arg1 accessibilityName:(id)arg2;
- (void)setNameLabelText:(id)arg1;
- (void)configRightArrowImage;
- (void)loadTagImageView;
- (void)initIntroduceLabel;
- (void)initNameLabel;
- (void)initRightContainer;
- (void)initWebImageView;
- (void)initLineView;
- (void)initBaseViewContainer;
- (void)setHighlighted:(_Bool)arg1;
- (void)initAccessibilityView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
