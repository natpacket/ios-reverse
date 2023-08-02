//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedesignTextItem.h"

@class UIButton;

@interface WCRedesignVerifyCodeTextItem : WCRedesignTextItem
{
    _Bool _useShortWording;
    long long _iCount;
    CDUnknownBlockType _tapVerifyCodeButtonHandler;
    CDUnknownBlockType _onSetNeedsLayout;
    UIButton *_verifyCodeButton;
    long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(copy, nonatomic) CDUnknownBlockType onSetNeedsLayout; // @synthesize onSetNeedsLayout=_onSetNeedsLayout;
@property(copy, nonatomic) CDUnknownBlockType tapVerifyCodeButtonHandler; // @synthesize tapVerifyCodeButtonHandler=_tapVerifyCodeButtonHandler;
@property(nonatomic) _Bool useShortWording; // @synthesize useShortWording=_useShortWording;
@property(nonatomic) long long iCount; // @synthesize iCount=_iCount;
- (void)updateVerifyCodeButton;
- (void)stopCountDownTimer;
- (void)startCountDownTimer;
- (void)config;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

@end

