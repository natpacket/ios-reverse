//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, UIView;

@interface TingFriendTrendsSectionFooter : UICollectionReusableView
{
    CDUnknownBlockType _onClickAll;
    UIView *_titleContentView;
    MMUILabel *_titleLabel;
}

+ (id)reuseIdentifier;
+ (double)footerViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(copy, nonatomic) CDUnknownBlockType onClickAll; // @synthesize onClickAll=_onClickAll;
- (void)onClickAllBtn;
- (void)setBottomRadius;
- (void)updateTitle:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
