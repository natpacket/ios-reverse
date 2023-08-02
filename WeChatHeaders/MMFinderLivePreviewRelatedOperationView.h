//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOperationView.h"

#import "MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate-Protocol.h"
#import "MMLivePivotCollecitonViewZoomAnimatorExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveConnectMicAllUserInfoView, MMFinderLiveMinifyRoomControlBanner, MMFinderLivePreviewRelatedHeaderView, MMUIButton, NSString;

@interface MMFinderLivePreviewRelatedOperationView : MMLiveOperationView <MMLivePivotCollecitonViewZoomAnimatorExt, WCFinderLiveExt, MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate>
{
    MMFinderLiveConnectMicAllUserInfoView *_connectMicAllUserInfoView;
    MMFinderLivePreviewRelatedHeaderView *_previewRelatedHeaderView;
    MMFinderLiveMinifyRoomControlBanner *_minifyRoomBanner;
    MMUIButton *_backgroundButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMFinderLiveMinifyRoomControlBanner *minifyRoomBanner; // @synthesize minifyRoomBanner=_minifyRoomBanner;
@property(retain, nonatomic) MMFinderLivePreviewRelatedHeaderView *previewRelatedHeaderView; // @synthesize previewRelatedHeaderView=_previewRelatedHeaderView;
@property(retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView; // @synthesize connectMicAllUserInfoView=_connectMicAllUserInfoView;
- (struct CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(struct CGRect)arg1;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomOut;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)doZoomInAnimator;
- (double)getZoomOffset;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3;
- (void)showBannerView:(id)arg1;
- (void)removeCurrentBanner;
- (_Bool)existSameBannerWithInfo:(id)arg1;
- (_Bool)existBannerView;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)visibilityChanged:(_Bool)arg1;
- (void)extraOperationInfoUpdated;
- (void)updateContentsHiddenStatus;
- (void)tapPreviewView;
- (void)layoutBackgroundButton;
- (double)getMinifyRoomBannerTop;
- (void)resetConnectMicVideoOperationViewFrameWithState:(unsigned long long)arg1;
- (void)resetConnectMicVideoOperationViewFrame;
- (void)layoutConnectMicVideoOperationView;
- (id)getFinderLiveTask;
- (id)genMinifyRoomBanner;
- (void)checkInitMinifyRoomBanner;
- (void)layoutMinifyRoomBannerForce:(_Bool)arg1;
- (void)layoutMinifyRoomBanner;
- (void)layoutPreviewRelatedHeaderViewForce:(_Bool)arg1;
- (void)layoutPreviewRelatedHeaderView;
- (void)updateSelfDisplayProperties;
- (void)layoutUI;
- (void)onEnterLive;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

