//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject
{
    CADisplayLink *_displayLink;
    list_e34ef07f _list;
    struct __CFDictionary *_dict;
    NSMutableArray *_observers;
    list_e34ef07f _pendingList;
    struct __CFRunLoopObserver *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    struct os_unfair_lock_s _lock;
    _Bool _disableDisplayLink;
    id <POPAnimatorDelegate> _delegate;
}

+ (void)setDisableBackgroundThread:(_Bool)arg1;
+ (_Bool)disableBackgroundThread;
+ (id)sharedAnimator;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool disableDisplayLink; // @synthesize disableDisplayLink=_disableDisplayLink;
@property(nonatomic) __weak id <POPAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)renderTime:(double)arg1;
- (void)render;
- (double)_currentRenderTime;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(_Bool)arg3;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (id)observers;
- (void)_renderTime:(double)arg1 item:(shared_ptr_1553c9f8)arg2;
- (void)_renderTime:(double)arg1 items:(list_e34ef07f)arg2;
- (void)_scheduleProcessPendingList;
- (void)_clearPendingListObserver;
- (void)_processPendingList;
- (void)dealloc;
- (id)init;

@end

