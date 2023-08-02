//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIActivityIndicatorView, MMUILabel, TingFooterDecorateLines, UIImageView;

@interface TingFooterView : MMUIView
{
    unsigned long long _mode;
    CDUnknownBlockType _refreshHandler;
    CDUnknownBlockType _continueLoadMoreHandler;
    UIImageView *_imageView;
    MMUIActivityIndicatorView *_indicatorView;
    MMUILabel *_textLabel;
    TingFooterDecorateLines *_docoLines;
    UIImageView *_reloadIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *reloadIcon; // @synthesize reloadIcon=_reloadIcon;
@property(retain, nonatomic) TingFooterDecorateLines *docoLines; // @synthesize docoLines=_docoLines;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType continueLoadMoreHandler; // @synthesize continueLoadMoreHandler=_continueLoadMoreHandler;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)updateImage;
- (void)footerViewSelector;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setLoadingTextFont:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

