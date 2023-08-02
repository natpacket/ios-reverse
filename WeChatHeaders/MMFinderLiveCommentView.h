//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentView.h"

#import "ILBSLifeMgrExt-Protocol.h"
#import "MMFinderLiveSFBarrageViewDelegate-Protocol.h"
#import "MMPickLocationDataActionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class CLLocation, MMFinderGroupLiveChatRoomDataProvider, MMFinderLiveCommentContentScrollView, MMFinderLiveCommentEntranceTabBar, MMFinderLiveCommentInputEmoticonView, MMFinderLiveCommentPostInfo, MMFinderLiveCommentTableViewModel, MMFinderLiveFloatMsgConfigRequestLogic, MMFinderLiveNotifyCommentLogic, MMFinderLivePrivateCommentContentView, MMFinderLivePublicCommentContentView, MMFinderLiveSFBarrageView, MMFinderLiveTask, MMFinderLiveTaskId, MMFinderLiveTopCommentContentView, MMFinderLiveTopCommentLogic, MMLiveCommentDataItem, MMLiveCommentTableViewModel, MMLocatingCoordinateLogic, MMTableView, NSArray, NSData, NSMutableDictionary, NSString, PickLocationManager, RichTextView, WCBulletinInfo, WCLocationInfo, WCUIAlertView;

@interface MMFinderLiveCommentView : MMLiveCommentView <WCActionSheetDelegate, WCFinderLiveExt, UIGestureRecognizerDelegate, MMPickLocationDataActionDelegate, ILBSLifeMgrExt, MMFinderLiveSFBarrageViewDelegate>
{
    unsigned long long _commentState;
    _Bool _hideTopCommentContent;
    _Bool _hideNotifyCommentView;
    _Bool _canShowTalkButton;
    _Bool _isInMicTalkingModeSwitchAnimation;
    _Bool _isEnableAnchorStatusRequesting;
    _Bool _needTableViewAutoScrollToRereshBeforeRotate;
    _Bool _needTableViewAutoScrollToRereshBeforeMinimize;
    _Bool _needTableViewAutoScrollToRereshBeforeEnterBackground;
    _Bool _needHandleRestoreAfterMinimize;
    _Bool _needHandleRestoreAfterEnterForeground;
    _Bool _enterBackground;
    _Bool _hasFetchedLBS;
    _Bool _hasSelectPOI;
    _Bool _sendingLocation;
    _Bool _enablePrivateComment;
    _Bool _isCommentButtonHidden;
    _Bool _isCommentButtonTextStatePrivate;
    int _eventId;
    CDUnknownBlockType _didCommitTextAction;
    CDUnknownBlockType _didCommitLocationAction;
    CDUnknownBlockType _commentContentViewTopDidChanged;
    CDUnknownBlockType _commentContentViewTopDidChangedForContentState;
    CDUnknownBlockType _commentCellDidLongPressedBlock;
    CDUnknownBlockType _commentEntranceDidTapBlock;
    CDUnknownBlockType _invokeShowChatRoomCreateGuideBlock;
    CDUnknownBlockType _commentTalkButtonDidTapBlock;
    double _commentContentViewTop;
    CDUnknownBlockType _commentCellDidMenuSelectBlock;
    CDUnknownBlockType _onCommentContentTransitionChangeCallback;
    CDUnknownBlockType _onCommentContentStateChangeCallback;
    CDUnknownBlockType _onCommentContentLayoutChangedCallback;
    MMFinderGroupLiveChatRoomDataProvider *_chatRoomDataProvider;
    MMFinderLiveCommentEntranceTabBar *_commentContentEntranceTabBar;
    MMFinderLiveSFBarrageView *_barrageContentView;
    MMFinderLiveCommentContentScrollView *_commentContentContainerView;
    MMFinderLiveTopCommentLogic *_topCommentNotifyLogic;
    MMFinderLiveCommentInputEmoticonView *_inputEmoticonView;
    MMFinderLiveTopCommentContentView *_topCommentContentView;
    MMFinderLiveCommentPostInfo *_cachedLastCommentPostInfoForRetry;
    NSString *_cachedLastTextForRetry;
    unsigned long long _enableAnchorStatusRequestSeq;
    double _lastEnableAnchorStatusRequestResultTime;
    MMLiveCommentDataItem *_visbleCommentItemBeforeLayout;
    MMLiveCommentDataItem *_visbleCommentItemBeforeMinimize;
    MMLiveCommentDataItem *_visbleCommentItemBeforeEnterBackground;
    double _enterLiveTime;
    RichTextView *_selfNickNameView;
    NSString *_currentAccountNickName;
    double _currentMaxNickNameWidth;
    NSArray *_selfNickNameArrStyles;
    CDUnknownBlockType _sendedAction;
    WCUIAlertView *_currAlertView;
    PickLocationManager *_pickLocationManager;
    CLLocation *_location;
    NSMutableDictionary *_locationSendRecordInfo;
    unsigned long long _geoTag;
    double _sendLocationTime;
    NSString *_quickReplyStr;
    WCLocationInfo *_currentLocationInfo;
    WCLocationInfo *_cacheLocationInfo;
    MMLocatingCoordinateLogic *_locatingLogic;
    WCBulletinInfo *_lastBulletinInfo;
    WCBulletinInfo *_enterLiveBulletinInfo;
    NSData *_lastBuffer;
    unsigned long long _reuseFeedStreamCommentCount;
    double _lastLayoutTransitonPercent;
    MMFinderLiveFloatMsgConfigRequestLogic *_floatMsgConfigRequestLogic;
}

+ (double)getContentWidgetsTopInPortraitForAudience:(id)arg1;
+ (double)getContentWidgetsTopInPortraitForAnchor:(id)arg1;
+ (double)commentTableContentWidth:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait;
+ (double)commentTableStaticWidthPortraitForIpad:(id)arg1;
+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableWidth:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFloatMsgConfigRequestLogic *floatMsgConfigRequestLogic; // @synthesize floatMsgConfigRequestLogic=_floatMsgConfigRequestLogic;
@property(nonatomic) double lastLayoutTransitonPercent; // @synthesize lastLayoutTransitonPercent=_lastLayoutTransitonPercent;
@property(nonatomic) unsigned long long reuseFeedStreamCommentCount; // @synthesize reuseFeedStreamCommentCount=_reuseFeedStreamCommentCount;
@property(nonatomic) _Bool isCommentButtonTextStatePrivate; // @synthesize isCommentButtonTextStatePrivate=_isCommentButtonTextStatePrivate;
@property(nonatomic) _Bool isCommentButtonHidden; // @synthesize isCommentButtonHidden=_isCommentButtonHidden;
@property(nonatomic) _Bool enablePrivateComment; // @synthesize enablePrivateComment=_enablePrivateComment;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCBulletinInfo *enterLiveBulletinInfo; // @synthesize enterLiveBulletinInfo=_enterLiveBulletinInfo;
@property(retain, nonatomic) WCBulletinInfo *lastBulletinInfo; // @synthesize lastBulletinInfo=_lastBulletinInfo;
@property(nonatomic) int eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(nonatomic) _Bool sendingLocation; // @synthesize sendingLocation=_sendingLocation;
@property(retain, nonatomic) WCLocationInfo *cacheLocationInfo; // @synthesize cacheLocationInfo=_cacheLocationInfo;
@property(retain, nonatomic) WCLocationInfo *currentLocationInfo; // @synthesize currentLocationInfo=_currentLocationInfo;
@property(retain, nonatomic) NSString *quickReplyStr; // @synthesize quickReplyStr=_quickReplyStr;
@property(nonatomic) double sendLocationTime; // @synthesize sendLocationTime=_sendLocationTime;
@property(nonatomic) unsigned long long geoTag; // @synthesize geoTag=_geoTag;
@property(nonatomic) _Bool hasSelectPOI; // @synthesize hasSelectPOI=_hasSelectPOI;
@property(nonatomic) _Bool hasFetchedLBS; // @synthesize hasFetchedLBS=_hasFetchedLBS;
@property(retain, nonatomic) NSMutableDictionary *locationSendRecordInfo; // @synthesize locationSendRecordInfo=_locationSendRecordInfo;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(retain, nonatomic) PickLocationManager *pickLocationManager; // @synthesize pickLocationManager=_pickLocationManager;
@property(retain, nonatomic) WCUIAlertView *currAlertView; // @synthesize currAlertView=_currAlertView;
@property(copy, nonatomic) CDUnknownBlockType sendedAction; // @synthesize sendedAction=_sendedAction;
@property(retain, nonatomic) NSArray *selfNickNameArrStyles; // @synthesize selfNickNameArrStyles=_selfNickNameArrStyles;
@property(nonatomic) double currentMaxNickNameWidth; // @synthesize currentMaxNickNameWidth=_currentMaxNickNameWidth;
@property(retain, nonatomic) NSString *currentAccountNickName; // @synthesize currentAccountNickName=_currentAccountNickName;
@property(retain, nonatomic) RichTextView *selfNickNameView; // @synthesize selfNickNameView=_selfNickNameView;
@property(nonatomic) double enterLiveTime; // @synthesize enterLiveTime=_enterLiveTime;
@property(nonatomic) _Bool needHandleRestoreAfterEnterForeground; // @synthesize needHandleRestoreAfterEnterForeground=_needHandleRestoreAfterEnterForeground;
@property(nonatomic) _Bool needHandleRestoreAfterMinimize; // @synthesize needHandleRestoreAfterMinimize=_needHandleRestoreAfterMinimize;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeEnterBackground; // @synthesize needTableViewAutoScrollToRereshBeforeEnterBackground=_needTableViewAutoScrollToRereshBeforeEnterBackground;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeMinimize; // @synthesize needTableViewAutoScrollToRereshBeforeMinimize=_needTableViewAutoScrollToRereshBeforeMinimize;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeRotate; // @synthesize needTableViewAutoScrollToRereshBeforeRotate=_needTableViewAutoScrollToRereshBeforeRotate;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeEnterBackground; // @synthesize visbleCommentItemBeforeEnterBackground=_visbleCommentItemBeforeEnterBackground;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeMinimize; // @synthesize visbleCommentItemBeforeMinimize=_visbleCommentItemBeforeMinimize;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeLayout; // @synthesize visbleCommentItemBeforeLayout=_visbleCommentItemBeforeLayout;
@property(nonatomic) double lastEnableAnchorStatusRequestResultTime; // @synthesize lastEnableAnchorStatusRequestResultTime=_lastEnableAnchorStatusRequestResultTime;
@property(nonatomic) _Bool isEnableAnchorStatusRequesting; // @synthesize isEnableAnchorStatusRequesting=_isEnableAnchorStatusRequesting;
@property(nonatomic) unsigned long long enableAnchorStatusRequestSeq; // @synthesize enableAnchorStatusRequestSeq=_enableAnchorStatusRequestSeq;
@property(retain, nonatomic) NSString *cachedLastTextForRetry; // @synthesize cachedLastTextForRetry=_cachedLastTextForRetry;
@property(retain, nonatomic) MMFinderLiveCommentPostInfo *cachedLastCommentPostInfoForRetry; // @synthesize cachedLastCommentPostInfoForRetry=_cachedLastCommentPostInfoForRetry;
@property(retain, nonatomic) MMFinderLiveTopCommentContentView *topCommentContentView; // @synthesize topCommentContentView=_topCommentContentView;
@property(retain, nonatomic) MMFinderLiveCommentInputEmoticonView *inputEmoticonView; // @synthesize inputEmoticonView=_inputEmoticonView;
@property(retain, nonatomic) MMFinderLiveTopCommentLogic *topCommentNotifyLogic; // @synthesize topCommentNotifyLogic=_topCommentNotifyLogic;
@property(retain, nonatomic) MMFinderLiveCommentContentScrollView *commentContentContainerView; // @synthesize commentContentContainerView=_commentContentContainerView;
@property(retain, nonatomic) MMFinderLiveSFBarrageView *barrageContentView; // @synthesize barrageContentView=_barrageContentView;
@property(retain, nonatomic) MMFinderLiveCommentEntranceTabBar *commentContentEntranceTabBar; // @synthesize commentContentEntranceTabBar=_commentContentEntranceTabBar;
@property(retain, nonatomic) MMFinderGroupLiveChatRoomDataProvider *chatRoomDataProvider; // @synthesize chatRoomDataProvider=_chatRoomDataProvider;
@property(nonatomic) _Bool isInMicTalkingModeSwitchAnimation; // @synthesize isInMicTalkingModeSwitchAnimation=_isInMicTalkingModeSwitchAnimation;
@property(nonatomic) _Bool canShowTalkButton; // @synthesize canShowTalkButton=_canShowTalkButton;
@property(nonatomic) _Bool hideNotifyCommentView; // @synthesize hideNotifyCommentView=_hideNotifyCommentView;
@property(nonatomic) _Bool hideTopCommentContent; // @synthesize hideTopCommentContent=_hideTopCommentContent;
@property(copy, nonatomic) CDUnknownBlockType onCommentContentLayoutChangedCallback; // @synthesize onCommentContentLayoutChangedCallback=_onCommentContentLayoutChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType onCommentContentStateChangeCallback; // @synthesize onCommentContentStateChangeCallback=_onCommentContentStateChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType onCommentContentTransitionChangeCallback; // @synthesize onCommentContentTransitionChangeCallback=_onCommentContentTransitionChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentCellDidMenuSelectBlock; // @synthesize commentCellDidMenuSelectBlock=_commentCellDidMenuSelectBlock;
@property(nonatomic) double commentContentViewTop; // @synthesize commentContentViewTop=_commentContentViewTop;
@property(copy, nonatomic) CDUnknownBlockType commentTalkButtonDidTapBlock; // @synthesize commentTalkButtonDidTapBlock=_commentTalkButtonDidTapBlock;
@property(copy, nonatomic) CDUnknownBlockType invokeShowChatRoomCreateGuideBlock; // @synthesize invokeShowChatRoomCreateGuideBlock=_invokeShowChatRoomCreateGuideBlock;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceDidTapBlock; // @synthesize commentEntranceDidTapBlock=_commentEntranceDidTapBlock;
@property(copy, nonatomic) CDUnknownBlockType commentCellDidLongPressedBlock; // @synthesize commentCellDidLongPressedBlock=_commentCellDidLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType commentContentViewTopDidChangedForContentState; // @synthesize commentContentViewTopDidChangedForContentState=_commentContentViewTopDidChangedForContentState;
@property(copy, nonatomic) CDUnknownBlockType commentContentViewTopDidChanged; // @synthesize commentContentViewTopDidChanged=_commentContentViewTopDidChanged;
@property(copy, nonatomic) CDUnknownBlockType didCommitLocationAction; // @synthesize didCommitLocationAction=_didCommitLocationAction;
@property(copy, nonatomic) CDUnknownBlockType didCommitTextAction; // @synthesize didCommitTextAction=_didCommitTextAction;
- (void)updateInputViewAccessibility:(_Bool)arg1;
- (void)updateCurrentTableView;
- (_Bool)isAlreadyAuthorized;
- (void)getCacheLocationTempInfo;
- (void)cacheLocationTempInfo:(id)arg1;
- (void)updateQuickReplyInfo:(id)arg1;
- (void)refreshWidgetsForFontSizeChange;
- (void)reportOnScrollToTrackingItem;
- (id)finderLiveViewController;
- (void)onFinderLiveSFBarrageInvokeCopy:(id)arg1;
- (unsigned int)getSingleEnableCommentForDataItem:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeJumpPOI:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeKickOut:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeAllow:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseAllow:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseBan:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeBan:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeTop:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeRoleProfile:(id)arg1;
- (void)onFinderLiveSFBarrageFinderRoleExpose:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeUnLike:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeLike:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeExpose:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeReply:(id)arg1;
- (_Bool)getLiveInputForwardFloatBarrageSwitch;
- (void)onLiveTask:(id)arg1 enableFloatBarrageUpdated:(_Bool)arg2;
- (void)onFinderLiveTask:(id)arg1 enablePrivateCommentChange:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 isViewCapturingChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 isPureAudioModeChanged:(_Bool)arg2 showTip:(_Bool)arg3;
- (void)onPrependCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onAppendCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 preAppend:(_Bool)arg4;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 isPublic:(_Bool)arg3;
- (void)menuActionKickOut:(id)arg1;
- (void)menuActionAllowComment:(id)arg1;
- (void)menuActionNoSenceAllowComment:(id)arg1;
- (void)menuActionNonSenceBanComment:(id)arg1;
- (void)menuActionBanComment:(id)arg1;
- (void)menuActionRoleProfile:(id)arg1;
- (void)menuActionReply:(id)arg1;
- (void)menuActionComplain:(id)arg1;
- (void)showCustomToast:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onMenuControllerDidShowFailed:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)appendCommentRemoveAssistantCommentForContact:(id)arg1;
- (void)appendCommentAddAssistantCommentForContact:(id)arg1;
- (void)onSendingGiftBatchFinish:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4 extInfo:(id)arg5;
- (void)restoreCommentDataAfterEnterForeground;
- (void)storeCommentDataBeforeEnterBackground;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeMinimize;
- (void)restoreVisibleCommentAfterLayout;
- (void)limitCommentCntBeforeLayout;
- (void)storeVisibleCommentBeforeLayout;
- (void)adjustCommentTableInsetTop;
- (double)getContentWidgetsTopInPortraitForAudience;
- (double)getContentWidgetsTopInPortrait;
- (double)getCommentAreaTop:(double)arg1;
- (double)getCommentContentViewTopForCommentContentState:(long long)arg1;
- (double)fixedCommentNotifyContentTop;
- (void)updateComponentHiddenForCommentEnableChanged;
- (void)updateNotifyContentViewHidden;
- (double)getAudiencePortraitDefaultCommentTableHeightScale;
- (double)getStandardTableHeightPortrait:(long long)arg1;
- (double)getMaxTableHeightPortrait:(long long)arg1;
- (double)getCommentTableHeightPortrait:(long long)arg1;
- (double)getCommentTableHeightLandscape:(long long)arg1;
- (double)getCommentTableHeightInStyle:(long long)arg1;
- (double)commentTableHeight;
- (double)commentTableWidth;
- (void)onInputViewShowChange:(_Bool)arg1;
- (void)updateTableBackViewHidden;
- (void)notifySelfGoToShopBusinessPage:(unsigned long long)arg1;
- (void)onPostFailError:(id)arg1 localSeq:(long long)arg2 taskId:(id)arg3 extraInfo:(id)arg4;
- (void)onPostSuccessWithLocalSeq:(long long)arg1 taskId:(id)arg2 extraInfo:(id)arg3;
- (void)adjustCommentTableViewHeight;
- (void)retryPostLiveCommentAfterSuccessVerified;
- (void)setCommentState:(unsigned long long)arg1;
- (void)reportForCommentStateUpdated;
- (void)displayBanCommentPubbleView:(id)arg1;
- (void)handleDisableCommentState:(id)arg1;
- (void)handleEnableCommentState:(id)arg1;
- (void)updateAntiSpamCommentStateWithBanNotify:(_Bool)arg1;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)arg1;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)handleLiveIsEnableCommentForAudience:(_Bool)arg1;
- (void)handleLiveIsEnableCommentFromServerForAnchorMainScene:(_Bool)arg1;
- (void)handleLiveIsEnableCommentForAnchor:(_Bool)arg1;
- (_Bool)checkSelfTickleOverFrequency:(id)arg1;
- (void)commentLikeClick:(id)arg1 like:(_Bool)arg2;
- (void)commentGoToProfile:(id)arg1;
- (_Bool)checkCommentAbilityForAudienceInChatRoom;
- (_Bool)checkCommentAbilityForAudience;
- (id)createReplyPlaceHoldeprFromCurrentRoleWithSelectedComment:(id)arg1;
- (id)createPlaceHolderFromCurrentRole;
- (void)showInputViewWithSelectedComment:(id)arg1;
- (void)showInputViewWithText:(id)arg1 sendedAction:(CDUnknownBlockType)arg2;
- (void)showInputViewWithText:(id)arg1;
- (void)showInputViewWithTextInPublic:(id)arg1;
- (void)onCommentTalkButtonClick;
- (void)onCommentButtonClick;
- (void)handleCommentTableViewPanGesture:(id)arg1;
- (void)handleCommentTableBackViewPanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onFinderLiveAnchorStatusUpdated:(id)arg1;
- (void)onFinderLiveUpdateCommentSingleEnable;
- (void)onFinderLiveUpdateCommentEnable;
@property(readonly, nonatomic) MMFinderLiveNotifyCommentLogic *notifyCommentLogic;
- (_Bool)hasAtAll:(id)arg1;
- (id)getActualAtFriendContacts:(id)arg1;
- (_Bool)didCommitText:(id)arg1;
- (_Bool)inputViewShouldDismisAfterCommit:(id)arg1;
- (void)updateCommentButtonAlpha;
- (void)updateCommentViewIfAnchorBanComment;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(_Bool)arg1;
- (void)scrollToCommentTableBottom:(id)arg1;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (id)createUnReadCountLabel;
- (void)updateCommentStateForSingle:(unsigned long long)arg1;
- (id)getCompleteBoxIdObj;
@property(readonly, nonatomic) MMLiveCommentTableViewModel *publicCommentTableViewModel;
@property(readonly, nonatomic) MMLiveCommentTableViewModel *privateCommentTableViewModel;
- (id)commentTableViewModel;
@property(readonly, nonatomic) MMTableView *publicCommentTableView;
@property(readonly, nonatomic) MMTableView *privateCommentTableView;
- (id)commentDataMgr;
@property(readonly, nonatomic) MMFinderLivePrivateCommentContentView *privateCommentContentView;
@property(readonly, nonatomic) MMFinderLivePublicCommentContentView *publicCommentContentView;
- (double)commentTableRight;
- (void)handleOnNotifyLiveIsSingleEnableComment:(_Bool)arg1;
- (_Bool)isEnableCommentForSingle;
- (_Bool)isEnableCommentForAll;
- (id)liveCommentInputViewPlaceholder;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) MMFinderLiveCommentTableViewModel *finderLiveCommentTableViewModel;
- (void)complainWithCommentItem:(id)arg1;
- (void)showToastForBanOrAllowComment:(_Bool)arg1 success:(_Bool)arg2;
- (id)registerCellClasses;
- (Class)commentTableCellClass;
- (void)preAppendComments;
- (void)onExitLive;
- (void)onEnterLive;
- (void)onEnterLiveWithError:(id)arg1;
- (double)commentButtonLeft;
- (double)commentContentAreaBottomInset;
- (double)initialCommentTableBackViewBottom;
- (double)commentContentAreaBottom;
- (double)commentTableBackViewBottom;
- (id)commentFetchEngine;
- (id)commentPostEngine;
- (void)applyUpdateLiveCommentFail:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)applyUpdateLiveCommentEnabled:(_Bool)arg1 taskId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)banOrOpenComment:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)updatePrivateCommentEnable;
- (void)updateBarrageContentEnableDisplay:(_Bool)arg1;
- (void)updateCommentTableBottom;
- (void)checkAndSwitchToCurrentSourceBoxId;
- (void)updateCommentButtonForMicTalkingSwitchAnimation:(unsigned long long)arg1;
- (void)updateCommentButtonHidden:(_Bool)arg1 shouldLayout:(_Bool)arg2;
- (id)currChatRoomBoxId;
- (void)switchToBoxId:(id)arg1;
- (void)resetChatRoomBoxId:(id)arg1 autoSwitch:(_Bool)arg2;
- (void)resetChatRoomBoxId:(id)arg1;
- (long long)getSingleDisAbleCommentForComment:(id)arg1;
- (void)realTopCommentWithDataItem:(id)arg1;
- (id)createCommentTableViewModelForCommentContentView:(id)arg1 boxId:(id)arg2;
- (void)showContent;
- (void)hideContent;
- (void)updateCommentButtonTitleForPublicCommentContentState;
- (void)updateCommentButtonTitleForPrivateCommentContentState;
- (void)updateCommentButtonTitleForCurrentState;
- (double)getCommentButtonMaxWidth;
- (void)createCommentButton;
- (void)layoutCommentButton;
- (void)sendNetLocationMsg:(id)arg1 liveBoxId:(id)arg2 inputCommitAction:(id)arg3;
- (void)sendNewNetLocationMsg:(id)arg1 liveBoxId:(id)arg2 inputCommitAction:(id)arg3;
- (void)handleFetchLocation:(id)arg1 error:(id)arg2;
- (void)fetchNewLocationWithExtraInfo:(id)arg1;
- (void)handleCacheLocationWithLocatingCoordinateItem:(id)arg1;
- (void)cacheLocation;
- (void)sendLiveDescription:(id)arg1;
- (id)inSertLocalLocationMsg;
- (void)onCancelSelectLocation;
- (void)goToSettingLocationAuthorization;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)showAlertForLocationAuthorization;
- (double)getUserStaySecond;
- (_Bool)isOverSendLocationFrequency;
- (_Bool)didSendLocation:(id)arg1;
- (_Bool)reuseFeedStreamCommentToLiveRoomIfNeeded;
- (void)handleLayoutOrientationChangedAfterLayout;
- (id)genCommentTableView;
- (void)layoutCommentTableTapView;
- (void)layoutEmoticonBoardView;
- (void)layoutInputView;
- (void)configLiveInputView;
- (id)emoticonBoardView;
- (id)liveInputView;
- (struct CGSize)getCommentTableBackBottomAreaSize;
- (id)getCommentContentButton;
- (_Bool)isInTransition;
- (double)getCurrentCommentContentTransitionPercent;
- (long long)getCurrentCommentContentState;
- (long long)getCurrentCommentContentTransitionState;
- (void)reportCommentContainerStyleChange:(long long)arg1;
- (void)layoutContentBackView;
- (void)adjustCommentContentAreaHeightForInputShowChange:(_Bool)arg1;
- (double)getCommentContentAreaHeightForInputShow:(_Bool)arg1;
- (double)getCommentContentAreaHeightInStyle:(long long)arg1;
- (double)getDefaultCommentContentAreaHeight;
- (double)getCommentContentAreaHeight;
- (id)getPublicCommentContentView;
- (id)getPrivateCommentContentViewWithBoxId:(id)arg1;
- (void)resetChatRoomCommentContentView:(id)arg1 autoSwitch:(_Bool)arg2;
- (void)addChatRoomCommentContentViews:(id)arg1;
- (void)updateCommentContentContainerOrigin;
- (void)layoutCommentContentContainerView;
- (double)getConcertCommentTopMargin;
- (_Bool)isCommentContentEntranceEnableDisplay;
- (void)updateCommentContentEntranceBarHidden;
- (void)updateCommentContentEntranceBarOrigin;
- (void)layoutCommentContentEntranceTabBar;
@property(readonly, nonatomic) _Bool showingInputView;
- (struct CGRect)commentContentViewRect;
- (id)commentTableView;
- (void)updateBarrageContentViewAlpha;
- (void)updateBarrageContentViewHidden;
- (void)layoutBarrageContentView;
- (void)layoutTopCommentContentView;
- (void)layoutUI;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2 delegate:(id)arg3 inputEmoticonView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

