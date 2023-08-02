//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderRelatedRecommendTips, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderGetRelatedListParams, WCFinderPushFeedViewProductParams, WCFinderTaskQueue;
@protocol WCFinderShareFeedDataProviderDelegate;

@interface WCFinderShareFeedDataProvider : NSObject
{
    _Bool _onlyOneFeed;
    _Bool _allowTopPull;
    id <WCFinderShareFeedDataProviderDelegate> _delegate;
    NSData *_lastBuff;
    NSString *_enterTid;
    FinderRelatedRecommendTips *_relatedRecommendTips;
    WCFinderTaskQueue *_taskQueue;
    WCFinderGetRelatedListParams *_params;
    WCFinderPushFeedViewProductParams *_productInfo;
    NSMutableArray *_mutDataItems;
    NSMutableSet *_mutDataItemIdSet;
    struct WCFinderShareDataState _flag;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct WCFinderShareDataState flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSMutableSet *mutDataItemIdSet; // @synthesize mutDataItemIdSet=_mutDataItemIdSet;
@property(retain, nonatomic) NSMutableArray *mutDataItems; // @synthesize mutDataItems=_mutDataItems;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCFinderGetRelatedListParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @synthesize relatedRecommendTips=_relatedRecommendTips;
@property(retain, nonatomic) NSString *enterTid; // @synthesize enterTid=_enterTid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) _Bool allowTopPull; // @synthesize allowTopPull=_allowTopPull;
@property(nonatomic) _Bool onlyOneFeed; // @synthesize onlyOneFeed=_onlyOneFeed;
@property(nonatomic) __weak id <WCFinderShareFeedDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateLocalDataItem:(CDUnknownBlockType)arg1;
- (void)deadlyErrorCleanDatas:(_Bool)arg1;
- (id)parseError:(int)arg1 msg:(id)arg2;
- (void)_onCGIBackError:(int)arg1 msg:(id)arg2;
- (void)insertFeeds:(id)arg1 fromIndex:(unsigned long long)arg2 cleanBottom:(_Bool)arg3;
- (id)deleteFeedWithIds:(id)arg1 fromIdx:(long long)arg2;
- (void)deleteFeedWithIds:(id)arg1;
- (_Bool)recommendTipsIsValid;
- (void)appendDataItem:(id)arg1 isFirstPage:(_Bool)arg2 isBottom:(_Bool)arg3 resp:(id)arg4;
- (id)createPreRelativeTask;
- (id)createNextRelativeTask;
- (void)_onDetailCGIBack:(id)arg1 isFirstDataItemLoading:(_Bool)arg2;
- (id)createEncryptCommentDetailTask:(_Bool)arg1;
- (id)createCommentDetailTask:(_Bool)arg1;
- (id)createDetailTask:(_Bool)arg1;
- (id)firstDataItem;
- (void)requestPrePage;
- (void)requestNextPage;
- (struct WCFinderShareDataState *)stateRef;
- (struct WCFinderShareDataState)state;
@property(readonly, nonatomic) NSArray *dataItems;
- (void)requestFirstPage;
- (void)requestCacheData;
- (id)initWithParams:(id)arg1;

@end
