//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FullScreenGestureDelegate <NSObject>

@optional
- (_Bool)shouldSimultaneouslyWithOtherGesture;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
@end
