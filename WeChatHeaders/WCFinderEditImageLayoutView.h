//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderEditImageBasicLayoutView.h"

#import "WCFinderEditFrameBlurViewDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer, UIView, WCFinderAlbumScrollViewParamModel, WCFinderEditFrameBlurView;

@interface WCFinderEditImageLayoutView : WCFinderEditImageBasicLayoutView <WCFinderEditFrameBlurViewDelegate>
{
    _Bool _hiddenCropBtn;
    _Bool _needAdjustThumbItemSize;
    _Bool _forbiddenFrameCrop;
    UIView *_headBlurView;
    UIView *_bottomBlurView;
    WCFinderAlbumScrollViewParamModel *_scrollViewParamModel;
    WCFinderEditFrameBlurView *_frameCropView;
    UITapGestureRecognizer *_doubleTapGes;
    double _visibleHeightWidRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbiddenFrameCrop; // @synthesize forbiddenFrameCrop=_forbiddenFrameCrop;
@property(nonatomic) double visibleHeightWidRatio; // @synthesize visibleHeightWidRatio=_visibleHeightWidRatio;
@property(nonatomic) _Bool needAdjustThumbItemSize; // @synthesize needAdjustThumbItemSize=_needAdjustThumbItemSize;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGes; // @synthesize doubleTapGes=_doubleTapGes;
@property(retain, nonatomic) WCFinderEditFrameBlurView *frameCropView; // @synthesize frameCropView=_frameCropView;
@property(nonatomic) WCFinderAlbumScrollViewParamModel *scrollViewParamModel; // @synthesize scrollViewParamModel=_scrollViewParamModel;
@property(retain, nonatomic) UIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(_Bool)arg2;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (void)setCropFrameButtonHidden:(_Bool)arg1;
- (struct CGRect)currentCropRectInImage;
- (struct CGRect)currentCropRectInScreen;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)addBlurView;
- (id)initWithFrame:(struct CGRect)arg1 hiddenCropBtn:(_Bool)arg2 scrollViewParamModel:(id)arg3 visibleHeightWidRatio:(double)arg4 forbiddenFrameCrop:(_Bool)arg5;
- (void)updateCurScrollViewZoomRate;
- (struct CGSize)getEditSelectedCollectionViewItemSize;
- (unsigned long long)setBGMViewButtonOption;
- (void)resetPreviewImageAndSetScrollViewFrame;
- (void)resetPreviewImageAndSetScrollViewFrameWithAnim:(_Bool)arg1;
- (void)onDoubleClickScrollViewAction;
- (void)updateScrollViewLayoutViews;
- (void)updateImageViewContentOffset:(struct CGPoint)arg1;
- (void)scrollViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)onFinderEditFrameBlurViewUpdateBlurButtonFrame:(struct CGRect)arg1;
- (void)updateScrollViewFrame;
- (void)triggerScrollViewDidEndZooming;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

