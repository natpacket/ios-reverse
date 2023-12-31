//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRectTriangleArrowView.h"

@class FinderLivePromoteMsgInfo, FinderShopCouponInfo, MMFinderLiveAdsItem, MMFinderLiveGoodsItem, MMFinderLivePromotePubbleContentView, MMFinderLiveTaskId, MMUIButton;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromotePubbleContainerView : MMRectTriangleArrowView
{
    MMFinderLivePromotePubbleContentView *_contentView;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _tapCallback;
    id <MMFinderLiveOperationViewDelegate> _operationDelegate;
    FinderLivePromoteMsgInfo *_promoteMsgInfo;
    CDUnknownBlockType _actionReportCallback;
    MMFinderLiveTaskId *_taskId;
    MMUIButton *_closeButton;
    long long _style;
}

+ (id)currentLiveTask;
+ (double)getContainerWidth:(id)arg1;
+ (double)getContentWidth:(id)arg1;
+ (double)getContentHeight:(long long)arg1;
+ (double)getContainerHeight:(long long)arg1 displayTriTip:(_Bool)arg2;
+ (id)createPromotePubbleContainerWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType actionReportCallback; // @synthesize actionReportCallback=_actionReportCallback;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *promoteMsgInfo; // @synthesize promoteMsgInfo=_promoteMsgInfo;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(retain, nonatomic) MMFinderLivePromotePubbleContentView *contentView; // @synthesize contentView=_contentView;
- (void)setHidden:(_Bool)arg1;
- (id)currentLiveTask;
@property(readonly, nonatomic) _Bool isCustomDisplaying;
@property(readonly, nonatomic) FinderShopCouponInfo *currentDisplayCouponInfo;
@property(readonly, nonatomic) MMFinderLiveAdsItem *currentDisplayAdsItem;
@property(readonly, nonatomic) MMFinderLiveGoodsItem *currentDisplayGoodsItem;
- (void)displayContent:(unsigned long long)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)getCurrentPromoteBuffer;
@property(readonly, nonatomic) id currentPromoteItem;
- (void)updatePromoteItem:(id)arg1;
- (void)updatePromoteMsgInfo:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteMsgInfo:(id)arg1;
- (void)onCloseAction;
- (void)setAlpha:(double)arg1;
- (void)dismissWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissWithAnimationFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateCloseButtonForScale:(double)arg1;
- (void)showWithAnimationFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (void)onDismissed;
- (void)onShowed;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (double)selfCornerRadius;
- (_Bool)isFromAnchorPromote;
- (void)updateCloseButtonPosition;
- (void)layoutCloseButton;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 promoteMsgInfo:(id)arg3 taskId:(id)arg4 style:(long long)arg5;

@end

