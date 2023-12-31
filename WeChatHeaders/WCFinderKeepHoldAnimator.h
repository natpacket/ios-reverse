//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderTrailingAnimator-Protocol.h"

@class BTMinimizeAnimationView, NSString, WCFinderTransitionUserInfo;

@interface WCFinderKeepHoldAnimator : NSObject <WCFinderTrailingAnimator>
{
    BTMinimizeAnimationView *_animationView;
    WCFinderTransitionUserInfo *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) BTMinimizeAnimationView *animationView; // @synthesize animationView=_animationView;
- (id)chooseAnimatorWithOther:(CDUnknownBlockType)arg1;
- (void)onAnimationCleanUp;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (void)closeDirectlyWithAnimated:(_Bool)arg1;
- (void)onAnimationComplete:(_Bool)arg1 context:(id)arg2;
- (void)startAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

