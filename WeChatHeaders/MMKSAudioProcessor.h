//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAudioProcessorProtocol-Protocol.h"

@class NSString;

@interface MMKSAudioProcessor : NSObject <KSAudioProcessorProtocol>
{
}

- (void)preparePCMOutPutWithMaxPacketSize:(unsigned int *)arg1 audioBufferCount:(unsigned int *)arg2;
- (void)dispose;
- (void)seek:(double)arg1;
- (void)processLPCM:(void *)arg1 len:(unsigned int *)arg2 maxLen:(unsigned int)arg3 ioNum:(unsigned int *)arg4;
- (_Bool)prepare:(struct AudioStreamBasicDescription *)arg1 err:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
