//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUILabel, UIView, WCFinderFeedImageCDNView, WCFinderLiveStreamElementModel;
@protocol WCFinderLiveHomePageHistoryCellDelegate;

@interface WCFinderLiveHomePageHistoryCell : UICollectionViewCell
{
    id <WCFinderLiveHomePageHistoryCellDelegate> _delegate;
    WCFinderLiveStreamElementModel *_elementModel;
    WCFinderFeedImageCDNView *_liveImageView;
    UIView *_containerView;
    CAGradientLayer *_gradientLayer;
    MMUILabel *_nickNameLabel;
}

+ (double)cellWidth;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) WCFinderLiveStreamElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(nonatomic) __weak id <WCFinderLiveHomePageHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)longPress:(id)arg1;
- (void)initSubviews;
- (void)updateWithElementModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

