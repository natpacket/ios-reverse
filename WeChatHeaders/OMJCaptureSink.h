//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OMJCaptureSink : NSObject
{
    struct SharedPtr<XMFFrameCreatorApple> _frameCreator;
    SharedPtr_200f9ba2 _backingSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_200f9ba2 backingSession; // @synthesize backingSession=_backingSession;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2;
@property(readonly, nonatomic) _Bool isReady;
- (id)initWithBackingSession:(const void *)arg1;

@end

