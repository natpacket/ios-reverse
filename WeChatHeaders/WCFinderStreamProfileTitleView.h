//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTitleView.h"

@class UIImageView, UILabel, WCFinderHeadImageView;

@interface WCFinderStreamProfileTitleView : MMTitleView
{
    UILabel *_nickNameLabel;
    UIImageView *_arrowIconView;
    WCFinderHeadImageView *_avatarImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)adjustNickNameLabelWidthDelta:(double)arg1;
- (void)showArrowIcon;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1;
- (void)updateTextColor:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
