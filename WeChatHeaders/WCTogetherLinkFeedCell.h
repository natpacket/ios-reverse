//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTogetherBaseFeedCell.h"

@class MMUILabel, MMWebImageView, UIImageView, UIView, WCImageView;

@interface WCTogetherLinkFeedCell : WCTogetherBaseFeedCell
{
    UIView *_iconContainerView;
    WCImageView *_iconImageView;
    MMWebImageView *_iconWebImageView;
    UIImageView *_iconDefaultImageView;
    UIView *_playIconContainerView;
    UIImageView *_playIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIView *playIconContainerView; // @synthesize playIconContainerView=_playIconContainerView;
@property(retain, nonatomic) UIImageView *iconDefaultImageView; // @synthesize iconDefaultImageView=_iconDefaultImageView;
@property(retain, nonatomic) MMWebImageView *iconWebImageView; // @synthesize iconWebImageView=_iconWebImageView;
@property(retain, nonatomic) WCImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
- (void)contentDidTap;
- (void)layoutItemContentView;
- (void)loadIconViews;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

@end

