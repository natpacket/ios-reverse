//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WCFinderTransitionUserInfo;

@protocol WCFinderFeedListTransitionHelperBehavior <NSObject>

@optional
- (NSString *)transitionHelperFetchCurrentPlayTid;
- (_Bool)shouldStartNoneEdgeSwipeGestureWithPoint:(struct CGPoint)arg1;
- (_Bool)shouldSupportNonEdgeSwipeGestureForVC:(UIViewController *)arg1;
- (_Bool)shouldDragDownCloseInvokeForVC:(UIViewController *)arg1;
- (_Bool)enableDragDownToCloseForVC:(UIViewController *)arg1;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
@end

