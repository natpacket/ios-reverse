//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UIImageView, UILabel;

@interface TingAlbumCreateCell : UIView
{
    UIControl *_containerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;

@end

