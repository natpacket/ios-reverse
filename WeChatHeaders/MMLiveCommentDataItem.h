//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FinderLiveBoxId, FinderLiveContact, FinderLocation, GameLiveJumpInfo, MMFinderLiveRewardGiftItem, MMLiveCommentDataActionObj, NSData, NSDictionary, NSLock, NSString;

@interface MMLiveCommentDataItem : NSObject <NSCopying>
{
    _Bool _overTime;
    _Bool _isSelfCommit;
    _Bool _isJoinLiveOfficialTip;
    _Bool _isSelfAssistantComment;
    _Bool _isLikeMsg;
    _Bool _isSelfLikeComment;
    _Bool _isSeqUnValid;
    _Bool _like;
    _Bool _isFloatingMsg;
    unsigned int _msgType;
    unsigned int _msgSubType;
    unsigned int _atime;
    unsigned int _likeCount;
    unsigned int _comboProductCount;
    unsigned int _rankingPosition;
    int _showLikeNum;
    int _commentLikeCount;
    unsigned int _floatMsgType;
    NSString *_taskKey;
    long long _localSeq;
    NSString *_identityId;
    NSString *_headimgurl;
    NSString *_nickName;
    FinderLiveBoxId *_boxId;
    NSString *_content;
    NSString *_poiAddrStr;
    NSString *_poiAddrSubStr;
    NSString *_name;
    NSString *_fromName;
    NSString *_roomId;
    unsigned long long _seq;
    NSString *_clientMsgId;
    NSString *_localClientMsgId;
    FinderLiveContact *_finderLiveContact;
    FinderLiveContact *_toUserContact;
    MMFinderLiveRewardGiftItem *_comboProduct;
    NSDictionary *_businessInfo;
    NSData *_appMsgpayload;
    MMLiveCommentDataActionObj *_actionObj;
    NSString *_bizUsername;
    NSString *_globalRankChangeStr;
    id _extraInfo;
    FinderLocation *_finderLocation;
    GameLiveJumpInfo *_gameLiveJumpInfo;
    NSString *_lastClickedContentLink;
    NSLock *_lock;
}

+ (_Bool)isSupportAsyncCreateWithFinderLivePBMessage:(id)arg1;
+ (unsigned long long)getCurrentRoleType;
+ (id)poiIconImgPath;
+ (id)poiMsgActionLinkUrl;
+ (_Bool)isFinderLiveContactSelf:(id)arg1;
+ (id)subContentToLength:(id)arg1 maxLength:(unsigned long long)arg2;
+ (id)convertNameToPrivateName:(id)arg1;
+ (_Bool)isCommentMsgTypeCanLike:(unsigned int)arg1;
+ (id)createWithFinderLiveAppMsg:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
+ (id)convertNameToDisplayName:(id)arg1 msgType:(unsigned int)arg2;
+ (id)convertContentToDisplayContent:(id)arg1 msgType:(unsigned int)arg2;
+ (id)convertContent:(id)arg1 msgType:(unsigned int)arg2 roomId:(id)arg3 isLikeMsg:(_Bool *)arg4;
+ (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
+ (id)convertSystemMessageFromTemplateContentNode:(struct XmlReaderNode_t *)arg1 roomId:(id)arg2;
+ (id)convertSystemMessageFromXML:(id)arg1 roomId:(id)arg2 isLikeMsg:(_Bool *)arg3;
+ (unsigned int)convertBackFinderLiveMsgType:(unsigned int)arg1;
+ (unsigned int)convertFinderLiveAppMsgType:(unsigned int)arg1;
+ (unsigned int)convertFinderLiveMsgType:(unsigned int)arg1;
+ (unsigned int)convertGroupLiveMsgType:(unsigned int)arg1;
+ (id)createFinderTickleCommentForTaskId:(id)arg1 fromUserName:(id)arg2 toDataItem:(id)arg3;
+ (id)createFinderLiveInLiveFriendCountTipMsg:(unsigned int)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveBoxChatRoomCommentTipMsgForTaskId:(id)arg1 boxId:(id)arg2;
+ (id)createFinderJoinLiveCommentForTaskId:(id)arg1 joinLiveTip:(id)arg2;
+ (id)createFinderRecommendReasonCommentForTaskId:(id)arg1 recommendReason:(id)arg2;
+ (id)createFinderSelfGotoShopBusinessPageNotifyCommentForTaskId:(id)arg1;
+ (id)createFinderAnchorNoticeCommentForTaskId:(id)arg1 noticeContent:(id)arg2;
+ (id)createFinderAnchorNoticeCommentForTaskId:(id)arg1;
+ (id)createFinderLivePauseStatusItem:(_Bool)arg1 forTaskId:(id)arg2;
+ (id)createFinderIsPureAudioModeChangedNotify:(_Bool)arg1;
+ (id)createFinderLiveMutedByAnchorStatusChangedNotify:(_Bool)arg1;
+ (id)createFinderFreeTalkFlagChangedNotify:(_Bool)arg1;
+ (id)createFinderConnectMicConditionSettingChangedNotify:(unsigned long long)arg1;
+ (id)createFinderCanApplyConnectMicChangedNotify:(_Bool)arg1;
+ (id)createSystemDisConnectMicNotifyWithConnectedIdentityId:(id)arg1 defaultDisplayName:(id)arg2 taskId:(id)arg3;
+ (id)createSystemConnectMicNotifyWithConnectedIdentityId:(id)arg1 defaultDisplayName:(id)arg2 taskId:(id)arg3;
+ (id)createSystemAntispamBanNotifyForTaskId:(id)arg1;
+ (id)createFinderGameWithGameJumpInfo:(id)arg1;
+ (id)createFinderSubscribeWithBizUsername:(id)arg1 bizNickname:(id)arg2 forTaskId:(id)arg3;
+ (id)createFinderLiveWithFinderLiveAppMsg:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveAnchorNotice:(id)arg1;
+ (id)createFinderLivePOIDescriptionWithLocation:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveJoinGameEnabled:(_Bool)arg1 forTaskId:(id)arg2 isWAGame:(_Bool)arg3;
+ (id)createFinderLiveEnableSkinSegforTaskId:(id)arg1;
+ (id)createFinderLiveDisableSkinSegforTaskId:(id)arg1;
+ (id)createFinderLiveHiddenName:(_Bool)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveLikeEnabled:(_Bool)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveRewardEnabled:(_Bool)arg1 forTaskId:(id)arg2;
+ (id)createSystemAllowNotifyForTaskId:(id)arg1;
+ (id)createSystemBanNotifyForTaskId:(id)arg1;
+ (id)createUserCommentWithBarrageComment:(id)arg1 taskId:(id)arg2;
+ (id)createSelfCommitCommentWithContent:(id)arg1 taskId:(id)arg2 toUser:(id)arg3 postType:(unsigned long long)arg4 boxId:(id)arg5 poiAddrSubStr:(id)arg6 extra:(id)arg7;
+ (id)createSelfCommitCommentWithContent:(id)arg1 taskId:(id)arg2 toUser:(id)arg3 postType:(unsigned long long)arg4 boxId:(id)arg5 extra:(id)arg6;
+ (id)createComboLiveRewardCommentWithReward:(id)arg1 rewardRecipientContact:(id)arg2 taskId:(id)arg3 sendingComboId:(id)arg4 comboGiftCount:(unsigned long long)arg5 extInfo:(id)arg6;
+ (id)createLocalCommentAssistantNotice:(id)arg1 addMsg:(_Bool)arg2;
+ (id)createLocalRemoveCommentAssistantNotice:(id)arg1;
+ (id)createLocalAddCommentAssistantNotice:(id)arg1;
+ (_Bool)isLocalComment:(id)arg1 equalRemoteComment:(id)arg2;
+ (id)uniqueCommentClientMsgId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned int floatMsgType; // @synthesize floatMsgType=_floatMsgType;
@property(nonatomic) _Bool isFloatingMsg; // @synthesize isFloatingMsg=_isFloatingMsg;
@property(retain, nonatomic) NSString *lastClickedContentLink; // @synthesize lastClickedContentLink=_lastClickedContentLink;
@property(nonatomic) int commentLikeCount; // @synthesize commentLikeCount=_commentLikeCount;
@property(nonatomic) _Bool like; // @synthesize like=_like;
@property(nonatomic) int showLikeNum; // @synthesize showLikeNum=_showLikeNum;
@property(retain, nonatomic) GameLiveJumpInfo *gameLiveJumpInfo; // @synthesize gameLiveJumpInfo=_gameLiveJumpInfo;
@property(retain, nonatomic) FinderLocation *finderLocation; // @synthesize finderLocation=_finderLocation;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *globalRankChangeStr; // @synthesize globalRankChangeStr=_globalRankChangeStr;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(retain, nonatomic) MMLiveCommentDataActionObj *actionObj; // @synthesize actionObj=_actionObj;
@property(retain, nonatomic) NSData *appMsgpayload; // @synthesize appMsgpayload=_appMsgpayload;
@property(retain, nonatomic) NSDictionary *businessInfo; // @synthesize businessInfo=_businessInfo;
@property(nonatomic) unsigned int rankingPosition; // @synthesize rankingPosition=_rankingPosition;
@property(nonatomic) unsigned int comboProductCount; // @synthesize comboProductCount=_comboProductCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *comboProduct; // @synthesize comboProduct=_comboProduct;
@property(retain) FinderLiveContact *toUserContact; // @synthesize toUserContact=_toUserContact;
@property(retain) FinderLiveContact *finderLiveContact; // @synthesize finderLiveContact=_finderLiveContact;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(copy) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;
@property(copy) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) _Bool isSeqUnValid; // @synthesize isSeqUnValid=_isSeqUnValid;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool isSelfLikeComment; // @synthesize isSelfLikeComment=_isSelfLikeComment;
@property(copy) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) _Bool isLikeMsg; // @synthesize isLikeMsg=_isLikeMsg;
@property(nonatomic) _Bool isSelfAssistantComment; // @synthesize isSelfAssistantComment=_isSelfAssistantComment;
@property(nonatomic) _Bool isJoinLiveOfficialTip; // @synthesize isJoinLiveOfficialTip=_isJoinLiveOfficialTip;
@property(nonatomic) _Bool isSelfCommit; // @synthesize isSelfCommit=_isSelfCommit;
@property(nonatomic) unsigned int atime; // @synthesize atime=_atime;
@property(copy) NSString *fromName; // @synthesize fromName=_fromName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *poiAddrSubStr; // @synthesize poiAddrSubStr=_poiAddrSubStr;
@property(copy) NSString *poiAddrStr; // @synthesize poiAddrStr=_poiAddrStr;
@property(copy) NSString *content; // @synthesize content=_content;
@property(retain) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(nonatomic) unsigned int msgSubType; // @synthesize msgSubType=_msgSubType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(copy) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy) NSString *headimgurl; // @synthesize headimgurl=_headimgurl;
@property(copy) NSString *identityId; // @synthesize identityId=_identityId;
@property(nonatomic) long long localSeq; // @synthesize localSeq=_localSeq;
@property(nonatomic) _Bool overTime; // @synthesize overTime=_overTime;
- (_Bool)isCommentNeedAppendImmediately;
- (unsigned int)getCommentSenderRoleTypeWithTask:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueMsgId;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)genTaskKey;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)getDisplayStrWithTaskId:(id)arg1;
- (id)getDisplayStr;
- (id)getPrefixForPOIContent;
- (id)getDisplayStrWithNameSpacialHandled:(_Bool)arg1 taskId:(id)arg2;
- (id)createFinderNickName:(id)arg1;
- (id)createFinderNickName;
- (id)createName;
- (id)getCompletedHeadImgUrlStr:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderLiveAppMsgForAd:(id)arg1;
- (id)initWithFinderLiveAppMsgForAtCommentInFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForLocationCommentFromFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForAtAllFromFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForRoomManagerRoleChanged:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForReplyComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForGlobalLevelUpgrade:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForCommentNotify:(id)arg1 forTaskId:(id)arg2;
- (void)setupCommonCommentNofityWith:(id)arg1;
- (void)setupCommentNofityWith:(id)arg1;
- (id)initWithFinderLiveAppMsgFoPaymentGame:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForRewardRankingNotice:(id)arg1 forTaskId:(id)arg2;
- (_Bool)isCommentNeedSpecialNotify;
- (_Bool)isCommentToMySelf;
- (_Bool)isCommentFromMySelf;
- (_Bool)isFromMyFriend;
- (_Bool)isCommentAtAll;
- (_Bool)isCommentAtMe;
- (id)liveMsgExtInfoJoinLiveContent;
@property(readonly, nonatomic) unsigned int liveMsgExtInfoType;
- (unsigned int)getNotifyMsgPriority;
- (id)getMysteriousBadgeInfo;
- (id)getInvisiableBadgeInfo;
- (id)getRoleBadgeInfo;
- (id)getFansGroupBadgeInfo;
- (id)getGameEsportBadgeInfo;
- (id)getGameRankBadgeInfo;
- (id)getGloryBadgeInfo;
- (id)getGlobalRewardBadgeInfo;
- (id)getRewardBadgeInfo;
- (_Bool)hasMysterious;
- (_Bool)hasRoleSign;
- (_Bool)hasInvisiableBadge;
- (unsigned int)getFansGroupRank;
- (_Bool)hasFansGroupRank;
- (_Bool)hasGameEsportRank;
- (_Bool)hasGameRank;
- (unsigned int)getGloryRank;
- (_Bool)hasGloryRank;
- (unsigned int)getGlobalRank;
- (_Bool)hasGlobalRank;
- (unsigned int)getRewardRank;
- (_Bool)hasRewardRank;
- (_Bool)hasFansGroupEntranceAuthority;
- (_Bool)shouldHideRankForInvisiableJoinLive;
- (id)anchorOrAssistantBadgeName;
- (_Bool)isAnchorOrAssistantComment;
- (_Bool)isAnchorComment;
- (id)initWithFinderLiveAppMsgForAchievedWishList:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForJoinFansGroupNotify:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForComboLiveReward:(id)arg1 forTaskId:(id)arg2;
- (id)initWithCommonSystemNotifyAppMsg:(id)arg1 forTaskId:(id)arg2;
- (void)supplyMsgSubTypeWithFinderLiveMessage:(id)arg1;
- (id)getContentForJoinLiveMsg;
- (id)initWithFinderLiveAppMsgForFriendChat:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)createFinderLiveAppMsg;
- (id)initWithFinderLiveMessage:(id)arg1;
- (id)initWithLiveMessage:(id)arg1 roomId:(id)arg2;
- (id)init;
- (unsigned int)convertToFinderLiveAppMsgType;
- (void)supplyMsgSubTypeWithPostType:(unsigned long long)arg1;
- (_Bool)isCommentTableStyleFromUser;

@end

