//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMImageLoaderObserver-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"

@class BTFinderItemViewModel, BTFinderRecommendRedPacketView, BTRichTextTagView, BTScrollabelFinderStyleCoverContainerView, MMUILabel, MMWebImageView, NSString, UIImageView, UIView, WCFinderTagView;

@interface BTRecommendFinderFlowStyleItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>
{
    CDUnknownBlockType _onClickCoverAreaBlock;
    CDUnknownBlockType _onLongClickCoverAreaBlock;
    BTFinderItemViewModel *_viewModel;
    BTScrollabelFinderStyleCoverContainerView *_coverContainerView;
    UIImageView *_coverBackgroundImageView;
    MMWebImageView *_coverImageView;
    WCFinderTagView *_membershipTagView;
    UIView *_infoContainerView;
    MMWebImageView *_headImageView;
    UIView *_authorView;
    MMUILabel *_nickNameLabel;
    BTRichTextTagView *_titleLabel;
    MMUILabel *_recommendLabel;
    UIView *_recommendGradientView;
    BTFinderRecommendRedPacketView *_redPacketView;
}

+ (double)cellWidth;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) BTFinderRecommendRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) UIView *recommendGradientView; // @synthesize recommendGradientView=_recommendGradientView;
@property(retain, nonatomic) MMUILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) BTRichTextTagView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) WCFinderTagView *membershipTagView; // @synthesize membershipTagView=_membershipTagView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *coverBackgroundImageView; // @synthesize coverBackgroundImageView=_coverBackgroundImageView;
@property(retain, nonatomic) BTScrollabelFinderStyleCoverContainerView *coverContainerView; // @synthesize coverContainerView=_coverContainerView;
@property(retain, nonatomic) BTFinderItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType onLongClickCoverAreaBlock; // @synthesize onLongClickCoverAreaBlock=_onLongClickCoverAreaBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickCoverAreaBlock; // @synthesize onClickCoverAreaBlock=_onClickCoverAreaBlock;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)titleLabelStyles;
- (void)onLongClickContentArea:(id)arg1;
- (void)onClickContentArea;
- (double)getExpectedWHRatio;
- (void)onLoadCoverImage:(id)arg1;
- (void)loadData;
- (void)setupSubviews;
- (void)setContentAreaHighlight:(_Bool)arg1;
- (void)updateWithItemViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

