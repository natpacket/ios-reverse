//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel, UIView, WCFinderLiveStreamJumpModel;
@protocol WCFinderLiveHomePageRecommendGuideFooterViewDelegate;

@interface WCFinderLiveHomePageRecommendGuideFooterView : UICollectionReusableView
{
    id <WCFinderLiveHomePageRecommendGuideFooterViewDelegate> _delegate;
    WCFinderLiveStreamJumpModel *_jumpModel;
    UIView *_scrollLabelContainer;
    UILabel *_swipeEducationLabel;
    UIImageView *_labelArrowView;
}

+ (double)footerWidth;
+ (id)footerIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *labelArrowView; // @synthesize labelArrowView=_labelArrowView;
@property(retain, nonatomic) UILabel *swipeEducationLabel; // @synthesize swipeEducationLabel=_swipeEducationLabel;
@property(retain, nonatomic) UIView *scrollLabelContainer; // @synthesize scrollLabelContainer=_scrollLabelContainer;
@property(retain, nonatomic) WCFinderLiveStreamJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(nonatomic) __weak id <WCFinderLiveHomePageRecommendGuideFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScrollEducationAction:(id)arg1;
- (id)accessibilityLabel;
- (void)initView;
- (void)layoutUI;
- (void)updateWithJumpModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

