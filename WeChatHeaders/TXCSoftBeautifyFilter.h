//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBeautifyBaseFilter.h"

@class TXCSharpFilter;

@interface TXCSoftBeautifyFilter : TXCBeautifyBaseFilter
{
    TXCSharpFilter *_sharpFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCSharpFilter *sharpFilter; // @synthesize sharpFilter=_sharpFilter;
- (id)processVideoFrame:(id)arg1;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (unsigned long long)beautyStyle;
- (id)fragmentShaderString;

@end
