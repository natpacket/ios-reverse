//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAVGLUtil : NSObject
{
}

+ (void)bindVertexBuffer:(unsigned int)arg1 vbo:(unsigned int)arg2 ebo:(unsigned int)arg3 flipY:(_Bool)arg4;
+ (void)createVAO;
+ (_Bool)linkProgram:(unsigned int)arg1;
+ (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 src:(id)arg3;
+ (_Bool)compileProgram:(unsigned int *)arg1 vs:(id)arg2 fs:(id)arg3;

@end

