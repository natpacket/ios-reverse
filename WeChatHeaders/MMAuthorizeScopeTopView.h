//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, NSString, UIColor;

@interface MMAuthorizeScopeTopView : UIView
{
    double _bottomPadding;
    UIColor *_imageViewBgColor;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_actionWording;
    NSString *_scopeDesc;
    NSString *_appendDetailStr;
    NSString *_cloudGameScopeWording;
    MMWebImageView *_appIconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_scopeLabel;
    MMUILabel *_cloudGameScopeLabel;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *cloudGameScopeLabel; // @synthesize cloudGameScopeLabel=_cloudGameScopeLabel;
@property(retain, nonatomic) MMUILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(copy, nonatomic) NSString *cloudGameScopeWording; // @synthesize cloudGameScopeWording=_cloudGameScopeWording;
@property(copy, nonatomic) NSString *appendDetailStr; // @synthesize appendDetailStr=_appendDetailStr;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(copy, nonatomic) NSString *actionWording; // @synthesize actionWording=_actionWording;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *imageViewBgColor; // @synthesize imageViewBgColor=_imageViewBgColor;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
- (double)layoutSubviewsAndCalculateHeight;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithIconUrl:(id)arg1 appName:(id)arg2 actionWording:(id)arg3 scopeDesc:(id)arg4 appendDetailStr:(id)arg5 cloudGameScopeWording:(id)arg6;

@end

