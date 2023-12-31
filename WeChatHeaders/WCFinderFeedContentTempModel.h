//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeedsPreviewLiveMultiStyleInfo, FinderLiveInfo, FinderObjectAdvertisementInfo, FinderPreloadConfig, FinderPromotionJumpInfo, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, OriginalSoundInfo, WCFinderBulletCache, WCFinderDataItem, WCFinderDataItemEnhanceConfiguration, WCFinderFeedbackReasonFetchResult, WCFinderNpsSurveyTaskDataWrap, WCFinderSnsShareInfo;

@interface WCFinderFeedContentTempModel : NSObject
{
    _Bool _hasShowNoticeInfo;
    _Bool _liveAbort;
    _Bool _hadLiked;
    _Bool _hadFavorited;
    _Bool _hadReadOver10s;
    _Bool _hadShowFollowBtn;
    _Bool _hadShowFollowLikeBtn;
    _Bool _hadReadAll;
    _Bool _hadShowRotateToFullScreenTips;
    _Bool _hadShowMinimizeButton;
    _Bool _hadShowPromoteTips;
    _Bool _hasShowTipsCountDownTime;
    _Bool _forceShowRingtoneGuide;
    _Bool _forceShowCollectionBubble;
    _Bool _hasShownRingtoneGuide;
    _Bool _isRecommendReasonShowInLiveComment;
    _Bool _hadShowResumePlayingTips;
    _Bool _hadPlayed;
    _Bool _videoCompleted;
    _Bool _hasFetchedEnhanceList;
    _Bool _hasDragProgress;
    _Bool _isMemberShipFeedForPreview;
    _Bool _isLiveReplayFeed;
    unsigned int _previewJoinliveDelaySeconds;
    unsigned long long _friendWatchLivingCount;
    WCFinderSnsShareInfo *_snsShareInfo;
    NSString *_recommendReason;
    NSString *_flowCardRecommandReason;
    unsigned long long _liveOnlineCount;
    unsigned long long _stickyTopTime;
    NSString *_verifyInfo;
    unsigned long long _firstVideoDataSource;
    unsigned long long _showPromoteTipsEntry;
    NSString *_refFriendUsername;
    FinderLiveInfo *_lastestLiveInfo;
    NSString *_internalFeedbackUrl;
    NSArray *_multiReason;
    unsigned long long _mediaType;
    double _carouselInterval;
    unsigned long long _carouselIndex;
    NSArray *_carouselHotCommentList;
    double _carouselExposeStartTime;
    unsigned long long _startExposePlaySec;
    OriginalSoundInfo *_originalSoundInfo;
    WCFinderNpsSurveyTaskDataWrap *_surveyTaskDataWrap;
    double _menuExpTime;
    NSNumber *_canShowRingtoneGuide;
    NSString *_innerRecommendReason;
    long long _liveForwardCount;
    unsigned long long _entryScene;
    NSMutableSet *_hasShowIdSet;
    unsigned long long _hardAdStyle;
    NSMutableDictionary *_jumpInfoStyleDict;
    unsigned long long _shareScene;
    FinderPromotionJumpInfo *_finderPromotionJumpinfo;
    unsigned long long _ringSheetComponentFlag;
    NSString *_ringFriendName;
    unsigned long long _ringtoneFeedEnterType;
    unsigned long long _shadowViewSourceType;
    WCFinderBulletCache *_bulletCache;
    double _startGetBulletTimestamp;
    double _endGetBulletTimestamp;
    unsigned long long _sectionInView;
    NSString *_finderForwardSource;
    FinderObjectAdvertisementInfo *_adInfo;
    NSMutableArray *_adGuideJumpInfoArray;
    unsigned long long _adFlag;
    WCFinderDataItemEnhanceConfiguration *_enhanceConfig;
    WCFinderDataItem *_enhanceFeedDataItem;
    unsigned long long _refLikeID;
    unsigned long long _refFavID;
    NSString *_shareContentFromSns;
    unsigned long long _flowAutoPlayStartTime;
    unsigned long long _flowAutoPlayTime;
    unsigned long long _streamPreviewJoinliveControlFlag;
    NSString *_bindBusinessId;
    NSString *_ecSource;
    NSData *_feedsPreviewLiveMultiStyleInfoData;
    FeedsPreviewLiveMultiStyleInfo *_feedsPreviewLiveMultiStyleInfo;
    WCFinderFeedbackReasonFetchResult *_feedbackReasonFetchResult;
    unsigned long long _currMutexFeatureViewTypes;
    FinderPreloadConfig *_preloadConfig;
    NSMutableDictionary *_jumpInfoPreloadDict;
    unsigned long long _URLExpiredRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long URLExpiredRetryCount; // @synthesize URLExpiredRetryCount=_URLExpiredRetryCount;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoPreloadDict; // @synthesize jumpInfoPreloadDict=_jumpInfoPreloadDict;
@property(retain, nonatomic) FinderPreloadConfig *preloadConfig; // @synthesize preloadConfig=_preloadConfig;
@property(nonatomic) unsigned long long currMutexFeatureViewTypes; // @synthesize currMutexFeatureViewTypes=_currMutexFeatureViewTypes;
@property(nonatomic) _Bool isLiveReplayFeed; // @synthesize isLiveReplayFeed=_isLiveReplayFeed;
@property(retain, nonatomic) WCFinderFeedbackReasonFetchResult *feedbackReasonFetchResult; // @synthesize feedbackReasonFetchResult=_feedbackReasonFetchResult;
@property(nonatomic) _Bool isMemberShipFeedForPreview; // @synthesize isMemberShipFeedForPreview=_isMemberShipFeedForPreview;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo *feedsPreviewLiveMultiStyleInfo; // @synthesize feedsPreviewLiveMultiStyleInfo=_feedsPreviewLiveMultiStyleInfo;
@property(retain, nonatomic) NSData *feedsPreviewLiveMultiStyleInfoData; // @synthesize feedsPreviewLiveMultiStyleInfoData=_feedsPreviewLiveMultiStyleInfoData;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(copy, nonatomic) NSString *bindBusinessId; // @synthesize bindBusinessId=_bindBusinessId;
@property(nonatomic) unsigned long long streamPreviewJoinliveControlFlag; // @synthesize streamPreviewJoinliveControlFlag=_streamPreviewJoinliveControlFlag;
@property(nonatomic) unsigned long long flowAutoPlayTime; // @synthesize flowAutoPlayTime=_flowAutoPlayTime;
@property(nonatomic) unsigned long long flowAutoPlayStartTime; // @synthesize flowAutoPlayStartTime=_flowAutoPlayStartTime;
@property(copy, nonatomic) NSString *shareContentFromSns; // @synthesize shareContentFromSns=_shareContentFromSns;
@property(nonatomic) _Bool hasDragProgress; // @synthesize hasDragProgress=_hasDragProgress;
@property(nonatomic) unsigned long long refFavID; // @synthesize refFavID=_refFavID;
@property(nonatomic) unsigned long long refLikeID; // @synthesize refLikeID=_refLikeID;
@property(retain, nonatomic) WCFinderDataItem *enhanceFeedDataItem; // @synthesize enhanceFeedDataItem=_enhanceFeedDataItem;
@property(retain, nonatomic) WCFinderDataItemEnhanceConfiguration *enhanceConfig; // @synthesize enhanceConfig=_enhanceConfig;
@property(nonatomic) _Bool hasFetchedEnhanceList; // @synthesize hasFetchedEnhanceList=_hasFetchedEnhanceList;
@property(nonatomic) unsigned long long adFlag; // @synthesize adFlag=_adFlag;
@property(retain, nonatomic) NSMutableArray *adGuideJumpInfoArray; // @synthesize adGuideJumpInfoArray=_adGuideJumpInfoArray;
@property(retain, nonatomic) FinderObjectAdvertisementInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) _Bool videoCompleted; // @synthesize videoCompleted=_videoCompleted;
@property(retain, nonatomic) NSString *finderForwardSource; // @synthesize finderForwardSource=_finderForwardSource;
@property(nonatomic) unsigned long long sectionInView; // @synthesize sectionInView=_sectionInView;
@property(nonatomic) double endGetBulletTimestamp; // @synthesize endGetBulletTimestamp=_endGetBulletTimestamp;
@property(nonatomic) double startGetBulletTimestamp; // @synthesize startGetBulletTimestamp=_startGetBulletTimestamp;
@property(retain, nonatomic) WCFinderBulletCache *bulletCache; // @synthesize bulletCache=_bulletCache;
@property(nonatomic) unsigned long long shadowViewSourceType; // @synthesize shadowViewSourceType=_shadowViewSourceType;
@property(nonatomic) unsigned int previewJoinliveDelaySeconds; // @synthesize previewJoinliveDelaySeconds=_previewJoinliveDelaySeconds;
@property(nonatomic) unsigned long long ringtoneFeedEnterType; // @synthesize ringtoneFeedEnterType=_ringtoneFeedEnterType;
@property(copy, nonatomic) NSString *ringFriendName; // @synthesize ringFriendName=_ringFriendName;
@property(nonatomic) unsigned long long ringSheetComponentFlag; // @synthesize ringSheetComponentFlag=_ringSheetComponentFlag;
@property(retain, nonatomic) FinderPromotionJumpInfo *finderPromotionJumpinfo; // @synthesize finderPromotionJumpinfo=_finderPromotionJumpinfo;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoStyleDict; // @synthesize jumpInfoStyleDict=_jumpInfoStyleDict;
@property(nonatomic) unsigned long long hardAdStyle; // @synthesize hardAdStyle=_hardAdStyle;
@property(retain, nonatomic) NSMutableSet *hasShowIdSet; // @synthesize hasShowIdSet=_hasShowIdSet;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) _Bool hadPlayed; // @synthesize hadPlayed=_hadPlayed;
@property(nonatomic) _Bool hadShowResumePlayingTips; // @synthesize hadShowResumePlayingTips=_hadShowResumePlayingTips;
@property(nonatomic) long long liveForwardCount; // @synthesize liveForwardCount=_liveForwardCount;
@property(nonatomic) _Bool isRecommendReasonShowInLiveComment; // @synthesize isRecommendReasonShowInLiveComment=_isRecommendReasonShowInLiveComment;
@property(copy, nonatomic) NSString *innerRecommendReason; // @synthesize innerRecommendReason=_innerRecommendReason;
@property(retain, nonatomic) NSNumber *canShowRingtoneGuide; // @synthesize canShowRingtoneGuide=_canShowRingtoneGuide;
@property(nonatomic) _Bool hasShownRingtoneGuide; // @synthesize hasShownRingtoneGuide=_hasShownRingtoneGuide;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(retain, nonatomic) WCFinderNpsSurveyTaskDataWrap *surveyTaskDataWrap; // @synthesize surveyTaskDataWrap=_surveyTaskDataWrap;
@property(retain, nonatomic) OriginalSoundInfo *originalSoundInfo; // @synthesize originalSoundInfo=_originalSoundInfo;
@property(nonatomic) unsigned long long startExposePlaySec; // @synthesize startExposePlaySec=_startExposePlaySec;
@property(nonatomic) double carouselExposeStartTime; // @synthesize carouselExposeStartTime=_carouselExposeStartTime;
@property(nonatomic) _Bool forceShowCollectionBubble; // @synthesize forceShowCollectionBubble=_forceShowCollectionBubble;
@property(nonatomic) _Bool forceShowRingtoneGuide; // @synthesize forceShowRingtoneGuide=_forceShowRingtoneGuide;
@property(retain, nonatomic) NSArray *carouselHotCommentList; // @synthesize carouselHotCommentList=_carouselHotCommentList;
@property(nonatomic) unsigned long long carouselIndex; // @synthesize carouselIndex=_carouselIndex;
@property(nonatomic) double carouselInterval; // @synthesize carouselInterval=_carouselInterval;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool hasShowTipsCountDownTime; // @synthesize hasShowTipsCountDownTime=_hasShowTipsCountDownTime;
@property(retain, nonatomic) NSArray *multiReason; // @synthesize multiReason=_multiReason;
@property(retain, nonatomic) NSString *internalFeedbackUrl; // @synthesize internalFeedbackUrl=_internalFeedbackUrl;
@property(retain, nonatomic) FinderLiveInfo *lastestLiveInfo; // @synthesize lastestLiveInfo=_lastestLiveInfo;
@property(copy, nonatomic) NSString *refFriendUsername; // @synthesize refFriendUsername=_refFriendUsername;
@property(nonatomic) _Bool hadShowPromoteTips; // @synthesize hadShowPromoteTips=_hadShowPromoteTips;
@property(nonatomic) unsigned long long showPromoteTipsEntry; // @synthesize showPromoteTipsEntry=_showPromoteTipsEntry;
@property(nonatomic) _Bool hadShowMinimizeButton; // @synthesize hadShowMinimizeButton=_hadShowMinimizeButton;
@property(nonatomic) _Bool hadShowRotateToFullScreenTips; // @synthesize hadShowRotateToFullScreenTips=_hadShowRotateToFullScreenTips;
@property(nonatomic) _Bool hadReadAll; // @synthesize hadReadAll=_hadReadAll;
@property(nonatomic) _Bool hadShowFollowLikeBtn; // @synthesize hadShowFollowLikeBtn=_hadShowFollowLikeBtn;
@property(nonatomic) _Bool hadShowFollowBtn; // @synthesize hadShowFollowBtn=_hadShowFollowBtn;
@property(nonatomic) _Bool hadReadOver10s; // @synthesize hadReadOver10s=_hadReadOver10s;
@property(nonatomic) unsigned long long firstVideoDataSource; // @synthesize firstVideoDataSource=_firstVideoDataSource;
@property(nonatomic) _Bool hadFavorited; // @synthesize hadFavorited=_hadFavorited;
@property(nonatomic) _Bool hadLiked; // @synthesize hadLiked=_hadLiked;
@property(nonatomic) _Bool liveAbort; // @synthesize liveAbort=_liveAbort;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(nonatomic) unsigned long long stickyTopTime; // @synthesize stickyTopTime=_stickyTopTime;
@property(nonatomic) _Bool hasShowNoticeInfo; // @synthesize hasShowNoticeInfo=_hasShowNoticeInfo;
@property(nonatomic) unsigned long long liveOnlineCount; // @synthesize liveOnlineCount=_liveOnlineCount;
@property(retain, nonatomic) NSString *flowCardRecommandReason; // @synthesize flowCardRecommandReason=_flowCardRecommandReason;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) WCFinderSnsShareInfo *snsShareInfo; // @synthesize snsShareInfo=_snsShareInfo;
@property(nonatomic) unsigned long long friendWatchLivingCount; // @synthesize friendWatchLivingCount=_friendWatchLivingCount;
- (_Bool)isJumpInfoPreloadedWithId:(id)arg1;
- (void)setJumpInfoPreloadedWithId:(id)arg1;
- (id)dumpCurrMutexFeatureViewTypes;
- (void)resetShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)setShowMutexFeatureViewType:(unsigned long long)arg1;
- (_Bool)canShowMutexFeatureViewType:(unsigned long long)arg1;
- (_Bool)shouldShowFollowLikeBtnWhenNotAlways;
- (_Bool)shouldShowFollowBtnWhenNotAlways;

@end

