//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CNetworkStatusExt-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "IVideoExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCC2CPlayerControlViewDelegate-Protocol.h"
#import "WCC2CVideoThumbImageViewDelegate-Protocol.h"
#import "WCPlayerViewUIDelegate-Protocol.h"

@class CAGradientLayer, CMessageWrap, MMBrandHeadImageView, MMScrollViewZoomReporter, MMUIButton, MMUILabel, MPLandingPageCgiHandler, MPLandingPageReportLogic, NSString, UIImage, WCC2CPlayerControlView, WCC2CVideoThumbImageView, WCPlayerPlayArgs, WCPlayerView, WXFullScreenGestureRecognizer;
@protocol WXVideoPlayerViewDelegate, WXVideoPlayerViewTouchDelegate;

@interface WCC2CVideoPlayerView : UIView <UIAlertViewDelegate, IVideoExt, FullScreenGestureDelegate, WCC2CPlayerControlViewDelegate, WCPlayerViewUIDelegate, WCC2CVideoThumbImageViewDelegate, CNetworkStatusExt>
{
    double m_initialTime;
    UIImage *m_thumbImage;
    _Bool _bVideoIsBlocked;
    _Bool _bVideoIsExpired;
    _Bool _isAnimating;
    _Bool _soundable;
    _Bool _bShouldResumeInterrupt;
    _Bool _isRawVideoMode;
    _Bool _bFirstPlay;
    _Bool _bPlayToEnd;
    _Bool _bHasRequestedVideoState;
    _Bool _bRequaringVideoState;
    _Bool _bInMuteMode;
    _Bool _isDisplayingPlaceHolderMsg;
    _Bool _isWaitingPlayWhenReceiveFinishMsg;
    _Bool _isShowRawPlaySucc;
    _Bool _bRequestingVideoStateCgi;
    _Bool _hasAddToRecentUsed;
    _Bool _hasRemovedFromRecentUsed;
    int _action;
    unsigned int _brandEnterIdForReport;
    CMessageWrap *_msgWrap;
    id <WXVideoPlayerViewDelegate> _delegate;
    id <WXVideoPlayerViewTouchDelegate> _touchDelegate;
    MMScrollViewZoomReporter *_zoomReporter;
    MMScrollViewZoomReporter *_thumbZoomReporter;
    WCPlayerView *_playerView;
    WCPlayerPlayArgs *_playerInfo;
    WCC2CPlayerControlView *_controlView;
    WCPlayerPlayArgs *_rawPlayerInfo;
    WCPlayerView *_rawPlayerView;
    WCC2CVideoThumbImageView *_thumbImageView;
    WXFullScreenGestureRecognizer *_fullScreenGestureRecognizer;
    unsigned long long _rawBtnClickTime;
    unsigned long long _rawPlayStartTime;
    MMUIButton *_brandContentView;
    CAGradientLayer *_brandMaskLayer;
    MMUILabel *_brandTitleView;
    MMBrandHeadImageView *_brandHeadView;
    MMUIButton *_brandNickNameView;
    MMUIButton *_brandOpenMpPageBtn;
    MPLandingPageCgiHandler *_brandCgiHandler;
    MPLandingPageReportLogic *_brandReportLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRemovedFromRecentUsed; // @synthesize hasRemovedFromRecentUsed=_hasRemovedFromRecentUsed;
@property(nonatomic) _Bool hasAddToRecentUsed; // @synthesize hasAddToRecentUsed=_hasAddToRecentUsed;
@property(nonatomic) unsigned int brandEnterIdForReport; // @synthesize brandEnterIdForReport=_brandEnterIdForReport;
@property(retain, nonatomic) MPLandingPageReportLogic *brandReportLogic; // @synthesize brandReportLogic=_brandReportLogic;
@property(nonatomic) _Bool bRequestingVideoStateCgi; // @synthesize bRequestingVideoStateCgi=_bRequestingVideoStateCgi;
@property(retain, nonatomic) MPLandingPageCgiHandler *brandCgiHandler; // @synthesize brandCgiHandler=_brandCgiHandler;
@property(retain, nonatomic) MMUIButton *brandOpenMpPageBtn; // @synthesize brandOpenMpPageBtn=_brandOpenMpPageBtn;
@property(retain, nonatomic) MMUIButton *brandNickNameView; // @synthesize brandNickNameView=_brandNickNameView;
@property(retain, nonatomic) MMBrandHeadImageView *brandHeadView; // @synthesize brandHeadView=_brandHeadView;
@property(retain, nonatomic) MMUILabel *brandTitleView; // @synthesize brandTitleView=_brandTitleView;
@property(retain, nonatomic) CAGradientLayer *brandMaskLayer; // @synthesize brandMaskLayer=_brandMaskLayer;
@property(retain, nonatomic) MMUIButton *brandContentView; // @synthesize brandContentView=_brandContentView;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) unsigned long long rawPlayStartTime; // @synthesize rawPlayStartTime=_rawPlayStartTime;
@property(nonatomic) unsigned long long rawBtnClickTime; // @synthesize rawBtnClickTime=_rawBtnClickTime;
@property(nonatomic) _Bool isShowRawPlaySucc; // @synthesize isShowRawPlaySucc=_isShowRawPlaySucc;
@property(nonatomic) _Bool isWaitingPlayWhenReceiveFinishMsg; // @synthesize isWaitingPlayWhenReceiveFinishMsg=_isWaitingPlayWhenReceiveFinishMsg;
@property(nonatomic) _Bool isDisplayingPlaceHolderMsg; // @synthesize isDisplayingPlaceHolderMsg=_isDisplayingPlaceHolderMsg;
@property(nonatomic) _Bool bInMuteMode; // @synthesize bInMuteMode=_bInMuteMode;
@property(nonatomic) _Bool bRequaringVideoState; // @synthesize bRequaringVideoState=_bRequaringVideoState;
@property(nonatomic) _Bool bHasRequestedVideoState; // @synthesize bHasRequestedVideoState=_bHasRequestedVideoState;
@property(nonatomic) _Bool bPlayToEnd; // @synthesize bPlayToEnd=_bPlayToEnd;
@property(nonatomic) _Bool bFirstPlay; // @synthesize bFirstPlay=_bFirstPlay;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer; // @synthesize fullScreenGestureRecognizer=_fullScreenGestureRecognizer;
@property(nonatomic) _Bool isRawVideoMode; // @synthesize isRawVideoMode=_isRawVideoMode;
@property(nonatomic) _Bool bShouldResumeInterrupt; // @synthesize bShouldResumeInterrupt=_bShouldResumeInterrupt;
@property(retain, nonatomic) WCC2CVideoThumbImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *rawPlayerView; // @synthesize rawPlayerView=_rawPlayerView;
@property(retain, nonatomic) WCPlayerPlayArgs *rawPlayerInfo; // @synthesize rawPlayerInfo=_rawPlayerInfo;
@property(retain, nonatomic) WCC2CPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMScrollViewZoomReporter *thumbZoomReporter; // @synthesize thumbZoomReporter=_thumbZoomReporter;
@property(retain, nonatomic) MMScrollViewZoomReporter *zoomReporter; // @synthesize zoomReporter=_zoomReporter;
@property(nonatomic) __weak id <WXVideoPlayerViewTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(nonatomic) __weak id <WXVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) _Bool soundable; // @synthesize soundable=_soundable;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool bVideoIsExpired; // @synthesize bVideoIsExpired=_bVideoIsExpired;
@property(nonatomic) _Bool bVideoIsBlocked; // @synthesize bVideoIsBlocked=_bVideoIsBlocked;
- (void)thumbImageView:(id)arg1 doubleTap:(id)arg2;
- (void)thumbImageViewDidEndZoom:(id)arg1;
- (void)thumbImageViewDidZoom:(id)arg1;
- (void)playerView:(id)arg1 doubleTap:(id)arg2;
- (void)playerViewDidEndZoom:(id)arg1;
- (void)playerViewDidZoom:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)configPlayerViewWhenReceiveFinishMsg;
- (void)onRawVideoDownloadSuccess;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onClickToCancelPlayRawVideo;
- (void)onClickToPlayRawVideo;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onProgressBarBeginSeek;
- (void)onSightProgressBarHidden;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseVideoPlay;
- (void)onStartPlayIconClick;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)reportWhenStartPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPrepareToPlay;
- (double)getBottomRightMargin;
- (double)updateBottomLeftSpace;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)exitVideoPlay;
- (void)onFullScreenClose;
@property(nonatomic) _Bool bForbidDragDownToClose;
- (void)handleDownloadExpired;
- (void)handleDownloadFail;
- (void)setStatusViewsHidden:(_Bool)arg1;
- (void)setViewsAlphaOnMultiPageScroll:(double)arg1;
- (void)setViewsHiddenOnScroll:(_Bool)arg1;
- (void)setToolViewsHidden:(_Bool)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)showC2CVLeftTopCloseButton;
- (_Bool)isPreventHiddenTool;
- (_Bool)isVideoReadyToPlay;
- (_Bool)isVideoPlaying;
- (void)blockPlayerSyncDownload;
- (_Bool)isNeedPlayFromEveryDisplay;
- (_Bool)checkFinishMsg:(id)arg1;
- (void)preparePlayerView;
- (void)resetViewPosition;
- (id)getAnimateView;
- (double)getTotalPlaybackTimeInSec;
- (double)getCurrPlayedTimeInSec;
- (unsigned long long)totalTime;
- (void)pause;
- (void)resumeVideoFromInterrupt;
- (void)interruptVideo;
- (void)stopPlay:(id)arg1;
- (void)stopPlayerDownload;
- (void)stopPlay;
- (void)destoryWhenVideoIsBlocked:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)realPlay;
- (_Bool)startPlay;
- (_Bool)tryRequestVideoInfo;
- (void)changeMsgToDownloadStatus:(unsigned int)arg1;
- (void)reportOnVideoPlayEnd;
- (void)reportOnRawVideoPlayEnd:(_Bool)arg1;
- (void)onStartPlay;
- (void)onPlayPlaceHolderMsg;
- (id)generateRawDownloadArgsWrap;
- (id)generateDownloadArgsWrap;
- (id)generateRawPlayerInfo;
- (id)generatePlayerInfo;
- (id)generatePlayerView:(id)arg1;
- (id)generateRawPlayerView;
- (id)generatePlayerView;
- (void)initFullScreenGestureOnView:(id)arg1;
- (void)createNewMaskedImageWithImage:(id)arg1;
- (id)tryGetImgFromVideoPath:(id)arg1 thumbImagePath:(id)arg2;
- (void)setInitialTime:(double)arg1;
- (void)setThumbImage:(id)arg1;
- (void)layoutSubviews;
- (void)configPlayerView;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 Soundable:(_Bool)arg3 AutoPlay:(_Bool)arg4 delegate:(id)arg5;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3;
- (unsigned int)getScene;
- (void)initReportLogicIfNeed;
- (void)reportVideoShareSuccessEvent;
- (void)reportBrandMpVideoPlayFail:(int)arg1 localizedErrorDes:(id)arg2;
- (void)reportVideoPlayCgi17537:(unsigned long long)arg1;
- (void)reportBrandMpVideoCommonEvent:(unsigned long long)arg1;
- (void)requestVideoStateByVid:(CDUnknownBlockType)arg1;
- (void)onOpenMpPage;
- (void)onOpenProfile;
- (void)setBrandViewsHidden:(_Bool)arg1;
- (void)layoutBrandViews;
- (void)addShadowToView:(id)arg1;
- (void)initBrandOpenMpPageBtn;
- (void)initBrandNickNameView;
- (void)initBrandHeadView;
- (void)initBrandTitleView;
- (void)initBrandContentView;
- (void)initBrandViews;
- (void)notifyBrandMpVideoDealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

