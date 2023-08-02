//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveOperationViewExt-Protocol.h"
#import "MMFinderLiveSFBarrageViewModelDelegate-Protocol.h"
#import "MMLiveCommentDataExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveSFBarrageTracksInfo, MMFinderLiveSFBarrageViewModel, MMFinderLiveTaskId, NSArray, NSString, UITapGestureRecognizer;
@protocol MMFinderLiveSFBarrageViewDelegate;

@interface MMFinderLiveSFBarrageView : UIView <MMFinderLiveSFBarrageViewModelDelegate, MMFinderLiveOperationViewExt, WCFinderLiveExt, MMLiveCommentDataExt>
{
    _Bool _isInBackground;
    id <MMFinderLiveSFBarrageViewDelegate> _barrageDelegate;
    MMFinderLiveTaskId *_finderTaskId;
    MMFinderLiveSFBarrageViewModel *_viewModel;
    UIView *_barrageContainerView;
    MMFinderLiveSFBarrageTracksInfo *_barrageTrackInfo;
    NSArray *_barrageTrackPosYPercentList;
    unsigned long long _barrageSeqNum;
    UITapGestureRecognizer *_tapGesture;
}

+ (double)estimateBarrageCellLineHeight:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long barrageSeqNum; // @synthesize barrageSeqNum=_barrageSeqNum;
@property(retain, nonatomic) NSArray *barrageTrackPosYPercentList; // @synthesize barrageTrackPosYPercentList=_barrageTrackPosYPercentList;
@property(retain, nonatomic) MMFinderLiveSFBarrageTracksInfo *barrageTrackInfo; // @synthesize barrageTrackInfo=_barrageTrackInfo;
@property(retain, nonatomic) UIView *barrageContainerView; // @synthesize barrageContainerView=_barrageContainerView;
@property(retain, nonatomic) MMFinderLiveSFBarrageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
@property(nonatomic) __weak id <MMFinderLiveSFBarrageViewDelegate> barrageDelegate; // @synthesize barrageDelegate=_barrageDelegate;
- (id)getBarrageItemForInitialCommentIfVisible:(id)arg1;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (void)onPostFinderLiveAppMessageSuccess:(id)arg1 boxId:(id)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(id)arg4;
- (void)onMMLiveCommentDataItemLikeInfoUpdate:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onSelfMMLiveCommentDataCompleted:(id)arg1 forTaskId:(id)arg2;
- (void)onMMFinderLiveOperationView:(id)arg1 backViewDidTapped:(unsigned long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateTrackPositionYPercentList;
- (unsigned long long)getNextBarrageSeqNum;
- (_Bool)checkCurrentHasAvailableTrack;
- (_Bool)isCurrentPortrait;
- (double)getBarrageMoveDuration;
- (double)getBarrageMoveSpeed:(id)arg1;
- (void)createBarrageTracksInfo;
- (_Bool)isCurrentInOffScreenMode;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)stopBarrage;
- (void)startBarrage;
- (_Bool)isAllTracksAvailable;
- (void)onFinderLiveSFBarrageNewDataItemAvailable;
- (void)onFinderLiveSFBarrageDisplayLinkCallback;
- (id)tryGetHitBarrageItemForLikeBtnTap:(struct CGPoint)arg1;
- (id)tryGetHitBarrageItemForPubbleTap:(struct CGPoint)arg1;
- (void)onTapped:(id)arg1;
- (struct CGRect)getCurrentStayAdjustedFrame:(struct CGRect)arg1;
- (void)recoverAnimateStateForCurrentTappedBarrageItem;
- (void)onMMFinderLiveSFBarrageItemInfoInvokeAction:(id)arg1 actionType:(long long)arg2;
- (void)onMMFinderLiveSFBarrageItemInfoTappedCell:(id)arg1;
- (void)removeBarrageItem:(id)arg1 cleared:(_Bool)arg2;
- (void)removeBarrageItem:(id)arg1;
- (void)animateTappedBarrageItem:(id)arg1;
- (void)invokeAnimationForBarrrageItem:(id)arg1 duration:(double)arg2;
- (id)createBarrageItemForBarrageCell:(id)arg1;
- (id)tryStartAnimateBarrageCell:(id)arg1 withPositionY:(double)arg2;
- (_Bool)checkBarrageCell:(id)arg1 enableMoveAtTrack:(id)arg2 extraNeedWaitTime:(double *)arg3;
- (id)tryAddBarrageItemFromBarrageCellList:(id)arg1;
- (void)tryAddBarrageItem;
- (void)layoutBarrageContainerView;
- (void)layoutUI;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

