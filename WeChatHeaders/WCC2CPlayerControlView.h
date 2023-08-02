//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "RawVideoDownloadMgrExt-Protocol.h"
#import "SightIconViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VideoProgressBarDelegate-Protocol.h"

@class CMessageWrap, MMUIButton, MMUILabel, NSString, SightIconView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCPlayerProgressBar;
@protocol WCC2CPlayerControlViewDelegate;

@interface WCC2CPlayerControlView : WCPlayerControlView <SightIconViewDelegate, VideoProgressBarDelegate, UIGestureRecognizerDelegate, RawVideoDownloadMgrExt>
{
    _Bool _bVideoBlocked;
    _Bool _bPreventHiddenTool;
    _Bool _isSyncSaveingData;
    unsigned int _rawDownloadPercent;
    id <WCC2CPlayerControlViewDelegate> _delegate;
    UIView *_toolPanView;
    UIImageView *_topBkgView;
    MMUIButton *_closeButton;
    UIImageView *_bottomBkgView;
    MMUILabel *_errorTipsLabel;
    MMUIButton *_leftTopCloseButton;
    SightIconView *_iconView;
    WCPlayerProgressBar *_progressBar;
    UIButton *_playAttachVideoButton;
    CMessageWrap *_msgWrap;
    UIView *_tapgGestureView;
    UIView *_iconViewMask;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMUIButton *_rawPlayStatusBtn;
    UILabel *_rawPlayingTagLabel;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int rawDownloadPercent; // @synthesize rawDownloadPercent=_rawDownloadPercent;
@property(retain, nonatomic) UILabel *rawPlayingTagLabel; // @synthesize rawPlayingTagLabel=_rawPlayingTagLabel;
@property(retain, nonatomic) MMUIButton *rawPlayStatusBtn; // @synthesize rawPlayStatusBtn=_rawPlayStatusBtn;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *iconViewMask; // @synthesize iconViewMask=_iconViewMask;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) UIButton *playAttachVideoButton; // @synthesize playAttachVideoButton=_playAttachVideoButton;
@property(retain, nonatomic) WCPlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIButton *leftTopCloseButton; // @synthesize leftTopCloseButton=_leftTopCloseButton;
@property(retain, nonatomic) MMUILabel *errorTipsLabel; // @synthesize errorTipsLabel=_errorTipsLabel;
@property(retain, nonatomic) UIImageView *bottomBkgView; // @synthesize bottomBkgView=_bottomBkgView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *topBkgView; // @synthesize topBkgView=_topBkgView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) _Bool isSyncSaveingData; // @synthesize isSyncSaveingData=_isSyncSaveingData;
@property(nonatomic) _Bool bPreventHiddenTool; // @synthesize bPreventHiddenTool=_bPreventHiddenTool;
@property(nonatomic) _Bool bVideoBlocked; // @synthesize bVideoBlocked=_bVideoBlocked;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) __weak id <WCC2CPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onRawVideoDownloadSuccess:(id)arg1;
- (void)onRawVideoDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)animateLayoutControls;
- (void)animateHideRawProgressButton:(float)arg1;
- (void)updateRawProgressWithPercent:(unsigned int)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)updateDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenIconView;
- (void)showIconView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (_Bool)isPreventProgressBarHidden;
- (double)getRawPlayStatusBtnLeft;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapOnIconView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutControls;
- (void)showToolPanel;
- (void)showRawVideoPlaySuccess;
- (void)showSwitchingToRawStatus;
- (void)hiddenErrorTips;
- (void)makeToolViewUserInteractionEnabled:(_Bool)arg1;
- (void)hiddenWaitUploading;
- (void)showWaitUploading;
- (void)showRawPlayStatusBtn;
- (void)showUploadStopWithText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)setErrorTipsText:(id)arg1;
- (double)videoTotalTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseBtnClick;
- (void)onClickRawStatusButton;
- (void)addShadowToView:(id)arg1;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)updateRawStatusBtn;
- (void)initRawPlayStatusBtn;
- (struct CGPoint)getLeftTopCloseButtonOrigin;
- (void)initPlayAttachVideoBtn;
- (void)initSubview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

