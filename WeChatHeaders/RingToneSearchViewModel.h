//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RingTonePlayerExt-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, VideoRingNetProvider, WCEliminatedSlotMMKV, WCFinderSearchSuggestionCGI;
@protocol RingToneSearchViewModelDelegate;

@interface RingToneSearchViewModel : NSObject <RingTonePlayerExt>
{
    _Bool _continueFlag;
    unsigned int _dataOffset;
    NSMutableArray *_rings;
    VideoRingNetProvider *_provider;
    id <RingToneSearchViewModelDelegate> _searchDelegate;
    unsigned long long _searchRequestID;
    NSString *_curQuery;
    NSMutableSet *_feedIDs;
    NSMutableArray *_allSearchHistory;
    WCEliminatedSlotMMKV *_slotKv;
    WCFinderSearchSuggestionCGI *_currentCgi;
    NSString *_searchKeyWord;
    NSMutableArray *_searchTextArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *searchTextArray; // @synthesize searchTextArray=_searchTextArray;
@property(copy, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(retain, nonatomic) WCFinderSearchSuggestionCGI *currentCgi; // @synthesize currentCgi=_currentCgi;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotKv; // @synthesize slotKv=_slotKv;
@property(retain, nonatomic) NSMutableArray *allSearchHistory; // @synthesize allSearchHistory=_allSearchHistory;
@property(copy, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(copy, nonatomic) NSString *curQuery; // @synthesize curQuery=_curQuery;
@property(nonatomic) unsigned int dataOffset; // @synthesize dataOffset=_dataOffset;
@property(nonatomic) unsigned long long searchRequestID; // @synthesize searchRequestID=_searchRequestID;
@property(nonatomic) __weak id <RingToneSearchViewModelDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (id)addRingForViewModel:(id)arg1;
- (void)clearAllCurrentData;
- (void)throttleFetchProcess;
- (void)preFetchProcess:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)fetchSuggestion:(id)arg1;
- (id)searchSuggestionAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)loadLatestHistoryData;
- (void)dealloc;
- (void)initHistorySearchMMKV;
- (void)addSearchContent:(id)arg1;
- (void)deleteSearchRecord:(id)arg1;
- (void)deleteAllSearchRecord;
- (void)updateLocalRingToneSearchHistory:(id)arg1;
- (id)getLocalRingToneSearchHistory;
- (id)getHistoryMMKV;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (id)searchMusicRing:(id)arg1;
- (void)clearData;
- (id)searchRing:(id)arg1 isFirstPage:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

