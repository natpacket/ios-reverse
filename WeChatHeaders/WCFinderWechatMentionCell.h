//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class MMWebImageView, NSLayoutConstraint, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderCustomImageRichTextView, WCFinderHeadImageView, WCFinderWechatMentionCellViewModel;
@protocol WCFinderWechatMentionCellDelegate;

@interface WCFinderWechatMentionCell : UITableViewCell <WCFinderHeadImageViewDelegate>
{
    id <WCFinderWechatMentionCellDelegate> _delegate;
    WCFinderHeadImageView *_headImageView;
    MMWebImageView *_thumbImageView;
    RichTextView *_titleView;
    UILabel *_suffixTitleView;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_authorBadgeLabel;
    WCFinderCustomImageRichTextView *_contentTextView;
    RichTextView *_refContentTextView;
    UILabel *_timestampLabel;
    UIImageView *_interactImageView;
    UIView *_lineView;
    UILabel *_descriptionLabel;
    UIView *_refContentView;
    NSLayoutConstraint *_titleWidthConstraint;
    UIView *_refContentLineView;
    WCFinderWechatMentionCellViewModel *_viewModel;
    UIView *_mulityHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    UILabel *_firstLikeLabel;
}

+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 width:(double)arg3;
+ (_Bool)shouldShowSuffixTitleWithTitle:(id)arg1 width:(double)arg2;
+ (_Bool)hasOverLineNumLimitWithContent:(id)arg1 width:(double)arg2;
+ (double)getRefContentHeightWithContent:(id)arg1 width:(double)arg2;
+ (double)calucateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *firstLikeLabel; // @synthesize firstLikeLabel=_firstLikeLabel;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *mulityHeadImageView; // @synthesize mulityHeadImageView=_mulityHeadImageView;
@property(retain, nonatomic) WCFinderWechatMentionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *interactImageView; // @synthesize interactImageView=_interactImageView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak WCFinderCustomImageRichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(nonatomic) __weak WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(nonatomic) __weak UILabel *suffixTitleView; // @synthesize suffixTitleView=_suffixTitleView;
@property(nonatomic) __weak RichTextView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCFinderWechatMentionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickMulityHeadImageView;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)accessibilityLabel;
- (void)setUpViewLayout;
- (void)setupRefContentView;
- (void)setUpMulityImageView;
- (void)setupAuthInfo:(id)arg1;
- (void)setUpUI;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
