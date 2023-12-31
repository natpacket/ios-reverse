//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderCollectionInfo, NSArray, NSData, NSMutableArray, NSMutableSet, NSString;

@interface WCFinderCollectionDataFetcher : NSObject
{
    _Bool _isLoading;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    _Bool _hasFetchData;
    NSArray *_previousContentVMs;
    NSMutableArray *_contentVMs;
    FinderCollectionInfo *_collectionInfo;
    NSString *_fromTid;
    NSString *_finderUsername;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *fromTid; // @synthesize fromTid=_fromTid;
@property(retain, nonatomic) FinderCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *contentVMs; // @synthesize contentVMs=_contentVMs;
@property(retain, nonatomic) NSArray *previousContentVMs; // @synthesize previousContentVMs=_previousContentVMs;
@property(readonly, nonatomic) unsigned long long commentScene;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (long long)contentIndexOfSortID:(unsigned long long)arg1;
- (void)fetchNextPageData:(int)arg1;
- (void)fetchFirstPageData;
- (void)updateCollecetionInfoIfNeeded:(id)arg1;
- (id)extSubscriptionKey;
- (void)appendDataItems:(id)arg1 direction:(int)arg2;
- (id)initWithCollectionInfo:(id)arg1 fromTid:(id)arg2;

@end

