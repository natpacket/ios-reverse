//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FlutterTouchInterceptingView : UIView
{
    struct scoped_nsobject<DelayingGestureRecognizer> _delayingRecognizer;
    int _blockingPolicy;
    UIView *_embeddedView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)blockGesture;
- (void)releaseGesture;
- (id)embeddedView;
- (id)initWithEmbeddedView:(id)arg1 platformViewsController:(WeakPtr_48c555cd)arg2 gestureRecognizersBlockingPolicy:(int)arg3;

@end

