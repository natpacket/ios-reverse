//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

@class MMMusicRoundCorneredBarButton, UIImageView, UILabel, WCPlayerView;
@protocol MMMusicNoAnyVideoViewPlayerDelegate;

@interface MMMusicNoAnyVideoView : WCPlayerControlView
{
    WCPlayerView *_playerView;
    UIImageView *_imageView;
    UILabel *_label;
    MMMusicRoundCorneredBarButton *m_postBarButton;
    unsigned int _nativeViewId;
    id <MMMusicNoAnyVideoViewPlayerDelegate> _delegate;
    unsigned long long _videoEpisodeIndex;
    CDUnknownBlockType _onTappedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onTappedBlock; // @synthesize onTappedBlock=_onTappedBlock;
@property(nonatomic) unsigned long long videoEpisodeIndex; // @synthesize videoEpisodeIndex=_videoEpisodeIndex;
@property(nonatomic) __weak id <MMMusicNoAnyVideoViewPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoBeginPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)setShowPromptText:(_Bool)arg1;
- (void)setPromptAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)destory;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1 shouldPlay:(_Bool)arg2;
- (id)init;

@end

