//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBeautifyBaseFilter.h"

@interface TXCSharpFilter : TXCBeautifyBaseFilter
{
    double _sharpness;
}

@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (id)fragmentShaderString;
- (id)vertexShaderString;

@end

