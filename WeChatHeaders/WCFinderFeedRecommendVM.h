//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFullFeedCommonViewModel.h"

#import "WCFinderContactCommonExt-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderStreamPrefetchExt-Protocol.h"

@class FinderCommByPass, FinderRelatedRecommendTips, FinderStreamLayoutInfo, MMTimer, NSArray, NSData, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderAbstractTask, WCFinderFeedLayoutContentVM, WCFinderOpenTimelineParams, WCFinderRedDotCtrlInfo;
@protocol WCFinderFeedRecommendVMDelegate;

@interface WCFinderFeedRecommendVM : WCFinderFullFeedCommonViewModel <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderFeedContentVMExt, WCFinderLiveExt, WCFinderContactExt, WCFinderContactCommonExt, WCFinderStreamPrefetchExt>
{
    _Bool _stopFetchNextPage;
    _Bool _hasProcessLocalData;
    _Bool _isFetchingLocalFeed;
    _Bool _isLoadingNextPage;
    _Bool _showPrivateMSGTips;
    _Bool _showFriendCommentSpread;
    _Bool _isByFindPage;
    _Bool _shouldFetchHistory;
    _Bool _pullEnterIsEmpty;
    _Bool _needCleanData;
    _Bool _hasFetchEnterData;
    _Bool _shouldRecordEnterIndexPath;
    _Bool _isFetchLivingStream;
    _Bool _enterFeedByAppend;
    WCFinderFeedLayoutContentVM *_livingLayout;
    NSArray *_commentFailTidArray;
    id <WCFinderFeedRecommendVMDelegate> _delegate;
    NSArray *_unreadCacheContentVMs;
    unsigned long long _preFetchNextPageIndex;
    NSString *_enterDataReportID;
    unsigned long long _refreshTime;
    NSIndexPath *_enterIndexPath;
    long long _partialExposeSection;
    long long _partialHotAreaSection;
    NSData *_lastBuff;
    NSString *_requestReportSceneKey;
    NSString *_uiReportSceneKey;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    NSMutableArray *_topObjects;
    FinderCommByPass *_commByPass;
    unsigned long long _newFeedIndex;
    unsigned long long _commentFailTidCount;
    NSMutableArray *_serverFetchTasks;
    WCFinderAbstractTask *_currentServerFetchTask;
    NSString *_historyLabelText;
    NSArray *_streamDataArray;
    unsigned long long _historyType;
    long long _friendLikeSplitIndex;
    FinderStreamLayoutInfo *_streamLayoutInfo;
    NSMutableDictionary *_loadingReportDict;
    WCFinderFeedLayoutContentVM *_displayContentColumnCard;
    WCFinderFeedLayoutContentVM *_preloadContentColumnCard;
    NSMutableSet *_fetchNextPageStreamCards;
    NSMutableArray *_preloadArray;
    NSMutableArray *_previewJumpArray;
    NSData *_cardBuffer;
    NSArray *_feedCacheArray;
    MMTimer *_detectionValidityTimer;
    NSData *_lastCheckBuffer;
    unsigned long long _lastdetectionValidityTimestamp;
    WCFinderRedDotCtrlInfo *_appendRedDotCtrlInfo;
    FinderRelatedRecommendTips *_relatedRecommendTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @synthesize relatedRecommendTips=_relatedRecommendTips;
@property(nonatomic) _Bool enterFeedByAppend; // @synthesize enterFeedByAppend=_enterFeedByAppend;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *appendRedDotCtrlInfo; // @synthesize appendRedDotCtrlInfo=_appendRedDotCtrlInfo;
@property(nonatomic) unsigned long long lastdetectionValidityTimestamp; // @synthesize lastdetectionValidityTimestamp=_lastdetectionValidityTimestamp;
@property(retain, nonatomic) NSData *lastCheckBuffer; // @synthesize lastCheckBuffer=_lastCheckBuffer;
@property(retain, nonatomic) MMTimer *detectionValidityTimer; // @synthesize detectionValidityTimer=_detectionValidityTimer;
@property(copy, nonatomic) NSArray *feedCacheArray; // @synthesize feedCacheArray=_feedCacheArray;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(retain, nonatomic) NSMutableArray *previewJumpArray; // @synthesize previewJumpArray=_previewJumpArray;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(nonatomic) _Bool isFetchLivingStream; // @synthesize isFetchLivingStream=_isFetchLivingStream;
@property(retain, nonatomic) NSMutableSet *fetchNextPageStreamCards; // @synthesize fetchNextPageStreamCards=_fetchNextPageStreamCards;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *preloadContentColumnCard; // @synthesize preloadContentColumnCard=_preloadContentColumnCard;
@property(nonatomic) __weak WCFinderFeedLayoutContentVM *displayContentColumnCard; // @synthesize displayContentColumnCard=_displayContentColumnCard;
@property(retain, nonatomic) NSMutableDictionary *loadingReportDict; // @synthesize loadingReportDict=_loadingReportDict;
@property(retain, nonatomic) FinderStreamLayoutInfo *streamLayoutInfo; // @synthesize streamLayoutInfo=_streamLayoutInfo;
@property(nonatomic) long long friendLikeSplitIndex; // @synthesize friendLikeSplitIndex=_friendLikeSplitIndex;
@property(nonatomic) _Bool shouldRecordEnterIndexPath; // @synthesize shouldRecordEnterIndexPath=_shouldRecordEnterIndexPath;
@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool needCleanData; // @synthesize needCleanData=_needCleanData;
@property(copy, nonatomic) NSArray *streamDataArray; // @synthesize streamDataArray=_streamDataArray;
@property(nonatomic) _Bool pullEnterIsEmpty; // @synthesize pullEnterIsEmpty=_pullEnterIsEmpty;
@property(copy, nonatomic) NSString *historyLabelText; // @synthesize historyLabelText=_historyLabelText;
@property(nonatomic) _Bool shouldFetchHistory; // @synthesize shouldFetchHistory=_shouldFetchHistory;
@property(retain, nonatomic) WCFinderAbstractTask *currentServerFetchTask; // @synthesize currentServerFetchTask=_currentServerFetchTask;
@property(retain, nonatomic) NSMutableArray *serverFetchTasks; // @synthesize serverFetchTasks=_serverFetchTasks;
@property(nonatomic) unsigned long long commentFailTidCount; // @synthesize commentFailTidCount=_commentFailTidCount;
@property(nonatomic) unsigned long long newFeedIndex; // @synthesize newFeedIndex=_newFeedIndex;
@property(nonatomic) _Bool isByFindPage; // @synthesize isByFindPage=_isByFindPage;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) NSMutableArray *topObjects; // @synthesize topObjects=_topObjects;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(readonly, nonatomic) _Bool showFriendCommentSpread; // @synthesize showFriendCommentSpread=_showFriendCommentSpread;
@property(copy, nonatomic) NSString *uiReportSceneKey; // @synthesize uiReportSceneKey=_uiReportSceneKey;
@property(copy, nonatomic) NSString *requestReportSceneKey; // @synthesize requestReportSceneKey=_requestReportSceneKey;
@property(readonly, nonatomic) _Bool showPrivateMSGTips; // @synthesize showPrivateMSGTips=_showPrivateMSGTips;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) long long partialHotAreaSection; // @synthesize partialHotAreaSection=_partialHotAreaSection;
@property(nonatomic) _Bool isLoadingNextPage; // @synthesize isLoadingNextPage=_isLoadingNextPage;
@property(nonatomic) _Bool isFetchingLocalFeed; // @synthesize isFetchingLocalFeed=_isFetchingLocalFeed;
@property(nonatomic) long long partialExposeSection; // @synthesize partialExposeSection=_partialExposeSection;
@property(retain, nonatomic) NSIndexPath *enterIndexPath; // @synthesize enterIndexPath=_enterIndexPath;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *enterDataReportID; // @synthesize enterDataReportID=_enterDataReportID;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(retain, nonatomic) NSArray *unreadCacheContentVMs; // @synthesize unreadCacheContentVMs=_unreadCacheContentVMs;
@property(nonatomic) _Bool hasProcessLocalData; // @synthesize hasProcessLocalData=_hasProcessLocalData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(nonatomic) __weak id <WCFinderFeedRecommendVMDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *commentFailTidArray; // @synthesize commentFailTidArray=_commentFailTidArray;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *livingLayout; // @synthesize livingLayout=_livingLayout;
- (void)resetRecommendTips;
- (id)getRecommendTips;
- (_Bool)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)detectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)startDetectionFeedsValidity;
- (void)finishLoadCardFirstScreenContent:(id)arg1;
- (void)loadCardFirstScreenContent:(id)arg1;
- (void)finishFetchNextCardForVM:(id)arg1 newCardVM:(id)arg2;
- (void)preloadLayoutContentVMNextColumn:(id)arg1;
- (void)replaceStreamCard:(id)arg1 withNewCard:(id)arg2;
- (void)onFinderContactShieldFeedChanged:(id)arg1;
- (void)onFinderContactRefuseListAdded:(id)arg1 wxUsernames:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFeedContentFoldInfoChange:(id)arg1 scene:(unsigned long long)arg2;
- (void)finderStreamPrefetchFinishedWithTabType:(long long)arg1;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (void)removeFeedWith:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (long long)convertToFluencyStartScene:(unsigned long long)arg1;
- (void)finishFetchDataSuccessful:(_Bool)arg1;
@property(readonly, nonatomic) _Bool noMoreData;
@property(readonly, nonatomic) NSString *partialExposedObjectId;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(unsigned long long)arg2 streamType:(int)arg3;
- (void)deleteAndCollectAllUnreadItems;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)removeFinderContentVMWithTid:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)fetchMoreLivingList;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (id)streamLoadingInfoByExitVC;
- (void)stopAllPreloadVideoItems;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)contentUnlikeFeedback:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1 isHistoryData:(_Bool)arg2;
- (_Bool)checkLivingStreamLayoutInfo:(id)arg1;
- (void)addDividerWithStreamLayoutInfo:(id)arg1 contentVMArray:(id)arg2;
- (void)bindJumpFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)bindFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)insertContentVM:(id)arg1 toIndex:(long long)arg2;
- (void)appendFinderContentVM:(id)arg1;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (id)allLiveDataSource;
- (void)changeFirstItemToMuteBeforeRefresh;
- (void)clearAllContentVMLayoutCache;
- (id)vaildTopIndexPath;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1 contentVM:(id)arg2;
- (long long)firstFeedNum;
- (_Bool)shouldShowMoreHotContentCell;
- (id)allPreviewJumpArray;
- (void)fetchFirstPageData;
- (void)refreshLatestDataByEnter:(_Bool)arg1;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)_fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkServerFetchTasks;
- (void)preformNextServerFetchTasks;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (_Bool)useLocalUnreadContentVMs:(unsigned long long)arg1;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1;
- (id)fetchTopFetchStreamCGIParamsAsReadOnly:(_Bool)arg1;
- (_Bool)hotTabNeedTopRefresh;
- (id)getHotTabLastBuff;
- (void)loadingNextStreamFeedPage;
- (_Bool)shouldStopFetchNextPageByFooter;
- (void)loadingNextPagePageData;
- (void)loadingFirstPageData;
- (id)getLocalCacheDataItemArray;
- (void)checkCacheDataIsValid:(id)arg1;
- (void)loadingLocalData;
- (id)addStatsFeedArray;
- (id)getUnreadDataItems;
- (void)clearDataByServerRequestWithHasNewFeed:(_Bool)arg1;
- (id)processServerData:(id)arg1;
- (id)filterDataItemArray:(id)arg1;
- (unsigned long long)sectionNums;
- (id)getCurCommentFailTidArray;
- (void)updateFailPostComment;
- (void)recordEnterIndexPathIfNeeded;
- (void)markShouldRecordEnterIndexPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
