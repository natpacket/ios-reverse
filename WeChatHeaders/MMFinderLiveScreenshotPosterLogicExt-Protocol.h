//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveScreenshotPosterLogic;

@protocol MMFinderLiveScreenshotPosterLogicExt <NSObject>

@optional
- (void)onScreenshotInvalidatedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1;
- (void)onScreenshotReadyForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1;
- (void)onScreenshotAssociatedImageRequestedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1 asyncBeginBlock:(void (^)(void))arg2 asyncEndBlock:(void (^)(void))arg3;
- (void)onScreenshotCommitVetoRequestedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1 vetoFlag:(_Bool *)arg2;
@end

