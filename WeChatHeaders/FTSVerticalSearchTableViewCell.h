//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, UIImageView, UIView;

@interface FTSVerticalSearchTableViewCell : MMTableViewCell
{
    AttributeLabel *_tipsLabel;
    UIImageView *_searchIcon;
    UIView *_lineView;
    UIImageView *_indicatorView;
}

+ (double)getCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) AttributeLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (unsigned long long)accessibilityTraits;
- (void)addBottomSeperateLine;
- (void)updateTips:(id)arg1 hightLightText:(id)arg2;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
