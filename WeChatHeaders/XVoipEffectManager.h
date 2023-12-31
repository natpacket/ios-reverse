//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeVisVoipEffectMgr.h"

@class SpatiotemporalDenosingPreProcess, XImage, XMMGPUClarityPreProcess;

@interface XVoipEffectManager : WeVisVoipEffectMgr
{
    struct CGSize _renderTargetSizeWithoutRotation;
    struct CGSize _renderTargetSize;
    struct CGSize _yuvTextureSize;
    struct CGSize _yuvTexturePoolSize;
    struct CGSize _renderingInputSize;
    XImage *_renderingInputTexture;
    XImage *_algorithmInputTexture;
    XImage *_renderingOutputTexture;
    XImage *_renderOutputTextureY;
    XImage *_renderOutputTextureUV;
    struct __CVPixelBufferPool *_renderOuputYUVPool;
    struct unique_ptr<xeffect::ImageCropFilter, std::default_delete<xeffect::ImageCropFilter>> _bgra8ImageCropFilter;
    struct unique_ptr<xeffect::ImageCropFilter, std::default_delete<xeffect::ImageCropFilter>> _rgbImageCropFilter;
    struct unique_ptr<xeffect::XRgba2YFilter, std::default_delete<xeffect::XRgba2YFilter>> _rgb2Y;
    struct unique_ptr<xeffect::XRgba2UVFilter, std::default_delete<xeffect::XRgba2UVFilter>> _rgb2UV;
    struct unique_ptr<xeffect::XMMGPUSpatiotemporalDenosing, std::default_delete<xeffect::XMMGPUSpatiotemporalDenosing>> _denosingFilter;
    struct unique_ptr<xeffect::ClarityFilter, std::default_delete<xeffect::ClarityFilter>> _clarityFilter;
    struct unique_ptr<xeffect::DenosingFragment, std::default_delete<xeffect::DenosingFragment>> _denosingFragmentFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    struct vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData;
    struct __CVBuffer *_lastFrameCameraOutput;
    _Bool _enableFragmentDenosing;
    XMMGPUClarityPreProcess *_clarityPreProcess;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) XMMGPUClarityPreProcess *clarityPreProcess; // @synthesize clarityPreProcess=_clarityPreProcess;
@property(nonatomic) _Bool enableFragmentDenosing; // @synthesize enableFragmentDenosing=_enableFragmentDenosing;
- (void)clean;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 toRGBAImage:(id *)arg2 yuvPixelBuffer:(struct __CVBuffer **)arg3 cropSizeWithoutRotation:(struct CGSize)arg4 flipX:(_Bool)arg5;
- (ObjectRef_6bda2462)registerPixelBuffer:(struct __CVBuffer *)arg1 forPlane:(unsigned int)arg2 toGraph:(void *)arg3 name:(id)arg4;
- (void)encodeRGB:(ObjectRef_6bda2462)arg1 toY:(ObjectRef_6bda2462)arg2 toUV:(ObjectRef_6bda2462)arg3 graph:(void *)arg4;
- (void)encodeWeEffect:(void *)arg1 toTexture:(void *)arg2 graph:(void *)arg3 trackFace:(ObjectRef_0aa351a3)arg4;
- (void)encodeDenosingYTexture:(void *)arg1 uvTexture:(void *)arg2 toTexture:(void *)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (ObjectRef_0aa351a3)encodeTrackFace:(void *)arg1 graph:(void *)arg2;
- (void)encodeScale:(void *)arg1 toTexture:(void *)arg2 graph:(void *)arg3;
- (void)encodeConvertY:(ObjectRef_6bda2462)arg1 uv:(ObjectRef_6bda2462)arg2 toRGB:(ObjectRef_6bda2462)arg3 graph:(void *)arg4;
- (void)encodeDenosingFragmentYTexture:(void *)arg1 uvTexture:(void *)arg2 toTexture:(void *)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (void)encodeClarifyConvertY:(ObjectRef_6bda2462)arg1 uv:(ObjectRef_6bda2462)arg2 toRGB:(ObjectRef_6bda2462)arg3 graph:(void *)arg4 pixelMapping:(const void *)arg5;
- (void)enableClarityFilter:(_Bool)arg1 withMode:(int)arg2;
- (_Bool)callFaceTrack:(shared_ptr_4854a30e)arg1;
- (_Bool)updateTexturesWithClipSize:(struct CGSize)arg1;
- (struct CGSize)getAlgorithmInputSize;
- (_Bool)updateExtraOutputTextureSize;
- (void)setRGBATextureSize:(struct CGSize)arg1 yuvSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithSceneType:(long long)arg1 modelKeyArray:(id)arg2 runDeviceType:(unsigned long long)arg3 isAllowFp16:(_Bool)arg4;

@end

