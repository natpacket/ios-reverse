//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXCPixelTransferSession-Protocol.h"

@class NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLFunction, MTLLibrary;

@interface TXCPixelTransferSessioniOSImpl : NSObject <TXCPixelTransferSession>
{
    struct vImage_ARGBToYpCbCr _vImageColorConversionInfo;
    _Bool _colorConversionFullRange;
    _Bool _enableColorConversion;
    id <MTLDevice> _metalDevice;
    id <MTLLibrary> _library;
    id <MTLBuffer> _colorConversionBuffer;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_metalTextureCache;
    id <MTLFunction> _kernelFunc;
    id <MTLComputePipelineState> _computePipelineState;
    struct __CFString *_colorConversionMartixKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableColorConversion; // @synthesize enableColorConversion=_enableColorConversion;
@property(nonatomic) _Bool colorConversionFullRange; // @synthesize colorConversionFullRange=_colorConversionFullRange;
@property(nonatomic) struct __CFString *colorConversionMartixKey; // @synthesize colorConversionMartixKey=_colorConversionMartixKey;
@property(retain, nonatomic) id <MTLComputePipelineState> computePipelineState; // @synthesize computePipelineState=_computePipelineState;
@property(retain, nonatomic) id <MTLFunction> kernelFunc; // @synthesize kernelFunc=_kernelFunc;
@property(nonatomic) struct __CVMetalTextureCache *metalTextureCache; // @synthesize metalTextureCache=_metalTextureCache;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLBuffer> colorConversionBuffer; // @synthesize colorConversionBuffer=_colorConversionBuffer;
@property(retain, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (void)transferPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)vImageTransferARGBPixelBuffer:(struct __CVBuffer *)arg1 toI420PixelBuffer:(struct __CVBuffer *)arg2;
- (_Bool)setupvImageColorConversion:(struct __CVBuffer *)arg1;
- (void)metalTransferPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (id)metalTexturesFromPixelBuffer:(struct __CVBuffer *)arg1;
- (id)metalTextureFromNV12PixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (id)metalTextureFromI420PixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (id)metalTextureFromRGBPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setupMetalColorConversion:(struct __CVBuffer *)arg1;
- (_Bool)updateColorConversionPropertyIfNeed:(struct __CVBuffer *)arg1;
- (void)setupKernelFunc:(id)arg1;
- (void)setupMetal;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

