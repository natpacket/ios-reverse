//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UIImageView, UILabel;
@protocol MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate;

@interface MMFinderLiveShopShelfCouponsSimpleHeaderView : UIView
{
    id <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> _delegate;
    NSString *_title;
    long long _backMode;
    UIImageView *_couponIconView;
    UILabel *_titleLabel;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *couponIconView; // @synthesize couponIconView=_couponIconView;
@property(nonatomic) long long backMode; // @synthesize backMode=_backMode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLeftButton:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

