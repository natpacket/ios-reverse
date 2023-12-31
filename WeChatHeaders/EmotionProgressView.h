//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface EmotionProgressView : UIView
{
    double _progress;
    UIView *_foregroundView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)updateSizeIfNeeded;
- (void)setPrsColor:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setupViews;
- (void)setupFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

