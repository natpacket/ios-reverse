//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MonitorResult : NSObject
{
    unsigned long long _monitorId;
    NSString *_rootBtnId;
    NSMutableArray *_monitorPointList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *monitorPointList; // @synthesize monitorPointList=_monitorPointList;
@property(retain, nonatomic) NSString *rootBtnId; // @synthesize rootBtnId=_rootBtnId;
@property(nonatomic) unsigned long long monitorId; // @synthesize monitorId=_monitorId;
- (double)getMaxColorDistanceWithMonitorResult:(id)arg1;
- (_Bool)isColorDistanceSimilarToMonitorResult:(id)arg1 similarColorDistance:(double)arg2 similarStandardRate:(double)arg3;
- (_Bool)isColorSimilarToMonitorResult:(id)arg1 similarContrastRatio:(double)arg2 similarStandardRate:(double)arg3;
- (_Bool)updatePixelColorForMonitorPoints:(id)arg1;
- (id)initWithMonitorId:(unsigned long long)arg1;

@end

