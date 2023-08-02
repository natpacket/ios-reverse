//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderCollectionDataFetcherExt-Protocol.h"

@class FinderCollectionInfo, NSMutableArray, NSString, WCFinderCollectionDataFetcher;
@protocol WCFinderCollectionFeedListViewModelDelegate;

@interface WCFinderCollectionFeedListViewModel : NSObject <WCFinderCollectionDataFetcherExt>
{
    id <WCFinderCollectionFeedListViewModelDelegate> _delegate;
    WCFinderCollectionDataFetcher *_dataFetcher;
    unsigned long long _commentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderCollectionDataFetcher *dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(nonatomic) __weak id <WCFinderCollectionFeedListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionDataFetcherDataError;
- (void)collectionDataFetcherNoMore:(int)arg1;
- (void)collectionDataFetcherDataChange:(int)arg1;
@property(readonly, nonatomic) NSString *collectionName;
- (long long)contentIndexOfSortID:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)fetchNextPageData:(int)arg1;
- (void)fetchFirstPageData;
@property(readonly, nonatomic) FinderCollectionInfo *collectionInfo;
@property(readonly, nonatomic) _Bool downContinueFlag;
@property(readonly, nonatomic) _Bool upContinueFlag;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool isLoadingFirstPage;
@property(readonly, nonatomic) NSMutableArray *contentVMs;
- (void)dealloc;
- (id)initWithDataFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

