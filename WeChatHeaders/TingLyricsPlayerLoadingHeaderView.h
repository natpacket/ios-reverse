//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TingLyricAnimationLoadingView;

@interface TingLyricsPlayerLoadingHeaderView : UIView
{
    TingLyricAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingLyricAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
