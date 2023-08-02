//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveConnectMicBaseUserInfoView.h"

#import "MMLiveRewardGiftNotificationContainerViewDelegate-Protocol.h"

@class MMLiveRewardGiftNotificationContainerView, MMLiveViewHiddenStatusContainer, NSString, PAGView, UILabel, UIView;

@interface MMFinderLiveConnectMicUnfocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView <MMLiveRewardGiftNotificationContainerViewDelegate>
{
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    UIView *_containerView;
    PAGView *_volumeAnimationView;
    UIView *_heatValueLabelContainerView;
    UILabel *_heatValueLabel;
    MMLiveViewHiddenStatusContainer *_hiddenStatusContainer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveViewHiddenStatusContainer *hiddenStatusContainer; // @synthesize hiddenStatusContainer=_hiddenStatusContainer;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueLabelContainerView; // @synthesize heatValueLabelContainerView=_heatValueLabelContainerView;
@property(retain, nonatomic) PAGView *volumeAnimationView; // @synthesize volumeAnimationView=_volumeAnimationView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
- (id)liveTask;
- (void)configHeatValueLabel;
- (void)updateMicMutedButtonAppearance;
- (void)layoutComponentsForAnchorAudioMode;
- (void)layoutComponentsForAnchorVideoMode;
- (void)layoutComponentsForAudienceAudioMode;
- (void)layoutComponentsForAudienceVideoMode;
- (void)configGiftContainerView;
- (void)createMicMutedButton;
- (void)configVolumeAnimationView;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)viewType;
- (_Bool)needDisplayGlobalRankSignView;
- (void)configNicknameLabel;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (void)layoutUI;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
