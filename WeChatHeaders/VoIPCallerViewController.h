//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VoIPViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IVideoRingNetProviderExt-Protocol.h"
#import "IVoipCXMgrExt-Protocol.h"
#import "VoipUIManagerExt-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class AnyPromise, MMTimer, NSString, UIImageView, UIView, VOIPVideoRender, VoipDescriptionButton, VoipRecentStatusCardView, VoipRecentStatusFoldButton, VoipRecentStatusUnFoldButton, XImageViewRenderer;
@protocol VoipRecentStatusProperties;

@interface VoIPCallerViewController : VoIPViewController <IRecordPermissionCheckExt, IVoipCXMgrExt, VoipUIManagerExt, WCAudioSessionExt, IVideoRingNetProviderExt>
{
    _Bool _shouldPlayRecentStatusSound;
    _Bool _disableToPlayRecentStatusSound;
    _Bool _m_hasHangup;
    _Bool _isRecentStatusFirstLayouted;
    _Bool _isRecentStatusAvailable;
    _Bool _isRecentStatusUnFolded;
    unsigned int m_dotCountIncresement;
    int _recentStatusUserSexType;
    UIView *m_cameraPreviewView;
    VoipDescriptionButton *m_videoModeButton;
    VoipDescriptionButton *m_forceToAudioButton;
    MMTimer *m_notOnlineTimer;
    MMTimer *m_actingTimer;
    VoipDescriptionButton *_m_hangupButton;
    VoipDescriptionButton *_m_speakerButton;
    VoipDescriptionButton *_m_micButton;
    UIImageView *_footerView;
    VoipDescriptionButton *_m_virtualBackgroundButton;
    VoipDescriptionButton *_m_flipCameraButton;
    VOIPVideoRender *_m_localRender;
    XImageViewRenderer *_rciLocalRenderer;
    VoipRecentStatusUnFoldButton *_recentStatusUnFoldButton;
    UIView *_recentStatusUnFoldHotView;
    VoipRecentStatusFoldButton *_recentStatusFoldButton;
    UIView *_recentStatusFoldHotView;
    UIView *_recentStatusContentsView;
    UIView *_recentStatusBlurView;
    VoipRecentStatusCardView<VoipRecentStatusProperties> *_recentStatusCardView;
    AnyPromise *_recentStatusPromise;
    NSString *_recentStatusUserName;
    id _recentStatusModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id recentStatusModel; // @synthesize recentStatusModel=_recentStatusModel;
@property(nonatomic) int recentStatusUserSexType; // @synthesize recentStatusUserSexType=_recentStatusUserSexType;
@property(retain, nonatomic) NSString *recentStatusUserName; // @synthesize recentStatusUserName=_recentStatusUserName;
@property(retain, nonatomic) AnyPromise *recentStatusPromise; // @synthesize recentStatusPromise=_recentStatusPromise;
@property(retain, nonatomic) VoipRecentStatusCardView<VoipRecentStatusProperties> *recentStatusCardView; // @synthesize recentStatusCardView=_recentStatusCardView;
@property(retain, nonatomic) UIView *recentStatusBlurView; // @synthesize recentStatusBlurView=_recentStatusBlurView;
@property(retain, nonatomic) UIView *recentStatusContentsView; // @synthesize recentStatusContentsView=_recentStatusContentsView;
@property(retain, nonatomic) UIView *recentStatusFoldHotView; // @synthesize recentStatusFoldHotView=_recentStatusFoldHotView;
@property(retain, nonatomic) VoipRecentStatusFoldButton *recentStatusFoldButton; // @synthesize recentStatusFoldButton=_recentStatusFoldButton;
@property(retain, nonatomic) UIView *recentStatusUnFoldHotView; // @synthesize recentStatusUnFoldHotView=_recentStatusUnFoldHotView;
@property(retain, nonatomic) VoipRecentStatusUnFoldButton *recentStatusUnFoldButton; // @synthesize recentStatusUnFoldButton=_recentStatusUnFoldButton;
@property(nonatomic) _Bool isRecentStatusUnFolded; // @synthesize isRecentStatusUnFolded=_isRecentStatusUnFolded;
@property(nonatomic) _Bool isRecentStatusAvailable; // @synthesize isRecentStatusAvailable=_isRecentStatusAvailable;
@property(nonatomic) _Bool isRecentStatusFirstLayouted; // @synthesize isRecentStatusFirstLayouted=_isRecentStatusFirstLayouted;
@property(retain, nonatomic) XImageViewRenderer *rciLocalRenderer; // @synthesize rciLocalRenderer=_rciLocalRenderer;
@property(retain, nonatomic) VOIPVideoRender *m_localRender; // @synthesize m_localRender=_m_localRender;
@property(retain, nonatomic) VoipDescriptionButton *m_flipCameraButton; // @synthesize m_flipCameraButton=_m_flipCameraButton;
@property(retain, nonatomic) VoipDescriptionButton *m_virtualBackgroundButton; // @synthesize m_virtualBackgroundButton=_m_virtualBackgroundButton;
@property(nonatomic) _Bool m_hasHangup; // @synthesize m_hasHangup=_m_hasHangup;
@property(retain, nonatomic) UIImageView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) VoipDescriptionButton *m_micButton; // @synthesize m_micButton=_m_micButton;
@property(retain, nonatomic) VoipDescriptionButton *m_speakerButton; // @synthesize m_speakerButton=_m_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton=_m_hangupButton;
@property(nonatomic) _Bool disableToPlayRecentStatusSound; // @synthesize disableToPlayRecentStatusSound=_disableToPlayRecentStatusSound;
@property(nonatomic) _Bool shouldPlayRecentStatusSound; // @synthesize shouldPlayRecentStatusSound=_shouldPlayRecentStatusSound;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) MMTimer *m_notOnlineTimer; // @synthesize m_notOnlineTimer;
@property(retain, nonatomic) VoipDescriptionButton *m_forceToAudioButton; // @synthesize m_forceToAudioButton;
@property(retain, nonatomic) VoipDescriptionButton *m_videoModeButton; // @synthesize m_videoModeButton;
@property(retain, nonatomic) UIView *m_cameraPreviewView; // @synthesize m_cameraPreviewView;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)onUpdateRecentStatusEnable:(_Bool)arg1;
- (id)videoVoipTalkingViewRecentStatusModel;
- (id)videoVoipTalkingViewRecentStatusUserName;
- (int)videoVoipTalkingViewRecentStatusUserSexType;
- (_Bool)isVideoVoipTalkingViewRecentStatusEnable;
- (void)onWCAudioSessionOverride;
- (void)foldupRecentStatus;
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
- (void)OnVoipCXCancel;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (void)OnStopPlaySound;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnNoAnswer:(id)arg1;
- (void)startCamera;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)reportAllButtonStatus:(int)arg1;
- (void)showAlertTips;
- (void)onFlipCamera;
- (void)switchToAudioViewAnimation;
- (void)onChangeVideoMode;
- (void)onClickVideoToVoiceButton;
- (void)onConfirmSwitchToVoice;
- (void)layoutFlipCameraButton;
- (void)updateVideoModeButtonText;
- (void)layoutVideoModeButton;
- (void)layoutSwitchAudioButton;
- (void)onBackgroundSelect;
- (void)layoutVirtualBackgroundButton;
- (void)layoutHangupButton;
- (void)updateMicButtonText;
- (void)onClickMicButton;
- (void)layoutMicButton;
- (void)updateProximityWithPort:(id)arg1;
- (void)updateProximityBySpeakerButtonState;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)updateSpeakerButtonText;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(_Bool)arg2;
- (void)updateSpeakerButton;
- (void)endAirplayLoadingState;
- (void)showAirplayLoadingState:(_Bool)arg1;
- (void)layoutSpeakerButton;
- (void)switchToAudioModeAnimation;
- (void)UIManagerDidExtendWindow;
- (id)getVideoSnapshotViewBeforeTalk;
- (void)initCameraView;
- (void)quickCancelOrEndCallAction;
- (void)cancelOrEndCallAction;
- (void)cancelCall;
- (void)call;
- (void)setCameraBtnEnable;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionStartComplete;
- (void)layoutFooterView;
- (void)layoutCameraPreview;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutTalkingView;
- (void)layoutRecentSitutaionCardView;
- (void)layoutRecentStatusBlurView;
- (void)layoutRecentStatusContentsView;
- (void)onClickRecentStatusFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusFoldHotView;
- (void)layoutRecentStatusFoldButton;
- (void)onClickRecentStatusUnFoldHotViewWithSender:(id)arg1;
- (void)hideButtons;
- (void)showButtons;
- (void)layoutRecentStatusUnFoldHotView;
- (void)relayoutRingDancingButtonWithRecentStatue;
- (void)layoutRecentStatusUnFoldButton;
- (void)layoutRecentStatusWithAnimate:(_Bool)arg1;
- (void)layoutRecentStatusFirstTime;
- (_Bool)isRecentStatusEnable;
- (void)refreshRecentStatusAudioSession;
- (_Bool)enableRecentStatusSound;
- (void)viewDidLoad;
- (void)layoutSubViews;
- (void)checkAndShowToast;
- (void)showRemoteNotOnlineTips;
- (void)dealloc;
- (void)unregisterAllExtensions;
- (_Bool)isCaller;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 delegate:(id)arg6;
- (void)layoutStatusLabel;
- (void)updateStatusLabel;
- (void)updateAndLayoutMainStatusString;
- (double)minMainStatusLabelWidth;
- (double)maxMainStatusLabelWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

