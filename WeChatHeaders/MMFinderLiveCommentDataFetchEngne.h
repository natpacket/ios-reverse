//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentDataFetchEngne.h"

#import "WCFinderLiveExt-Protocol.h"

@class NSString;

@interface MMFinderLiveCommentDataFetchEngne : MMLiveCommentDataFetchEngne <WCFinderLiveExt>
{
    int _logCommentOpen;
}

+ (void)logForRewardRankComment:(id)arg1 logStr:(id)arg2;
+ (id)filterNotifyTypeCommentData:(id)arg1 taskId:(id)arg2;
+ (id)filterAdAppMsg:(id)arg1 type:(unsigned int)arg2;
+ (id)filterLikeMsg:(id)arg1;
+ (void)filterUnValidMsg:(id)arg1;
@property(nonatomic) int logCommentOpen; // @synthesize logCommentOpen=_logCommentOpen;
- (void)logForSpecialNotifyToMe:(id)arg1 logStr:(id)arg2;
- (void)checkAndPickExraInfoFromGlobalRankUpdateNoticeMsg:(id)arg1 forTaskId:(id)arg2;
- (void)checkAndPickExtraInfoFromCommentDatas:(id)arg1 forTaskId:(id)arg2;
- (void)logForRedPacketComment:(id)arg1 logStr:(id)arg2;
- (void)logForJoinFansGroupNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForGlobalRankUpdateNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForRewardRankingNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForComboLiveRewardComment:(id)arg1 logStr:(id)arg2 selfUserName:(id)arg3;
- (void)logForCommentData:(id)arg1;
- (_Bool)isCommentMsgTypeBanCommentPersonal:(unsigned int)arg1;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 nextRequestInterval:(unsigned int)arg11 currentLikeCount:(unsigned long long)arg12 liveGameData:(id)arg13 respContext:(id)arg14;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)arg1;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (id)commentDataMgr;
- (_Bool)applyGetLiveMessageWithTaskId:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

