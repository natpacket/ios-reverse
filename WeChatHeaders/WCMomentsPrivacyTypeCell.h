//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface WCMomentsPrivacyTypeCell : MMTableViewCell
{
    UIImageView *_leftCheckMark;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
}

+ (double)heightForTitle:(id)arg1 subTitle:(id)arg2 cellWidth:(double)arg3;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 isChecked:(_Bool)arg3;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

