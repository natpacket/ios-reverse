//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface QHeatTileGradient : NSObject
{
    int _mapSize;
    NSArray *_colors;
    NSArray *_startPoints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)interpolateColorFrom:(id)arg1 to:(id)arg2 ratio:(float)arg3;
- (id)generateColorMap:(double)arg1;
- (id)initWithColor:(id)arg1 andWithStartPoints:(id)arg2;

@end
