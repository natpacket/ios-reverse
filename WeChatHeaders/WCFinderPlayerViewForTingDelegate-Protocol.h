//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TPVideoFrameBuffer, WCFinderPlayerViewForTing, WCPlayerPlaybackInfo;

@protocol WCFinderPlayerViewForTingDelegate <NSObject>

@optional
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoPlayFail:(int)arg2 errorDesc:(NSString *)arg3;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onBufferingChanged:(_Bool)arg2;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoPrepareToPlay:(WCPlayerPlaybackInfo *)arg2;
- (void)finderPlayerViewForTingOnDisplayViewMTKViewCreated:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoEnd:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoPlay:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoPause:(WCFinderPlayerViewForTing *)arg1;
@end

