//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingPlayerCoverCell.h"

@class MMUIButton, MMWebImageView, UIView;

@interface TingCustomCoverCell : TingPlayerCoverCell
{
    UIView *_customDisplayView;
    MMWebImageView *_coverImageView;
    MMUIButton *_jumpToFinderButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *jumpToFinderButton; // @synthesize jumpToFinderButton=_jumpToFinderButton;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *customDisplayView; // @synthesize customDisplayView=_customDisplayView;
- (struct CGSize)contentSizeForConstrainedSize:(struct CGSize)arg1;
- (unsigned long long)displayType;
- (id)displayBackgroundColor;
- (id)displayView;
- (void)updateWhenFinderPlayerViewForTingOnDisplayViewMTKViewCreated;
- (void)resetPlayerDisplayView;
- (id)getCoverUrl;
- (_Bool)shouldShowDisplayElementPlayerView;
- (_Bool)shouldShowCoverImageView;
- (void)updateDisplay:(id)arg1;
- (void)layoutCustomDisplayView;
- (void)layoutCoverImageView;
- (void)layoutSubviews;

@end
