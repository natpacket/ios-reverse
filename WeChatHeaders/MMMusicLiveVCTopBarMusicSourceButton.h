//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMUILabel, UIImageView;

@interface MMMusicLiveVCTopBarMusicSourceButton : MMUIButton
{
    UIImageView *_musicSourceIconView;
    MMUILabel *_musicSourceLabel;
    UIImageView *_musicSourceArrow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *musicSourceArrow; // @synthesize musicSourceArrow=_musicSourceArrow;
@property(retain, nonatomic) MMUILabel *musicSourceLabel; // @synthesize musicSourceLabel=_musicSourceLabel;
@property(retain, nonatomic) UIImageView *musicSourceIconView; // @synthesize musicSourceIconView=_musicSourceIconView;
- (void)reloadWithIconImage:(id)arg1 appName:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconImage:(id)arg2 appName:(id)arg3;

@end

