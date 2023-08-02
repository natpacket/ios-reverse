//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface WCAdFullCardGestureInfo : NSObject <NSCoding>
{
    unsigned long long _startTime;
    unsigned long long _endTime;
    NSString *_points;
    double _distance;
    NSString *_color;
    NSArray *_pointsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pointsList; // @synthesize pointsList=_pointsList;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *points; // @synthesize points=_points;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (id)getTargetCGPointsArray;
- (id)getTargetCGPointsArrayList;
- (_Bool)isValid;
- (id)getLineColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

