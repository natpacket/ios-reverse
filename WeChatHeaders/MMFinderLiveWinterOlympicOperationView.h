//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveOperationView.h"

@class MMFinderLiveActivityTask, MMFinderLiveActivityTaskId, MMFinderLiveOlympicsOperationViewModel;
@protocol MMFinderLiveWinterOlympicOperationViewDelegate;

@interface MMFinderLiveWinterOlympicOperationView : MMFinderLiveOperationView
{
    id <MMFinderLiveWinterOlympicOperationViewDelegate> _operationDelegate;
    MMFinderLiveOlympicsOperationViewModel *_olympicsOperationViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveOlympicsOperationViewModel *olympicsOperationViewModel; // @synthesize olympicsOperationViewModel=_olympicsOperationViewModel;
@property(nonatomic) __weak id <MMFinderLiveWinterOlympicOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)prepareForCertificateHiding;
- (void)prepareForCertificateShowing;
- (void)startParticipateAnimation:(id)arg1 backgroundFadeInDelay:(double)arg2;
- (void)bindToViewModel:(id)arg1;
- (void)layoutLotteryWidgets;
- (void)createSendingMoreBubbleViewIfNeeded;
- (void)createRewardRecipientSelectionViewIfNeeded;
- (void)createRewardGiftRecievingAnimationViewIfNeeded;
- (void)createFollowConfirmIfNeeded;
- (void)createAndLayoutGameFrameSetViewsIfNeed;
- (void)layoutOnlineStateView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateSyncActivityCommentResp:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
- (void)layoutUI;
- (void)removeCertificateBackgroundAndParticipateAnimation;
- (void)dealloc;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2;

@end
