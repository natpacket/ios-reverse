//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLivePromotePubbleContentView.h"

#import "MMFinderLiveCouponViewDelegate-Protocol.h"

@class FinderShopCouponInfo, MMFinderLiveCouponItem, MMFinderLiveCouponView, NSString;

@interface MMFinderLiveCouponPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveCouponViewDelegate>
{
    _Bool _willDismissing;
    MMFinderLiveCouponItem *_couponItem;
    MMFinderLiveCouponView *_couponView;
    FinderShopCouponInfo *_couponInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willDismissing; // @synthesize willDismissing=_willDismissing;
@property(retain, nonatomic) FinderShopCouponInfo *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) MMFinderLiveCouponView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) MMFinderLiveCouponItem *couponItem; // @synthesize couponItem=_couponItem;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (void)onCouponAction:(id)arg1 view:(id)arg2;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)layoutCouponView;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onShowed;
- (void)onClosed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)currentPromoteItem;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)refreshData;
- (void)onFinderCouponReceivedEvent:(id)arg1 forAll:(_Bool)arg2;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

