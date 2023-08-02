//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMTimerLabel, MMUIActivityIndicatorView, MMUILabel, MMUIView, UIImageView, UIView;

@interface MMFinderLiveGoodsPromotionReplayButton : MMUIButton
{
    long long _currentState;
    CDUnknownBlockType _replayButtonDidClickedBlock;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_maskView;
    UIImageView *_iconView;
    MMUILabel *_actionTextLabel;
    MMTimerLabel *_timerLabel;
    MMUIView *_dotTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *dotTipsView; // @synthesize dotTipsView=_dotTipsView;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) MMUILabel *actionTextLabel; // @synthesize actionTextLabel=_actionTextLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType replayButtonDidClickedBlock; // @synthesize replayButtonDidClickedBlock=_replayButtonDidClickedBlock;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTapInside:(id)arg1;
- (void)updateTimeLabel:(unsigned int)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)updateWithGoodsViewModel:(id)arg1;
- (id)buildAttributedStringWithTitle:(id)arg1 font:(id)arg2;
- (void)updateUIWithReplayRecordState:(long long)arg1;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
