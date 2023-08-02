//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem;

@protocol WCFinderLandScapeVideoInteractivePlayerViewDelegate <NSObject>

@optional
- (void)onFinderLandScapeInteractiveViewNotifyVideoDidEndPlay;
- (void)onFinderLandScapeInteractiveViewContentMediaDidEndPlay;
- (void)onFinderLandScapeInteractiveViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtn:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickPlayNextVideoWithDataItem:(WCFinderDataItem *)arg1;
- (WCFinderDataItem *)finderLandScapeInteractiveViewGetNextPlayableDataItem;
- (void)onFinderLandScapeInteractiveViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewEndPan;
- (void)onFinderLandScapeInteractiveViewStartPan;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletBtn;
- (void)onFinderLandScapeInteractiveViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickReturnBtn;
- (void)onFinderLandScapeInteractiveViewClickRotateBtn;
@end
