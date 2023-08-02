//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveReplayOperationView.h"

#import "MMFinderLiveTaskExt-Protocol.h"

@class MMFinderLiveReplayGoodsPubbleTipView, MMFinderLiveReplayMessageSource, NSString, UIView;
@protocol MMFinderLivePromotionReplayOperationViewDelegate;

@interface MMFinderLivePromotionReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveTaskExt>
{
    _Bool _supressMessageUpdate;
    id <MMFinderLivePromotionReplayOperationViewDelegate> _promotionReplayOperationDelegate;
    MMFinderLiveReplayMessageSource *_messageSource;
    unsigned long long _lastMessageUpdateTime;
    MMFinderLiveReplayGoodsPubbleTipView *_goodsTipView;
    UIView *_goodsTipContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *goodsTipContainerView; // @synthesize goodsTipContainerView=_goodsTipContainerView;
@property(retain, nonatomic) MMFinderLiveReplayGoodsPubbleTipView *goodsTipView; // @synthesize goodsTipView=_goodsTipView;
@property(nonatomic) _Bool supressMessageUpdate; // @synthesize supressMessageUpdate=_supressMessageUpdate;
@property(nonatomic) unsigned long long lastMessageUpdateTime; // @synthesize lastMessageUpdateTime=_lastMessageUpdateTime;
@property(retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource; // @synthesize messageSource=_messageSource;
@property(nonatomic) __weak id <MMFinderLivePromotionReplayOperationViewDelegate> promotionReplayOperationDelegate; // @synthesize promotionReplayOperationDelegate=_promotionReplayOperationDelegate;
- (double)toolViewBottom;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderSeekBegin;
- (void)onVideoPlay;
- (void)gotoShopDetailPageWithProduct:(id)arg1;
- (void)onGoodsPubbleButtonClicked;
- (void)onCloseGoodsPubbleButtonClicked;
- (void)layoutGoodsPubbleTipView;
- (void)layoutGoodsTipContainerView;
- (void)hideContents;
- (void)showContents;
- (void)createReplayControlView;
- (void)layoutUI;
- (void)onEnterLive;
- (_Bool)shouldHideBottomMaskWhenCLeanScreen;
- (_Bool)shouldHideTopMaskWhenCLeanScreen;
- (void)unRegisterExtensions;
- (void)registerExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
