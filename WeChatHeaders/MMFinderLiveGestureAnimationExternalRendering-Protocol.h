//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMFinderLiveGestureAnimationExternalRenderingDelegate;

@protocol MMFinderLiveGestureAnimationExternalRendering <NSObject>
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationExternalRenderingDelegate> delegate;
- (void)addGestureAnimationForCurrentUserWithGestureId:(NSString *)arg1 instanceId:(NSString *)arg2 translationX:(double)arg3 translationY:(double)arg4 rotation:(double)arg5 scale:(double)arg6;
@end

