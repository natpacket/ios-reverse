//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EdgeComputingThresholdController : NSObject
{
    NSMutableDictionary *receiveDataThresholdRecords;
}

- (void).cxx_destruct;
- (unsigned long long)getCacheDataTimeLimit;
- (unsigned long long)getCacheDataCountLimit;
- (unsigned long long)getTotalCacheDataCountLimit;
- (_Bool)checkDataReceiveFrequency:(id)arg1;
- (id)init;

@end

