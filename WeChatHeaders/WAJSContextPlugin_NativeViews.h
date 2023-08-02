//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WABaseViewDelegate-Protocol.h"
#import "WATouchBaseViewDelegate-Protocol.h"

@class NSString;

@interface WAJSContextPlugin_NativeViews : WAJSContextPluginBase <WABaseViewDelegate, WATouchBaseViewDelegate, MoveWithTouchAlgorithmDelegate, UIScrollViewDelegate>
{
    _Bool _dragging;
}

@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
- (void)scrollViewDidScroll:(id)arg1;
- (id)decodeBase64String:(id)arg1;
- (id)getFileData:(id)arg1;
- (void)getFileData:(id)arg1 referrerPolicyType:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendJSEventWithEventName:(id)arg1 param:(id)arg2 baseView:(id)arg3;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)sendDragEventForViewForView:(id)arg1 touches:(id)arg2 stage:(id)arg3;
- (void)onDragCancel:(id)arg1 canvas:(id)arg2;
- (void)onDragEnd:(id)arg1 canvas:(id)arg2;
- (void)onDragMove:(id)arg1 canvas:(id)arg2;
- (void)onDragBegin:(id)arg1 canvas:(id)arg2;
- (void)onButtonClick:(id)arg1;
- (id)rootViewsForDest:(long long)arg1;
- (id)rootViewsForIndependent;
- (id)rootViewsForDic:(id)arg1;
- (void)animateCoverViewWithParam:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateScrollView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)insertScrollView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)insertBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

