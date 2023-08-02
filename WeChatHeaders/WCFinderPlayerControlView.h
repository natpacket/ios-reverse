//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCPlayerControlProtocol-Protocol.h"
#import "WCPlayerVolumeObserverDelegate-Protocol.h"

@class NSString, UIImageView, WCFinderAnimationLoadingView, WCPlayerView, WCPlayerVolumeObserver, WXVideoSlider;
@protocol WCFinderPlayerControlViewDelegate;

@interface WCFinderPlayerControlView : UIView <WCPlayerVolumeObserverDelegate, WCPlayerControlProtocol>
{
    _Bool _isBufferingViewLoading;
    WCPlayerView *playerView;
    id <WCFinderPlayerControlViewDelegate> _delegate;
    UIView *_coverMask;
    WCFinderAnimationLoadingView *_loadingView;
    double _progress;
    unsigned long long _loadingLocation;
    double _loadingTopOffset;
    WCPlayerVolumeObserver *_volumeObserver;
    WXVideoSlider *_volumeSlider;
    UIView *_volumePanel;
    UIView *_volumeBgView;
    UIImageView *_volumeIconView;
    double _maxPlayVideoTime;
}

- (void).cxx_destruct;
@property(nonatomic) double maxPlayVideoTime; // @synthesize maxPlayVideoTime=_maxPlayVideoTime;
@property(retain, nonatomic) UIImageView *volumeIconView; // @synthesize volumeIconView=_volumeIconView;
@property(retain, nonatomic) UIView *volumeBgView; // @synthesize volumeBgView=_volumeBgView;
@property(retain, nonatomic) UIView *volumePanel; // @synthesize volumePanel=_volumePanel;
@property(retain, nonatomic) WXVideoSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) WCPlayerVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) unsigned long long loadingLocation; // @synthesize loadingLocation=_loadingLocation;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(nonatomic) __weak id <WCFinderPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)hiddenVolumePanel;
- (void)onVolumeDidChange:(double)arg1;
- (_Bool)hasPlayToAppearTime;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)reset;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)getPlayVideoTotalTime;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onCreateThumbImage:(id)arg1;
- (void)onReceiveAllVideoData;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (id)getVolumeIconName;
- (void)layoutSubviews;
- (void)addWCPlayerSubview;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

