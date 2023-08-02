//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderNotifyCenterCellViewModelDelegate-Protocol.h"

@class MMUIButton, MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAggregatedTitleView, WCFinderHeadImageView, WCFinderNotifyCenterCellViewModel;
@protocol WCFinderNotifyUnifiedCellDelegate;

@interface WCFinderNotifyUnifiedTableViewCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderNotifyCenterCellViewModelDelegate>
{
    WCFinderNotifyCenterCellViewModel *_viewModel;
    id <WCFinderNotifyUnifiedCellDelegate> _delegate;
    UIView *_titleContainer;
    WCFinderAggregatedTitleView *_titleView;
    UILabel *_authorLabel;
    UILabel *_followMeLabel;
    UILabel *_timestampLabel;
    MMWebImageView *_thumbImageView;
    RichTextView *_pureTextView;
    UIView *_refContentView;
    RichTextView *_refContentTextView;
    WCFinderHeadImageView *_headImageView;
    UIView *_mulityHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    UIView *_lineView;
    UIView *_pureTextBackGroundView;
    UIView *_refContentLineView;
    MMUIButton *_thanksButton;
    double _cacheWidth;
}

+ (double)titleMinWidthWithViewModel:(id)arg1;
+ (double)getRefContentHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getTextMaxWidthWithFullWidth:(double)arg1;
+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 width:(double)arg3;
+ (_Bool)shouldShowSuffixTitleWithTitle:(id)arg1 width:(double)arg2;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getPlaceholderHeightWithWidth:(double)arg1;
+ (_Bool)shouldShowThanksButtonWithViewModel:(id)arg1;
+ (_Bool)shouldShowFollowMeLabel;
+ (_Bool)shouldHideRefContentWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cacheWidth; // @synthesize cacheWidth=_cacheWidth;
@property(nonatomic) __weak MMUIButton *thanksButton; // @synthesize thanksButton=_thanksButton;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(nonatomic) __weak UIView *pureTextBackGroundView; // @synthesize pureTextBackGroundView=_pureTextBackGroundView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *mulityHeadImageView; // @synthesize mulityHeadImageView=_mulityHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak RichTextView *pureTextView; // @synthesize pureTextView=_pureTextView;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *followMeLabel; // @synthesize followMeLabel=_followMeLabel;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak WCFinderAggregatedTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(nonatomic) __weak id <WCFinderNotifyUnifiedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onMentionThankStateChanged;
- (void)viewModelCellHeightChanged:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)clickThanksButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutTitleView;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpViewLayout;
- (void)setUpPureTextView;
- (void)setupRefContentView;
- (void)setUpMulityImageView;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

