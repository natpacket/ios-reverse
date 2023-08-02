//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMLiveBeautySlider, UIImageView, UILabel;

@interface MMLiveBeautyStyleSlider : UIView
{
    _Bool _hideProgressTip;
    _Bool _hideDefaultValuePoint;
    _Bool _isValueChangeDoubleSide;
    _Bool _hasCheckedSliderThumbImageView;
    float _defaultValue;
    int _minValue;
    int _maxValue;
    SEL _valueChangedAction;
    id _valueChangedTarget;
    SEL _touchUpAction;
    id _touchUpTarget;
    MMLiveBeautySlider *_sliderView;
    UIView *_backgroundView;
    UIView *_backgroundStripe;
    UIView *_backgroundProgressStripe;
    UIView *_backgroundDefaultValueDot;
    UILabel *_progressTipLabel;
    UIImageView *_sliderThumbImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckedSliderThumbImageView; // @synthesize hasCheckedSliderThumbImageView=_hasCheckedSliderThumbImageView;
@property(nonatomic) __weak UIImageView *sliderThumbImageView; // @synthesize sliderThumbImageView=_sliderThumbImageView;
@property(nonatomic) int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) int minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) UILabel *progressTipLabel; // @synthesize progressTipLabel=_progressTipLabel;
@property(retain, nonatomic) UIView *backgroundDefaultValueDot; // @synthesize backgroundDefaultValueDot=_backgroundDefaultValueDot;
@property(retain, nonatomic) UIView *backgroundProgressStripe; // @synthesize backgroundProgressStripe=_backgroundProgressStripe;
@property(retain, nonatomic) UIView *backgroundStripe; // @synthesize backgroundStripe=_backgroundStripe;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMLiveBeautySlider *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) _Bool isValueChangeDoubleSide; // @synthesize isValueChangeDoubleSide=_isValueChangeDoubleSide;
@property(nonatomic) _Bool hideDefaultValuePoint; // @synthesize hideDefaultValuePoint=_hideDefaultValuePoint;
@property(nonatomic) _Bool hideProgressTip; // @synthesize hideProgressTip=_hideProgressTip;
@property(nonatomic) __weak id touchUpTarget; // @synthesize touchUpTarget=_touchUpTarget;
@property(nonatomic) SEL touchUpAction; // @synthesize touchUpAction=_touchUpAction;
@property(nonatomic) __weak id valueChangedTarget; // @synthesize valueChangedTarget=_valueChangedTarget;
@property(nonatomic) SEL valueChangedAction; // @synthesize valueChangedAction=_valueChangedAction;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool showBackgroundProgressStripe;
@property(nonatomic) float value;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderValueChanged:(id)arg1;
- (void)valueChangeInTheRangeOf:(int)arg1 to:(int)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)addEndTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutBackgroundProgressStripe;
- (void)layoutProgressTipLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

