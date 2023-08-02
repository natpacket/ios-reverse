//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface MMTableViewIndexItem : MMUIView
{
    UILabel *_label;
    UIImageView *_imageView;
    UIView *_backgroundRoundView;
    _Bool _selected;
    NSString *_title;
    UIImage *_iconImage;
    UIImage *_renderedIconImage;
    UIImage *_searchIconImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *searchIconImage; // @synthesize searchIconImage=_searchIconImage;
@property(retain, nonatomic) UIImage *renderedIconImage; // @synthesize renderedIconImage=_renderedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (double)indexWidth;
- (void)reloadViewWithBrandColor:(id)arg1;

@end

