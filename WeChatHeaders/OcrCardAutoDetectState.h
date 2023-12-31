//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseState.h"

@interface OcrCardAutoDetectState : BaseState
{
    struct ImageRefiner *imageRefiner;
    int continuousSucceedFrameCount;
    int continuousBlurFrameCount;
    struct CGRect roiRect;
    int validCount;
    double bestScore;
    double blurThreshold;
    struct Mat bestFrame;
    _Bool isAutoPass;
    _Bool isTimeOut;
    int requestFocusCount;
    int modeType;
    float roiUpperRatio;
    float roiLowerRatio;
    unsigned long long autoDetectTimeoutMs;
    unsigned long long beginTimeMs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float roiLowerRatio; // @synthesize roiLowerRatio;
@property(nonatomic) float roiUpperRatio; // @synthesize roiUpperRatio;
@property(nonatomic) _Bool isTimeOut; // @synthesize isTimeOut;
@property(nonatomic) _Bool isAutoPass; // @synthesize isAutoPass;
@property(nonatomic) unsigned long long beginTimeMs; // @synthesize beginTimeMs;
@property(nonatomic) unsigned long long autoDetectTimeoutMs; // @synthesize autoDetectTimeoutMs;
@property(nonatomic) int modeType; // @synthesize modeType;
@property(nonatomic) int requestFocusCount; // @synthesize requestFocusCount;
@property(nonatomic) int continuousBlurFrameCount; // @synthesize continuousBlurFrameCount;
@property(nonatomic) struct CGRect roiRect; // @synthesize roiRect;
@property(nonatomic) struct ImageRefiner *imageRefiner; // @synthesize imageRefiner;
@property(nonatomic) int continuousSucceedFrameCount; // @synthesize continuousSucceedFrameCount;
- (void)resetCountDownTimer;
- (_Bool)cardInROI:(vector_e6b6e210)arg1 scaleX:(float)arg2 scaleY:(float)arg3;
- (float)ratioOfROIAndCard:(vector_e6b6e210)arg1 scaleX:(float)arg2 scaleY:(float)arg3;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)moveToNextState;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)enter;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

