//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView;

@interface WCPlayLiveWithoutLoginHeadView : UIView
{
    MMWebImageView *_headImageView;
    MMUILabel *_nicknameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)updateViewModel:(id)arg1;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
