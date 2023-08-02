//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEJBindingWebGLObject.h"

@class WAEJTexture;

@interface WAEJBindingWebGLTexture : WAEJBindingWebGLObject
{
    WAEJTexture *texture;
}

+ (id)getEGLContext:(struct OpaqueJSValue *)arg1;
+ (void)modifyWebGLTexture:(struct OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2 target:(unsigned int)arg3;
+ (struct OpaqueJSValue *)createJSObjectWithTexture:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 texture:(id)arg3;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
+ (id)textureFromJSValue:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)getJSObject;
- (id)getTexture;
- (void)invalidate;
- (id)initWithTexture:(id)arg1;
- (id)initWithWebGLContext:(id)arg1;

@end
