//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TPVideoFrameBuffer, TingItem, TingPlayerCore, TingPlayerDisplayElement;

@protocol TingPlayerCoreExtension <NSObject>
- (void)tingPlayerCore:(TingPlayerCore *)arg1 onDisplayViewMTKViewCreated:(TingItem *)arg2;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onDisplayElementFrameOut:(TPVideoFrameBuffer *)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onDisplayElementAvailable:(TingPlayerDisplayElement *)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onEvent:(int)arg3 error:(NSError *)arg4;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onStatusChanged:(int)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
@end

