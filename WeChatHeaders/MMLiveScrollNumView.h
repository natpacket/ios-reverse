//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIFont;

@interface MMLiveScrollNumView : UIView
{
    UIColor *_digitColor;
    unsigned long long _numberSize;
    double _splitSpaceWidth;
    double _topAndBottomPadding;
    unsigned long long _numberValue;
    UIView *_backgroundView;
    UIView *_digitBackgroundView;
    UIFont *_digitFont;
    NSMutableArray *_numberViews;
    unsigned long long _randomLength;
}

+ (unsigned long long)sizeFromNum:(unsigned long long)arg1;
+ (unsigned long long)digitFromNum:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long randomLength; // @synthesize randomLength=_randomLength;
@property(retain, nonatomic) NSMutableArray *numberViews; // @synthesize numberViews=_numberViews;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont=_digitFont;
@property(retain, nonatomic) UIView *digitBackgroundView; // @synthesize digitBackgroundView=_digitBackgroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long numberValue; // @synthesize numberValue=_numberValue;
@property(nonatomic) double topAndBottomPadding; // @synthesize topAndBottomPadding=_topAndBottomPadding;
@property(nonatomic) double splitSpaceWidth; // @synthesize splitSpaceWidth=_splitSpaceWidth;
@property(nonatomic) unsigned long long numberSize; // @synthesize numberSize=_numberSize;
@property(retain, nonatomic) UIColor *digitColor; // @synthesize digitColor=_digitColor;
- (void)sizeToFit;
- (void)didConfigFinish;
- (unsigned long long)digitIndex:(unsigned long long)arg1;
- (void)setNumber:(unsigned long long)arg1 withDigitFont:(id)arg2 withAnimationType:(int)arg3 animationTime:(double)arg4;
- (void)initScrollNumView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

