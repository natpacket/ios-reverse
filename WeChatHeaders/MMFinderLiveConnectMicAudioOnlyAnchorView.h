//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class MMFinderLiveResDownloadManager, MMFinderLiveTaskId, MMFinderLiveWcPlayerView, MMLiveAudioModeAnimatedBackgroundPlayerViewModel, MMWebImageView, NSString;

@interface MMFinderLiveConnectMicAudioOnlyAnchorView : UIView <MMWebImageViewDelegate>
{
    MMWebImageView *_coverImageView;
    MMFinderLiveWcPlayerView *_backgroundVideoView;
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel *_backgroundVideoViewModel;
    UIView *_shadingView;
    MMFinderLiveTaskId *_finderTaskId;
    NSString *_sdkUserId;
    NSString *_backgroundVideoUri;
    MMFinderLiveResDownloadManager *_downloadMgr;
    struct CGRect _backgroundVideoViewNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSString *backgroundVideoUri; // @synthesize backgroundVideoUri=_backgroundVideoUri;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
@property(retain, nonatomic) UIView *shadingView; // @synthesize shadingView=_shadingView;
@property(nonatomic) struct CGRect backgroundVideoViewNormalizedFrame; // @synthesize backgroundVideoViewNormalizedFrame=_backgroundVideoViewNormalizedFrame;
@property(retain, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *backgroundVideoViewModel; // @synthesize backgroundVideoViewModel=_backgroundVideoViewModel;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *backgroundVideoView; // @synthesize backgroundVideoView=_backgroundVideoView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)createBackgroundVideoView;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)configureCoverViewWithBackgroundConfiguration:(id)arg1 fallbackImageUri:(id)arg2;
- (id)initWithTaskId:(id)arg1 sdkUserId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

