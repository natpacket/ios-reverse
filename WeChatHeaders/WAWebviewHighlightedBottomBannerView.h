//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface WAWebviewHighlightedBottomBannerView : UIButton
{
    NSString *_title;
    NSString *_iconUrl;
    UIView *_highlightMaskView;
    MMWebImageView *_iconImgView;
    UILabel *_nicknameLabel;
    UILabel *_descLabel;
    UIImageView *_descArrowImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *descArrowImgView; // @synthesize descArrowImgView=_descArrowImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (void)reloadData;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

