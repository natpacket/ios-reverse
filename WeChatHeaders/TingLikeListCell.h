//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, UIView;

@interface TingLikeListCell : UICollectionViewCell
{
    MMWebImageView *_imageView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    UIView *_bottomLine;
    UIView *_highlightedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (id)genTingLikeTimeStringByUInt:(unsigned long long)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

