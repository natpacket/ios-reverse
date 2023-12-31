//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface glVideoBlur : NSObject
{
    unsigned int mFrameBuffer[3];
    unsigned int mTextureid[3];
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int minputImageTextureid;
    unsigned int mtexSizeid;
    unsigned int mOffsetid;
    long long scene;
}

- (unsigned int)getTex:(int)arg1;
- (void)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (void)setupVBOs;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (_Bool)compileshaders;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (void)destroybuffers;
- (void)dealloc;
- (id)init:(long long)arg1;
- (id)init;

@end

