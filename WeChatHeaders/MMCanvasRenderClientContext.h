//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebJSContext.h"

#import "MMCanvasJsApiHandlerViewDelegate-Protocol.h"

@class MMCanvasJsApiHandler, MMCanvasRenderClientContextParams, NSString;
@protocol MMCanvasRenderClientContextDelegate;

@interface MMCanvasRenderClientContext : MMWebJSContext <MMCanvasJsApiHandlerViewDelegate>
{
    MMCanvasRenderClientContextParams *_params;
    NSString *_canvasId;
    id <MMCanvasRenderClientContextDelegate> _delegate;
    MMCanvasJsApiHandler *_canvasJsApiHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCanvasJsApiHandler *canvasJsApiHandler; // @synthesize canvasJsApiHandler=_canvasJsApiHandler;
@property(nonatomic) __weak id <MMCanvasRenderClientContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) MMCanvasRenderClientContextParams *params; // @synthesize params=_params;
- (long long)onGetFPS:(id)arg1;
- (id)getJsCanvas;
- (void)onSaveCanvasHeight:(double)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (_Bool)isCanvasViewInBackground;
- (_Bool)isCanvasViewAppear;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewHeight;
- (double)getCanvasViewWidth;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (id)viewDelegate;
- (id)contextDelegate;
- (void)dealloc;
- (void)internalInit;
- (id)initWithJVM:(id)arg1 name:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

