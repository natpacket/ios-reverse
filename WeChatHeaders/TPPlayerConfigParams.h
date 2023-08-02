//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPPlayerConfigParams : NSObject
{
    float _reduceLatencySpeed;
    long long _bufferMinTotalDurationMs;
    long long _bufferMaxTotalDurationMs;
    long long _preloadTotalDurationMs;
    long long _minBufferingDurationMs;
    long long _minBufferingTimeMs;
    long long _maxBufferingTimeMs;
    long long _reduceLatencyAction;
    long long _bufferStrategy;
}

@property(nonatomic) long long bufferStrategy; // @synthesize bufferStrategy=_bufferStrategy;
@property(nonatomic) float reduceLatencySpeed; // @synthesize reduceLatencySpeed=_reduceLatencySpeed;
@property(nonatomic) long long reduceLatencyAction; // @synthesize reduceLatencyAction=_reduceLatencyAction;
@property(nonatomic) long long maxBufferingTimeMs; // @synthesize maxBufferingTimeMs=_maxBufferingTimeMs;
@property(nonatomic) long long minBufferingTimeMs; // @synthesize minBufferingTimeMs=_minBufferingTimeMs;
@property(nonatomic) long long minBufferingDurationMs; // @synthesize minBufferingDurationMs=_minBufferingDurationMs;
@property(nonatomic) long long preloadTotalDurationMs; // @synthesize preloadTotalDurationMs=_preloadTotalDurationMs;
@property(nonatomic) long long bufferMaxTotalDurationMs; // @synthesize bufferMaxTotalDurationMs=_bufferMaxTotalDurationMs;
@property(nonatomic) long long bufferMinTotalDurationMs; // @synthesize bufferMinTotalDurationMs=_bufferMinTotalDurationMs;
- (id)init;

@end
