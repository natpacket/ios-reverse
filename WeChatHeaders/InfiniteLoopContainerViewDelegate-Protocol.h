//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class InfiniteLoopContainerView, UIView;

@protocol InfiniteLoopContainerViewDelegate <NSObject>
- (UIView *)containerView:(InfiniteLoopContainerView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(InfiniteLoopContainerView *)arg1;

@optional
- (void)containerView:(InfiniteLoopContainerView *)arg1 onTapItemAtIndex:(unsigned long long)arg2;
@end

