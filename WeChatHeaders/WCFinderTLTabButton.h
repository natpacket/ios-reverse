//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMBadgeView, NSString, NSURL, UIColor, UIImage, UIImageView, UILabel, WCFinderRedDotTipsShowInfo;
@protocol WCFinderTLTabButtonDelegate;

@interface WCFinderTLTabButton : MMUIButton
{
    _Bool _shouldShowLeftIcon;
    id <WCFinderTLTabButtonDelegate> _delegate;
    unsigned long long _category;
    NSString *_iconUrl;
    NSURL *_leftIconUrl;
    WCFinderRedDotTipsShowInfo *_redDotInfo;
    double _selectedValue;
    double _bottomLineExpectExtWidth;
    MMBadgeView *_redDotView;
    UILabel *_redDotTextField;
    UIImageView *_liveIconView;
    UILabel *_rightLabel;
    UIImageView *_avatarView;
    UIImage *_avatarImage;
    NSString *_leftIconText;
    UIColor *_normalColor;
    UIColor *_highlightColor;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) NSString *leftIconText; // @synthesize leftIconText=_leftIconText;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) UILabel *redDotTextField; // @synthesize redDotTextField=_redDotTextField;
@property(retain, nonatomic) MMBadgeView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) _Bool shouldShowLeftIcon; // @synthesize shouldShowLeftIcon=_shouldShowLeftIcon;
@property(nonatomic) double bottomLineExpectExtWidth; // @synthesize bottomLineExpectExtWidth=_bottomLineExpectExtWidth;
@property(nonatomic) double selectedValue; // @synthesize selectedValue=_selectedValue;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo; // @synthesize redDotInfo=_redDotInfo;
@property(retain, nonatomic) NSURL *leftIconUrl; // @synthesize leftIconUrl=_leftIconUrl;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(nonatomic) __weak id <WCFinderTLTabButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)onButtonDidChangedSelectedFinish;
@property(nonatomic) double fontSize;
- (void)setSelected:(_Bool)arg1;
- (void)setRightIconWithSelectedIcon:(id)arg1 normalIcon:(id)arg2;
- (void)cleanLeftAvatarImage;
- (void)setButtonNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)setLeftIcon:(id)arg1 withText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

