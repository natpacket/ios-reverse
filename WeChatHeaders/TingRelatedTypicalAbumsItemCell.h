//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingRelatedItemCell.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class BTRichTextTagView, MMListenCategoryItem, MMUILabel, MMWebImageView, NSString, UIImageView, UIView;

@interface TingRelatedTypicalAbumsItemCell : TingRelatedItemCell <MMWebImageViewDelegate>
{
    UIView *_backView;
    MMWebImageView *_coverView;
    UIImageView *_iconView;
    BTRichTextTagView *_descTextTagView;
    MMUILabel *_descMoreLabel;
    MMUILabel *_descLabel;
    MMListenCategoryItem *_categoryInfo;
}

+ (unsigned long long)itemNumPerPage;
+ (double)cellHeight;
+ (double)cellWidth;
+ (double)leftMargin;
+ (double)cellSpacing;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *descMoreLabel; // @synthesize descMoreLabel=_descMoreLabel;
@property(retain, nonatomic) BTRichTextTagView *descTextTagView; // @synthesize descTextTagView=_descTextTagView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void)onMoreDescClick;
- (id)textLabelFont;
- (struct CGSize)moreLabelSize;
- (double)maxWidth;
- (_Bool)shouldShowMoreLabel;
- (struct CGSize)titleLabelSize:(id *)arg1;
- (id)genTextLabelStyles;
- (void)updateTextTagView;
- (id)iconImage;
- (double)iconWidth;
- (void)layoutSubviews;
- (void)configLayoutNew;
- (void)configLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupItemModel:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
