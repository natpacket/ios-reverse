//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer;

@interface VoIPPIPRenderView : UIView
{
    struct __CVBuffer *_localImageBuffer;
    AVSampleBufferDisplayLayer *_customRenderLayer;
}

+ (id)viewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *customRenderLayer; // @synthesize customRenderLayer=_customRenderLayer;
- (void)drawPixelBufferRef:(struct __CVBuffer *)arg1;
- (void)clear;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 avSampleBufferDisplayerLayer:(id)arg2;

@end

