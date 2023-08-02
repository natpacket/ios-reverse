//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseLogReporter.h"

#import "IWCFinderLiveAnchorReporterCallback-Protocol.h"
#import "MMLiveReportEventMgrExt-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface WCFinderLiveAnchorLogReporter : WCFinderLiveBaseLogReporter <IWCFinderLiveAnchorReporterCallback, MMLiveReportEventMgrExt, WCFinderLiveExt, MMLiveTaskMgrExt>
{
    unsigned long long m_shareScene;
    unsigned long long m_profileViewShowTime;
    unsigned long long m_profileViewScene;
    unsigned int m_exchangeCameraCount;
    unsigned int m_complainCount;
    unsigned int m_allCommentCloseCount;
    unsigned int m_allCommentOpenCount;
    unsigned int m_personalCommentCloseCount;
    unsigned int m_personalCommentOpenCount;
    unsigned int m_kickOutCount;
    NSMutableDictionary *m_promoteGoodsDic;
    NSMutableDictionary *m_promoteGoodsStay;
    NSString *m_currPromoteGoods;
    unsigned int m_topCommentCount;
    unsigned int m_lotteryCount;
    unsigned int m_clapCount;
    unsigned int m_connectCount;
    NSMutableString *m_connectTime;
    unsigned long long m_connectStartTime;
    _Bool m_isConnecting;
    _Bool m_isGift;
    _Bool m_isLike;
    NSMutableString *m_anchorConnectTime;
    unsigned long long m_anchorConnectStartTime;
    unsigned long long m_shareTextStateCount;
    NSMutableArray *m_filePresentationInfos;
}

- (void).cxx_destruct;
- (void)reportStickerAction:(id)arg1;
- (void)onLiveStickerAction:(id)arg1;
- (void)reportAnchorDecorationActionWithDict:(id)arg1;
- (void)reportAnchorRedDotActionWithDict:(id)arg1;
- (void)reportTrafficRewardAction:(unsigned long long)arg1;
- (void)reportLiveAudioModeAction:(unsigned long long)arg1;
- (void)reportDropGiftAction:(unsigned long long)arg1;
- (id)reportStructWithFinderLiveTask:(id)arg1 actionType:(unsigned long long)arg2 actionResult:(id)arg3;
- (void)reportAnchorAdjustCommentAreaStyle:(unsigned long long)arg1;
- (void)reportAnchorLiveSongAction:(unsigned long long)arg1 songName:(id)arg2 heartValue:(id)arg3;
- (void)reportAnchorLiveSongAction:(unsigned long long)arg1;
- (void)reportAnchorOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 andUserName:(id)arg4;
- (void)onAnchorDecorationActionWithDict:(id)arg1;
- (void)onAnchorFloatBarrageAction:(unsigned int)arg1 barrageType:(unsigned int)arg2;
- (void)onAnchorOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 andUserName:(id)arg4;
- (void)reportAnchorCameraZoomFocusAction:(unsigned long long)arg1;
- (void)onAnchorLiveScrollActionSheet:(id)arg1 andTask:(id)arg2;
- (void)onAnchorCameraZoomFocusAction:(unsigned long long)arg1;
- (void)onAnchorShareQRCodeAction:(unsigned long long)arg1;
- (void)reportAnchorPlayTogetherAction:(unsigned long long)arg1;
- (void)onAnchorPlayTogetherAction:(unsigned long long)arg1;
- (void)onLiveWishBannerClickedWithWishListId:(id)arg1;
- (void)onLiveWishBannerShowWithWishListId:(id)arg1;
- (void)reportAnchorFreeMicSwitch:(_Bool)arg1;
- (void)reportAddQucikReplySuccess:(unsigned long long)arg1;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 extra:(id)arg3;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 reportData:(id)arg3;
- (void)reportFansGroupNoticeEditAction:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4;
- (void)reportFansGroupAction:(long long)arg1;
- (void)reportClipTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)reportClipModeAction:(unsigned long long)arg1;
- (void)reportBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)reportScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)reportKnowAlertActionWithResult:(unsigned long long)arg1;
- (void)reportPauseAction:(long long)arg1 accumulatedTime:(long long)arg2;
- (void)reportMuteMicAction:(long long)arg1;
- (void)reportMakeupFilterActionWithType:(unsigned long long)arg1 makeupType:(id)arg2 makeupValue:(float)arg3 makeupFilterVaule:(float)arg4 filterType:(id)arg5 filterValue:(float)arg6;
- (void)reportBeautyContainerActionWithType:(unsigned long long)arg1;
- (unsigned int)getGameTypeReportValue;
- (void)reportBGMusicAction:(long long)arg1 musicIdArr:(id)arg2;
- (void)reportClapAction;
- (void)reportAnchorMicFocusingAction:(unsigned long long)arg1 userIndex:(long long)arg2;
- (void)reportAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)reportAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(_Bool)arg3;
- (void)reportAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)reportMicAction:(unsigned long long)arg1 withActionResultString:(id)arg2;
- (void)reportMicAction:(unsigned long long)arg1 withActionResultValue:(unsigned long long)arg2;
- (void)reportMicAtion:(unsigned long long)arg1;
- (void)reportMicSwitch:(unsigned long long)arg1;
- (void)reportRedPacketAction:(unsigned long long)arg1;
- (void)reportGiftRankAction:(unsigned long long)arg1;
- (void)reportAnchorAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)reportAnchorCommentAction:(unsigned long long)arg1;
- (void)reportLotteryAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportFaceVerify:(unsigned long long)arg1;
- (void)notePromoteGoods:(id)arg1 promoteStatus:(_Bool)arg2;
- (void)reportSetRecommendAction:(id)arg1;
- (void)reportPromotionReplaySettingAction:(id)arg1;
- (void)reportPayGameAction:(id)arg1;
- (void)reportHandoffAction:(unsigned long long)arg1;
- (void)reportLikeSwitch:(_Bool)arg1;
- (void)reportGiftSwitch:(_Bool)arg1;
- (void)onAnchorLiveFollowMsgNotify:(unsigned int)arg1;
- (void)onAnchorLiveLikeMsgNotify:(unsigned int)arg1;
- (void)onAnchorLiveCancelPushPromote:(long long)arg1 extra:(id)arg2;
- (void)onAnchorLivePushPromote:(long long)arg1 extra:(id)arg2;
- (void)onAnchorLiveGameBehaviorSettingsAction:(id)arg1;
- (void)reportCommerce:(unsigned long long)arg1 sceneNote:(id)arg2 productId:(unsigned long long)arg3;
- (void)reportShareSession:(unsigned long long)arg1 andUserArray:(id)arg2;
- (void)reportShareTextSate:(unsigned long long)arg1;
- (void)reportShareSns:(unsigned long long)arg1;
- (void)reportMinizaion:(unsigned long long)arg1;
- (void)reportOperaAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportExchangCamera;
- (void)reportFloatBarrageAction:(unsigned int)arg1 barrageType:(unsigned int)arg2;
- (void)reportPersonalAction:(unsigned long long)arg1 andUsr:(id)arg2;
- (void)reportLiveScrollActionSheet:(id)arg1 andTask:(id)arg2;
- (void)reportAllComment:(unsigned long long)arg1 andTask:(id)arg2;
- (void)reportCommentTop:(id)arg1 withContent:(id)arg2;
- (void)reportLiveOut:(id)arg1;
- (void)reportStartLive;
- (void)reportLiveResult:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6;
- (void)onLiveAudioModeAction:(unsigned long long)arg1;
- (id)makeExposeActionCommon;
- (void)onAnchorFreeMicSwitchUpdated:(_Bool)arg1;
- (void)onAnchorLiveUIComponentClick:(id)arg1;
- (void)onAnchorLiveUIComponentShow:(id)arg1;
- (void)onAnchorFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4;
- (void)onAnchorLiveFansGroupAction:(long long)arg1;
- (void)onAnchorLiveTrafficRewardAction:(unsigned long long)arg1;
- (void)onAnchorLiveDropGiftAction:(unsigned long long)arg1;
- (void)onAnchorLiveClapTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)onAnchorLiveClapModeAction:(unsigned long long)arg1;
- (void)onAnchorLiveWeakNetWithContent:(long long)arg1;
- (void)onAnchorBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResults:(id)arg2;
- (void)onLeadsItemShopShelfCellClicked:(unsigned long long)arg1 leadsItemID:(id)arg2;
- (void)onLeadsItemEvent:(unsigned long long)arg1 leadsItemID:(id)arg2;
- (void)onAnchorCommentAction:(unsigned long long)arg1;
- (void)onSetRecommendAction:(id)arg1;
- (void)onPromotionReplaySettingAction:(id)arg1;
- (void)onGameLiveAction:(id)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)onClapAction;
- (void)onRedPacketAction:(unsigned long long)arg1;
- (void)onAnchorMicFocusingAction:(unsigned long long)arg1 userIndex:(long long)arg2;
- (void)onAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)onAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(_Bool)arg3;
- (void)onAnchorMicClose:(id)arg1;
- (void)onAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)onMicSwitchAtion:(unsigned long long)arg1;
- (void)onMicAction:(unsigned long long)arg1 withActionResultString:(id)arg2;
- (void)onMicAction:(unsigned long long)arg1 withActionResultValue:(unsigned long long)arg2;
- (void)onMicAtion:(unsigned long long)arg1;
- (void)onOpenEncashPage;
- (void)onGiftRankAction:(unsigned long long)arg1;
- (void)onLotteryAction:(unsigned long long)arg1;
- (void)onLotteryCreate:(id)arg1;
- (void)onGoodsOrderButtonClicked:(id)arg1;
- (void)onOperationLiveShoppingButtonClicked:(id)arg1;
- (void)onGoodsItemSelected:(id)arg1 sceneNote:(id)arg2 shopContext:(id)arg3;
- (void)onOperateCoupon:(_Bool)arg1;
- (void)onAddGoodsButtonClicked:(id)arg1 withSceneNote:(id)arg2;
- (void)onPromoteStatusChanged:(id)arg1 promoteStatus:(_Bool)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)onCloseFinderLiveError:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)noteFinderLiveStart:(id)arg1 isJoin:(_Bool)arg2;
- (void)onJoinLiveAfterAbnormal:(id)arg1;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (void)onCommentTop:(id)arg1 withContent:(id)arg2;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onCancleShareSession:(id)arg1;
- (void)onCancleShareTimeline;
- (void)onShareTextState;
- (void)onShareSession:(id)arg1;
- (void)onShareTimeline;
- (void)onProfileViewShow:(unsigned long long)arg1 andContact:(id)arg2;
- (void)onActionSheetClicked:(id)arg1 controller:(id)arg2 button:(id)arg3 buttonTitle:(id)arg4;
- (void)onBeautyResult:(id)arg1;
- (void)onFilterResult:(id)arg1;
- (void)onClickOperationView:(unsigned long long)arg1;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithRoleType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

