//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCAudioTrack : NSObject
{
    SharedPtr_dc2152c3 _backingAudioTrack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_dc2152c3 backingAudioTrack; // @synthesize backingAudioTrack=_backingAudioTrack;
@property(readonly, nonatomic) long long averageBitrate;
@property(readonly, nonatomic) long long sampleUnitsPerFrame;
@property(readonly, nonatomic) long long channelCount;
@property(readonly, nonatomic) NSString *channelLayoutName;
@property(readonly, nonatomic) NSString *sampleFormatName;
@property(readonly, nonatomic) float sampleRate;
@property(readonly, nonatomic) NSString *codecProfileName;
@property(readonly, nonatomic) NSString *codecIDName;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingAudioTrack:(const void *)arg1;

@end

