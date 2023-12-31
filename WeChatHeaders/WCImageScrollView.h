//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, MMScrollViewZoomReporter, MMUIActivityIndicatorView, NSArray, NSString, UIView, WXFullScreenGestureRecognizer;
@protocol WCImageScrollViewDelegate;

@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate>
{
    UIView *imageView;
    unsigned long long index;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool supportOrientation;
    WXFullScreenGestureRecognizer *m_gesture;
    id <WCImageScrollViewDelegate> m_delegate;
    long long _browseScene;
    MMScrollViewZoomReporter *_zoomReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) __weak id <WCImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) MMUIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) _Bool supportOrientation; // @synthesize supportOrientation;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (id)getImageView;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)willMoveToSuperview:(id)arg1;
- (void)setImageTransform:(struct CGAffineTransform)arg1;
- (void)stopLoading;
- (void)displayView:(id)arg1;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)internalDisplayImage:(id)arg1 withFrame:(struct CGRect)arg2 animate:(_Bool)arg3;
- (double)angelFromOldOrientation:(long long)arg1 newOrientation:(long long)arg2;
- (long long)orientationToInt:(long long)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithFrame:(struct CGRect)arg1;

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

