//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMUILabel, UIImageView, WCMomentsFinderShareViewModel;

@interface WCMomentsFinderShareButton : MMUIButton
{
    WCMomentsFinderShareViewModel *_viewModel;
    UIImageView *_iconImageView;
    MMUILabel *_tipsLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCMomentsFinderShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (double)_calculateHeight;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (long long)_layoutScene;
- (id)initWithFrame:(struct CGRect)arg1;

@end

