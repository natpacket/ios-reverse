//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveConnectMicOperationViewDelegate-Protocol.h"
#import "MMFinderLiveConnectMicUnoccupiedSeatViewDelegate-Protocol.h"
#import "TXPIPManagerExt-Protocol.h"

@class CAGradientLayer, MMFinderLiveConnectMicUsersInfo, MMFinderLiveTaskId, MMUIActivityIndicatorView, NSMutableArray, NSMutableDictionary, NSString, PAGView, UIButton, UIImageView, UILabel, WCFinderHeadImageView;
@protocol MMFinderLiveConnectMicAllUserInfoViewDelegate, MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate, MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate, MMFinderLiveConnectMicAllUserInfoViewLotteryPacketDelegate, MMFinderLiveConnectMicOperationViewBase;

@interface MMFinderLiveConnectMicAllUserInfoView : UIView <MMFinderLiveConnectMicOperationViewDelegate, TXPIPManagerExt, MMFinderLiveConnectMicUnoccupiedSeatViewDelegate>
{
    _Bool _needHidden;
    _Bool _otherConnectMicAnchorIsAudioMode;
    _Bool _isInTopPkTipViewAnimation;
    _Bool _leftInvitePkViewIsInAnimation;
    _Bool _rightAcceptPkViewIsInAnimation;
    _Bool _isInVictoryAnimation;
    _Bool _isInDrawAnimation;
    _Bool _isInWinningStreakAnimation;
    _Bool _isInStartPkAnimation;
    unsigned int _lastDisplayedTime;
    id <MMFinderLiveConnectMicAllUserInfoViewDelegate> _actionDelegate;
    id <MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate> _giftNotificationDelegate;
    id <MMFinderLiveConnectMicAllUserInfoViewLotteryPacketDelegate> _lotteryPacketDelegate;
    id <MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate> _layoutInfoDelegate;
    MMFinderLiveTaskId *_finderLiveTaskId;
    UIView<MMFinderLiveConnectMicOperationViewBase> *_currentAnchorInfoView;
    double _operationViewAlpha;
    unsigned long long _anchorPkState;
    unsigned long long _lastAnchorPkState;
    UIImageView *_topPkTipView;
    UILabel *_topPkTimeLabel;
    UIImageView *_topPkIcon;
    MMUIActivityIndicatorView *_topPkTipLoadingView;
    UILabel *_topPkCalcTipLabel;
    UIView *_topPkProgressView;
    UIView *_topPkLeftProgressBar;
    CAGradientLayer *_topPkLeftProgressGradientLayer;
    UIView *_topPkRightProgressBar;
    CAGradientLayer *_topPkRightProgressGradientLayer;
    PAGView *_topPkProgressIndicator;
    UIImageView *_topPkLeftRewardIcon;
    UIImageView *_topPkRightRewardIcon;
    UILabel *_topPkLeftRewardLabel;
    UILabel *_topPkRightRewardLabel;
    UIView *_leftInvitePkView;
    CAGradientLayer *_leftInvitePkGradientLayer;
    double _leftInvitePkGradientLayerTransparentLocation;
    UILabel *_leftInvitePkLabel;
    UIView *_rightAcceptPkView;
    CAGradientLayer *_rightAcceptPkGradientLayer;
    double _rightAcceptPkGradientLayerTransparentLocation;
    UILabel *_rightAcceptPkLabel;
    UIButton *_rightAcceptPkButton;
    MMUIActivityIndicatorView *_rightAcceptPkLoadingView;
    PAGView *_victoryAnimationView;
    PAGView *_drawAnimationView;
    UIView *_winningStreakContainerView;
    PAGView *_winningStreakAnimationView;
    UILabel *_winningStreakCountLabel;
    PAGView *_startPkPAGAnimationView;
    UIView *_startPkAnimationLeftContainerView;
    UILabel *_startPkAnimationLeftLabel;
    WCFinderHeadImageView *_startPkAnimationLeftAvatar;
    UIView *_startPkAnimationRightContainerView;
    UILabel *_startPkAnimationRightLabel;
    WCFinderHeadImageView *_startPkAnimationRightAvatar;
    double _victoryViewExtraTopMargin;
    NSMutableArray *_unoccupiedSeatViewList;
    NSMutableArray *_cachedUnoccupiedSeatViewList;
    NSMutableDictionary *_userViewWrapDic;
    MMFinderLiveConnectMicUsersInfo *_allMicUsersInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo; // @synthesize allMicUsersInfo=_allMicUsersInfo;
@property(retain, nonatomic) NSMutableDictionary *userViewWrapDic; // @synthesize userViewWrapDic=_userViewWrapDic;
@property(retain, nonatomic) NSMutableArray *cachedUnoccupiedSeatViewList; // @synthesize cachedUnoccupiedSeatViewList=_cachedUnoccupiedSeatViewList;
@property(retain, nonatomic) NSMutableArray *unoccupiedSeatViewList; // @synthesize unoccupiedSeatViewList=_unoccupiedSeatViewList;
@property(nonatomic) double victoryViewExtraTopMargin; // @synthesize victoryViewExtraTopMargin=_victoryViewExtraTopMargin;
@property(nonatomic) _Bool isInStartPkAnimation; // @synthesize isInStartPkAnimation=_isInStartPkAnimation;
@property(retain, nonatomic) WCFinderHeadImageView *startPkAnimationRightAvatar; // @synthesize startPkAnimationRightAvatar=_startPkAnimationRightAvatar;
@property(retain, nonatomic) UILabel *startPkAnimationRightLabel; // @synthesize startPkAnimationRightLabel=_startPkAnimationRightLabel;
@property(retain, nonatomic) UIView *startPkAnimationRightContainerView; // @synthesize startPkAnimationRightContainerView=_startPkAnimationRightContainerView;
@property(retain, nonatomic) WCFinderHeadImageView *startPkAnimationLeftAvatar; // @synthesize startPkAnimationLeftAvatar=_startPkAnimationLeftAvatar;
@property(retain, nonatomic) UILabel *startPkAnimationLeftLabel; // @synthesize startPkAnimationLeftLabel=_startPkAnimationLeftLabel;
@property(retain, nonatomic) UIView *startPkAnimationLeftContainerView; // @synthesize startPkAnimationLeftContainerView=_startPkAnimationLeftContainerView;
@property(retain, nonatomic) PAGView *startPkPAGAnimationView; // @synthesize startPkPAGAnimationView=_startPkPAGAnimationView;
@property(nonatomic) _Bool isInWinningStreakAnimation; // @synthesize isInWinningStreakAnimation=_isInWinningStreakAnimation;
@property(nonatomic) _Bool isInDrawAnimation; // @synthesize isInDrawAnimation=_isInDrawAnimation;
@property(nonatomic) _Bool isInVictoryAnimation; // @synthesize isInVictoryAnimation=_isInVictoryAnimation;
@property(retain, nonatomic) UILabel *winningStreakCountLabel; // @synthesize winningStreakCountLabel=_winningStreakCountLabel;
@property(retain, nonatomic) PAGView *winningStreakAnimationView; // @synthesize winningStreakAnimationView=_winningStreakAnimationView;
@property(retain, nonatomic) UIView *winningStreakContainerView; // @synthesize winningStreakContainerView=_winningStreakContainerView;
@property(retain, nonatomic) PAGView *drawAnimationView; // @synthesize drawAnimationView=_drawAnimationView;
@property(retain, nonatomic) PAGView *victoryAnimationView; // @synthesize victoryAnimationView=_victoryAnimationView;
@property(nonatomic) _Bool rightAcceptPkViewIsInAnimation; // @synthesize rightAcceptPkViewIsInAnimation=_rightAcceptPkViewIsInAnimation;
@property(retain, nonatomic) MMUIActivityIndicatorView *rightAcceptPkLoadingView; // @synthesize rightAcceptPkLoadingView=_rightAcceptPkLoadingView;
@property(retain, nonatomic) UIButton *rightAcceptPkButton; // @synthesize rightAcceptPkButton=_rightAcceptPkButton;
@property(retain, nonatomic) UILabel *rightAcceptPkLabel; // @synthesize rightAcceptPkLabel=_rightAcceptPkLabel;
@property(nonatomic) double rightAcceptPkGradientLayerTransparentLocation; // @synthesize rightAcceptPkGradientLayerTransparentLocation=_rightAcceptPkGradientLayerTransparentLocation;
@property(retain, nonatomic) CAGradientLayer *rightAcceptPkGradientLayer; // @synthesize rightAcceptPkGradientLayer=_rightAcceptPkGradientLayer;
@property(retain, nonatomic) UIView *rightAcceptPkView; // @synthesize rightAcceptPkView=_rightAcceptPkView;
@property(nonatomic) _Bool leftInvitePkViewIsInAnimation; // @synthesize leftInvitePkViewIsInAnimation=_leftInvitePkViewIsInAnimation;
@property(retain, nonatomic) UILabel *leftInvitePkLabel; // @synthesize leftInvitePkLabel=_leftInvitePkLabel;
@property(nonatomic) double leftInvitePkGradientLayerTransparentLocation; // @synthesize leftInvitePkGradientLayerTransparentLocation=_leftInvitePkGradientLayerTransparentLocation;
@property(retain, nonatomic) CAGradientLayer *leftInvitePkGradientLayer; // @synthesize leftInvitePkGradientLayer=_leftInvitePkGradientLayer;
@property(retain, nonatomic) UIView *leftInvitePkView; // @synthesize leftInvitePkView=_leftInvitePkView;
@property(retain, nonatomic) UILabel *topPkRightRewardLabel; // @synthesize topPkRightRewardLabel=_topPkRightRewardLabel;
@property(retain, nonatomic) UILabel *topPkLeftRewardLabel; // @synthesize topPkLeftRewardLabel=_topPkLeftRewardLabel;
@property(retain, nonatomic) UIImageView *topPkRightRewardIcon; // @synthesize topPkRightRewardIcon=_topPkRightRewardIcon;
@property(retain, nonatomic) UIImageView *topPkLeftRewardIcon; // @synthesize topPkLeftRewardIcon=_topPkLeftRewardIcon;
@property(retain, nonatomic) PAGView *topPkProgressIndicator; // @synthesize topPkProgressIndicator=_topPkProgressIndicator;
@property(retain, nonatomic) CAGradientLayer *topPkRightProgressGradientLayer; // @synthesize topPkRightProgressGradientLayer=_topPkRightProgressGradientLayer;
@property(retain, nonatomic) UIView *topPkRightProgressBar; // @synthesize topPkRightProgressBar=_topPkRightProgressBar;
@property(retain, nonatomic) CAGradientLayer *topPkLeftProgressGradientLayer; // @synthesize topPkLeftProgressGradientLayer=_topPkLeftProgressGradientLayer;
@property(retain, nonatomic) UIView *topPkLeftProgressBar; // @synthesize topPkLeftProgressBar=_topPkLeftProgressBar;
@property(retain, nonatomic) UIView *topPkProgressView; // @synthesize topPkProgressView=_topPkProgressView;
@property(nonatomic) _Bool isInTopPkTipViewAnimation; // @synthesize isInTopPkTipViewAnimation=_isInTopPkTipViewAnimation;
@property(retain, nonatomic) UILabel *topPkCalcTipLabel; // @synthesize topPkCalcTipLabel=_topPkCalcTipLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *topPkTipLoadingView; // @synthesize topPkTipLoadingView=_topPkTipLoadingView;
@property(retain, nonatomic) UIImageView *topPkIcon; // @synthesize topPkIcon=_topPkIcon;
@property(retain, nonatomic) UILabel *topPkTimeLabel; // @synthesize topPkTimeLabel=_topPkTimeLabel;
@property(retain, nonatomic) UIImageView *topPkTipView; // @synthesize topPkTipView=_topPkTipView;
@property(nonatomic) unsigned int lastDisplayedTime; // @synthesize lastDisplayedTime=_lastDisplayedTime;
@property(nonatomic) _Bool otherConnectMicAnchorIsAudioMode; // @synthesize otherConnectMicAnchorIsAudioMode=_otherConnectMicAnchorIsAudioMode;
@property(nonatomic) unsigned long long lastAnchorPkState; // @synthesize lastAnchorPkState=_lastAnchorPkState;
@property(nonatomic) unsigned long long anchorPkState; // @synthesize anchorPkState=_anchorPkState;
@property(nonatomic) double operationViewAlpha; // @synthesize operationViewAlpha=_operationViewAlpha;
@property(retain, nonatomic) UIView<MMFinderLiveConnectMicOperationViewBase> *currentAnchorInfoView; // @synthesize currentAnchorInfoView=_currentAnchorInfoView;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) _Bool needHidden; // @synthesize needHidden=_needHidden;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate> layoutInfoDelegate; // @synthesize layoutInfoDelegate=_layoutInfoDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAllUserInfoViewLotteryPacketDelegate> lotteryPacketDelegate; // @synthesize lotteryPacketDelegate=_lotteryPacketDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate> giftNotificationDelegate; // @synthesize giftNotificationDelegate=_giftNotificationDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAllUserInfoViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMMFinderLiveConnectMicUnoccupiedSeatViewTappedWithMicIndex:(unsigned long long)arg1;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)onNotifyGlobalLevelUpdated:(unsigned int)arg1 forContact:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewTapVote;
- (void)onMMFinderLiveConnectMicOperationViewTapBackgroundWithUserInfo:(id)arg1 targetMicOperationView:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewTapSendRedPacketWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapAvatarWithUserInfo:(id)arg1 targetMicOperationView:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewSetMicMuted:(_Bool)arg1 withUserInfo:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewSwitchCameraWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapHangupWithUserInfo:(id)arg1;
- (struct CGRect)onMMFinderLiveConnectMicOperationViewNormalizedFrameAspectRatioConversionRequested:(struct CGRect)arg1;
- (void)updateLiveHeatValueForUsername:(id)arg1;
- (struct CGRect)anchorRectInGrid16;
- (double)redPacketSideLengthIfIsInGrid16;
- (double)redPacketSideLengthIfIsInGrid9;
- (void)onClickAcceptPk;
- (void)layoutStartPkAnimationContainerView;
- (void)layoutStartPkPAGAnimationView;
- (void)layoutVictoryDrawAnimationView;
- (void)layoutTopPkProgressView;
- (void)layoutPkViews;
- (void)updateTopPkProgressView;
- (void)updateTopPkTimeLabel;
- (void)updateUserPkViews;
- (void)clearStartPkAnimation;
- (void)updatePkDetailViewsWhenStartAnimationEnd;
- (void)doStartPkAnimationSecondPhase;
- (void)doStartPkAnimationFirstPhase;
- (void)configStartPkAnimationView;
- (void)configVictoryAndDrawAnimationView;
- (void)configTopPkProgressView;
- (void)configInviteAcceptPkView;
- (void)configTopPkTipView;
- (void)clearAllPkViewsAnimation;
- (void)imageWithEssentialInfoViewsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tapMicUserOperationView:(id)arg1;
- (id)micUserOperationViewUnderPoint:(struct CGPoint)arg1;
- (id)getAudienceAudioMicUserOperationViewList;
- (double)getLeftVictoryViewBottom;
- (double)getTopProgressViewAndPKAnimationMaxHeight;
- (double)getTopProgressViewHeight;
- (void)updateVictoryViewExtraTopMargin:(double)arg1;
- (void)updateUserPkState;
- (void)updateUserViewExtraTopInset;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (_Bool)disableStartPkAnimWhenFeedStreamHasPlayed:(id)arg1;
- (_Bool)disableStartPkAnimation;
- (_Bool)isFeedStreamTask;
- (id)liveTask;
- (double)getHeightByWidth:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)layoutUI;
- (void)configCurrentAnchorInfoViewWithUsersInfo:(id)arg1;
- (id)generateGiftNotificationContainerViewsDic;
@property(readonly, nonatomic) _Bool configureDirtyHandleForUserViews;
- (void)clearCurrentUnoccupiedSeatViewList;
- (void)updateUnoccupiedSeatViews;
- (void)updateConnectMicUserViewsWithMicUsersInfo:(id)arg1;
- (void)clearOtherConnectMicAnchorUserInfo;
- (void)clearConnectMicUserViewWithViewWrap:(id)arg1;
- (void)clearUserViewWrapDicAndConnectMicUserViews;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

