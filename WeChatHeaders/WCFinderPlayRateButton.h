//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class NSArray;

@interface WCFinderPlayRateButton : MMUIButton
{
    NSArray *_playRatePairs;
    CDUnknownBlockType _playRateChangeBlock;
    long long _currentIndex;
    long long _normalPlayRateIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long normalPlayRateIndex; // @synthesize normalPlayRateIndex=_normalPlayRateIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) CDUnknownBlockType playRateChangeBlock; // @synthesize playRateChangeBlock=_playRateChangeBlock;
@property(retain, nonatomic) NSArray *playRatePairs; // @synthesize playRatePairs=_playRatePairs;
- (_Bool)isPlayRate:(double)arg1 equalToOtherPlayRate:(double)arg2;
- (_Bool)isNormalPlayRate:(double)arg1;
- (void)updatePlayRateState;
- (void)onClickBtn;
- (double)currentPlayRate;
- (void)setPlayRate:(double)arg1;
- (void)resetToNormalPlayRate;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

