//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WCFinderLiveReplayProgressBarDelegate <NSObject>
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderBarTap;
- (void)onGreateTimeDotTap:(double)arg1;
- (void)onTotalDisplayTimeUpdate:(unsigned int)arg1;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onSliderScrubbEnd:(unsigned long long)arg1 time:(float)arg2;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderChangeToPercent:(float)arg1;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
@end

