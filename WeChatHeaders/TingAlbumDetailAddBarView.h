//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, UIButton, UIImageView, UIView;

@interface TingAlbumDetailAddBarView : MMUIView
{
    MMUILabel *_titleLabel;
    UIView *_bottomLine;
    UIButton *_addButton;
    UIImageView *_addImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addImg; // @synthesize addImg=_addImg;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)configLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

