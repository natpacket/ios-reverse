//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WABaseViewDelegate-Protocol.h"
#import "WATouchBaseViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WAWebViewPlugin_baseView : WAWebViewPlugin_embedView <WABaseViewDelegate, UIScrollViewDelegate, WATouchBaseViewDelegate>
{
    _Bool _isReady;
    NSMutableArray *_animates;
}

+ (id)imageWithData:(id)arg1;
+ (void)refreshImageScrollView:(id)arg1 minimumZoomScale:(double)arg2 zoomScale:(double)arg3;
+ (void)recoverImageScrollView:(id)arg1;
- (void).cxx_destruct;
- (void)loadImageScrollView:(id)arg1 imageURL:(id)arg2 viewId:(unsigned int)arg3 zoomScale:(double)arg4 minimumZoomScale:(double)arg5;
- (void)removeScrollImageViewWithViewId:(unsigned int)arg1;
- (void)updateScrollImageViewWithParams:(id)arg1;
- (unsigned int)insertScrollImageViewWithParams:(id)arg1;
- (void)animateCoverView:(id)arg1 param:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeScrollView:(unsigned int)arg1;
- (void)updateScrollView:(id)arg1;
- (unsigned int)insertScrollView:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)removeBaseView:(unsigned int)arg1;
- (void)updateBaseView:(id)arg1;
- (unsigned int)insertBaseView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

