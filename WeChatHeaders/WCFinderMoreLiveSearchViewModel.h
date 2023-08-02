//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderContactExt-Protocol.h"

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi;
@protocol WCFinderMoreLiveSearchViewModelDelegate;

@interface WCFinderMoreLiveSearchViewModel : NSObject <WCFinderContactExt>
{
    _Bool _queryContinueFlag;
    id <WCFinderMoreLiveSearchViewModelDelegate> _delegate;
    NSString *_searchSessionid;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSMutableArray *_allSearchInfoItems;
    NSMutableArray *_allSearchDataItems;
    unsigned long long _refreshTime;
    unsigned long long _searchSourceType;
    WCFinderBaseCgi *_finderSearchCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *finderSearchCGI; // @synthesize finderSearchCGI=_finderSearchCGI;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(retain, nonatomic) NSMutableArray *allSearchInfoItems; // @synthesize allSearchInfoItems=_allSearchInfoItems;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(_Bool)arg2;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (void)queryContactWith:(id)arg1 sessionBuf:(id)arg2 scene:(unsigned long long)arg3;
- (void)queryContactWith:(id)arg1;
- (void)onQueryNextPageDataItem;
- (id)generateSearchContactViewModel;
- (_Bool)isNoMoreData;
- (unsigned long long)searchNumsOfSection;
- (_Bool)isSearchDataItemSection:(unsigned long long)arg1;
- (_Bool)isSearchInfoSection:(unsigned long long)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (_Bool)isSearchInfoCountGreaterThanMax;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (long long)dataItemSection;
- (void)appendDataItems:(id)arg1;
- (void)appendInfos:(id)arg1;
- (_Bool)isRepeatSearch:(id)arg1;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (_Bool)isSearchFeedItemEmpty;
- (id)latestQueryString;
- (void)dealloc;
- (void)resetSearchStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

