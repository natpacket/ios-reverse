//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveOlyBarragePubbleAnimationRoute : NSObject
{
    NSMutableArray *_positionValues;
    NSMutableArray *_opacityValues;
    NSMutableArray *_scaleValues;
    NSMutableArray *_timeValues;
    double _duration;
    struct CGSize _containerSize;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *timeValues; // @synthesize timeValues=_timeValues;
@property(retain, nonatomic) NSMutableArray *scaleValues; // @synthesize scaleValues=_scaleValues;
@property(retain, nonatomic) NSMutableArray *opacityValues; // @synthesize opacityValues=_opacityValues;
@property(retain, nonatomic) NSMutableArray *positionValues; // @synthesize positionValues=_positionValues;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;

@end
