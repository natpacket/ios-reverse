//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView;

@interface BTScrollabelFinderStyleCoverContainerView : MMUIView
{
    _Bool _forceSetHighlight;
    UIView *_highlightView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceSetHighlight; // @synthesize forceSetHighlight=_forceSetHighlight;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

