//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderMinimizeFloatingView;

@protocol WCFinderMinimizeFloatingViewDelegate <NSObject>

@optional
- (void)onFloatingViewPlayStateChanged:(_Bool)arg1;
- (void)floatingViewSizeDidChanged:(WCFinderMinimizeFloatingView *)arg1;
- (void)floatingViewDidClickMiniWindow:(WCFinderMinimizeFloatingView *)arg1 restoreView:(UIView *)arg2;
- (void)floatingViewOnClickCloseButton:(WCFinderMinimizeFloatingView *)arg1 restoreView:(UIView *)arg2;
@end

