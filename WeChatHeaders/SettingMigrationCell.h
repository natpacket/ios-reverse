//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView, UIView;

@interface SettingMigrationCell : UITableViewCell
{
    NSString *_titleString;
    NSString *_iconName;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIView *_myBackgroundView;
    UIView *_topSeperator;
    UIView *_bottomSeperator;
    UIView *_betweenSeperator;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *betweenSeperator; // @synthesize betweenSeperator=_betweenSeperator;
@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(retain, nonatomic) UIView *myBackgroundView; // @synthesize myBackgroundView=_myBackgroundView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

