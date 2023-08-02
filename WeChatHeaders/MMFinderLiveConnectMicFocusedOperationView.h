//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveConnectMicBaseUserInfoViewDelegate-Protocol.h"
#import "MMFinderLiveConnectMicOperationViewBase-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class MMFinderLiveConnectMicFocusedUserInfoView, MMFinderLiveConnectMicUser, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, NSString;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@interface MMFinderLiveConnectMicFocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicOperationViewBase>
{
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate;
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveConnectMicFocusedUserInfoView *_userInfoView;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicFocusedUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
- (_Bool)insertAudioMicOperationViewToPIPRenderLayer;
- (_Bool)isFeedStreamTask;
- (void)configConnectMicOperationView:(_Bool)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (id)temporarilyHideNonEssentialViews;
- (void)insertToPIPRenderLayerIfNeeded;
- (id)getUserInfoView;
- (void)updateLiveHeatValue;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(_Bool)arg2 configureLiveDirtyHandle:(_Bool)arg3;
@property(readonly, nonatomic) unsigned long long viewType;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

