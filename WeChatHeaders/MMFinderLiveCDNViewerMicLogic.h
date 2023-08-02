//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveConnectMicLogic.h"

@class MMFinderLiveConnectMicJoinLiveBattleInfoWrap, MMFinderLiveConnectMicUser, MMFinderLiveConnectMicUsersInfo, NSString, OrderedDictionary;

@interface MMFinderLiveCDNViewerMicLogic : MMLiveConnectMicLogic
{
    _Bool _isVideoLandscapeMode;
    _Bool _isAnchorMain;
    MMFinderLiveConnectMicUser *_connectMicAnchorUser;
    unsigned long long _maxConnectMicAudienceSequence;
    OrderedDictionary *_cachedConnectMicAudienceDic;
    OrderedDictionary *_cachedConnectMicAnchorDic;
    OrderedDictionary *_cachedOtherRoomMicAudienceDic;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    MMFinderLiveConnectMicJoinLiveBattleInfoWrap *_joinLiveBattleInfoWrap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnchorMain; // @synthesize isAnchorMain=_isAnchorMain;
@property(retain, nonatomic) MMFinderLiveConnectMicJoinLiveBattleInfoWrap *joinLiveBattleInfoWrap; // @synthesize joinLiveBattleInfoWrap=_joinLiveBattleInfoWrap;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) OrderedDictionary *cachedOtherRoomMicAudienceDic; // @synthesize cachedOtherRoomMicAudienceDic=_cachedOtherRoomMicAudienceDic;
@property(retain, nonatomic) OrderedDictionary *cachedConnectMicAnchorDic; // @synthesize cachedConnectMicAnchorDic=_cachedConnectMicAnchorDic;
@property(retain, nonatomic) OrderedDictionary *cachedConnectMicAudienceDic; // @synthesize cachedConnectMicAudienceDic=_cachedConnectMicAudienceDic;
@property(nonatomic) unsigned long long maxConnectMicAudienceSequence; // @synthesize maxConnectMicAudienceSequence=_maxConnectMicAudienceSequence;
@property(nonatomic) _Bool isVideoLandscapeMode; // @synthesize isVideoLandscapeMode=_isVideoLandscapeMode;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicAnchorUser; // @synthesize connectMicAnchorUser=_connectMicAnchorUser;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged;
- (void)updateOtherConnectMicAnchor:(id)arg1 anchorSeiStatus:(unsigned int)arg2;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithSeiMicMsg:(id)arg1;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)realUpdateConnectMicUsersInfoForCDNUserWithSeiMicMsg:(id)arg1;
- (id)findMicAudienceUserInfoForCDNUserBySdkUserId:(id)arg1;
- (void)notifyConnectMicWithOtherAnchor;
- (void)checkRemoteClosedCachedOtherRoomMicAudienceForCDNUser;
- (void)checkRemoteClosedCachedMicAudienceForCDNUser;
- (void)checkAndClearConnectMicAudienceForCDNUser;
- (void)checkAndClearConnectMicUsersForCDNUser;
- (void)clearConnectMicAnchorUserInfoOnly;
- (void)resetConnectMicUsersInfoForCDNUser;
- (void)checkConnectMicUserInfoAndVideoSizeForCdnAudience;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)checkAndUpdateLiveView;
- (void)updateBattleReportInfo;
- (void)updateUserPkStateUI;
- (void)startOrStopAnchorSEISynchronize:(_Bool)arg1;
- (void)decreasePkInfoDisplayedTimeLeft;
- (_Bool)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5 winningStreakCount:(unsigned int)arg6;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *currentAnchorFinderUserName;
- (void)checkAndClearOverPkState;
- (void)checkAndClearInvitedPkState;
- (void)receiveAnchorConnectMicBattleInfo:(id)arg1 fromJoinLive:(_Bool)arg2 micSessionId:(id)arg3;
- (unsigned int)getAudienceDelayTimeInPK;
- (void)checkJoinLiveBattleInfoWrap;
- (void)updateJoinLiveBattleInfoWrapWithBattleInfo:(id)arg1 andMicSessionId:(id)arg2;
- (void)checkAndChangeToPkStateStartedForAudience;
- (void)clearConnectMicAnchorUserInfo;
- (void)receiveOtherRoomAudienceCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 sdkUserId:(id)arg3;
- (void)receiveAnchorCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveAnchorConnectMicStatus:(long long)arg1 connectMicFinderContact:(id)arg2 coverImageUrlString:(id)arg3 liveRoomImages:(id)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 sdkUserId:(id)arg7 sdkRoomId:(unsigned int)arg8 fromJoinLive:(_Bool)arg9;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1;
- (void)receiveConnectMicUserForAudience:(id)arg1;
- (void)receiveConnectMicAudienceUser:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(_Bool)arg3;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(_Bool)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 seatId:(unsigned int)arg7 fromJoinLive:(_Bool)arg8 isInOtherRoom:(_Bool)arg9 anchorSdkUserId:(id)arg10;
- (void)addCachedOtherRoomMicAudienceWithUserInfo:(id)arg1;
- (void)addCachedConnectMicAnchorWithUserInfo:(id)arg1;
- (void)addCachedConnectMicAudienceWithUserInfo:(id)arg1;
- (id)findConnectMicUserInfoInDic:(id)arg1 bySdkUserId:(id)arg2;
- (void)checkAllCachedMicUsersDicWithUserInfo:(id)arg1;
- (unsigned long long)getAvailableMicIndexFromSeatId:(unsigned int)arg1;
- (void)checkCachedMicUserDic:(id)arg1 withClosedMicSessionId:(id)arg2;
- (void)receiveCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2;
- (id)initWithTaskId:(id)arg1;

@end

