//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEJBindingBase.h"

@class WAEJBindingCanvas;

@interface WAEJBindingCanvasStyle : WAEJBindingBase
{
    WAEJBindingCanvas *binding;
}

+ (void *)_ptr_to_set_imageRendering;
+ (void *)_ptr_to_get_imageRendering;
+ (void *)_ptr_to_set_top;
+ (void *)_ptr_to_get_top;
+ (void *)_ptr_to_set_left;
+ (void *)_ptr_to_get_left;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_width;
@property(nonatomic) WAEJBindingCanvas *binding; // @synthesize binding;
- (void)_set_imageRendering:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_imageRendering:(struct OpaqueJSContext *)arg1;
- (void)_set_top:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_top:(struct OpaqueJSContext *)arg1;
- (void)_set_left:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_left:(struct OpaqueJSContext *)arg1;
- (void)_set_height:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (void)_set_width:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) struct OpaqueJSValue *jsObject;

@end

