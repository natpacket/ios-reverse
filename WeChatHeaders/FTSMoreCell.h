//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FTSMoreCell : MMTableViewCell
{
    UIImageView *_moreIcon;
    UIImageView *_rightArrowIcon;
    UILabel *_moreTipLabel;
    UIView *_topLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *moreTipLabel; // @synthesize moreTipLabel=_moreTipLabel;
@property(retain, nonatomic) UIImageView *rightArrowIcon; // @synthesize rightArrowIcon=_rightArrowIcon;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
- (void)layoutSubviews;
- (void)updateViewMoreTip:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

