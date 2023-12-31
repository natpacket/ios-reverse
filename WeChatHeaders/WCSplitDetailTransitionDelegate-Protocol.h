//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCSplitDetailTransition;

@protocol WCSplitDetailTransitionDelegate <NSObject>
- (void)updateContentLayout;
- (_Bool)detailForceFullscreen;
- (void)onDetailViewControllerDidChangeMode:(_Bool)arg1;
- (void)onDetailViewControllerWillChangeMode:(_Bool)arg1;
- (void)onPresentingEndAppearance;
- (void)onPresentingBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)transitionTypeForAnimator:(WCSplitDetailTransition *)arg1;
- (_Bool)isInSplitMode;
@end

