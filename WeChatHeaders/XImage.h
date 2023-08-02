//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface XImage : NSObject
{
    const struct AAPLTextureFormatInfo *_formatInfo;
    struct __CVBuffer *_CVPixelBuffer;
    struct __CVBuffer *_CVMTLTexture;
    struct __CVBuffer *_CVGLTexture;
    struct CGSize _size;
    struct ObjectRef<xnet::rci::RciTexture> _internalRciTexture;
    long long _range;
    long long _standard;
    unsigned int _openGLTexture;
    id <MTLTexture> _metalTexture;
}

+ (id)createInteropImage:(struct CGSize)arg1;
+ (id)createImageWithPixelBuffer:(struct __CVBuffer *)arg1 ofPlane:(unsigned long long)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long standard; // @synthesize standard=_standard;
@property(readonly, nonatomic) long long range; // @synthesize range=_range;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <MTLTexture> metalTexture; // @synthesize metalTexture=_metalTexture;
@property(readonly, nonatomic) unsigned int openGLTexture; // @synthesize openGLTexture=_openGLTexture;
- (id)convertToCIImage;
- (id)debugQuickLookObject;
- (_Bool)createMetalTexture;
- (_Bool)createGLTexture;
@property(readonly, nonatomic) void *rciTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (void)dealloc;
- (id)init;

@end

