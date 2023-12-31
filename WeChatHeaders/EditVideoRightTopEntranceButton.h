//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIImageView, UILabel;

@interface EditVideoRightTopEntranceButton : MMUIButton
{
    UIImageView *_logoImageView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

+ (id)longVideoEntrance;
+ (id)finderEntranceForShortVideo;
+ (id)finderEntranceForLongVideo;
+ (id)WeSeeEntrance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)loadWithLogo:(id)arg1 title:(id)arg2;

@end

