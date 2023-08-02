//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TXCGlFrameBuffer, TXCVideoFrame;

@protocol TXICustomProcessConverter <NSObject>
- (TXCVideoFrame *)outputVideoFrameFromDstVideoFrame:(TXCVideoFrame *)arg1 withTexture:(TXCGlFrameBuffer *)arg2;
- (TXCVideoFrame *)dstVideoFrameFromTexture:(TXCGlFrameBuffer *)arg1 pts:(unsigned int)arg2;
- (TXCVideoFrame *)srcVideoFrameFromVideoFrame:(TXCVideoFrame *)arg1;
- (_Bool)needsYuvInput;
@end
