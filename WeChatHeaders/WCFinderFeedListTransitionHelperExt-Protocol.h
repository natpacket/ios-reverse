//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderTransitionUserInfo;

@protocol WCFinderFeedListTransitionHelperExt <NSObject>

@optional
- (void)onTransitionHelperCancelClousureForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (void)onTransitionHelperDoClosureForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (void)onTransitionHelperWillClousureFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 userInfo:(WCFinderTransitionUserInfo *)arg3;
- (void)onTransitionHelperWillExpandFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 userInfo:(WCFinderTransitionUserInfo *)arg3;
@end

