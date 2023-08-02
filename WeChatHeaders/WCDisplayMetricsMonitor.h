//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, WCDisplayMetrics;
@protocol WCDisplayMetricsMonitorDelegate;

@interface WCDisplayMetricsMonitor : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableArray *_metricsRecords;
    id <WCDisplayMetricsMonitorDelegate> _delegate;
    long long _preferredFramesPerSecond;
    double _durationPerCollectionCycle;
    WCDisplayMetrics *_currentMetrics;
    unsigned long long _metricsRecordsMaximumCapacity;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long metricsRecordsMaximumCapacity; // @synthesize metricsRecordsMaximumCapacity=_metricsRecordsMaximumCapacity;
@property(readonly, nonatomic) WCDisplayMetrics *currentMetrics; // @synthesize currentMetrics=_currentMetrics;
@property(nonatomic) double durationPerCollectionCycle; // @synthesize durationPerCollectionCycle=_durationPerCollectionCycle;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) __weak id <WCDisplayMetricsMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeMetricsCompleted:(id)arg1;
- (void)handleScreenUpdate:(id)arg1;
- (void)resumeMonitoring;
- (void)pauseMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic) _Bool isMonitoring;
@property(readonly, nonatomic) NSArray *metricsRecords;
- (id)init;

@end
