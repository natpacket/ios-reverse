//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioQueuePlayer.h"

@class NSMutableArray, NSString;
@protocol StreamAudioCodecProtocol, StreamAudioPlayerDelegate;

@interface StreamAudioQueuePlayer : AudioQueuePlayer
{
    _Bool mAppendDataEnd;
    NSMutableArray *mEmptyBuffers;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)initAudioQueue;
- (int)getCodecTypeFromVoiceFormat:(long long)arg1;
- (void)appendData:(id)arg1 endFlag:(_Bool)arg2;
- (_Bool)preparePlayWithFile:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) id <StreamAudioCodecProtocol> codec; // @dynamic codec;
@property(nonatomic) __weak id <StreamAudioPlayerDelegate> delegate; // @dynamic delegate;

@end

