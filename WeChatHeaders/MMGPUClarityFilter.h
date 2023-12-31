//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGPUOneTextureRender.h"

@interface MMGPUClarityFilter : MMGPUOneTextureRender
{
    int uniform_location_clarity_flag;
    int uniform_location_pixel_mapping;
    int uniform_location_saturation_decay;
    int uniform_location_face_decay_zero;
    int uniform_location_face_decay_one;
}

- (unsigned int)process:(int)arg1 inputRes:(struct CGSize)arg2;
- (void)setFaceDecayZero:(float)arg1 One:(float)arg2;
- (void)setSaturationDecay:(float)arg1;
- (void)setPixelMapping:(float *)arg1;
- (void)setClarityFlag:(int)arg1;
- (id)initWithMode:(int)arg1;

@end

