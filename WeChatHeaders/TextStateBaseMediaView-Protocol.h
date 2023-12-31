//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TextStateBaseMediaViewDelegate;

@protocol TextStateBaseMediaView <NSObject>
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;

@optional
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate;
- (void)setTransitionProgress:(double)arg1;
- (void)pausePlayMediaVideoStream;
- (void)resetPlayMedia;
- (void)stopPlayMedia;
@end

