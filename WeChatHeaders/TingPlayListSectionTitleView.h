//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFlexBaseView.h"

@class MMUILabel, NSString, TingPlayModeControlView, UIImageView;

@interface TingPlayListSectionTitleView : WCFlexBaseView
{
    MMUILabel *_titleLabel;
    TingPlayModeControlView *_controlView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TingPlayModeControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateControlViewWithPlayer:(id)arg1;
- (void)setShouldShowIcon:(_Bool)arg1;
@property(retain, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureLayout;

@end

