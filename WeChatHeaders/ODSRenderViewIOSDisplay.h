//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface ODSRenderViewIOSDisplay : UIView
{
}

+ (Class)layerClass;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 enableHDR:(_Bool)arg2;
- (id)displayLayer;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

