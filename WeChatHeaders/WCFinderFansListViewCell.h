//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderFansListViewCell : MMMultiMenuTableViewCell
{
    UILabel *_nickName;
    WCFinderHeadImageView *_headImageView;
    UIView *_separator;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
- (void)setupDeleteMenu;
- (void)setupRevertMenu;
- (void)showSeparator:(_Bool)arg1;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

