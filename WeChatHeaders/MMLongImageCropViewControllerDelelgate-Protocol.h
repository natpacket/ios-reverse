//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLongImageCropResult, UIImageView;

@protocol MMLongImageCropViewControllerDelelgate <NSObject>
- (void)onCropViewControllerPopTransitionEnd;
- (void)onCropViewControllerPopTransitionInAnimateDuration;
- (void)onCropViewControllerPopTransitionBegan;
- (void)onCropViewControllerPushTransitionEnd;
- (void)onCropViewControllerPushTransitionInAnimateDuration;
- (UIImageView *)onGetImageViewForTransition;
- (void)onFinishCropImage:(MMLongImageCropResult *)arg1;
@end

