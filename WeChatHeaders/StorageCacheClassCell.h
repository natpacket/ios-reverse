//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView;

@interface StorageCacheClassCell : UITableViewCell
{
    _Bool _isSelected;
    NSString *_titleString;
    NSString *_sizeString;
    UIImageView *_selectIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_sizeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *sizeString; // @synthesize sizeString=_sizeString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

