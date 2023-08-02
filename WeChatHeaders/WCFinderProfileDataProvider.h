//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderPostDataItemExt-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, WCFinderTaskQueue, WCFinderUserPageParams;

@interface WCFinderProfileDataProvider : NSObject <WCFinderPostDataItemExt>
{
    _Bool _loadError;
    _Bool _loading;
    _Bool _continueFlag;
    _Bool _isAuthor;
    _Bool _hasFetchFirstPage;
    _Bool _filterLiveDataItem;
    _Bool _limitOneFeed;
    _Bool _appendAuthorPostingFeed;
    _Bool _appendFetchData;
    unsigned long long _refreshTime;
    unsigned long long _fansCount;
    unsigned long long _feedCount;
    NSMutableArray *_mutDataItems;
    WCFinderTaskQueue *_taskQueue;
    WCFinderUserPageParams *_params;
    unsigned long long _minTid;
    NSMutableSet *_filterTids;
    NSMutableArray *_nextPageFetchWaiter;
}

+ (void)removeObserver:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *nextPageFetchWaiter; // @synthesize nextPageFetchWaiter=_nextPageFetchWaiter;
@property(retain, nonatomic) NSMutableSet *filterTids; // @synthesize filterTids=_filterTids;
@property(nonatomic) unsigned long long minTid; // @synthesize minTid=_minTid;
@property(retain, nonatomic) WCFinderUserPageParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableArray *mutDataItems; // @synthesize mutDataItems=_mutDataItems;
@property(nonatomic) unsigned long long feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) _Bool appendFetchData; // @synthesize appendFetchData=_appendFetchData;
@property(nonatomic) _Bool appendAuthorPostingFeed; // @synthesize appendAuthorPostingFeed=_appendAuthorPostingFeed;
@property(nonatomic) _Bool limitOneFeed; // @synthesize limitOneFeed=_limitOneFeed;
@property(nonatomic) _Bool filterLiveDataItem; // @synthesize filterLiveDataItem=_filterLiveDataItem;
@property(nonatomic) _Bool hasFetchFirstPage; // @synthesize hasFetchFirstPage=_hasFetchFirstPage;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool loadError; // @synthesize loadError=_loadError;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)flushDataItems:(id)arg1;
- (void)notifyChangeRemoves:(id)arg1 inserts:(id)arg2;
- (void)replaceDataItem:(id)arg1 refTid:(id)arg2;
- (void)insertDataItemAfterStickyTop:(id)arg1;
- (_Bool)deleteDataItem:(id)arg1;
- (void)cleanAllDatas;
- (unsigned long long)minTidOfDataItems:(id)arg1;
- (void)appendThenNotifyDataItems:(id)arg1 firstPage:(_Bool)arg2;
- (void)requestNextPageData:(id)arg1 commentScene:(id)arg2 firstPage:(_Bool)arg3 taskQueueFinish:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)onNextPageFetchFinish:(_Bool)arg1;
- (void)addNextPageFetchCompleteBlock:(CDUnknownBlockType)arg1;
- (void)requestNextPageData:(unsigned long long)arg1 commentScene:(unsigned long long)arg2;
- (void)requestFirstPageData:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)resetFetchFirstPage;
- (void)loadCacheUserData:(id)arg1 isAuthor:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *dataItems;
- (void)addOberver:(id)arg1;
- (void)dealloc;
- (id)initWithIsAuthor:(_Bool)arg1 dataItems:(id)arg2 params:(id)arg3;
- (id)initWithIsAuthor:(_Bool)arg1 params:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

