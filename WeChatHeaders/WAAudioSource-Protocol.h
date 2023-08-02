//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WAOpenALAudioDecodeInfo;
@protocol WAAudioSourceDelegate;

@protocol WAAudioSource <NSObject>
@property(nonatomic) __weak id <WAAudioSourceDelegate> delegate;
@property(nonatomic) _Bool loop;
@property(nonatomic) float currentTime;
@property(nonatomic) float duration;
@property(nonatomic) long long state;
@property(copy, nonatomic) NSString *src;
@property(copy, nonatomic) NSString *audioId;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLooping:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;

@optional
- (id)initWithAudioId:(NSString *)arg1 src:(NSString *)arg2 fileData:(NSData *)arg3 appId:(NSString *)arg4;
- (id)initWithAudioId:(NSString *)arg1 src:(NSString *)arg2 decodeInfo:(WAOpenALAudioDecodeInfo *)arg3 appId:(NSString *)arg4;
@end

