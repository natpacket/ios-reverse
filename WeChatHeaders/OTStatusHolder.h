//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface OTStatusHolder : NSObject
{
    EAGLContext *currContext;
    int currActiveTexture;
    int currTextureId;
    int currFrameBuffer;
    int currRenderBuffer;
    int currProgram;
    int curVAO;
    int curVBO;
    int curEBO;
    int currArrayBuffer;
    int currElementArrayBuffer;
    int currVertexArray;
    int currViewPort[4];
}

- (void).cxx_destruct;
- (void)leave;
- (void)join:(id)arg1;
- (void)dealloc;

@end

