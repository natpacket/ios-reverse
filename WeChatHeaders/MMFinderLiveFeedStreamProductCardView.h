//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveFeedStreamWidgetBaseView.h"

@class FinderWindowProductInfo, MMTimer, MMUIButton, MMWebImageView, PAGView, UILabel;
@protocol MMFinderLiveFeedStreamProductCardViewDelegate;

@interface MMFinderLiveFeedStreamProductCardView : MMFinderLiveFeedStreamWidgetBaseView
{
    _Bool _isExpandAnimating;
    id <MMFinderLiveFeedStreamProductCardViewDelegate> _delegate;
    FinderWindowProductInfo *_productInfo;
    double _maxWidth;
    unsigned long long _style;
    unsigned long long _watchTimeToChangeBubble;
    CDUnknownBlockType _expandAnimationBlock;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_priceLabel;
    PAGView *_playingIconView;
    MMUIButton *_actionButton;
    MMTimer *_timer;
    FinderWindowProductInfo *_pendingProductInfo;
}

+ (double)defaultHeightWithStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderWindowProductInfo *pendingProductInfo; // @synthesize pendingProductInfo=_pendingProductInfo;
@property(nonatomic) _Bool isExpandAnimating; // @synthesize isExpandAnimating=_isExpandAnimating;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) PAGView *playingIconView; // @synthesize playingIconView=_playingIconView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType expandAnimationBlock; // @synthesize expandAnimationBlock=_expandAnimationBlock;
@property(nonatomic) unsigned long long watchTimeToChangeBubble; // @synthesize watchTimeToChangeBubble=_watchTimeToChangeBubble;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamProductCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)notifyToExpand;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)onActionButtonDidClick:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

