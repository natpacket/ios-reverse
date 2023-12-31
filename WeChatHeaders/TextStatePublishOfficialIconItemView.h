//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, TextStatePublishOfficialIconItem;

@interface TextStatePublishOfficialIconItemView : UICollectionViewCell
{
    TextStatePublishOfficialIconItem *_iconItem;
    MMWebImageView *_iconImageView;
    MMUILabel *_descriptionLabel;
}

+ (double)minItemHeight;
+ (double)itemWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TextStatePublishOfficialIconItem *iconItem; // @synthesize iconItem=_iconItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

