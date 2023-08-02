//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "MediaFullScreenInterface-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, MMUIActivityIndicatorView, MMWebImageView, NSArray, NSString, WXFullScreenGestureRecognizer;
@protocol WebImageScrollViewDelegate;

@interface WebImageScrollView : MMUIScrollView <FullScreenGestureDelegate, MMWebImageViewDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, MediaFullScreenInterface>
{
    MMWebImageView *webImageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool m_bImageLoadDone;
    _Bool m_bFullScreenAnimationDone;
    _Bool _useWindowFrame;
    id <WebImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useWindowFrame; // @synthesize useWindowFrame=_useWindowFrame;
@property __weak id <WebImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (id)getQuitAnimationView;
- (void)finishFullScreenAnimation:(struct CGRect)arg1;
- (void)beginFullScreenAnimation:(id)arg1;
- (void)resetLoadingIndicator;
- (void)displayWithFrame:(struct CGRect)arg1;
- (void)resizeToFrame:(struct CGRect)arg1;
- (void)becomeVisible;
- (void)becomeInvisible;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (double)screenHeight;
- (double)screenWidth;
- (id)getImageView;
- (void)updateScrollable;
- (void)onLoadImageOK:(id)arg1;
- (void)tryReloadView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
@property(nonatomic) _Bool enableDragToClose;
- (void)setImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

