//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, TingAudioQualityButton, TingButton, UIColor, UILabel;
@protocol TingProgressBarDelegate;

@interface TingProgressBar : UIView
{
    _Bool _isSeeking;
    _Bool _isDragging;
    id <TingProgressBarDelegate> _delegate;
    UIColor *_dotColor;
    UIColor *_dotSelectedColor;
    UIColor *_barColor;
    UIColor *_progressColor;
    UIColor *_progressSelectedColor;
    unsigned long long _uiState;
    UIView *_dot;
    UIView *_bar;
    UIView *_progressBar;
    UILabel *_timeLabel;
    UILabel *_durationLabel;
    UILabel *_noCopyRightLabel;
    TingButton *_trialButton;
    TingAudioQualityButton *_audioQualityButton;
    MMUIActivityIndicatorView *_loadingIndicator;
    MMUIActivityIndicatorView *_replacingUnplayableIndicator;
    double _currentTime;
    double _duration;
    double _progress;
    double _beganSeekDotCenterX;
    unsigned long long _style;
    struct CGSize _dotSize;
    struct CGSize _dotSelectedSize;
    struct CGSize _dotDraggingSize;
    struct CGPoint _beganSeekPos;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double beganSeekDotCenterX; // @synthesize beganSeekDotCenterX=_beganSeekDotCenterX;
@property(nonatomic) struct CGPoint beganSeekPos; // @synthesize beganSeekPos=_beganSeekPos;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) MMUIActivityIndicatorView *replacingUnplayableIndicator; // @synthesize replacingUnplayableIndicator=_replacingUnplayableIndicator;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) TingAudioQualityButton *audioQualityButton; // @synthesize audioQualityButton=_audioQualityButton;
@property(retain, nonatomic) TingButton *trialButton; // @synthesize trialButton=_trialButton;
@property(retain, nonatomic) UILabel *noCopyRightLabel; // @synthesize noCopyRightLabel=_noCopyRightLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) UIView *dot; // @synthesize dot=_dot;
@property(nonatomic) unsigned long long uiState; // @synthesize uiState=_uiState;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(retain, nonatomic) UIColor *progressSelectedColor; // @synthesize progressSelectedColor=_progressSelectedColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) struct CGSize dotDraggingSize; // @synthesize dotDraggingSize=_dotDraggingSize;
@property(nonatomic) struct CGSize dotSelectedSize; // @synthesize dotSelectedSize=_dotSelectedSize;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
@property(retain, nonatomic) UIColor *dotSelectedColor; // @synthesize dotSelectedColor=_dotSelectedColor;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) __weak id <TingProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateDisplayForDragging:(_Bool)arg1;
- (void)_updateDisplayForTouch:(_Bool)arg1;
- (void)_updateDisplayForNormal:(_Bool)arg1 delay:(double)arg2;
- (void)_updateDisplayForNormal:(_Bool)arg1;
- (void)_updateProgress;
- (void)_updateLabel;
- (void)reset;
- (void)changeUIState:(unsigned long long)arg1;
- (void)setIsReplacingUnplayableItem:(_Bool)arg1;
- (void)setIsLoading:(_Bool)arg1;
- (void)updateAudioQuality;
- (void)showTrialHint:(_Bool)arg1;
- (void)updateCurrentTime:(float)arg1 duration:(float)arg2;
- (void)updateStyle:(unsigned long long)arg1;
- (void)layoutLabels;
- (void)layoutAudioQualityButton;
- (void)updateLayout;
- (double)labelHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupSubviews;
- (void)internalInit:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)genLoadingIndicator;

@end

