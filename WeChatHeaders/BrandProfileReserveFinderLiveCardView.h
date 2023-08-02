//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ExpandableTextViewDelegate-Protocol.h"

@class BizProfileV2Resp, ExpandableTextView, MMUIButton, NSString, UIAccessibilityElement, UIImageView, UILabel, UIView;
@protocol BrandProfileReserveFinderLiveCardViewDelegate;

@interface BrandProfileReserveFinderLiveCardView : MMUIView <ExpandableTextViewDelegate>
{
    _Bool _bReserved;
    id <BrandProfileReserveFinderLiveCardViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    ExpandableTextView *_contentLabel;
    MMUIButton *_reserveButton;
    BizProfileV2Resp *_cacheItem;
    MMUIButton *_showMoreReserveButton;
    UILabel *_allReserveLabel;
    UIImageView *_arrowImageView;
    UIView *_horizontalSperatorLineView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIAccessibilityElement *_fullCardElement;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bReserved; // @synthesize bReserved=_bReserved;
@property(retain, nonatomic) UIAccessibilityElement *fullCardElement; // @synthesize fullCardElement=_fullCardElement;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *horizontalSperatorLineView; // @synthesize horizontalSperatorLineView=_horizontalSperatorLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *allReserveLabel; // @synthesize allReserveLabel=_allReserveLabel;
@property(retain, nonatomic) MMUIButton *showMoreReserveButton; // @synthesize showMoreReserveButton=_showMoreReserveButton;
@property(retain, nonatomic) BizProfileV2Resp *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) MMUIButton *reserveButton; // @synthesize reserveButton=_reserveButton;
@property(retain, nonatomic) ExpandableTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <BrandProfileReserveFinderLiveCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)updateSubviewSize;
- (void)onExpandableTextViewExpand:(_Bool)arg1;
- (void)onShowMoreButtonClicked;
- (void)onReserveButtonClicked;
- (double)labelMaxiumWidth;
- (void)layoutSubviews;
- (void)setupContentLabel;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

