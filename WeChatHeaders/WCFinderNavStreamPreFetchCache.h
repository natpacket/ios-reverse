//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveStreamPreFetchBaseCache.h"

@class FinderLivePreloadInfo, NSMutableArray;

@interface WCFinderNavStreamPreFetchCache : WCFinderLiveStreamPreFetchBaseCache
{
    _Bool _skipGetAllLiveTabs;
    _Bool _skipAsyncLoadLiveInfo;
    unsigned int _flag;
    NSMutableArray *_containerModels;
    FinderLivePreloadInfo *_livePreloadInfo;
    unsigned long long _prefechMinInterval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @synthesize skipAsyncLoadLiveInfo=_skipAsyncLoadLiveInfo;
@property(nonatomic) _Bool skipGetAllLiveTabs; // @synthesize skipGetAllLiveTabs=_skipGetAllLiveTabs;
@property(nonatomic) unsigned long long prefechMinInterval; // @synthesize prefechMinInterval=_prefechMinInterval;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @synthesize livePreloadInfo=_livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *containerModels; // @synthesize containerModels=_containerModels;
- (id)description;

@end

