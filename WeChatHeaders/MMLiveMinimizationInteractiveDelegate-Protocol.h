//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol MMLiveMinimizationInteractiveDelegate <NSObject>

@optional
- (UIViewController *)getCurrPresentingViewController;
- (void)onMinimizationInteractiveQuitDidEnd;
- (void)onMinimizationInteractiveQuitWillEnd;
- (void)onMinimizationInteractiveDidEnd:(_Bool)arg1;
- (void)onMinimizationInteractiveWillEnd:(_Bool)arg1;
- (_Bool)minimizationInteractiveShouldInvoke;
- (_Bool)minimizationInteractiveShouldBegin;
- (void)onMinimizationInteractiveDidBegin:(_Bool)arg1;
@end
