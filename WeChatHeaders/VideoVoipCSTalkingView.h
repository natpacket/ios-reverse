//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "AVVideoDeviceDelegate-Protocol.h"
#import "IStrangerContactMgrExt-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "SmallCameraViewDelegate-Protocol.h"
#import "VOIPVideoToVoiceViewDelegate-Protocol.h"

@class AVAudioPlayer, CContact, MMHDHeadImageView, MMTimerLabel, MMUIButton, MultiTalkHDHeadView, NSString, SmallCameraView, UIImageView, UILabel, UIView, VOIPVideoRender, VOIPVideoToVoiceView, VoipDescriptionButton;
@protocol NSObject><VideoVoipCSTalkingViewDelegate;

@interface VideoVoipCSTalkingView : MMUIView <MMTipsViewControllerDelegate, SmallCameraViewDelegate, AVVideoDeviceDelegate, IVOIPModeSwitchExt, IVOIPExt, VOIPVideoToVoiceViewDelegate, IStrangerContactMgrExt>
{
    CContact *_contact;
    unsigned int _status;
    UIView *_backgroundView;
    MMTimerLabel *_timer;
    UIView *_bigCameraView;
    UIView *_peerRenderView;
    UILabel *_voiceTipsLabel;
    _Bool _isMyselfInMainView;
    _Bool _isEndCall;
    AVAudioPlayer *_player;
    UIImageView *m_localDefaultView;
    UIImageView *m_remoteDefaultView;
    MMHDHeadImageView *m_localHeadView;
    MMHDHeadImageView *m_remoteHeadView;
    UILabel *m_myNameLabel;
    UILabel *m_remoteNameLabel;
    _Bool m_imIs2GWhenConnectToOldVersion;
    _Bool m_remoteIs2GWhenConnectToOldVersion;
    UIView *m_timerBackgroundView;
    UIView *m_footerView;
    VOIPVideoRender *m_peerRender;
    VOIPVideoRender *m_localRender;
    VOIPVideoRender *m_smallPeerRender;
    _Bool m_allowVideo;
    VOIPVideoToVoiceView *m_videoToVoiceView;
    _Bool m_hasInvokeToAudioAnimation;
    _Bool m_bShowCSVideo;
    _Bool m_bAllowBackCamera;
    _Bool m_hasEncounterBackgroundCameraStart;
    _Bool _isTalking;
    id <NSObject><VideoVoipCSTalkingViewDelegate> _delegate;
    VoipDescriptionButton *m_flipCameraView;
    SmallCameraView *m_smallCameraView;
    UIView *m_blurView;
    VoipDescriptionButton *m_voiceModeButton;
    VoipDescriptionButton *m_hangupBtn;
    UIView *m_cameraClipView;
    UIView *m_smallRenderView;
    UIView *m_smallRenderBackClipView;
    MMUIButton *m_minimizeButton;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    UILabel *_m_mainStatusLabel;
    long long _m_videoOrientation;
    NSString *_m_nsHeadImageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsHeadImageUrl; // @synthesize m_nsHeadImageUrl=_m_nsHeadImageUrl;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel=_m_mainStatusLabel;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(nonatomic) _Bool m_hasEncounterBackgroundCameraStart; // @synthesize m_hasEncounterBackgroundCameraStart;
@property(retain, nonatomic) MMUIButton *m_minimizeButton; // @synthesize m_minimizeButton;
@property(retain, nonatomic) UIView *m_smallRenderBackClipView; // @synthesize m_smallRenderBackClipView;
@property(retain, nonatomic) UIView *m_smallRenderView; // @synthesize m_smallRenderView;
@property(retain, nonatomic) UIView *m_cameraClipView; // @synthesize m_cameraClipView;
@property(retain, nonatomic) VOIPVideoRender *m_smallPeerRender; // @synthesize m_smallPeerRender;
@property(retain, nonatomic) VOIPVideoToVoiceView *m_videoToVoiceView; // @synthesize m_videoToVoiceView;
@property(retain, nonatomic) VOIPVideoRender *m_peerRender; // @synthesize m_peerRender;
@property(retain, nonatomic) VOIPVideoRender *m_localRender; // @synthesize m_localRender;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupBtn; // @synthesize m_hangupBtn;
@property(retain, nonatomic) VoipDescriptionButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
@property(retain, nonatomic) UIView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UIView *m_footerView; // @synthesize m_footerView;
@property(retain, nonatomic) UIView *m_timerBackgroundView; // @synthesize m_timerBackgroundView;
@property(retain, nonatomic) SmallCameraView *m_smallCameraView; // @synthesize m_smallCameraView;
@property(retain, nonatomic) VoipDescriptionButton *m_flipCameraView; // @synthesize m_flipCameraView;
@property(nonatomic) id <NSObject><VideoVoipCSTalkingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (_Bool)isAllowVideo;
- (void)onVoiceViewOpenSpeaker;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewHangup;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewCloseMic;
- (void)onClickMinimizeButton;
- (_Bool)isInitWithVideoMode;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnInterrupt:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)changeToAudioViewAnimation:(_Bool)arg1;
- (void)changeToVoiceView;
- (void)onClickVideoToVoiceButton;
- (void)onHangup;
- (void)onAnimationDidStop;
- (void)makeFlipCameraAnimation;
- (void)onFlipCamera;
- (void)updateEarModeTalkingGesture;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnOneWayLocalEarMode;
- (void)OnRemoteVideoMode;
- (void)OnRemoteEarMode;
- (void)OnLocalVideoMode;
- (void)OnLocalEarMode;
- (void)OnBothVideoMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
- (void)OnFromRemoteVideoToBothVideo;
- (void)OnFromLocalVideoToBothVideo;
- (void)resetButtonsAnimation;
- (void)showOneWayRemoteVideoModeTips;
- (void)showOneWayLocalVideoModeTips;
- (void)showOneWayRemoteEarMode2GTips;
- (void)showOneWayRemoteEarModeTips;
- (void)showOneWayLocalEarMode2GTips;
- (void)showOneWayLocalEarModeTips;
- (void)showRemoteEarModeTipsForBadNetwork;
- (void)showLocalEarModeTipsForBadNetwork;
- (void)showRemoteVideoModeWhenConnectTo5_1OrLower;
- (void)showEarModeTipsWhenConnectTo5_1OrLower;
- (void)showLocalVideoModeTipsWhenConnectTo5_1OrLower;
- (void)showBothVideoModeTips;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnLightInterrupt:(_Bool)arg1;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(id)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorChannelInfo:(unsigned long long)arg1 andChannelType:(int)arg2 andConnStrategy:(int)arg3;
- (_Bool)canHideButtons;
- (void)handleSingleTap:(id)arg1;
- (void)startAutoHideButtonsTimer;
- (void)cancelAutoHideButtons;
- (void)autoHideButtons;
- (void)clearButtonsAnimation;
- (void)showButtons;
- (void)hideButtons;
- (void)onMoveEnd;
- (void)onSmallCameraViewSingleTap;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(_Bool)arg3;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)updateEarModeStatusView:(int)arg1;
- (void)setVoiceStatusOn;
- (void)asyncSwitchToVideo;
- (void)asyncSwitchToVoice;
- (void)onConfirmSwitchToVoice;
- (void)layoutFooterView;
- (void)layoutTimerView;
- (void)layoutCarmeraView;
- (void)layoutBigCameraView;
- (void)layoutSmallCameraView;
- (void)layoutMainStatusLabel;
- (struct CGSize)viewSize;
- (_Bool)isOrientationPortrait;
- (_Bool)isOrientationLandscape;
- (void)changeToMinimizeView;
- (void)onSmallSwitchButtonClick;
- (void)layoutFlipCameraButton;
- (void)layoutMinimizeButton;
- (void)layoutBackgroundView;
- (void)layoutVideoToVoiceView;
- (void)layoutSubviews;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)initView;
- (void)stopPlaySound;
- (void)playTipsSound:(id)arg1 ofType:(id)arg2;
- (void)asyncPlayTipsSound;
- (void)updateLocalRender;
- (void)updateInputOutputRender:(_Bool)arg1;
- (void)checkSmallCameraHide;
- (void)updateTipsView;
- (void)updateTipsStatusLabel;
- (void)dealloc;
- (void)applicationBecomeActive;
- (void)applicationGotoBackground;
- (void)applicationOnHomeGotoBackGround;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 AllowVideo:(_Bool)arg3 AndIsMinimizeMode:(_Bool)arg4 delegate:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(_Bool)arg7 isShowCSVideo:(_Bool)arg8;
- (void)startTalkWithAllowVideo:(_Bool)arg1;
- (void)clearRenderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

