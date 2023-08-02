//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFullScreenItemView, NSString, SimpleImgInfo, UIView;

@protocol FavImageFullScreenViewContainerDelegate <NSObject>
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3;
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadVideoWith:(SimpleImgInfo *)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onWillLongPress:(UIView *)arg1 touchPoint:(struct CGPoint)arg2 onImage:(SimpleImgInfo *)arg3;
- (void)onLongPressEvent:(MMFullScreenItemView *)arg1 onImage:(SimpleImgInfo *)arg2;
- (_Bool)allowAnimationOnLandscape;
- (_Bool)useBackgroundAnimation;
- (double)animationDuration;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)onSingleTapToAnimateToolsHidden:(_Bool)arg1;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
@end

