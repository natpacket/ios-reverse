//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@class NSString;

@interface AQAudioPlayer : BaseAudioPlayer
{
    _Bool mIsBindMuteSwitch;
    NSString *mCachedTag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mCachedTag; // @synthesize mCachedTag;
- (void)autostop;
- (void)stop;
- (void)replay;
- (void)play;
- (_Bool)preparePlayWithAudioFile:(id)arg1 cachedForTag:(id)arg2;
- (void)updateSession;
- (void)setBindMuteSwitch:(_Bool)arg1;
- (void)prepareBuffers;
- (void)setMagicCookieForPlayBack;
- (void)setDataFormat;
- (void)openAudioFile:(id)arg1;

@end

