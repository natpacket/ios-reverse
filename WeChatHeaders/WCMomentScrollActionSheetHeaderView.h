//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, NSString, UILabel;

@interface WCMomentScrollActionSheetHeaderView : UIView
{
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_titleLabel;
    NSString *_title;
    UIView *_seperator;
}

+ (double)heightForTitle:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)layoutSubviews;
- (void)initSeperator;
- (void)initTitleLabel;
- (void)initLoadingView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

