//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CAShapeLayer, UIButton, UIColor, UIImage, UIView;
@protocol StreamVoiceInputControlViewDelegate;

@interface StreamVoiceInputControlView : MMUIView
{
    id <StreamVoiceInputControlViewDelegate> _delegate;
    double _buttonLen;
    UIImage *_normalButtonImage;
    UIColor *_coverViewColor;
    UIImage *_highlightButtonImage;
    double _baseButtonShadowRadius;
    double _minButtonShadowRadius;
    double _maxButtonShadowRadius;
    UIView *_buttonShadowView;
    UIButton *_buttonView;
    CAShapeLayer *_indicator;
    UIView *_buttonCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *buttonCoverView; // @synthesize buttonCoverView=_buttonCoverView;
@property(retain, nonatomic) CAShapeLayer *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *buttonShadowView; // @synthesize buttonShadowView=_buttonShadowView;
@property(nonatomic) double maxButtonShadowRadius; // @synthesize maxButtonShadowRadius=_maxButtonShadowRadius;
@property(nonatomic) double minButtonShadowRadius; // @synthesize minButtonShadowRadius=_minButtonShadowRadius;
@property(nonatomic) double baseButtonShadowRadius; // @synthesize baseButtonShadowRadius=_baseButtonShadowRadius;
@property(retain, nonatomic) UIImage *highlightButtonImage; // @synthesize highlightButtonImage=_highlightButtonImage;
@property(retain, nonatomic) UIColor *coverViewColor; // @synthesize coverViewColor=_coverViewColor;
@property(retain, nonatomic) UIImage *normalButtonImage; // @synthesize normalButtonImage=_normalButtonImage;
@property(nonatomic) double buttonLen; // @synthesize buttonLen=_buttonLen;
@property(nonatomic) __weak id <StreamVoiceInputControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initDefaultConfig;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5 ShapeLayer:(id)arg6;
- (void)displayRecordingStatusForHold:(float)arg1;
- (void)stopBreatheAnimation;
- (_Bool)isBreatheAnimationActive;
- (void)addBreatheAnimation;
- (void)startBreatheAnimation;
- (void)resetAnimation;
- (void)stopAnimation;
- (void)startWaitingForResultAnimation;
- (void)startHoldInitAnimation;
- (void)startHoldRecordingAnimation;
- (void)startTapRecordingAnimation;
- (void)buttonTouchUp:(_Bool)arg1;
- (void)buttonTouchUpOutside;
- (void)buttonTouchUpInside;
- (void)checkHoldEvent;
- (void)buttonTouchDown;
- (void)layoutSubviews;
- (void)initUI;
- (void)dealloc;
- (id)init;

@end
