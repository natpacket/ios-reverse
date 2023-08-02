//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIImageView, UILabel, UIView;

@interface WCFinderAccountSelectedButton : MMUIButton
{
    UIImageView *_leftImageView;
    UILabel *_selectedLabel;
    UIView *_redDotView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) __weak UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(nonatomic) __weak UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)reloadLayout;
- (void)showRedDotView:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasShowRedDot;
- (void)setUpUI;
- (id)init;

@end

