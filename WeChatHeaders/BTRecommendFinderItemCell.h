//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMImageLoaderObserver-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"

@class BTFinderItemBlurView, BTFinderItemViewModel, BTRichTextTagView, BTScrollabelFinderItemCoverContainerView, BTScrollableFinderItemBackgroundImageView, MMUILabel, MMWebImageView, NSString, UIView;

@interface BTRecommendFinderItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>
{
    _Bool _forceAutoBlurHeight;
    CDUnknownBlockType _onClickCoverAreaBlock;
    CDUnknownBlockType _onLongClickCoverAreaBlock;
    CDUnknownBlockType _onClickInfoAreaBlock;
    BTFinderItemViewModel *_viewModel;
    BTScrollabelFinderItemCoverContainerView *_coverContainerView;
    BTScrollableFinderItemBackgroundImageView *_backgroundCoverImageView;
    MMWebImageView *_coverImageView;
    UIView *_infoContainerView;
    BTFinderItemBlurView *_blurView;
    MMWebImageView *_headImageView;
    UIView *_authorView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_timeLabel;
    BTRichTextTagView *_titleLabel;
    MMUILabel *_recommendLabel;
}

+ (double)cellWidth;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceAutoBlurHeight; // @synthesize forceAutoBlurHeight=_forceAutoBlurHeight;
@property(retain, nonatomic) MMUILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) BTRichTextTagView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) BTFinderItemBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) BTScrollableFinderItemBackgroundImageView *backgroundCoverImageView; // @synthesize backgroundCoverImageView=_backgroundCoverImageView;
@property(retain, nonatomic) BTScrollabelFinderItemCoverContainerView *coverContainerView; // @synthesize coverContainerView=_coverContainerView;
@property(retain, nonatomic) BTFinderItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType onClickInfoAreaBlock; // @synthesize onClickInfoAreaBlock=_onClickInfoAreaBlock;
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
- (void)onClickInfoArea;
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

