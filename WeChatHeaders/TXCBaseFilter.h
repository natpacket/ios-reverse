//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoBindableObject.h"

@class NSNumber, NSValue, TXCVideoFrameCoords;

@interface TXCBaseFilter : TXCVideoBindableObject
{
    TXCVideoFrameCoords *_frameCoords;
    NSNumber *_outputRatio;
    NSValue *_outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) NSNumber *outputRatio; // @synthesize outputRatio=_outputRatio;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
- (struct CGSize)outputSizeFromInputSize:(struct CGSize)arg1;

@end

