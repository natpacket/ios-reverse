//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RichTextLayoutDelegate-Protocol.h"
#import "VideRingModifyExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderFeedContentTextClickActionDelegate-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFriendLikeToolbarViewDelegate-Protocol.h"
#import "WCFinderFullToolbarViewDelegate-Protocol.h"
#import "WCFinderHeadInfoViewDelegate-Protocol.h"
#import "WCFinderImageTextContainerViewDelegate-Protocol.h"
#import "WCFinderInteractionExt-Protocol.h"
#import "WCFinderJumpInfoPanelViewDelegate-Protocol.h"
#import "WCFinderPanelHotCommentViewDelegate-Protocol.h"
#import "WCFinderPanelRingToneGuideViewDelegate-Protocol.h"
#import "WCFinderPanelRingtoneBubbleViewDelegate-Protocol.h"

@class InteractionLabel, MMFinderLiveBuyTicketHandle, MMTimer, MMUIButton, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, RichTextView, UIImageView, UILabel, WCFinderFeedBubbleView, WCFinderFriendLikeToolbarView, WCFinderFullScrollTextView, WCFinderFullToolbarView, WCFinderHeadInfoView, WCFinderImageTextContainerView, WCFinderInteractivePanelConfigParamsModel, WCFinderLiveAudienceNoticeReporter, WCFinderPanelHotCommentView, WCFinderPanelRingToneGuideView, WCFinderPanelThumbEnhanceBubbleView, WCFinderShadowBubbleView, WCFinderShadowTipsView;
@protocol WCFinderFullInteractivePanelViewDelegate;

@interface WCFinderFullInteractivePanelView : UIView <WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderJumpInfoPanelViewDelegate, WCFinderImageTextContainerViewDelegate, WCFinderPanelRingToneGuideViewDelegate, WCFinderPanelHotCommentViewDelegate, WCFinderPanelRingtoneBubbleViewDelegate, RichTextLayoutDelegate, WCFinderFeedContentVMExt, VideRingModifyExt, WCActionSheetDelegate, WCFinderInteractionExt>
{
    _Bool _hasAdGuideFollowBtnAppear;
    _Bool _isJumpInfoAnimating;
    _Bool _carouselAnimating;
    _Bool _needGlobalUpdate;
    _Bool _shootingAnimating;
    id <WCFinderFullInteractivePanelViewDelegate> _delegate;
    WCFinderFullScrollTextView *_textView;
    WCFinderHeadInfoView *_headerView;
    WCFinderFullToolbarView *_toolBarView;
    UIView *_hardAdCornerView;
    UILabel *_createTimeLabel;
    WCFinderFriendLikeToolbarView *_friendLikeToolbarView;
    RichTextView *_innerRecommendReasonTextView;
    UILabel *_topicLabel;
    UIImageView *_eventIconView;
    InteractionLabel *_eventTitleLabel;
    InteractionLabel *_eventCountLabel;
    UIView *_warningView;
    UILabel *_warningLabel;
    UIImageView *_redPacketLinkIconView;
    UILabel *_redPacketLinkLabel;
    WCFinderImageTextContainerView *_poiView;
    MMUIButton *_moreActionButton;
    WCFinderShadowBubbleView *_eduShadowBubbleView;
    WCFinderPanelThumbEnhanceBubbleView *_thumbEnhanceBubbleView;
    WCFinderLiveAudienceNoticeReporter *_liveNoticeReporter;
    NSMutableDictionary *_jumpInfoPanelDict;
    NSMutableSet *_tempHiddenViewSet;
    UIView *_cnyAdCornerView;
    WCFinderFeedBubbleView *_ringtoneBubbleView;
    double _startCarouselInterval;
    WCFinderPanelRingToneGuideView *_ringToneGuideView;
    WCFinderPanelHotCommentView *_hotCommentView;
    WCFinderInteractivePanelConfigParamsModel *_paramsModel;
    UIView *_shootingAvatarView;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    double _shootingAniamtionBeginTime;
    CDUnknownBlockType _shootingAnimationCompletion;
    UIView *_commonBottomSuspendView;
    MMTimer *_carouselTimer;
    NSHashTable *_carouselViewSet;
    WCFinderShadowTipsView *_feedSourceTipsView;
}

+ (id)dateFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShadowTipsView *feedSourceTipsView; // @synthesize feedSourceTipsView=_feedSourceTipsView;
@property(retain, nonatomic) NSHashTable *carouselViewSet; // @synthesize carouselViewSet=_carouselViewSet;
@property(retain, nonatomic) MMTimer *carouselTimer; // @synthesize carouselTimer=_carouselTimer;
@property(retain, nonatomic) UIView *commonBottomSuspendView; // @synthesize commonBottomSuspendView=_commonBottomSuspendView;
@property(copy, nonatomic) CDUnknownBlockType shootingAnimationCompletion; // @synthesize shootingAnimationCompletion=_shootingAnimationCompletion;
@property(nonatomic) _Bool shootingAnimating; // @synthesize shootingAnimating=_shootingAnimating;
@property(nonatomic) double shootingAniamtionBeginTime; // @synthesize shootingAniamtionBeginTime=_shootingAniamtionBeginTime;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) UIView *shootingAvatarView; // @synthesize shootingAvatarView=_shootingAvatarView;
@property(nonatomic) __weak WCFinderInteractivePanelConfigParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(nonatomic) _Bool needGlobalUpdate; // @synthesize needGlobalUpdate=_needGlobalUpdate;
@property(nonatomic) _Bool carouselAnimating; // @synthesize carouselAnimating=_carouselAnimating;
@property(nonatomic) _Bool isJumpInfoAnimating; // @synthesize isJumpInfoAnimating=_isJumpInfoAnimating;
@property(retain, nonatomic) WCFinderPanelHotCommentView *hotCommentView; // @synthesize hotCommentView=_hotCommentView;
@property(retain, nonatomic) WCFinderPanelRingToneGuideView *ringToneGuideView; // @synthesize ringToneGuideView=_ringToneGuideView;
@property(nonatomic) double startCarouselInterval; // @synthesize startCarouselInterval=_startCarouselInterval;
@property(retain, nonatomic) WCFinderFeedBubbleView *ringtoneBubbleView; // @synthesize ringtoneBubbleView=_ringtoneBubbleView;
@property(retain, nonatomic) UIView *cnyAdCornerView; // @synthesize cnyAdCornerView=_cnyAdCornerView;
@property(retain, nonatomic) NSMutableSet *tempHiddenViewSet; // @synthesize tempHiddenViewSet=_tempHiddenViewSet;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoPanelDict; // @synthesize jumpInfoPanelDict=_jumpInfoPanelDict;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveNoticeReporter; // @synthesize liveNoticeReporter=_liveNoticeReporter;
@property(retain, nonatomic) WCFinderPanelThumbEnhanceBubbleView *thumbEnhanceBubbleView; // @synthesize thumbEnhanceBubbleView=_thumbEnhanceBubbleView;
@property(retain, nonatomic) WCFinderShadowBubbleView *eduShadowBubbleView; // @synthesize eduShadowBubbleView=_eduShadowBubbleView;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) WCFinderImageTextContainerView *poiView; // @synthesize poiView=_poiView;
@property(retain, nonatomic) UILabel *redPacketLinkLabel; // @synthesize redPacketLinkLabel=_redPacketLinkLabel;
@property(retain, nonatomic) UIImageView *redPacketLinkIconView; // @synthesize redPacketLinkIconView=_redPacketLinkIconView;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) InteractionLabel *eventCountLabel; // @synthesize eventCountLabel=_eventCountLabel;
@property(retain, nonatomic) InteractionLabel *eventTitleLabel; // @synthesize eventTitleLabel=_eventTitleLabel;
@property(retain, nonatomic) UIImageView *eventIconView; // @synthesize eventIconView=_eventIconView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) RichTextView *innerRecommendReasonTextView; // @synthesize innerRecommendReasonTextView=_innerRecommendReasonTextView;
@property(retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeToolbarView; // @synthesize friendLikeToolbarView=_friendLikeToolbarView;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UIView *hardAdCornerView; // @synthesize hardAdCornerView=_hardAdCornerView;
@property(retain, nonatomic) WCFinderFullToolbarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) WCFinderHeadInfoView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool hasAdGuideFollowBtnAppear; // @synthesize hasAdGuideFollowBtnAppear=_hasAdGuideFollowBtnAppear;
@property(retain, nonatomic) WCFinderFullScrollTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderFullInteractivePanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderFeedInteractionResponse:(id)arg1;
- (id)dynamicFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)forbidClickColor;
- (id)enableClickColor;
- (id)normalWhiteColor;
- (struct CGPoint)getToolbarFavButtonCenter;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)onClickPanelRingtoneBubbleViewSetRingtoneButton;
- (id)showingHotComment;
- (_Bool)isShowingHotComment;
- (void)updateCarouselHotCommentWithContentVM:(id)arg1;
- (void)onClickPanelHotComment:(id)arg1;
- (void)pauseCarouselTimer;
- (void)startCarouselTimer;
- (void)endExposeAction;
- (void)resetBootomSuspendView;
- (void)startExposeAction;
- (id)userAvatarSnapshot;
- (void)onClickSetRingToneButton;
- (void)onClickImageTextView:(long long)arg1;
- (void)onFeedContentShowPromoteTips:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)updateRingtoneBubbleView:(id)arg1;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (void)removeShootingAvatarViewIfNeeded;
- (void)bottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLastestLiveInfoUpdate:(id)arg1;
- (void)onJumpInfoPanelViewClickCollectionBubble:(id)arg1;
- (void)onClickIsTemplateVideoAndEnterEdit;
- (void)onClickIsLIvingAndEnterAction;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 opType:(unsigned long long)arg3 notShowAlertView:(_Bool)arg4 isFromDetailView:(_Bool)arg5;
- (void)onClickNeedPayLiveNotice:(id)arg1 username:(id)arg2 needHalfScreen:(_Bool)arg3 isFromDetailView:(_Bool)arg4;
- (void)onClickFreeLiveNotice:(id)arg1 username:(id)arg2 isFromDetailView:(_Bool)arg3;
- (void)updateNoticeDetailView:(id)arg1;
- (void)onFeedNoticeDetailViewActionClick:(id)arg1 username:(id)arg2;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)liveNoticeUserame:(id)arg1 showLiveNoticeInfo:(id)arg2;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 needHalfScreen:(_Bool)arg3 isFromDetailView:(_Bool)arg4;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2;
- (void)hiddenBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (void)onShowBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToStyle:(unsigned long long)arg3;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToJumpInfoStyleWithIndex:(unsigned long long)arg3;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 changeToShow:(_Bool)arg3;
- (void)onFinderJumpInfoPanelViewHeightChanged:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)interactivePanelConfigParamsModel;
- (void)presentLiveConcertTicketForNoticeInfo:(id)arg1 anchorDisplayName:(id)arg2 reportingScene:(unsigned long long)arg3;
- (void)checkAndPresentLiveConcertTicketWithNoticeInfo:(id)arg1 anchorDisplayName:(id)arg2 reportingScene:(unsigned long long)arg3;
- (void)updateLastestLiveInfoWithContentVM:(id)arg1;
- (_Bool)hideHeaderViewWithToolBarStyle:(unsigned long long)arg1;
- (void)completePlayAction;
- (void)changeJumpInfoViewArrayToShow:(id)arg1 animateDuration:(double)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (_Bool)shouldHiddenHeadInfoViewFollowBtn;
- (_Bool)needHighlightAdGuideButton:(id)arg1;
- (void)updateAdGuideBtnWithParams:(id)arg1;
- (void)liveNoticeViewHiddenWithContentVM:(id)arg1 showPosition:(long long)arg2;
- (void)updateLiveNoticeViewWithParamsModel:(id)arg1 showPosition:(long long)arg2;
- (_Bool)textViewContentLabelEnableResponseReadMoreAction;
- (void)textViewDismissHighLightText;
- (void)updateToolbarContentWithContentVM:(id)arg1 toolbarDisableConfig:(unsigned long long)arg2;
- (void)_updateHeaderViewWithContact:(id)arg1 showLiveState:(_Bool)arg2;
- (void)toolbarClickPrivateLikeAction;
- (void)updateHeaderViewFollowBtnStateWithParams:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)updateFriendLikeToolbarViewWithContentVM:(id)arg1 hideFriendLikeInfo:(_Bool)arg2;
- (void)tryShowFriendLikeViewFollowLikeBtnWithParams:(id)arg1;
- (void)tryShowHeaderViewFollowAuthorBtnWithParams:(id)arg1;
- (_Bool)shouldShowAdEntryViewWithAdItem:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (_Bool)shouldShowNoticeViewWithContentVM:(id)arg1 hiddenLiveNoticeTableView:(_Bool)arg2;
- (_Bool)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (void)updateHeaderViewStateWithHiddenAuthorAppendDescLabelWithParamsModel:(id)arg1;
- (id)_getDisplayContentWithContentVM:(id)arg1;
- (double)_layoutTextAreaFromOffset:(double)arg1;
- (double)_layoutHotTopicLabelFromOffset:(double)arg1;
- (double)_layoutInnerRecommendReasonFromOffset:(double)arg1;
- (double)_layoutCNYAdCornerViewFromOffset:(double)arg1;
- (double)_layoutFriendLikeViewFromOffset:(double)arg1;
- (double)_layoutFeedSourceTipsView:(double)arg1;
- (double)_layoutWarningViewFromOffset:(double)arg1;
- (double)_layoutThumbLikeRecommendBubbleViewFromOffset:(double)arg1;
- (double)_layoutPanelRingtoneBubbleViewFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewAboveDescriptionFromOffset:(double)arg1 showPosition:(long long)arg2;
- (double)_layoutJumpInfoViewInCenterAboveDescriptionFromOffset:(double)arg1;
- (double)_layoutRedPacketViewFromOffset:(double)arg1;
- (double)_layoutHotCommentViewFromOffset:(double)arg1;
- (double)_layoutHeaderViewAndToolbarFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewOnFeedBottomFromOffset:(double)arg1;
- (void)_changeTextViewHiddenStateIfNeeded;
- (void)updateRelatedJumpInfoPanelViewFrame;
- (void)_layoutRelativePosJumpInfoView;
- (void)_layoutJumpInfoViewOnFeedTopLeft;
- (double)_layoutJumpInfoViewBelowDescriptionFromOffset:(double)arg1;
- (double)_layoutRingToneGuideViewFromOffset:(double)arg1;
- (void)tryPlayToCarouselNextView:(id)arg1;
- (void)timerPlayToCarouseAction;
- (void)cancelCarouseTimerPlay;
- (void)startCarouseTimerPlayWithDelay:(double)arg1;
- (void)tryShowCommentGuide;
- (void)setCarouselView:(id)arg1 hidden:(_Bool)arg2;
- (void)showGuideCommentSuspendViewByContent:(id)arg1 scene:(long long)arg2 duration:(double)arg3;
- (_Bool)checkCarouselState;
- (void)reportCarouselExpt;
- (void)setupCarouselAction;
- (_Bool)canShowRingGuideByClientFrequent;
- (_Bool)clientCanShowRingtoneGuide;
- (_Bool)canShowRingToneGuide;
- (_Bool)canShowCarousel;
- (_Bool)canShowCommentGuide;
- (_Bool)clientCanShowHotComment;
- (_Bool)canShowHotComment;
- (void)resetCarouselState;
- (void)pureLayoutSubviews;
- (double)cnyAdCornerViewBottom;
- (double)globalUpdateViewWithModel:(id)arg1;
- (void)updateSubviewsStyle;
- (double)calcuateToolBarViewWidth;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onFeedContent:(id)arg1 commentOpenStateChanged:(_Bool)arg2;
- (void)finderFinderFriendLikeToolbarViewClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(_Bool)arg3;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onLongPressToolbarLikeAction:(id)arg1;
- (_Bool)canShowTriangleShadowViewWithSourceType:(unsigned long long)arg1;
- (void)onClickToolbarFeedAllFavAction:(id)arg1;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)onClickToolbarManageCollectionAction:(id)arg1;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)markHasShownBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (_Bool)checkShouldShowBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (void)reportBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (double)getButtonCenterXWithBubbleType:(unsigned int)arg1;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2 customTitle:(id)arg3;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2;
- (void)displayLinkAction:(id)arg1;
- (void)tryPerformAvatarShootingAnimation;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)updateToolbarContentWithContentVM:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)tryPerformAvatarShootingAnimationAndDelayCarouselWithCompletion:(CDUnknownBlockType)arg1;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)onClickRealNameAction;
- (void)onRefreshToolbarUpdateFavDataFinished:(id)arg1;
- (void)onRefreshFriendLikeUI:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (id)currentContentVM;
- (void)onHeaderFollowClickAction:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)showSpamTipsWithString:(id)arg1;
- (void)clickLiveNowView:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)clickAvatar:(id)arg1;
- (void)onClickRedPacketLinkAction;
- (void)onClickExtLinkAction;
- (void)onClickPOILabelAction;
- (void)onClickEventAction;
- (_Bool)showCollectionContentPrefix;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)cellIconSize;
- (id)jumpInfoPanelViewOnShowPosition:(long long)arg1;
- (id)jumpInfoViewList;
- (id)createTopicLabel;
- (id)cnyAnimationView;
- (id)contentTopView;
- (double)contentTopViewY;
- (double)contentTopInView:(id)arg1;
- (void)resetEduShadowBubbleView;
- (unsigned long long)toolBarStyle;
- (id)contentVM;
- (unsigned long long)carouselIndex;
- (void)resetUIViewState;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

