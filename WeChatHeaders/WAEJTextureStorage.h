//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSMutableDictionary;

@interface WAEJTextureStorage : NSObject
{
    NSMutableDictionary *params;
    unsigned int textureId;
    _Bool bCustomTexture;
    _Bool immutable;
    double lastBound;
    EAGLContext *glContext;
}

@property(readonly, nonatomic) _Bool immutable; // @synthesize immutable;
@property(readonly, nonatomic) unsigned int textureId; // @synthesize textureId;
@property(readonly, nonatomic) double lastBound; // @synthesize lastBound;
- (void)bindToTarget:(unsigned int)arg1 withParams:(id)arg2;
- (void)initParamsDict;
- (void)dealloc;
- (id)initWithCustomTexture:(unsigned int)arg1 immutable:(_Bool)arg2;
- (id)initImmutable;
- (id)init;

@end

