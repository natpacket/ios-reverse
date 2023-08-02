//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class ConcertTicketInfo, FinderCommByPass, FinderExtendedReading, FinderLiveQuickReplyWordingInfo, FinderLocation, FinderMusicInfo, FinderObjectAsyncLoadInfo, FinderObjectExtend, FinderStreamDivider, FinderTipsInfo, FinderTopic, MMFinderLiveGoodsItem, MMLiveAdsParams, MMMusicMVModel, NSArray, NSData, NSMutableArray, NSString, StatusFooterJumpFinderFeed, WCBulletinInfo, WCFinderAttachmentList, WCFinderCommentMutableArray, WCFinderContact, WCFinderDataItemEnhanceConfiguration, WCFinderDataItemInnerModel, WCFinderDataItemRecommendConfiguration, WCFinderFeedBindEventInfo, WCFinderFoldLayout, WCFinderFriendsLikeMutableArray, WCFinderJumpInfoContainer, WCFinderLikeMutableArray, WCFinderLiveInfo, WCFinderMedia, WCFinderMegaVideo, WCFinderObjectHotTopicMutableArray, WCFinderObjectHotWordInfo, WCFinderRecommenderMutableArray, WCFinderRedDotTipsShowInfo, WCFinderSnsShareInfo, WCFinderStreamLocationInfo;

@interface WCFinderDataItem : NSObject <WCTColumnCoding, WCTTableCoding, PBCoding>
{
    _Bool _isUpLoading;
    _Bool _isUpLoadFail;
    _Bool _isDeleted;
    _Bool _isCommentClose;
    _Bool _fromCamera;
    _Bool _secondaryShowFlag;
    _Bool _fav;
    _Bool _allowForward;
    _Bool _foldedFlag;
    _Bool _privateFlag;
    _Bool _isFromSDKEditor;
    _Bool _isNewsFeed;
    _Bool _isPOISameCity;
    _Bool _isDraft;
    _Bool _needFetchSingleLive;
    _Bool _needNotPreFetchShopLive;
    _Bool _isAdsLive;
    unsigned int _cacheTime;
    unsigned int _nextCheckObjectStatusTimeStamp;
    unsigned int _stickyTime;
    unsigned int _patMusicCount;
    unsigned int _ringtoneCount;
    unsigned int _chargeFlag;
    unsigned int _chargeUnitPriceInWecoin;
    unsigned int _avgSpeed;
    int _postWaitType;
    NSString *_tid;
    NSString *_disPlayTid;
    NSString *_tmpLocalTid;
    NSString *_username;
    NSString *_nickname;
    double _createTime;
    WCFinderMedia *_media;
    WCFinderLikeMutableArray *_likeList;
    WCFinderCommentMutableArray *_commentList;
    WCFinderCommentMutableArray *_hotCommentList;
    long long _forwardCount;
    long long _likeFlag;
    long long _uploadErrType;
    NSString *_uploadErrMsg;
    WCFinderContact *_contact;
    WCFinderRecommenderMutableArray *_recommenderList;
    long long _likeCount;
    long long _friendLikeCount;
    long long _commentCount;
    NSString *_recommendReason;
    long long _recommendType;
    unsigned long long _readCount;
    NSString *_refObjectID;
    unsigned long long _refObjectFlag;
    WCFinderContact *_refContact;
    NSString *_refUsername;
    NSString *_refNickname;
    NSString *_nonceID;
    long long _objectStatus;
    WCFinderStreamLocationInfo *_locationInfo;
    NSString *_sendShareFavWording;
    NSMutableArray *_topics;
    unsigned long long _orgRecommendType;
    NSString *_tipsWording;
    double _chooseCoverTime;
    unsigned long long _warnFlag;
    NSString *_warnWording;
    NSString *_sessionBuffer;
    unsigned long long _favCount;
    WCFinderFriendsLikeMutableArray *_friendsLikeList;
    WCFinderFoldLayout *_foldLayout;
    unsigned long long _urlValidTime;
    unsigned long long _forwardStyle;
    NSString *_eupdOob;
    unsigned long long _fromScene;
    WCFinderDataItemRecommendConfiguration *_recommendConfiguration;
    unsigned long long _likeActionTimestamp;
    unsigned long long _starActionTimestamp;
    unsigned long long _msgEventFlag;
    NSString *_msgId;
    long long _incFriendLikeCount;
    NSData *_likeBuffer;
    WCFinderLiveInfo *_liveInfo;
    unsigned long long _createFromType;
    unsigned long long _permissionFlag;
    long long _objectType;
    WCFinderAttachmentList *_attachmentList;
    unsigned long long _recvTimeMs;
    NSString *_staticCellLeftTips;
    WCFinderObjectHotTopicMutableArray *_hotTopics;
    WCFinderObjectHotWordInfo *_hotWordInfo;
    unsigned long long _postPatMusicType;
    unsigned long long _musicType;
    NSString *_groupId;
    WCFinderSnsShareInfo *_snsShareInfo;
    unsigned long long _eventTopicID;
    NSString *_fromOtherAppPostParamsJson;
    NSString *_remoteUrl;
    NSString *_debugMsg;
    NSString *_ecSource;
    MMMusicMVModel *_musicMVModel;
    NSString *_roomId;
    NSMutableArray *_freeOfChargeChatroomIdList;
    NSMutableArray *_freeOfChargeUsernameList;
    FinderStreamDivider *_feedWidgetInfo;
    NSString *_extUrlFromOpenSDK;
    StatusFooterJumpFinderFeed *_verifiedJumpInfo;
    NSString *_adLiveCoverUrl;
    NSString *_verifyInfo;
    long long _mentionListSelectedOption;
    unsigned long long _wxStatusRefCount;
    NSString *_feedExportId;
    WCFinderRedDotTipsShowInfo *_showInfo;
    unsigned long long _adFlag;
    WCFinderJumpInfoContainer *_jumpInfoContainer;
    FinderTipsInfo *_tipsInfo;
    NSData *_liveRelatedLastBuffer;
    WCFinderDataItemEnhanceConfiguration *_enhanceConfiguration;
    NSData *_cookie;
    unsigned long long _previewFlag;
    FinderMusicInfo *_musicInfo;
    long long _followCount;
    NSString *_internalFeedbackUrl;
    NSString *_wxaGameExportId;
    MMFinderLiveGoodsItem *_goodsItem;
    FinderCommByPass *_commByPass;
    MMLiveAdsParams *_adsParams;
    FinderObjectAsyncLoadInfo *_feedAsyncLoadInfo;
    WCBulletinInfo *_bulletinInfo;
    WCBulletinInfo *_GameBulletinInfo;
    unsigned long long _bulletinSeq;
    NSString *_bizUsername;
    FinderLiveQuickReplyWordingInfo *_quickReplyWordingInfo;
    NSString *_poiAddrSubStr;
    ConcertTicketInfo *_ticket;
    NSString *_asyncCropClientId;
    WCFinderDataItemInnerModel *_innerModel;
    unsigned long long _objectVersion;
    WCFinderMegaVideo *_longVideo;
}

+ (void)backfillReportInfoFromOldDataItem:(id)arg1 newDataItem:(id)arg2;
+ (void)removePostModelPermanentPathMedia:(id)arg1;
+ (id)finderDataItemFromObject:(id)arg1;
+ (void)__wcdb_column_constraint_90:(void *)arg1;
+ (void)__wcdb_index_89:(void *)arg1;
+ (void)__wcdb_index_88:(void *)arg1;
+ (void)__wcdb_index_87:(void *)arg1;
+ (void)__wcdb_index_86:(void *)arg1;
+ (void)__wcdb_index_85:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (id)swift_starActionTimestamp;
+ (const void *)__wcdb_synthesize_83:(void *)arg1;
+ (const void *)starActionTimestamp;
+ (id)swift_ringtoneCount;
+ (const void *)__wcdb_synthesize_82:(void *)arg1;
+ (const void *)ringtoneCount;
+ (id)swift_innerModel;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (const void *)innerModel;
+ (id)swift_objectVersion;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (const void *)objectVersion;
+ (id)swift_previewFlag;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (const void *)previewFlag;
+ (id)swift_internalFeedbackUrl;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (const void *)internalFeedbackUrl;
+ (id)swift_cookie;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (const void *)cookie;
+ (id)swift_enhanceConfiguration;
+ (const void *)__wcdb_synthesize_76:(void *)arg1;
+ (const void *)enhanceConfiguration;
+ (id)swift_followCount;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (const void *)followCount;
+ (id)swift_musicInfo;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (const void *)musicInfo;
+ (id)swift_liveRelatedLastBuffer;
+ (const void *)__wcdb_synthesize_73:(void *)arg1;
+ (const void *)liveRelatedLastBuffer;
+ (id)swift_tipsInfo;
+ (const void *)__wcdb_synthesize_72:(void *)arg1;
+ (const void *)tipsInfo;
+ (id)swift_adFlag;
+ (const void *)__wcdb_synthesize_71:(void *)arg1;
+ (const void *)adFlag;
+ (id)swift_hotWordInfo;
+ (const void *)__wcdb_synthesize_70:(void *)arg1;
+ (const void *)hotWordInfo;
+ (id)swift_isDraft;
+ (const void *)__wcdb_synthesize_69:(void *)arg1;
+ (const void *)isDraft;
+ (id)swift_wxStatusRefCount;
+ (const void *)__wcdb_synthesize_68:(void *)arg1;
+ (const void *)wxStatusRefCount;
+ (id)swift_verifyInfo;
+ (const void *)__wcdb_synthesize_67:(void *)arg1;
+ (const void *)verifyInfo;
+ (id)swift_mentionListSelectedOption;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (const void *)mentionListSelectedOption;
+ (id)swift_adLiveCoverUrl;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (const void *)adLiveCoverUrl;
+ (id)swift_isPOISameCity;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (const void *)isPOISameCity;
+ (id)swift_musicMVModel;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (const void *)musicMVModel;
+ (id)swift_eventTopicID;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (const void *)eventTopicID;
+ (id)swift_remoteUrl;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (const void *)remoteUrl;
+ (id)swift_fromOtherAppPostParamsJson;
+ (const void *)__wcdb_synthesize_60:(void *)arg1;
+ (const void *)fromOtherAppPostParamsJson;
+ (id)swift_patMusicCount;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (const void *)patMusicCount;
+ (id)swift_hotTopics;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (const void *)hotTopics;
+ (id)swift_snsShareInfo;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (const void *)snsShareInfo;
+ (id)swift_isNewsFeed;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)isNewsFeed;
+ (id)swift_recvTimeMs;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)recvTimeMs;
+ (id)swift_stickyTime;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)stickyTime;
+ (id)swift_liveInfo;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (const void *)liveInfo;
+ (id)swift_objectType;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (const void *)objectType;
+ (id)swift_permissionFlag;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)permissionFlag;
+ (id)swift_privateFlag;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)privateFlag;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (const void *)msgId;
+ (id)swift_msgEventFlag;
+ (const void *)__wcdb_synthesize_48:(void *)arg1;
+ (const void *)msgEventFlag;
+ (id)swift_likeActionTimestamp;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (const void *)likeActionTimestamp;
+ (id)swift_recommendConfiguration;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (const void *)recommendConfiguration;
+ (id)swift_fromScene;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (const void *)fromScene;
+ (id)swift_forwardStyle;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (const void *)forwardStyle;
+ (id)swift_urlValidTime;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (const void *)urlValidTime;
+ (id)swift_allowForward;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (const void *)allowForward;
+ (id)swift_foldedFlag;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)foldedFlag;
+ (id)swift_friendsLikeList;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)friendsLikeList;
+ (id)swift_favCount;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (const void *)favCount;
+ (id)swift_fav;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)fav;
+ (id)swift_warnWording;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)warnWording;
+ (id)swift_warnFlag;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)warnFlag;
+ (id)swift_chooseCoverTime;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)chooseCoverTime;
+ (id)swift_tipsWording;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)tipsWording;
+ (id)swift_secondaryShowFlag;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)secondaryShowFlag;
+ (id)swift_nextCheckObjectStatusTimeStamp;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)nextCheckObjectStatusTimeStamp;
+ (id)swift_sendShareFavWording;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)sendShareFavWording;
+ (id)swift_objectStatus;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)objectStatus;
+ (id)swift_nonceID;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)nonceID;
+ (id)swift_friendLikeCount;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)friendLikeCount;
+ (id)swift_refNickname;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)refNickname;
+ (id)swift_refUsername;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)refUsername;
+ (id)swift_refObjectFlag;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)refObjectFlag;
+ (id)swift_refObjectID;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)refObjectID;
+ (id)swift_isCommentClose;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)isCommentClose;
+ (id)swift_isDeleted;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)isDeleted;
+ (id)swift_hotCommentList;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)hotCommentList;
+ (id)swift_readCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)readCount;
+ (id)swift_eupdOob;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)eupdOob;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_commentCount;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)commentCount;
+ (id)swift_likeCount;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)likeCount;
+ (id)swift_uploadErrMsg;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)uploadErrMsg;
+ (id)swift_uploadErrType;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)uploadErrType;
+ (id)swift_isUpLoadFail;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)isUpLoadFail;
+ (id)swift_recommenderList;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)recommenderList;
+ (id)swift_disPlayTid;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)disPlayTid;
+ (id)swift_tmpLocalTid;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)tmpLocalTid;
+ (id)swift_isUpLoading;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)isUpLoading;
+ (id)swift_likeFlag;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)likeFlag;
+ (id)swift_forwardCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)forwardCount;
+ (id)swift_commentList;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)commentList;
+ (id)swift_likeList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)likeList;
+ (id)swift_media;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)media;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)nickname;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_innerModel;
+ (void)PBArrayAdd_liveInfo;
+ (void)PBArrayAdd_ringtoneCount;
+ (void)PBArrayAdd_previewFlag;
+ (void)PBArrayAdd_cookie;
+ (void)PBArrayAdd_followCount;
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_enhanceConfiguration;
+ (void)PBArrayAdd_liveRelatedLastBuffer;
+ (void)PBArrayAdd_tipsInfo;
+ (void)PBArrayAdd_adFlag;
+ (void)PBArrayAdd_hotWordInfo;
+ (void)PBArrayAdd_isDraft;
+ (void)PBArrayAdd_wxStatusRefCount;
+ (void)PBArrayAdd_verifyInfo;
+ (void)PBArrayAdd_mentionListSelectedOption;
+ (void)PBArrayAdd_adLiveCoverUrl;
+ (void)PBArrayAdd_eventTopicID;
+ (void)PBArrayAdd_isPOISameCity;
+ (void)PBArrayAdd_musicMVModel;
+ (void)PBArrayAdd_patMusicCount;
+ (void)PBArrayAdd_hotTopics;
+ (void)PBArrayAdd_snsShareInfo;
+ (void)PBArrayAdd_remoteUrl;
+ (void)PBArrayAdd_fromOtherAppPostParamsJson;
+ (void)PBArrayAdd_isNewsFeed;
+ (void)PBArrayAdd_objectType;
+ (void)PBArrayAdd_stickyTime;
+ (void)PBArrayAdd_attachmentList;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_privateFlag;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_msgEventFlag;
+ (void)PBArrayAdd_recommendConfiguration;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_forwardStyle;
+ (void)PBArrayAdd_allowForward;
+ (void)PBArrayAdd_foldedFlag;
+ (void)PBArrayAdd_friendsLikeList;
+ (void)PBArrayAdd_favCount;
+ (void)PBArrayAdd_fav;
+ (void)PBArrayAdd_warnWording;
+ (void)PBArrayAdd_warnFlag;
+ (void)PBArrayAdd_chooseCoverTime;
+ (void)PBArrayAdd_tipsWording;
+ (void)PBArrayAdd_nextCheckObjectStatusTimeStamp;
+ (void)PBArrayAdd_sendShareFavWording;
+ (void)PBArrayAdd_recommendType;
+ (void)PBArrayAdd_refNickname;
+ (void)PBArrayAdd_refUsername;
+ (void)PBArrayAdd_refContact;
+ (void)PBArrayAdd_refObjectFlag;
+ (void)PBArrayAdd_refObjectID;
+ (void)PBArrayAdd_isCommentClose;
+ (void)PBArrayAdd_isDeleted;
+ (void)PBArrayAdd_media;
+ (void)PBArrayAdd_eupdOob;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_recommenderList;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_isUpLoadFail;
+ (void)PBArrayAdd_isUpLoading;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_forwardCount;
+ (void)PBArrayAdd_hotCommentList;
+ (void)PBArrayAdd_commentList;
+ (void)PBArrayAdd_likeList;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_tmpLocalTid;
+ (void)PBArrayAdd_disPlayTid;
+ (void)PBArrayAdd_tid;
+ (id)convertFinderMusicInfo:(id)arg1 uiStyle:(unsigned long long)arg2 musicIdGenerator:(CDUnknownBlockType)arg3;
+ (id)textStatusJumpInfoFinderFromBuffer:(id)arg1;
+ (id)dataItemFromTextStateInfoBuffer:(id)arg1;
+ (id)dataItemFromTingBuffer:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMegaVideo *longVideo; // @synthesize longVideo=_longVideo;
@property(nonatomic) unsigned long long objectVersion; // @synthesize objectVersion=_objectVersion;
@property(retain, nonatomic) WCFinderDataItemInnerModel *innerModel; // @synthesize innerModel=_innerModel;
@property(copy, nonatomic) NSString *asyncCropClientId; // @synthesize asyncCropClientId=_asyncCropClientId;
@property(nonatomic) int postWaitType; // @synthesize postWaitType=_postWaitType;
@property(retain, nonatomic) ConcertTicketInfo *ticket; // @synthesize ticket=_ticket;
@property(copy) NSString *poiAddrSubStr; // @synthesize poiAddrSubStr=_poiAddrSubStr;
@property(nonatomic) _Bool isAdsLive; // @synthesize isAdsLive=_isAdsLive;
@property(retain, nonatomic) FinderLiveQuickReplyWordingInfo *quickReplyWordingInfo; // @synthesize quickReplyWordingInfo=_quickReplyWordingInfo;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(nonatomic) unsigned long long bulletinSeq; // @synthesize bulletinSeq=_bulletinSeq;
@property(retain, nonatomic) WCBulletinInfo *GameBulletinInfo; // @synthesize GameBulletinInfo=_GameBulletinInfo;
@property(retain, nonatomic) WCBulletinInfo *bulletinInfo; // @synthesize bulletinInfo=_bulletinInfo;
@property(retain, nonatomic) FinderObjectAsyncLoadInfo *feedAsyncLoadInfo; // @synthesize feedAsyncLoadInfo=_feedAsyncLoadInfo;
@property(retain, nonatomic) MMLiveAdsParams *adsParams; // @synthesize adsParams=_adsParams;
@property(nonatomic) unsigned int avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(nonatomic) _Bool needNotPreFetchShopLive; // @synthesize needNotPreFetchShopLive=_needNotPreFetchShopLive;
@property(nonatomic) _Bool needFetchSingleLive; // @synthesize needFetchSingleLive=_needFetchSingleLive;
@property(retain, nonatomic) NSString *wxaGameExportId; // @synthesize wxaGameExportId=_wxaGameExportId;
@property(retain, nonatomic) NSString *internalFeedbackUrl; // @synthesize internalFeedbackUrl=_internalFeedbackUrl;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) unsigned long long previewFlag; // @synthesize previewFlag=_previewFlag;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) WCFinderDataItemEnhanceConfiguration *enhanceConfiguration; // @synthesize enhanceConfiguration=_enhanceConfiguration;
@property(retain, nonatomic) NSData *liveRelatedLastBuffer; // @synthesize liveRelatedLastBuffer=_liveRelatedLastBuffer;
@property(retain, nonatomic) FinderTipsInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
@property(retain, nonatomic) WCFinderJumpInfoContainer *jumpInfoContainer; // @synthesize jumpInfoContainer=_jumpInfoContainer;
@property(nonatomic) unsigned long long adFlag; // @synthesize adFlag=_adFlag;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) NSString *feedExportId; // @synthesize feedExportId=_feedExportId;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) unsigned long long wxStatusRefCount; // @synthesize wxStatusRefCount=_wxStatusRefCount;
@property(nonatomic) long long mentionListSelectedOption; // @synthesize mentionListSelectedOption=_mentionListSelectedOption;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *adLiveCoverUrl; // @synthesize adLiveCoverUrl=_adLiveCoverUrl;
@property(retain, nonatomic) StatusFooterJumpFinderFeed *verifiedJumpInfo; // @synthesize verifiedJumpInfo=_verifiedJumpInfo;
@property(nonatomic) _Bool isPOISameCity; // @synthesize isPOISameCity=_isPOISameCity;
@property(copy, nonatomic) NSString *extUrlFromOpenSDK; // @synthesize extUrlFromOpenSDK=_extUrlFromOpenSDK;
@property(retain, nonatomic) FinderStreamDivider *feedWidgetInfo; // @synthesize feedWidgetInfo=_feedWidgetInfo;
@property(retain, nonatomic) NSMutableArray *freeOfChargeUsernameList; // @synthesize freeOfChargeUsernameList=_freeOfChargeUsernameList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList; // @synthesize freeOfChargeChatroomIdList=_freeOfChargeChatroomIdList;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @synthesize chargeUnitPriceInWecoin=_chargeUnitPriceInWecoin;
@property(nonatomic) unsigned int chargeFlag; // @synthesize chargeFlag=_chargeFlag;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) MMMusicMVModel *musicMVModel; // @synthesize musicMVModel=_musicMVModel;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSString *debugMsg; // @synthesize debugMsg=_debugMsg;
@property(copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl=_remoteUrl;
@property(copy, nonatomic) NSString *fromOtherAppPostParamsJson; // @synthesize fromOtherAppPostParamsJson=_fromOtherAppPostParamsJson;
@property(nonatomic) unsigned long long eventTopicID; // @synthesize eventTopicID=_eventTopicID;
@property(nonatomic) unsigned int ringtoneCount; // @synthesize ringtoneCount=_ringtoneCount;
@property(nonatomic) unsigned int patMusicCount; // @synthesize patMusicCount=_patMusicCount;
@property(retain, nonatomic) WCFinderSnsShareInfo *snsShareInfo; // @synthesize snsShareInfo=_snsShareInfo;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(nonatomic) unsigned long long postPatMusicType; // @synthesize postPatMusicType=_postPatMusicType;
@property(retain, nonatomic) WCFinderObjectHotWordInfo *hotWordInfo; // @synthesize hotWordInfo=_hotWordInfo;
@property(retain, nonatomic) WCFinderObjectHotTopicMutableArray *hotTopics; // @synthesize hotTopics=_hotTopics;
@property(nonatomic) _Bool isNewsFeed; // @synthesize isNewsFeed=_isNewsFeed;
@property(copy, nonatomic) NSString *staticCellLeftTips; // @synthesize staticCellLeftTips=_staticCellLeftTips;
@property(nonatomic) unsigned long long recvTimeMs; // @synthesize recvTimeMs=_recvTimeMs;
@property(retain, nonatomic) WCFinderAttachmentList *attachmentList; // @synthesize attachmentList=_attachmentList;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(nonatomic) unsigned long long permissionFlag; // @synthesize permissionFlag=_permissionFlag;
@property(nonatomic) unsigned long long createFromType; // @synthesize createFromType=_createFromType;
@property(nonatomic) unsigned int stickyTime; // @synthesize stickyTime=_stickyTime;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) _Bool isFromSDKEditor; // @synthesize isFromSDKEditor=_isFromSDKEditor;
@property(nonatomic) _Bool privateFlag; // @synthesize privateFlag=_privateFlag;
@property(retain, nonatomic) NSData *likeBuffer; // @synthesize likeBuffer=_likeBuffer;
@property(nonatomic) long long incFriendLikeCount; // @synthesize incFriendLikeCount=_incFriendLikeCount;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long msgEventFlag; // @synthesize msgEventFlag=_msgEventFlag;
@property(nonatomic) unsigned long long starActionTimestamp; // @synthesize starActionTimestamp=_starActionTimestamp;
@property(nonatomic) unsigned long long likeActionTimestamp; // @synthesize likeActionTimestamp=_likeActionTimestamp;
@property(retain, nonatomic) WCFinderDataItemRecommendConfiguration *recommendConfiguration; // @synthesize recommendConfiguration=_recommendConfiguration;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *eupdOob; // @synthesize eupdOob=_eupdOob;
@property(nonatomic) unsigned long long forwardStyle; // @synthesize forwardStyle=_forwardStyle;
@property(nonatomic) unsigned long long urlValidTime; // @synthesize urlValidTime=_urlValidTime;
@property(retain, nonatomic) WCFinderFoldLayout *foldLayout; // @synthesize foldLayout=_foldLayout;
@property(nonatomic) _Bool foldedFlag; // @synthesize foldedFlag=_foldedFlag;
@property(retain, nonatomic) WCFinderFriendsLikeMutableArray *friendsLikeList; // @synthesize friendsLikeList=_friendsLikeList;
@property(nonatomic) unsigned long long favCount; // @synthesize favCount=_favCount;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(nonatomic) _Bool fav; // @synthesize fav=_fav;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *warnWording; // @synthesize warnWording=_warnWording;
@property(nonatomic) unsigned long long warnFlag; // @synthesize warnFlag=_warnFlag;
@property(nonatomic) double chooseCoverTime; // @synthesize chooseCoverTime=_chooseCoverTime;
@property(retain, nonatomic) NSString *tipsWording; // @synthesize tipsWording=_tipsWording;
@property(nonatomic) unsigned long long orgRecommendType; // @synthesize orgRecommendType=_orgRecommendType;
@property(nonatomic) _Bool secondaryShowFlag; // @synthesize secondaryShowFlag=_secondaryShowFlag;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) unsigned int nextCheckObjectStatusTimeStamp; // @synthesize nextCheckObjectStatusTimeStamp=_nextCheckObjectStatusTimeStamp;
@property(copy, nonatomic) NSString *sendShareFavWording; // @synthesize sendShareFavWording=_sendShareFavWording;
@property(nonatomic) _Bool fromCamera; // @synthesize fromCamera=_fromCamera;
@property(retain, nonatomic) WCFinderStreamLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) long long objectStatus; // @synthesize objectStatus=_objectStatus;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *refNickname; // @synthesize refNickname=_refNickname;
@property(copy, nonatomic) NSString *refUsername; // @synthesize refUsername=_refUsername;
@property(retain, nonatomic) WCFinderContact *refContact; // @synthesize refContact=_refContact;
@property(nonatomic) unsigned long long refObjectFlag; // @synthesize refObjectFlag=_refObjectFlag;
@property(copy, nonatomic) NSString *refObjectID; // @synthesize refObjectID=_refObjectID;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(nonatomic) unsigned int cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long friendLikeCount; // @synthesize friendLikeCount=_friendLikeCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) WCFinderRecommenderMutableArray *recommenderList; // @synthesize recommenderList=_recommenderList;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg=_uploadErrMsg;
@property(nonatomic) long long uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(nonatomic) _Bool isUpLoadFail; // @synthesize isUpLoadFail=_isUpLoadFail;
@property(nonatomic) _Bool isUpLoading; // @synthesize isUpLoading=_isUpLoading;
@property(nonatomic) long long likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) WCFinderCommentMutableArray *hotCommentList; // @synthesize hotCommentList=_hotCommentList;
@property(retain, nonatomic) WCFinderCommentMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) WCFinderLikeMutableArray *likeList; // @synthesize likeList=_likeList;
@property(retain, nonatomic) WCFinderMedia *media; // @synthesize media=_media;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *tmpLocalTid; // @synthesize tmpLocalTid=_tmpLocalTid;
@property(copy, nonatomic) NSString *disPlayTid; // @synthesize disPlayTid=_disPlayTid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)shouldShowShareToSnsAlert;
- (_Bool)isMemberShipFeed;
- (void)resetMultiIconReason;
- (id)getMultiIconReason;
- (_Bool)isUploadingOrFail;
- (_Bool)isClubFeedAuthor;
- (_Bool)isEnableAirPlay;
- (_Bool)isEnableSetRingTone;
- (_Bool)currentMediaIsHighContrast;
- (unsigned long long)videoTemplateType;
- (id)videoTemplateTopicId;
- (id)videoTemplateMusicId;
- (id)videoTemplateId;
- (id)videoTemplateInfo;
- (id)mediaInfoForPlay;
- (id)getPlayMediaInfoArray;
- (void)setMentionListSelected:(_Bool)arg1;
- (_Bool)mentionListSelected;
- (_Bool)isMusicDataItem;
- (_Bool)isFinderDataItem;
- (id)findHotNewsTopic;
- (id)longVideoMedia;
- (id)longVideoNonceId;
- (id)longVideoId;
- (_Bool)isLocalLongVideo;
- (_Bool)hasProductFeed;
- (_Bool)hasLongVideo;
- (_Bool)isLongVideoWithoutShortVideoCrop;
@property(readonly, copy) NSString *description;
- (id)pathForSightData;
- (id)pathForCover;
- (id)pathForPreview;
- (id)thumbImageUrl;
- (_Bool)dataItemUploadSuccess;
- (_Bool)isRePlayJumpFeed;
- (_Bool)isLiveFeed;
- (_Bool)isMediaURLValid;
- (_Bool)canUseAsCacheFeed;
- (_Bool)canUseCache;
- (_Bool)canShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (_Bool)shouldFileDumpItem;
- (_Bool)isPhotoWithoutBGM;
- (_Bool)isPhotoWithBGM;
- (_Bool)isPatOriginalMusicFeed;
- (_Bool)shouldShowFullScreenTimelineJumpView;
- (_Bool)isFullScreenFriendRecommendTipsBarStyle;
- (_Bool)isFullScreenFollowHistoryTipsBarStyle;
- (_Bool)shouldShowFullScreenTipsBar;
- (_Bool)isHardAdLiveFeed;
- (_Bool)isHardAdFeed;
- (id)getPatMusicGroupId;
- (_Bool)hiddenPlayRateAction;
- (_Bool)hideFavAction;
- (_Bool)disableFavAction;
- (_Bool)disableLikeAction;
- (_Bool)disableCommentEmotion;
- (_Bool)disableForwardByPrivateAccount;
- (_Bool)disableFavByPrivateAccount;
- (_Bool)isPrivateAccount;
- (_Bool)hasLinkInfo;
- (_Bool)isSelfPrivate;
- (_Bool)shouldShowNickNameWhenForwardToSns;
@property(readonly, copy, nonatomic) NSArray *mediaArray;
- (id)genFinderObject;
- (_Bool)containVideo;
@property(readonly, nonatomic) FinderObjectExtend *objectExtend;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *eventInfo;
- (_Bool)isBulletCommentForbid;
- (void)setBulletCommentOpenState:(_Bool)arg1;
- (_Bool)isBulletCommentOpen;
- (double)getFeedToCurGPSMeterDistance;
- (id)extractReuseInfoFromOldDataItem:(id)arg1;
- (_Bool)mediaHasWatermark;
- (_Bool)hasJumpInfoOnCommentOperating;
- (_Bool)hasJumpInfoOnCommentContent;
- (id)getJumpInfo;
- (void)appendOrReplaceAttachmentItem:(id)arg1;
- (void)appendAttachmentItem:(id)arg1;
@property(copy, nonatomic) NSString *fromAppId;
- (_Bool)shouldShockdLike;
- (_Bool)uploadEventNotExist;
- (_Bool)uploadFileNotExist;
- (_Bool)enableFeedRetry;
- (_Bool)uploadTooLargeAssetError;
- (_Bool)isNotRealnameError;
@property(readonly, nonatomic) unsigned long long mediaType;
- (_Bool)hasExtReading;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) NSMutableArray *mentionedNicknameArray;
@property(retain, nonatomic) NSMutableArray *mentionedContactsArray;
@property(retain, nonatomic) FinderTopic *topic; // @dynamic topic;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
- (_Bool)isEmptyMediaArray;
- (_Bool)hasBGMStreamUrl;
- (_Bool)isContainPhoto;
- (_Bool)isVideoItem;
- (_Bool)isPureText;
@property(readonly, nonatomic) unsigned long long objectID;
- (_Bool)isPrivateLike;
- (_Bool)isLikeState;
- (_Bool)isVaild;
- (id)init;
- (id)getPBPropertyTable;
- (id)convertMusicInfo;
- (void)checkValidStatusFromServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)invalidMsgFromCached;
- (_Bool)checkValidStatusFromCached;
- (_Bool)cachedDataIsExpire;
- (id)mediaDescrition;
- (id)contactNickname;
- (id)generateCoverViewForMomentsCover;
- (id)generateCoverView;
- (id)generateHeadImgViewWithFrame:(struct CGRect)arg1;
- (double)mediaHeightWithTargetWidth:(double)arg1;
- (id)getImageFromView:(id)arg1;
- (id)generateLiveTextStateInfoWithVerifyInfo:(id)arg1 textStatusIconId:(id)arg2;
- (id)to3rdPartyDataItemBuffer;
- (id)to3rdPartyDataItems;
- (id)toTextStateInfo;
- (id)fullThumbUrlToken;
- (id)thumbUrlToken;
- (id)coverUrlWithToken;
- (id)mediaTitle;
- (id)genTingBuffer;
- (id)genRingDownloadInfo;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

