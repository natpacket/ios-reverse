//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUILabel, WCFinderFeedImageCDNView;

@interface WCFinderFeedPickerCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageCDNView *_coverImageView;
    CAGradientLayer *_maskLayer;
    MMUILabel *_timeLabel;
}

+ (double)cellHeightWidthWidth:(double)arg1;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
