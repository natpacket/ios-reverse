//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView, WCListenLyricAnimationLoadingView;

@interface WCListenLyricsLoadingHeaderView : MMUIView
{
    CDUnknownBlockType _onClickBlock;
    WCListenLyricAnimationLoadingView *_loadingView;
    UIView *_highlightedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) WCListenLyricAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType onClickBlock; // @synthesize onClickBlock=_onClickBlock;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlightedViewHidden:(_Bool)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

