//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveBaseTaskDelegate-Protocol.h"

@class LiveSdkInfo, MMFinderLiveConnectMicUsersInfo, MMLiveSEIConnectMicMsg, MMLiveTask, MMMetricsInfo, NSArray, NSDictionary, NSError, NSString, TRTCQualityInfo, TRTCStatistics;

@protocol MMLiveTaskDelegate <MMLiveBaseTaskDelegate>

@optional
- (void)onLiveTask:(MMLiveTask *)arg1 isLargeLiveFlagUpdated:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 enableFloatBarrageUpdated:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 liveClosed:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 livePausedForPaidLiveTrialTimeupChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 micUsersInfoChanged:(MMFinderLiveConnectMicUsersInfo *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 trtcHasVideoSrcChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 willStartMultiAngleSwitchAnimationWithDuration:(double)arg2 currentProgress:(double)arg3 switchToNext:(_Bool)arg4;
- (void)onLiveTask:(MMLiveTask *)arg1 currentDisplayingCdnPlayerViewIndexUpdated:(unsigned long long)arg2 andProgress:(double)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 multiAngleCdnPlayerViewCountUpdated:(unsigned long long)arg2 andCurrentIndex:(unsigned long long)arg3;
- (void)onLiveTaskSwitchCdnPlayerViewFinished:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 audienceConnectingMicStatusChanged:(_Bool)arg2;
- (void)onLiveTaskMicDidReady:(MMLiveTask *)arg1;
- (void)onLiveTaskSendFirstLocalAudioFrame:(MMLiveTask *)arg1;
- (void)onLiveTaskLandScapeEnabledChanged:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 isAssistantValueChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 playingViaCdnChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 videoFPSChanged:(unsigned int)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 pushNetStatus:(NSDictionary *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 updateLiveDescription:(NSString *)arg2;
- (void)onLiveTaskUnMuteLiveForAudience:(MMLiveTask *)arg1;
- (void)onLiveTaskMuteLiveForAudience:(MMLiveTask *)arg1;
- (void)onLiveTaskResumeLiveForAudience:(MMLiveTask *)arg1;
- (void)onLiveTaskPauseLiveForAudience:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 didCollectMetricsInfo:(MMMetricsInfo *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 didChangeViewCapturing:(_Bool)arg2;
- (void)onLiveTaskAnchorAudioModeBackgroundPlayerVMChanged:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 micMutedDidChange:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 otherConnectMicAnchor:(NSString *)arg2 anchorSeiStatus:(unsigned int)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 anchorIsTalking:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 isViewCapturingChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 isPureAudioModeChanged:(_Bool)arg2 showTip:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 userVoiceVolume:(NSArray *)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(_Bool)arg4;
- (void)onLiveTask:(MMLiveTask *)arg1 SEIMicTalkingUsersListUpdated:(NSArray *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 SEIMicMsgInfoUpdated:(MMLiveSEIConnectMicMsg *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 SEIConnectMicUserInfoListUpdated:(NSArray *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 replayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 trtcLocalVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 trtcMainRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 cdnPlayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTaskFirstShowCdnPlayerView:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 connectOtherRoomResult:(_Bool)arg2 userId:(NSString *)arg3 errCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onLiveTask:(MMLiveTask *)arg1 remoteUserLeaveRoom:(NSString *)arg2 reason:(long long)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 remoteUserEnterRoom:(NSString *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 netStatus:(NSDictionary *)arg2 p2pStatus:(NSDictionary *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 cdnPlayEventId:(int)arg2 params:(NSDictionary *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 statistics:(TRTCStatistics *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 networkLocalQuality:(TRTCQualityInfo *)arg2 remoteQuality:(NSArray *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 user:(NSString *)arg2 videoAvailable:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 user:(NSString *)arg2 audioAvailable:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 switchRoleType:(int)arg2 errMsg:(NSString *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 liveSdkInfoWillExpire:(LiveSdkInfo *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 exitLiveRoom:(long long)arg2 error:(NSError *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 enterLiveRoom:(NSError *)arg2;
- (void)onLiveTaskEnterLive:(MMLiveTask *)arg1;
@end
