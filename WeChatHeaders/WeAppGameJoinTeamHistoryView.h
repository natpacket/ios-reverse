//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMUIImageView, MMUILabel;

@interface WeAppGameJoinTeamHistoryView : MMUIButton
{
    MMUIImageView *_leftIconView;
    MMUILabel *_wordingLable;
    MMUIImageView *_rightIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) MMUILabel *wordingLable; // @synthesize wordingLable=_wordingLable;
@property(retain, nonatomic) MMUIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (id)init;

@end
