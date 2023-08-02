//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveAbnormalClosedPageInfo, NSArray, NSString, WCFinderGetLiveCGISuccessModel, WCFinderLiveInfo;

@interface MMFinderLiveInfoCacheItem : NSObject
{
    unsigned int _liveNewFansNum;
    unsigned int _refreshIntervalInSecond;
    unsigned long long _creationUnixEpochTime;
    unsigned long long _expirationUnixEpochTimeInSecond;
    WCFinderLiveInfo *_liveInfo;
    NSString *_recommendReason;
    NSArray *_jumpInfos;
    WCFinderGetLiveCGISuccessModel *_successCallbackModel;
    FinderLiveAbnormalClosedPageInfo *_abnormalClosePage;
}

+ (id)keyWithLiveId:(unsigned long long)arg1 finderUsername:(id)arg2 scene:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage; // @synthesize abnormalClosePage=_abnormalClosePage;
@property(retain, nonatomic) WCFinderGetLiveCGISuccessModel *successCallbackModel; // @synthesize successCallbackModel=_successCallbackModel;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos=_jumpInfos;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) unsigned int refreshIntervalInSecond; // @synthesize refreshIntervalInSecond=_refreshIntervalInSecond;
@property(nonatomic) unsigned int liveNewFansNum; // @synthesize liveNewFansNum=_liveNewFansNum;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) unsigned long long expirationUnixEpochTimeInSecond; // @synthesize expirationUnixEpochTimeInSecond=_expirationUnixEpochTimeInSecond;
@property(nonatomic) unsigned long long creationUnixEpochTime; // @synthesize creationUnixEpochTime=_creationUnixEpochTime;

@end

