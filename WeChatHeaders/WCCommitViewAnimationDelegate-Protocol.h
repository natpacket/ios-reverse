//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WCDataItem;

@protocol WCCommitViewAnimationDelegate <NSObject>

@optional
- (void)onFinishSendWithoutAnim:(WCDataItem *)arg1;
- (void)onStartSendWithoutAnim:(WCDataItem *)arg1;
- (void)commitAnimationWillStart:(WCDataItem *)arg1;
- (void)animationDidEndRemainView:(UIView *)arg1 hintDataItem:(WCDataItem *)arg2;
@end
