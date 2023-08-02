//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveGestureAnimationExternalRendering-Protocol.h"

@class MMFinderLiveTaskId, NSMutableDictionary, NSMutableSet, NSString;
@protocol MMFinderLiveGestureAnimationExternalRenderingDelegate;

@interface MMFinderLiveGestureAnimationWeVisionRenderer : NSObject <MMFinderLiveGestureAnimationExternalRendering>
{
    id <MMFinderLiveGestureAnimationExternalRenderingDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_renderScriptIdToRenderTaskMap;
    NSMutableDictionary *_animationResourceIdToRenderTaskMap;
    NSMutableSet *_gestureDeduplicateSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *gestureDeduplicateSet; // @synthesize gestureDeduplicateSet=_gestureDeduplicateSet;
@property(retain, nonatomic) NSMutableDictionary *animationResourceIdToRenderTaskMap; // @synthesize animationResourceIdToRenderTaskMap=_animationResourceIdToRenderTaskMap;
@property(retain, nonatomic) NSMutableDictionary *renderScriptIdToRenderTaskMap; // @synthesize renderScriptIdToRenderTaskMap=_renderScriptIdToRenderTaskMap;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationExternalRenderingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportAnimationPlayingWithRenderTask:(id)arg1;
- (void)playSoundEffectForGestureWithId:(id)arg1;
- (void)completeRenderingOfAnimationWithResourceId:(long long)arg1 instanceId:(int)arg2;
- (void)startRenderingOfTask:(id)arg1;
- (id)liveTask;
- (void)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)addGestureAnimationForCurrentUserWithGestureId:(id)arg1 instanceId:(id)arg2 translationX:(double)arg3 translationY:(double)arg4 rotation:(double)arg5 scale:(double)arg6;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
