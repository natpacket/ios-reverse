//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMBadgeView, NSMutableArray, UIImageView, UILabel;

@interface TextStateFriendTopicButton : MMUIButton
{
    _Bool _hasSmallReddot;
    unsigned int _notifiesCount;
    long long _buttonStyle;
    NSMutableArray *_headImageViews;
    UIImageView *_textStateIconView;
    UILabel *_textLabel;
    MMBadgeView *_reddotView;
}

+ (id)defaultButton;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *reddotView; // @synthesize reddotView=_reddotView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *textStateIconView; // @synthesize textStateIconView=_textStateIconView;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) _Bool hasSmallReddot; // @synthesize hasSmallReddot=_hasSmallReddot;
@property(nonatomic) unsigned int notifiesCount; // @synthesize notifiesCount=_notifiesCount;
- (id)generateHeadImageView;
- (void)generateHeadImageViewsWith:(id)arg1;
- (void)layoutSubviews;
- (double)widthToFit:(double)arg1;
- (id)firstHeadImageUsername;
- (void)updateContent;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end
