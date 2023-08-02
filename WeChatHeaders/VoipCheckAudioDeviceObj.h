//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCAudioSessionExt-Protocol.h"

@class NSString;

@interface VoipCheckAudioDeviceObj : NSObject <WCAudioSessionExt>
{
    _Bool _isUsingEarDevice;
    CDUnknownBlockType _audioDevicePluginCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType audioDevicePluginCallback; // @synthesize audioDevicePluginCallback=_audioDevicePluginCallback;
@property(nonatomic) _Bool isUsingEarDevice; // @synthesize isUsingEarDevice=_isUsingEarDevice;
- (void)checkExternalAudioDeviceState;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)dealloc;
- (id)initWithMainThreadCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
