//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWCAudioPlayer-Protocol.h"

@class WCAudioInfo;
@protocol IWCAudioPlayerCoreDelegate;

@protocol IWCAudioPlayerCore <IWCAudioPlayer>
@property(nonatomic) __weak id <IWCAudioPlayerCoreDelegate> delegate;
- (void)playWithAudioInfo:(WCAudioInfo *)arg1 startTime:(double)arg2;
@end
