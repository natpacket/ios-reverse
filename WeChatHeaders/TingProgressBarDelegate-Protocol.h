//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TingProgressBar;

@protocol TingProgressBarDelegate <NSObject>
- (void)tingProgressBar:(TingProgressBar *)arg1 didEndSeekingWithProgress:(double)arg2 offset:(double)arg3;
- (void)tingProgressBar:(TingProgressBar *)arg1 onSeekingWithProgress:(double)arg2 offset:(double)arg3;
- (void)tingProgressBarDidStartSeeking:(TingProgressBar *)arg1;
@end

