//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QGPBaseModel.h"

@class NSArray;

@interface QGPStartTranslateAnimationParam : QGPBaseModel
{
    _Bool _needRotate;
    NSArray *_positions;
    double _duration;
    double _initRotation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRotate; // @synthesize needRotate=_needRotate;
@property(nonatomic) double initRotation; // @synthesize initRotation=_initRotation;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *positions; // @synthesize positions=_positions;

@end

