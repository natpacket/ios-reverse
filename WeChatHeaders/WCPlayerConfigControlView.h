//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "SightIconViewDelegate-Protocol.h"
#import "VideoProgressBarDelegate-Protocol.h"

@class MMUILabel, NSObject, NSString, SightIconView, UIButton, UIImageView, UILabel, UIView, VideoProgressBar, WCPlayerConfig;
@protocol WCPlayerConfigDelegate;

@interface WCPlayerConfigControlView : WCPlayerControlView <SightIconViewDelegate, VideoProgressBarDelegate>
{
    _Bool _fullScreen;
    _Bool _shrink;
    NSObject<WCPlayerConfigDelegate> *_delegate;
    UIView *_toolPanView;
    UIImageView *_topToolView;
    UIImageView *_bottomToolView;
    VideoProgressBar *_progressBar;
    SightIconView *_iconView;
    UILabel *_hintLabel;
    UIButton *_closeButton;
    MMUILabel *_errorLabel;
    UIButton *_attachButton;
    WCPlayerConfig *_playerConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shrink; // @synthesize shrink=_shrink;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) WCPlayerConfig *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) UIButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) VideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) UIImageView *topToolView; // @synthesize topToolView=_topToolView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCPlayerConfigDelegate> *delegate; // @synthesize delegate=_delegate;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)updateProgressDuration:(float)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenDownloadPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)updateVideoSize:(struct CGSize)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)onPlayerCreated;
- (void)onProgressEnd;
- (void)setAttachButtonTitle:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)onCloseButtonTap:(id)arg1;
- (void)updateBottomToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)updateTopToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1 Delegate:(id)arg2 Config:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

