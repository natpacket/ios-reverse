//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView;

@interface TingLocalCategoryCircleCell : UICollectionViewCell
{
    MMWebImageView *_multipleCoverView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *multipleCoverView; // @synthesize multipleCoverView=_multipleCoverView;
- (void)configureLayout;
- (void)updateDisplayWith:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end
