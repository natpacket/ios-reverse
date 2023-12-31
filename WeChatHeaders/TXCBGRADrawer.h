//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCGLDrawer.h"

@interface TXCBGRADrawer : TXCGLDrawer
{
    struct __CVBuffer *_textureRef;
    _Bool _preferGPUUpload;
    unsigned int _rgbaTextureUniform;
    unsigned int _textureTarget;
    unsigned int _rgbaTexture;
}

@property(nonatomic) _Bool preferGPUUpload; // @synthesize preferGPUUpload=_preferGPUUpload;
@property(nonatomic) unsigned int rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(readonly, nonatomic) unsigned int rgbaTextureUniform; // @synthesize rgbaTextureUniform=_rgbaTextureUniform;
- (void)draw;
- (void)setupProgramIfNeed:(unsigned int)arg1;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)getType;
- (void)dealloc;
- (id)initWithContext:(id)arg1 coords:(id)arg2;

@end

