//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEJBindingWebGLObject.h"

@interface WAEJBindingWebGLSync : WAEJBindingWebGLObject
{
    struct __GLsync *sync;
}

+ (struct __GLsync *)syncFromJSValue:(struct OpaqueJSValue *)arg1;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 sync:(struct __GLsync *)arg4;
- (void)invalidate;
- (id)initWithWebGLContext:(id)arg1 sync:(struct __GLsync *)arg2;

@end
