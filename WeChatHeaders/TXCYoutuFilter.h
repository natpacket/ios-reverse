//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBeautifyBaseFilter.h"

@class TXCTwoInputFilter, YTBeautyBlurFilter, YTBeautySmoothFilter;

@interface TXCYoutuFilter : TXCBeautifyBaseFilter
{
    YTBeautyBlurFilter *_smoothBlurFilter;
    YTBeautyBlurFilter *_borderBlurFilter;
    TXCTwoInputFilter *_borderFilter;
    YTBeautySmoothFilter *_smoothFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTBeautySmoothFilter *smoothFilter; // @synthesize smoothFilter=_smoothFilter;
@property(readonly, nonatomic) TXCTwoInputFilter *borderFilter; // @synthesize borderFilter=_borderFilter;
@property(readonly, nonatomic) YTBeautyBlurFilter *borderBlurFilter; // @synthesize borderBlurFilter=_borderBlurFilter;
@property(readonly, nonatomic) YTBeautyBlurFilter *smoothBlurFilter; // @synthesize smoothBlurFilter=_smoothBlurFilter;
- (id)processVideoFrame:(id)arg1;
- (unsigned long long)beautyStyle;
- (id)fragmentShaderString;
- (id)initWithContext:(id)arg1;

@end

