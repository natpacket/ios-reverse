//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICustomProcessConverter-Protocol.h"

@class NSString;

@interface TXCCustomProcessYuvConverter : NSObject <TXICustomProcessConverter>
{
    unsigned long long _format;
    struct __CVBuffer *_dstBuffer;
}

@property(nonatomic) struct __CVBuffer *dstBuffer; // @synthesize dstBuffer=_dstBuffer;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
- (struct __CVBuffer *)createBufferIfNeeded:(struct __CVBuffer *)arg1 forSize:(struct CGSize)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;
- (id)initWithFormat:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

