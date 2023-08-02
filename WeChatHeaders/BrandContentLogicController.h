//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeixinContentLogicController.h"

#import "BrandActionReportLogicControllerDelegate-Protocol.h"
#import "BrandDeviceConnectLogicControllerDelegate-Protocol.h"
#import "BrandProfileSettingViewControllerDelegate-Protocol.h"
#import "BrandStyleUILogicControllerDelegate-Protocol.h"
#import "BrandTemplateMsgAuthLogicDelegate-Protocol.h"
#import "ForwardMessageLogicExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "MsgDelegate-Protocol.h"

@class BrandActionReportLogicController, BrandDeviceConnectLogicController, BrandStyleUILogicController, BrandTemplateMsgAuthLogic, NSString, TemplateMsgExposeLogic, TipsView;

@interface BrandContentLogicController : WeixinContentLogicController <BrandProfileSettingViewControllerDelegate, BrandActionReportLogicControllerDelegate, BrandTemplateMsgAuthLogicDelegate, ForwardMessageLogicExt, BrandStyleUILogicControllerDelegate, MsgDelegate, BrandDeviceConnectLogicControllerDelegate, IWCDeviceBrandMgrExt>
{
    TipsView *m_tipsView;
    BrandStyleUILogicController *m_uiLogicController;
    BrandActionReportLogicController *m_reportLogicController;
    BrandDeviceConnectLogicController *m_connectLogicController;
    _Bool m_isLastInMenuMode;
    unsigned long long m_lastInputMode;
    unsigned long long m_lastPoisitionMode;
    unsigned long long m_lastContentMode;
    _Bool m_shouldRecordToolViewStatus;
    _Bool m_isShowKeyboardImmediately;
    _Bool m_hasPreloadKFWorkerWeApp;
    unsigned int m_stat_timeStart;
    unsigned int m_stat_totalUnreadCount;
    unsigned int m_stat_massSendUnreadCount;
    unsigned int m_stat_templateUnreadCount;
    unsigned int m_stat_latestMsgType;
    unsigned int m_stat_latestMsgDuration;
    unsigned int m_stat_indexInSessionList;
    TemplateMsgExposeLogic *m_exposeLogic;
    BrandTemplateMsgAuthLogic *m_subscrMsgLogic;
    _Bool m_hasUnfoldHistoryMessage;
    _Bool m_hasSetInputReferMsg;
}

- (void).cxx_destruct;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)initIAPServiceIfNeed;
- (id)pageIdentityFromExtraInfo;
- (id)inputViewReferMsgFromExtraInfo;
- (id)genSessionInfoWhenExit;
- (id)genSessionInfoWhenEnter;
- (void)recordSessionInfoWhenEnter;
- (void)deleteAllMessage;
- (void)openSettingView;
- (id)viewControllerToShowPageSheet;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)addLocalSystemMessageWhenEnterSession;
- (void)onBrandLiveBannerEventWithAction:(unsigned int)arg1;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(_Bool)arg2 finderFeedExportId:(id)arg3;
- (void)tryUpdateBrandLiveStatusIfNeed;
- (void)hasTapReaderNodeView;
- (id)generateURLQueryDict:(id)arg1;
- (void)onKFWorkerMsgAvatarClicked:(id)arg1;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (void)advancePreloadKFWorkerWeApp:(id)arg1;
- (void)onKFWorkerMsgDisplay:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (_Bool)hasHardDeviceBrandSubtitle;
- (id)GetPossibleContactByName:(id)arg1;
- (void)updateContactFromServer;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (_Bool)showKeyboardImmediately;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)reportInputToolBarModeChanged:(unsigned int)arg1;
- (void)disconnectDevice;
- (void)connectDevice;
- (void)updateToolViewStatus;
- (id)getLogicController;
- (id)getInputToolView;
- (void)recordToolViewStatus;
- (void)showKeyboardImmediatelyEnd;
- (void)showKeyboardImmediatelyStart;
- (void)onModifyContact:(id)arg1;
- (void)resetUILogicController:(id)arg1;
- (void)onTextBeginEditing:(id)arg1;
- (void)CustomToolViewEX:(id)arg1;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)ViewDidDisappear;
- (void)ViewWillDisappear;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (void)ViewDidAppear;
- (void)ViewWillAppear;
- (void)ViewDidInit;
- (void)startScan;
- (void)createAllLogicForContact:(id)arg1;
- (void)ViewWillInit;
- (void)onFinishSelectedLocation;
- (void)hideErrTips;
- (void)showErrTips:(int)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)displayDeviceListView:(id)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendAssetSet;
- (_Bool)CanSendOriginalVideo;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)wxKeyBoardSupportMessageTypes;
- (_Bool)supportWXKeyBoard;
- (void)processInsertedAsset:(id)arg1;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (id)getMsgFromLocalId:(unsigned int)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (id)GetRightBarButtonImageName;
- (void)onUnfoldHistoryMsg;
- (_Bool)canShowFoldHistoryCell;
- (_Bool)shouldFoldHistoryMsg;
- (unsigned int)getMsgCountToLoad;
- (id)genMsgSource;
- (void)preAddVideoMsgWithInfo:(id)arg1;
- (void)preAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanRemoteRecord;
- (void)onPopFromNavigationController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

