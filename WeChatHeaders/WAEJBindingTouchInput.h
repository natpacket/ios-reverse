//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEJBindingEventedBase.h"

#import "EJTouchDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString;

@interface WAEJBindingTouchInput : WAEJBindingEventedBase <EJTouchDelegate>
{
    struct OpaqueJSString *jsLengthName;
    struct OpaqueJSString *jsTargetName;
    struct OpaqueJSString *jsIdentifierName;
    struct OpaqueJSString *jsTouchForce;
    struct OpaqueJSString *jsTouchMaxForce;
    struct OpaqueJSString *jsPageXName;
    struct OpaqueJSString *jsPageYName;
    struct OpaqueJSString *jsClientXName;
    struct OpaqueJSString *jsClientYName;
    struct OpaqueJSString *jsOffsetXName;
    struct OpaqueJSString *jsOffsetYName;
    struct OpaqueJSValue *jsTouchesPool[16];
    struct OpaqueJSValue *jsTouchTarget;
    unsigned long long touchesInPool;
    unsigned int screenCanvasId;
    NSArray *sortDescriptors;
    NSMutableSet *touchIdSet;
}

+ (void *)_ptr_to_set_ontouchcancel;
+ (void *)_ptr_to_get_ontouchcancel;
+ (void *)_ptr_to_set_ontouchmove;
+ (void *)_ptr_to_get_ontouchmove;
+ (void *)_ptr_to_set_ontouchend;
+ (void *)_ptr_to_get_ontouchend;
+ (void *)_ptr_to_set_ontouchstart;
+ (void *)_ptr_to_get_ontouchstart;
- (unsigned long long)pointInside:(struct CGPoint)arg1;
- (void)postEvent:(id)arg1;
- (void)triggerEvent:(id)arg1 timestamp:(double)arg2 all:(id)arg3 changed:(id)arg4 remaining:(id)arg5;
- (void)dealloc;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (_Bool)isScreenCanvasMode;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

