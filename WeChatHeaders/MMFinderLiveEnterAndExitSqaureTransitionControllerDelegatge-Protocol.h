//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveEnterSqaureTransitionContext;
@protocol MMFinderLiveEnterSquareAnimiatedDelegate;

@protocol MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge <NSObject>
- (struct CGRect)bottomPlayerViewSrcFrame;
- (_Bool)canEnterSquare;
- (void)onEnterSqaureTransitionControllerEnd:(id <MMFinderLiveEnterSquareAnimiatedDelegate>)arg1 context:(MMFinderLiveEnterSqaureTransitionContext *)arg2 isComplete:(_Bool)arg3 isInteracting:(_Bool)arg4 isPop:(_Bool)arg5;
- (void)onEnterSqaureTransitionControllerBegin:(id <MMFinderLiveEnterSquareAnimiatedDelegate>)arg1 isPop:(_Bool)arg2 isGesturePanEnter:(_Bool)arg3;
@end

