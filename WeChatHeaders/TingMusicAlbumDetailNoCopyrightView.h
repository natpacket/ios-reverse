//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, UIImageView;

@interface TingMusicAlbumDetailNoCopyrightView : MMUIView
{
    CDUnknownBlockType _onRightLabelClicked;
    MMUILabel *_leftLabel;
    MMUILabel *_rightLabel;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) CDUnknownBlockType onRightLabelClicked; // @synthesize onRightLabelClicked=_onRightLabelClicked;
- (void)rightLabelTapped:(id)arg1;
- (void)setRightLabelHidden:(_Bool)arg1;
- (void)setRightLabelTextColor:(id)arg1;
- (void)configLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
