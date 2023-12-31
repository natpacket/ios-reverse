//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoBindableObject.h"

#import "TXIVideoRenderer-Protocol.h"

@class NSString, TXCDispatchQueue, TXCFramebufferDrawer, TXCGlFrameBuffer, TXCRgbToYuvFilter, TXCVideoFrameCoords, TXCVideoRenderConfig;
@protocol TXCCustomVideoRendererDelegate, TXIGlContext;

@interface TXCCustomVideoRenderer : TXCVideoBindableObject <TXIVideoRenderer>
{
    TXCDispatchQueue *_queue;
    TXCVideoRenderConfig *_config;
    id <TXCCustomVideoRendererDelegate> _delegate;
    TXCGlFrameBuffer *_frameBuffer;
    id <TXIGlContext> _context;
    TXCVideoFrameCoords *_frameCoords;
    TXCFramebufferDrawer *_drawer;
    TXCRgbToYuvFilter *_rgbToYuvFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCRgbToYuvFilter *rgbToYuvFilter; // @synthesize rgbToYuvFilter=_rgbToYuvFilter;
@property(retain, nonatomic) TXCFramebufferDrawer *drawer; // @synthesize drawer=_drawer;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) __weak id <TXCCustomVideoRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TXCVideoRenderConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)callbackFrame:(id)arg1;
- (_Bool)canSkipFrame:(id)arg1;
- (id)dataFrameFromFrame:(id)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setRotation:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

