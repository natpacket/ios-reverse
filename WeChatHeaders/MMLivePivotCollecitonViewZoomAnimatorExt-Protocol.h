//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class LiveSdkInfo, NSString;

@protocol MMLivePivotCollecitonViewZoomAnimatorExt

@optional
- (void)updateLiveSdkInfo:(LiveSdkInfo *)arg1 finderUserName:(NSString *)arg2;
- (void)resetZoomAnimatorStatus;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomOut;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)doZoomInAnimator;
@end
