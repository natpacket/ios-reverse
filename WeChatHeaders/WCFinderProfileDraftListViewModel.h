//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfilePageModel.h"

#import "WCFinderFeedDraftExt-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, WCFinderBaseCgi;
@protocol WCFinderProfileDraftListViewModelDelegate;

@interface WCFinderProfileDraftListViewModel : WCFinderStreamProfilePageModel <WCFinderFeedDraftExt>
{
    _Bool _continueFlag;
    _Bool _forbidenModifyMVDraft;
    id <WCFinderProfileDraftListViewModelDelegate> _delegate;
    NSMutableArray *_mutableContentVMS;
    NSData *_lastBuff;
    WCFinderBaseCgi *_loadingCGI;
    NSMutableArray *_savingDraftList;
}

+ (_Bool)shouldDisplay:(id)arg1;
+ (_Bool)recardTabDisplayFlagToExtInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool forbidenModifyMVDraft; // @synthesize forbidenModifyMVDraft=_forbidenModifyMVDraft;
@property(retain, nonatomic) NSMutableArray *savingDraftList; // @synthesize savingDraftList=_savingDraftList;
@property(nonatomic) __weak WCFinderBaseCgi *loadingCGI; // @synthesize loadingCGI=_loadingCGI;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *mutableContentVMS; // @synthesize mutableContentVMS=_mutableContentVMS;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) __weak id <WCFinderProfileDraftListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderFeedDraftCreated:(id)arg1;
- (void)onFinderFeedDraftAdded:(id)arg1;
- (void)onFinderFeedDraftDeleted:(id)arg1;
- (void)retryItem:(id)arg1;
- (void)deleteItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)createDraftVM:(id)arg1;
- (id)mapDraftItems:(id)arg1;
- (id)mapDataItems:(id)arg1;
- (void)appendSavingDraftList:(id)arg1;
- (void)_requestNextPageData:(_Bool)arg1 pageInfoResolver:(CDUnknownBlockType)arg2;
- (void)requestNextPageData;
- (void)_loadCacheData:(id)arg1;
@property(readonly, nonatomic) _Bool loading;
@property(readonly, nonatomic) NSArray *contentVMS;
- (void)reportExposeTab:(unsigned long long)arg1;
- (void)reportClickTab:(unsigned long long)arg1;
- (id)viewPageClassName;
- (id)displayName;
- (void)dealloc;
- (id)fillPageDataWithHeadData:(id)arg1;
- (_Bool)doLoadCacheAndReturnShouldDisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

