//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TXCHardwareVideoDecoder, TXCVideoFrame;

@interface TXCDecoderWrapper : NSObject
{
    TXCHardwareVideoDecoder *_decoder;
    TXCVideoFrame *_videoFrame;
    CDUnknownBlockType _complete;
    NSDate *_startDecodeTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startDecodeTime; // @synthesize startDecodeTime=_startDecodeTime;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) TXCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) TXCHardwareVideoDecoder *decoder; // @synthesize decoder=_decoder;

@end
