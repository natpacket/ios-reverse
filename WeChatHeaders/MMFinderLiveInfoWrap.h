//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveStreamTypeInfo, NSString, WCFinderLiveInfo;

@interface MMFinderLiveInfoWrap : NSObject
{
    NSString *_tid;
    WCFinderLiveInfo *_finderLiveInfo;
    unsigned long long _liveInfoUpdateTime;
    unsigned long long _activityType;
    unsigned long long _activityTypeUpdateTime;
    MMFinderLiveStreamTypeInfo *_finderLiveStreamTypeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStreamTypeInfo *finderLiveStreamTypeInfo; // @synthesize finderLiveStreamTypeInfo=_finderLiveStreamTypeInfo;
@property(nonatomic) unsigned long long activityTypeUpdateTime; // @synthesize activityTypeUpdateTime=_activityTypeUpdateTime;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long liveInfoUpdateTime; // @synthesize liveInfoUpdateTime=_liveInfoUpdateTime;
@property(retain, nonatomic) WCFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

