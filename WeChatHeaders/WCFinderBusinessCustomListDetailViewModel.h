//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WCFinderBaseCgi, WCFinderCustomBusinessFeedIDModel, WCFinderGeneralJumpErrMsgModel;
@protocol WCFinderBusinessCustomListDetailViewModelDelegate;

@interface WCFinderBusinessCustomListDetailViewModel : NSObject
{
    _Bool _startFeedExist;
    id <WCFinderBusinessCustomListDetailViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    WCFinderCustomBusinessFeedIDModel *_startFeedIdModel;
    NSMutableArray *_businessArray;
    NSMutableDictionary *_businessFeedDic;
    NSMutableArray *_allSearchDataItems;
    unsigned long long _commentScene;
    WCFinderBaseCgi *_loadingNextUpCgi;
    WCFinderBaseCgi *_loadingNextDownCgi;
    CDUnknownBlockType _loadingNextDownBlock;
    long long _batchFetchFeedsMaxCount;
    long long _preFetchTopCount;
    WCFinderGeneralJumpErrMsgModel *_errMsgModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGeneralJumpErrMsgModel *errMsgModel; // @synthesize errMsgModel=_errMsgModel;
@property(nonatomic) long long preFetchTopCount; // @synthesize preFetchTopCount=_preFetchTopCount;
@property(nonatomic) long long batchFetchFeedsMaxCount; // @synthesize batchFetchFeedsMaxCount=_batchFetchFeedsMaxCount;
@property(copy, nonatomic) CDUnknownBlockType loadingNextDownBlock; // @synthesize loadingNextDownBlock=_loadingNextDownBlock;
@property(retain, nonatomic) WCFinderBaseCgi *loadingNextDownCgi; // @synthesize loadingNextDownCgi=_loadingNextDownCgi;
@property(retain, nonatomic) WCFinderBaseCgi *loadingNextUpCgi; // @synthesize loadingNextUpCgi=_loadingNextUpCgi;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(retain, nonatomic) NSMutableDictionary *businessFeedDic; // @synthesize businessFeedDic=_businessFeedDic;
@property(retain, nonatomic) NSMutableArray *businessArray; // @synthesize businessArray=_businessArray;
@property(nonatomic) WCFinderCustomBusinessFeedIDModel *startFeedIdModel; // @synthesize startFeedIdModel=_startFeedIdModel;
@property(nonatomic) _Bool startFeedExist; // @synthesize startFeedExist=_startFeedExist;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderBusinessCustomListDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getRemainFeedSectionFromContentVM:(id)arg1;
- (_Bool)isLoading;
- (void)onTopicFinderDataItemDelete:(id)arg1;
- (void)handleFirstFetchDataCgiFailErrCode:(int)arg1 baseErrMsg:(id)arg2;
- (void)onQueryNextPageDataItems;
- (id)getTopDataItemsArray;
@property(readonly, nonatomic) _Bool upContinueFlag;
- (void)_onQueryTopDataItems:(unsigned long long)arg1 isPrefetch:(_Bool)arg2;
- (void)onPreFetchNextTopDataItems;
- (void)onQueryNextTopDataItems;
- (long long)numberOfSection;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (_Bool)isNoMoreData;
- (void)appendBusinessModelArray:(id)arg1;
- (unsigned long long)getStartFeedIndex;
- (_Bool)isUpContentFeed:(id)arg1;
- (id)initWithCommentScene:(unsigned long long)arg1;

@end

