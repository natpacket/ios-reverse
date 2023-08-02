//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TXICameraCapturerInterface <NSObject>
- (void)setExposureTargetBias:(float)arg1;
- (_Bool)isFaceDetectEnabled;
- (void)setTorchOn:(_Bool)arg1;
- (_Bool)isTorchSupported;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)enablesFaceDetect:(_Bool)arg1;
- (_Bool)isAutoFocusSupported;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(_Bool)arg2;
- (void)enableZoom:(_Bool)arg1;
- (double)zoomMaxRatio;
- (_Bool)isZoomSupported;
- (void)setFront:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (void)setCaptureResolution:(struct CGSize)arg1;
@end
