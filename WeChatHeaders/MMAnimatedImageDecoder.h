//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

@interface MMAnimatedImageDecoder : MMObject
{
    _Bool _hasDecodeOneLoop;
    _Bool _isSingleFrame;
    int _currentFrameId;
    int _frameCount;
    int _decodedLoopCnt;
    NSString *_cpKey;
    UIImage *_currentFrameImage;
    double _currentFrameDuration;
    double _scale;
    struct CGSize _imageSize;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (unsigned int)defaultMaxWidth;
+ (id)animatedDecoderOfData:(id)arg1 cpKey:(id)arg2 allowCGImageDecoder:(_Bool)arg3;
+ (id)animatedDecoderOfData:(id)arg1 cpKey:(id)arg2;
+ (id)animatedDecoderOfData:(id)arg1;
+ (id)animationOfData:(id)arg1 scale:(double)arg2 cpKey:(id)arg3;
+ (id)animationOfData:(id)arg1 scale:(double)arg2;
+ (id)animationOfFrames:(id)arg1;
+ (id)framesOfData:(id)arg1 scale:(double)arg2 cpKey:(id)arg3;
+ (id)framesOfData:(id)arg1 scale:(double)arg2;
+ (id)framesOfData:(id)arg1;
+ (id)animatedImageOfData:(id)arg1 tryUIImageWhenFailed:(_Bool)arg2;
+ (id)animatedImageOfData:(id)arg1;
+ (int)frameCountForImageData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) int decodedLoopCnt; // @synthesize decodedLoopCnt=_decodedLoopCnt;
@property(readonly, nonatomic) _Bool isSingleFrame; // @synthesize isSingleFrame=_isSingleFrame;
@property(readonly, nonatomic) _Bool hasDecodeOneLoop; // @synthesize hasDecodeOneLoop=_hasDecodeOneLoop;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) int currentFrameId; // @synthesize currentFrameId=_currentFrameId;
@property(readonly, nonatomic) double currentFrameDuration; // @synthesize currentFrameDuration=_currentFrameDuration;
@property(readonly, nonatomic) UIImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property(readonly, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (_Bool)seekToNextFrame;
- (_Bool)rewind;

@end

