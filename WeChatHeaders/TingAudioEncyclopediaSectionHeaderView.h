//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, MMUILabel, UIView;

@interface TingAudioEncyclopediaSectionHeaderView : UICollectionReusableView
{
    CDUnknownBlockType _onClickMore;
    UIView *_dividingLineView;
    MMUILabel *_titleLabel;
    MMUIButton *_moreButton;
}

+ (double)headerViewHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *dividingLineView; // @synthesize dividingLineView=_dividingLineView;
@property(copy, nonatomic) CDUnknownBlockType onClickMore; // @synthesize onClickMore=_onClickMore;
- (void)onMoreBtnClicked;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSeperateLineHidden:(_Bool)arg1;
- (void)updateTitle:(id)arg1 subTitle:(id)arg2;

@end

