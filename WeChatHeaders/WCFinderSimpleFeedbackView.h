//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol WCFinderSimpleFeedbackViewDelegate;

@interface WCFinderSimpleFeedbackView : UIView
{
    id <WCFinderSimpleFeedbackViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UIButton *_likeButton;
    UIButton *_dislikeButton;
    UIView *_separateLine;
    UIButton *_complainButton;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIButton *complainButton; // @synthesize complainButton=_complainButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderSimpleFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickComplainButton:(id)arg1;
- (void)onClickDislikeButton:(id)arg1;
- (void)onClickLikeButton:(id)arg1;
- (id)genActionButtonWithTitle:(id)arg1 imageName:(id)arg2;
- (void)addFlexLayout;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMaxWidth:(double)arg1;

@end
