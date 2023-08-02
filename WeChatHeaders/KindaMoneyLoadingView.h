//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKMoneyLoadingView-Protocol.h"

@class MMDynamicColor, NSString, TimeoutNumber;

@interface KindaMoneyLoadingView : KindaView <MMKMoneyLoadingView>
{
    float _textSize;
    TimeoutNumber *_timeoutNumber;
    MMDynamicColor *_textColor;
    NSString *_fontName;
    long long _textAlign;
}

- (void).cxx_destruct;
@property(nonatomic) long long textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) float textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) MMDynamicColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) TimeoutNumber *timeoutNumber; // @synthesize timeoutNumber=_timeoutNumber;
- (void)setTextSizeNotScaleable:(float)arg1 isScaleable:(_Bool)arg2;
- (void)applyFont;
- (void)stopLoading;
- (void)startLoading;
- (float)getAnimationDuration;
- (void)setAnimationDuration:(float)arg1;
- (id)getTextColor;
- (float)getTextSize;
- (void)setMoney:(long long)arg1 animated:(_Bool)arg2;
- (void)setFont:(id)arg1;
- (id)getCurrencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (id)getView;
- (id)init;
- (void)updateTextAlignment:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

