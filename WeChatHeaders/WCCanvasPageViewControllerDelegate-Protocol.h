//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCAdWeAppInfo;

@protocol WCCanvasPageViewControllerDelegate <NSObject>

@optional
- (void)onHalfScreenCanvasJumpToCanvas:(NSString *)arg1 uxInfo:(NSString *)arg2 noStore:(_Bool)arg3;
- (void)onHalfScreenCanvasJumpToWeApp:(WCAdWeAppInfo *)arg1 sceneNote:(NSString *)arg2;
- (void)onHalfScreenCanvasJumpToH5:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (double)onHalfScreenCanvasGetMaxHalfScreenHeight;
- (void)onCloseCanvasPageView;
@end

