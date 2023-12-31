//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnimatedImageDecoder.h"

@class NSString, UIImage;

@interface CGAnimatedImageDecoder : MMAnimatedImageDecoder
{
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    int m_decodedLoopCnt;
    NSString *m_cpKey;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGImageSource *_source;
    long long _orientation;
    struct CGSize m_imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGImageSource *source; // @synthesize source=_source;
- (int)decodedLoopCnt;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (int)currentFrameId;
- (struct CGSize)imageSize;
- (int)frameCount;
- (double)currentFrameDuration;
- (id)currentFrameImage;
- (id)cpKey;
- (void)releaseSource;
- (void)setScale:(double)arg1;
- (_Bool)rewind;
- (_Bool)seekToNextFrame;
- (id)initWithData:(id)arg1 cpKey:(id)arg2 maxWidth:(unsigned int)arg3;
- (void)dealloc;

@end

