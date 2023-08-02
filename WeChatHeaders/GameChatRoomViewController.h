//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCReportBaseVc.h"

#import "GC23070ReportDelegate-Protocol.h"
#import "GCAtPersonListViewModelDelegate-Protocol.h"
#import "GCBaseCellModelDelegate-Protocol.h"
#import "GCChatRoomServerDelegate-Protocol.h"
#import "GCMessageViewModelDelegate-Protocol.h"
#import "GCMultiMessageViewModelDelegate-Protocol.h"
#import "GameChatAtPersonListViewDelegate-Protocol.h"
#import "GameChatInputToolViewDelegate-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"
#import "IGameCenterWebViewCustomEvent-Protocol.h"
#import "ImageControllerDelegate-Protocol.h"

@class Background, BroadcastMessage, ChannelInfo, ChatroomEnterInfo, ChatroomUserData, EmoticonBoardView, EnterLeadSpeakInfo, GCChatRoomInfo, GCChatRoomServer, GCChatRoonEnterTipView, GCCollectionViewManager, GCJoinHintView, GCMultiChannelContainerView, GCMultiMessageViewModelConfig, GCNotificationBarView, GCSelfUnTouchableView, GCVerticalImgLabelView, GameChatAtPersonListView, GameChatAtPersonListViewModel, GameChatInputToolBaseView, GameChatRoomConfig, GameChatRoomDbData, GetChatroomBaseInfoResponse, GetChatroomPanelResponse, ImageController, JumpInfo, MMPageSheetAdapter, MMSessionInfo, MMWebImageView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, Notification, PAGFile, PAGView, PremadeCardInfo, RealtimeControlInfo, SlotList, UIButton, UICollectionView, UIControl, UIImageView, UILabel, UIView, WCTTable;
@protocol GCMessageViewModelProtocol;

@interface GameChatRoomViewController : GCReportBaseVc <ImageControllerDelegate, GC23070ReportDelegate, GCMessageViewModelDelegate, GCMultiMessageViewModelDelegate, IGameCenterWebViewCustomEvent, IGameCenterMsgNotifyExt, GameChatInputToolViewDelegate, GCChatRoomServerDelegate, GCBaseCellModelDelegate, GCAtPersonListViewModelDelegate, GameChatAtPersonListViewDelegate>
{
    ImageController *m_imageController;
    _Bool _forbidInteract;
    _Bool _isMemberOfChatRoom;
    _Bool _isGroupMemberHeadPlaceHolder;
    _Bool _currentShowNoti;
    _Bool _isAutoJoinFailForNotAuthored;
    _Bool _fakeAutoJoinFailForNotAuthored;
    _Bool _showCustomEmoticon;
    _Bool _shortDisableAtList;
    _Bool _hasPreloadAtListData;
    _Bool _hasJumpToTarget;
    _Bool _isShowHalfScrrenVc;
    MMSessionInfo *_sessionInfo;
    GameChatRoomConfig *_chatRoomConfig;
    UIView *_containerView;
    UIView *_messageContainerView;
    GCMultiMessageViewModelConfig *_multiViewModelConfig;
    id <GCMessageViewModelProtocol> _messageCollectionViewModel;
    GameChatAtPersonListViewModel *_atPersonListViewModel;
    UICollectionView *_groupMemberCollectionView;
    UIView *_chatRoomBottomView;
    UIButton *_chatBtn;
    UIImageView *_chatBtnEmoticonImgView;
    UILabel *_groupNameLabel;
    UILabel *_subTitle;
    UIView *_chatRoomHeaderView;
    NSString *_banInterActStr;
    NSString *_channelCantSendReason;
    NSString *_currentChatTip;
    GCSelfUnTouchableView *_inputLayerView;
    GCSelfUnTouchableView *_viewAboveInputLayer;
    GCCollectionViewManager *_groupCollectionViewManager;
    UIControl *_inputBgView;
    GameChatInputToolBaseView *_liveInputView;
    EmoticonBoardView *_emoticonBoardView;
    MMWebImageView *_backGroundImgView;
    UIView *_blackBgView;
    GCChatRoomInfo *_roomInfo;
    GCChatRoomServer *_chatRoomServer;
    ChatroomUserData *_currentUserData;
    Background *_roomBackgroundInfo;
    GetChatroomBaseInfoResponse *_roomInfoResponse;
    JumpInfo *_allMemberJumpInfo;
    JumpInfo *_preloadCreateAccountJumpInfo;
    JumpInfo *_preloadPersonalProfileJumpInfo;
    NSMutableSet *_shownNotifcationSet;
    Notification *_notification;
    SlotList *_slotList;
    RealtimeControlInfo *_realTimeControlInfo;
    BroadcastMessage *_broadCastMsg;
    GCNotificationBarView *_notificationBarView;
    NSMutableArray *_memberHeadArray;
    GCJoinHintView *_joinHintView;
    UIView *_rightBtmContainerView;
    GCVerticalImgLabelView *_startGameView;
    GCVerticalImgLabelView *_pannelPlusView;
    GetChatroomPanelResponse *_pannelResponse;
    JumpInfo *_startGameJumpInfo;
    NSMutableDictionary *_atDict;
    WCTTable *_chatRoomInfoTable;
    GameChatRoomDbData *_roomDbData;
    NSString *_robotName;
    NSMutableDictionary *_premadeStateDict;
    PremadeCardInfo *_premadCardInfo;
    GameChatAtPersonListView *_atPersonListView;
    NSMutableArray *_preloadWebViewArray;
    GCMultiChannelContainerView *_messageView;
    EnterLeadSpeakInfo *_enterLeadSpeakInfo;
    ChannelInfo *_cachedChannelInfo;
    GCChatRoonEnterTipView *_enterTipView;
    ChatroomEnterInfo *_enterInfo;
    PAGView *_pagView;
    PAGFile *_pagFile;
    MMPageSheetAdapter *_pageSheetAdapter;
    NSMutableArray *_gcJumpInfoArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowHalfScrrenVc; // @synthesize isShowHalfScrrenVc=_isShowHalfScrrenVc;
@property(retain, nonatomic) NSMutableArray *gcJumpInfoArray; // @synthesize gcJumpInfoArray=_gcJumpInfoArray;
@property(nonatomic) _Bool hasJumpToTarget; // @synthesize hasJumpToTarget=_hasJumpToTarget;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) ChatroomEnterInfo *enterInfo; // @synthesize enterInfo=_enterInfo;
@property(retain, nonatomic) GCChatRoonEnterTipView *enterTipView; // @synthesize enterTipView=_enterTipView;
@property(retain, nonatomic) ChannelInfo *cachedChannelInfo; // @synthesize cachedChannelInfo=_cachedChannelInfo;
@property(retain, nonatomic) EnterLeadSpeakInfo *enterLeadSpeakInfo; // @synthesize enterLeadSpeakInfo=_enterLeadSpeakInfo;
@property(nonatomic) _Bool hasPreloadAtListData; // @synthesize hasPreloadAtListData=_hasPreloadAtListData;
@property(retain, nonatomic) GCMultiChannelContainerView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) _Bool shortDisableAtList; // @synthesize shortDisableAtList=_shortDisableAtList;
@property(retain, nonatomic) NSMutableArray *preloadWebViewArray; // @synthesize preloadWebViewArray=_preloadWebViewArray;
@property(retain, nonatomic) GameChatAtPersonListView *atPersonListView; // @synthesize atPersonListView=_atPersonListView;
@property(nonatomic) _Bool showCustomEmoticon; // @synthesize showCustomEmoticon=_showCustomEmoticon;
@property(retain, nonatomic) PremadeCardInfo *premadCardInfo; // @synthesize premadCardInfo=_premadCardInfo;
@property(retain, nonatomic) NSMutableDictionary *premadeStateDict; // @synthesize premadeStateDict=_premadeStateDict;
@property(retain, nonatomic) NSString *robotName; // @synthesize robotName=_robotName;
@property(nonatomic) _Bool fakeAutoJoinFailForNotAuthored; // @synthesize fakeAutoJoinFailForNotAuthored=_fakeAutoJoinFailForNotAuthored;
@property(nonatomic) _Bool isAutoJoinFailForNotAuthored; // @synthesize isAutoJoinFailForNotAuthored=_isAutoJoinFailForNotAuthored;
@property(retain, nonatomic) GameChatRoomDbData *roomDbData; // @synthesize roomDbData=_roomDbData;
@property(retain, nonatomic) WCTTable *chatRoomInfoTable; // @synthesize chatRoomInfoTable=_chatRoomInfoTable;
@property(retain, nonatomic) NSMutableDictionary *atDict; // @synthesize atDict=_atDict;
@property(retain, nonatomic) JumpInfo *startGameJumpInfo; // @synthesize startGameJumpInfo=_startGameJumpInfo;
@property(retain, nonatomic) GetChatroomPanelResponse *pannelResponse; // @synthesize pannelResponse=_pannelResponse;
@property(retain, nonatomic) GCVerticalImgLabelView *pannelPlusView; // @synthesize pannelPlusView=_pannelPlusView;
@property(retain, nonatomic) GCVerticalImgLabelView *startGameView; // @synthesize startGameView=_startGameView;
@property(retain, nonatomic) UIView *rightBtmContainerView; // @synthesize rightBtmContainerView=_rightBtmContainerView;
@property(retain, nonatomic) GCJoinHintView *joinHintView; // @synthesize joinHintView=_joinHintView;
@property(nonatomic) _Bool currentShowNoti; // @synthesize currentShowNoti=_currentShowNoti;
@property(nonatomic) _Bool isGroupMemberHeadPlaceHolder; // @synthesize isGroupMemberHeadPlaceHolder=_isGroupMemberHeadPlaceHolder;
@property(retain, nonatomic) NSMutableArray *memberHeadArray; // @synthesize memberHeadArray=_memberHeadArray;
@property(retain, nonatomic) GCNotificationBarView *notificationBarView; // @synthesize notificationBarView=_notificationBarView;
@property(retain, nonatomic) BroadcastMessage *broadCastMsg; // @synthesize broadCastMsg=_broadCastMsg;
@property(retain, nonatomic) RealtimeControlInfo *realTimeControlInfo; // @synthesize realTimeControlInfo=_realTimeControlInfo;
@property(retain, nonatomic) SlotList *slotList; // @synthesize slotList=_slotList;
@property(retain, nonatomic) Notification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSMutableSet *shownNotifcationSet; // @synthesize shownNotifcationSet=_shownNotifcationSet;
@property(nonatomic) _Bool isMemberOfChatRoom; // @synthesize isMemberOfChatRoom=_isMemberOfChatRoom;
@property(retain, nonatomic) JumpInfo *preloadPersonalProfileJumpInfo; // @synthesize preloadPersonalProfileJumpInfo=_preloadPersonalProfileJumpInfo;
@property(retain, nonatomic) JumpInfo *preloadCreateAccountJumpInfo; // @synthesize preloadCreateAccountJumpInfo=_preloadCreateAccountJumpInfo;
@property(retain, nonatomic) JumpInfo *allMemberJumpInfo; // @synthesize allMemberJumpInfo=_allMemberJumpInfo;
@property(retain, nonatomic) GetChatroomBaseInfoResponse *roomInfoResponse; // @synthesize roomInfoResponse=_roomInfoResponse;
@property(retain, nonatomic) Background *roomBackgroundInfo; // @synthesize roomBackgroundInfo=_roomBackgroundInfo;
@property(retain, nonatomic) ChatroomUserData *currentUserData; // @synthesize currentUserData=_currentUserData;
@property(retain, nonatomic) GCChatRoomServer *chatRoomServer; // @synthesize chatRoomServer=_chatRoomServer;
@property(retain, nonatomic) GCChatRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(retain, nonatomic) UIView *blackBgView; // @synthesize blackBgView=_blackBgView;
@property(retain, nonatomic) MMWebImageView *backGroundImgView; // @synthesize backGroundImgView=_backGroundImgView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) GameChatInputToolBaseView *liveInputView; // @synthesize liveInputView=_liveInputView;
@property(retain, nonatomic) UIControl *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) GCCollectionViewManager *groupCollectionViewManager; // @synthesize groupCollectionViewManager=_groupCollectionViewManager;
@property(retain, nonatomic) GCSelfUnTouchableView *viewAboveInputLayer; // @synthesize viewAboveInputLayer=_viewAboveInputLayer;
@property(retain, nonatomic) GCSelfUnTouchableView *inputLayerView; // @synthesize inputLayerView=_inputLayerView;
@property(retain, nonatomic) NSString *currentChatTip; // @synthesize currentChatTip=_currentChatTip;
@property(retain, nonatomic) NSString *channelCantSendReason; // @synthesize channelCantSendReason=_channelCantSendReason;
@property(retain, nonatomic) NSString *banInterActStr; // @synthesize banInterActStr=_banInterActStr;
@property(nonatomic) _Bool forbidInteract; // @synthesize forbidInteract=_forbidInteract;
@property(retain, nonatomic) UIView *chatRoomHeaderView; // @synthesize chatRoomHeaderView=_chatRoomHeaderView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(retain, nonatomic) UIImageView *chatBtnEmoticonImgView; // @synthesize chatBtnEmoticonImgView=_chatBtnEmoticonImgView;
@property(retain, nonatomic) UIButton *chatBtn; // @synthesize chatBtn=_chatBtn;
@property(retain, nonatomic) UIView *chatRoomBottomView; // @synthesize chatRoomBottomView=_chatRoomBottomView;
@property(retain, nonatomic) UICollectionView *groupMemberCollectionView; // @synthesize groupMemberCollectionView=_groupMemberCollectionView;
@property(retain, nonatomic) GameChatAtPersonListViewModel *atPersonListViewModel; // @synthesize atPersonListViewModel=_atPersonListViewModel;
@property(retain, nonatomic) id <GCMessageViewModelProtocol> messageCollectionViewModel; // @synthesize messageCollectionViewModel=_messageCollectionViewModel;
@property(retain, nonatomic) GCMultiMessageViewModelConfig *multiViewModelConfig; // @synthesize multiViewModelConfig=_multiViewModelConfig;
@property(retain, nonatomic) UIView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) GameChatRoomConfig *chatRoomConfig; // @synthesize chatRoomConfig=_chatRoomConfig;
@property(retain, nonatomic) MMSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)runInsideAnimation:(_Bool)arg1;
- (void)runBeforeAnimation:(_Bool)arg1;
- (void)openNameCardWebViewWithJumpInfo:(id)arg1 sourceId:(unsigned long long)arg2;
- (void)openNameCardWebView;
- (void)preLoadNameCardProfile;
- (void)preLoadPersonalProfile;
- (void)openPersonalProfileWithJumpInfo:(id)arg1 chatRoomUserData:(id)arg2 sourceId:(unsigned long long)arg3;
- (void)handleMemberHeadTap:(id)arg1;
- (id)roleStrForUserData:(id)arg1;
- (void)atWithUserName:(id)arg1 displayName:(id)arg2 withAtHead:(_Bool)arg3;
- (void)atWithChatRoomUserData:(id)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)handleChatRoomMsg:(id)arg1;
- (void)handleSendWithRequest:(id)arg1;
- (id)chatRoomMsgFromMsgPack:(id)arg1;
- (void)didSelectWithEmotcion:(id)arg1;
- (id)emojiMsgFromCEmoticonWrap:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textDidClickSend;
- (_Bool)canSendTextMessage:(id)arg1;
- (void)layoutEmoticonBoardView;
- (void)layoutInputView;
- (void)onInputViewAdjustMessageView:(_Bool)arg1;
- (void)hideInputView;
- (void)onInputBgTouched;
- (void)showAtPersonListView;
- (void)atPersonListViewDidHide;
- (void)didSelectAtModel:(id)arg1;
- (id)atListChatRoomServer;
- (void)showInputBgView:(_Bool)arg1;
- (void)onEmoticonTap;
- (void)showInputViewWithInsertText:(id)arg1 channel:(id)arg2 canDeselect:(_Bool)arg3;
- (void)showInputViewWithInsertText:(id)arg1;
- (_Bool)canShowInputView;
- (void)chatBtnClicked;
- (void)onRightBtnClick;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onLeftBtnClick;
- (void)showTipForJoinResult:(_Bool)arg1 textStr:(id)arg2;
- (void)forceUpdateRoomWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)joInRoomWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeJoinHintView;
- (void)onJoinBtnClicked:(id)arg1;
- (void)onNameCardClose;
- (void)onJointBtnClickWhenNotAuthorized:(id)arg1;
- (void)addJoinBtnAction:(id)arg1;
- (void)showJoinGroupHint:(id)arg1;
- (void)handleJoinStatus:(id)arg1;
- (void)handleBeReomved:(id)arg1;
- (void)removeGroupMemberByUserName:(id)arg1;
- (id)searchGroupMemberByNameLike:(id)arg1;
- (void)removeAllAtMemberListFromDB;
- (void)onViewSizeChange;
- (void)viewDidTransitionToNewSize;
- (void)locateToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (void)initMessageViewWithChannelInfo:(id)arg1 isCache:(_Bool)arg2;
- (id)defaultChannel;
- (void)handleChatroomEnterInfo:(id)arg1;
- (void)handleFirstEnterNotify:(id)arg1;
- (void)firstTimeRoomInfoDidUpdate:(id)arg1;
- (void)hideEnterLeadSpeakInfo;
- (void)handleSpeakInfoClicked:(id)arg1;
- (void)showEnterLeadSpeakInfo;
- (void)checkEnterLeadSpeakInfo;
- (_Bool)isCurChannelShowEnterLeadSpeakInfo;
- (id)multiMsgViewModel;
- (void)roomInfoDidUpdate:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)onRemovedConfirm;
- (void)updateHeadModel:(id)arg1 withSlot:(id)arg2;
- (id)groupMemberHeadArrayFromSlotList:(id)arg1;
- (void)onCloseNotificationClicked;
- (void)onNotificationBarClick;
- (void)sendNotiConfirmStatus:(unsigned long long)arg1 notification:(id)arg2;
- (void)handleNotificationBar:(id)arg1;
- (id)logForNoti:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (void)logStr:(id)arg1;
- (id)getFirstNotification:(id)arg1;
- (void)showTestAtTip;
- (void)handleNewContactsUpdate:(id)arg1;
- (id)getBanInteractDesc:(id)arg1;
- (void)setChatBtnEnabled:(_Bool)arg1;
- (void)checkBanInterActState;
- (void)configureChannelCantSpeedReason:(id)arg1;
- (void)configureBanInterActStr:(id)arg1;
- (void)checkUpdateEmoticonBoardView;
- (_Bool)handleRealTimeControlInfo:(id)arg1;
- (void)changeArray:(id)arg1 targetArray:(id)arg2 deleteItems:(id)arg3 addItems:(id)arg4 oldPosToNewPosDict:(id)arg5;
- (void)handleSlotList:(id)arg1;
- (void)configureBroadCastMsg:(id)arg1;
- (void)checkSubTitle;
- (id)getPlaceHolderHeadModelWithIndex:(unsigned long long)arg1;
- (id)getAllMemberHeadModel;
- (void)layoutHeaderView;
- (void)roomRealTimeInfoUpdate:(id)arg1;
- (void)handlePremadInfo:(id)arg1;
- (void)handleSlotListWithRealResponse:(id)arg1;
- (void)updateCurrentContactIfSameUserName:(id)arg1;
- (void)contactDidUpdate:(id)arg1;
- (void)didReceiveNewMessage:(id)arg1;
- (void)loadCachedMsgData;
- (void)loadCachedRealTimeControlInfo;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (void)tryAutoJoin:(CDUnknownBlockType)arg1;
- (void)reportWithPannel:(id)arg1 index:(unsigned long long)arg2 op:(unsigned long long)arg3;
- (void)hanelPannelItemSelect:(id)arg1 index:(unsigned long long)arg2;
- (void)hanelLeftPanelDown;
- (void)showPannelView;
- (void)initPageSheetAdapterIfNeed;
- (void)checkPannel;
- (void)startUpdateGameRoomInfo;
- (void)setUpServerLogic;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)getChatomDbDataTable;
- (_Bool)isShowHeadImage:(id)arg1 logicController:(id)arg2;
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 jumpInfo:(id)arg3;
- (void)onStartGameTap;
- (void)horizonlLayoutChatBottomView;
- (void)initStartGameView;
- (id)getRightBtmView;
- (void)checkShowStartGameView;
- (void)checkShowRightBtmView;
- (void)initBottomView;
- (void)initMessageCollectionView;
- (void)updateMessageViewContainerFrameAndGradient;
- (struct CGRect)messageCollectionViewContainerFrame;
- (void)updateCollectionViewWithNotificationShow:(_Bool)arg1;
- (void)hidNotificationBar;
- (void)updateNotificationStatus;
- (void)configureNotificationBarWithNotification:(id)arg1;
- (void)initBroadcasAndNotificationView;
- (double)leftMargin;
- (double)chatRoomBottomViewHeight;
- (double)spaceUpChatBtn;
- (double)groupMemberTop;
- (void)handleLongPress:(id)arg1 cellModel:(id)arg2;
- (void)sendCellModelMsgIfNoDelay:(id)arg1;
- (void)initGroupMemberCollectionView;
- (void)delayLoadAtListViewModel;
- (void)showRightBarItem:(_Bool)arg1;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)relayoutBackgroundImageView;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)requestBgImg:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)configPagViewAndPlayWithData:(id)arg1;
- (void)getPagBgDataWithHttpUrl:(id)arg1;
- (void)initPAGAnimationBgView;
- (void)reconfigBackgroundWith:(id)arg1;
- (void)initBgImgView;
- (id)initWithChatRoomConfig:(id)arg1;
- (id)createImagePackWithMsg:(id)arg1;
- (_Bool)CanDragSelect;
- (_Bool)CanSendAssetSet;
- (_Bool)CanSendOriginalVideo;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (id)getViewController;
- (void)showToastForImageFail:(id)arg1;
- (void)processInsertedAsset:(id)arg1;
- (void)onOpenMediaBrowser;
- (void)initImageControllerIfNeed;
- (void)onReportWillReport:(id)arg1;
- (void)onChangeToMessageViewModel:(id)arg1;
- (void)didConfirmResend:(id)arg1;
- (void)confirmKickOutUser:(id)arg1;
- (void)onDelayMsgCompleted:(id)arg1;
- (id)getUserDatOfUserName:(id)arg1;
- (void)handleVote:(id)arg1 fromPos:(unsigned long long)arg2;
- (void)handleChoosenMsgJumpUrl:(id)arg1;
- (void)handlePublishChoosenMsg:(id)arg1;
- (void)jumpToTargetChannel:(long long)arg1;
- (void)handleLocate:(id)arg1;
- (void)onConfirmHandleChoose:(id)arg1 isChosen:(_Bool)arg2;
- (void)onConfigureCellModel:(id)arg1;
- (void)reloadCellModelInNextLoop:(id)arg1;
- (id)getChatRoomName;
- (_Bool)isCurChatRoomForbidInteract;
- (id)getCurrentRoomResponse;
- (id)getCurrentUserData;
- (void)onSendFailImgTap:(id)arg1;
- (void)handleRevokeTickle:(unsigned long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)handleHeadDoubleClick:(id)arg1;
- (void)handleHeadTap:(id)arg1;
- (void)handleBlockMsg:(id)arg1;
- (void)handleManageMember:(id)arg1;
- (void)willKickOutMember:(id)arg1;
- (void)atWithUserName:(id)arg1;
- (void)didAtWithCellModel:(id)arg1;
- (void)channelAllDidLoadFirstPage;
- (id)channelOfChannelId:(long long)arg1;
- (void)handleSendChatroomMsgRequest:(id)arg1 cellModel:(id)arg2;
- (id)viewModelViewController;
- (void)messageViewModelConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (id)viewModelChatRoomServer;
- (void)onGameCenterWebViewCustomEvent:(id)arg1;
- (void)removePreloadCache;
- (void)showFirstHalfJumpInfo;
- (void)checkShowNextJumpInfo;
- (void)forceCheckHalfScreenVc;
- (void)onHalfScreenVc:(id)arg1 parentVC:(id)arg2 visibleChange:(_Bool)arg3;
- (void)handleGcJumpInfo:(id)arg1;
- (void)jumpWithJumpInfo:(id)arg1 additionalInfo:(id)arg2 onCloseBlock:(CDUnknownBlockType)arg3 fromName:(id)arg4;
- (void)jumpWithJumpInfo:(id)arg1 fromName:(id)arg2;
- (void)preloadWebViewWithJumpInfo:(id)arg1 reCreateAfterUsed:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

