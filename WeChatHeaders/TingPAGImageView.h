//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PAGPlayer, UIImage, UIImageView;

@interface TingPAGImageView : UIView
{
    _Bool _bResignActive;
    PAGPlayer *_pagCore;
    UIImageView *_coverView;
    UIImage *_renderImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bResignActive; // @synthesize bResignActive=_bResignActive;
@property(nonatomic) __weak UIImage *renderImage; // @synthesize renderImage=_renderImage;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) PAGPlayer *pagCore; // @synthesize pagCore=_pagCore;
- (void)applyRenderResultImg:(id)arg1;
- (void)applyFile:(id)arg1;
- (void)prepareForReuse;
- (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)flush;
- (void)freeCache;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initPagView;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

