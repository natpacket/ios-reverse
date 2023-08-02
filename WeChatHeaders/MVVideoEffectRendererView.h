//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLKViewDelegate-Protocol.h"

@class MAVEffectRenderer, MAVGLContext, MAVGLKView, NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MVVideoEffectRendererView : UIView <GLKViewDelegate>
{
    _Bool _shouldClearDisplayContent;
    _Bool _isApplicationActive;
    MAVEffectRenderer *_effectRender;
    MAVGLContext *_glContext;
    MAVGLKView *_glkView;
    NSMutableArray *_pendingTaskList;
    NSArray *_transitionList;
    NSObject<OS_dispatch_queue> *_renderDispatchQueue;
    struct CGRect _displayFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicationActive; // @synthesize isApplicationActive=_isApplicationActive;
@property(nonatomic) struct CGRect displayFrame; // @synthesize displayFrame=_displayFrame;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderDispatchQueue; // @synthesize renderDispatchQueue=_renderDispatchQueue;
@property(nonatomic) _Bool shouldClearDisplayContent; // @synthesize shouldClearDisplayContent=_shouldClearDisplayContent;
@property(retain, nonatomic) NSArray *transitionList; // @synthesize transitionList=_transitionList;
@property(retain, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
@property(retain, nonatomic) MAVGLKView *glkView; // @synthesize glkView=_glkView;
@property(retain, nonatomic) MAVGLContext *glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) MAVEffectRenderer *effectRender; // @synthesize effectRender=_effectRender;
- (void)clearDisplay;
- (_Bool)isValidStatus;
- (void)ensureDrawable;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)setTransitions:(id)arg1;
- (void)addBlurEffectForRenderWithRadius:(float)arg1;
- (struct CGSize)rendererSize;
- (void)updateSubviewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)renderToScreenWithTask:(id)arg1;
- (void)displayGlkView;
- (void)_shouldRender:(id)arg1;
- (void)shouldRender:(id)arg1;
- (void)setupSubviews;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
