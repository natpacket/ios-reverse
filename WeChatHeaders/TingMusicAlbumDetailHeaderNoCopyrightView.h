//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, MMUILabel, UIImageView, UIView;

@interface TingMusicAlbumDetailHeaderNoCopyrightView : MMUIView
{
    CDUnknownBlockType _onDescButtonClicked;
    UIView *_containerView;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_descButton;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *descButton; // @synthesize descButton=_descButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onDescButtonClicked; // @synthesize onDescButtonClicked=_onDescButtonClicked;
- (void)descButtonClicked:(id)arg1;
- (void)setDescButtonHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

