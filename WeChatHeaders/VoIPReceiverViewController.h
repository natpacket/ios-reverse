//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VoIPViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IVoipCXMgrExt-Protocol.h"
#import "VoIPInvitationBreadthViewDelegate-Protocol.h"

@class MMTimer, MMUIActivityIndicatorView, MMUILabel, NSString, UIImageView, UIView, VOIPVideoRender, VoIPInvitationBreadthView, VoipDescriptionButton, VoipForceStartObject, VoipMonoMsg, XImageViewRenderer;

@interface VoIPReceiverViewController : VoIPViewController <IVoipCXMgrExt, VoIPInvitationBreadthViewDelegate, IRecordPermissionCheckExt>
{
    VoipMonoMsg *m_monoMsg;
    _Bool isNeedFormSysMsg;
    _Bool hasAcceptCall;
    _Bool hasHangUp;
    _Bool isNeedHangupForInvalidScene;
    _Bool hasCheckedRoomIsAlive;
    _Bool hasRealShowReceiveView;
    _Bool _m_hasInitCameraDevice;
    _Bool _isAuthing;
    _Bool _isSetupedSceneQuickReplyFromBreadth;
    unsigned int m_dotCountIncresement;
    unsigned int _m_timerCnt;
    VoipDescriptionButton *m_acceptBtn;
    VoipDescriptionButton *m_hangupButton;
    VoipDescriptionButton *m_videoModeButton;
    MMTimer *m_actingTimer;
    VoipDescriptionButton *m_voiceModeButton;
    UIView *m_cameraPreviewView;
    MMUILabel *m_videoVoipStatusInvitLabel;
    MMUIActivityIndicatorView *_acceptIndicatorView;
    VoipDescriptionButton *_m_virtualBackgroundButton;
    VoipDescriptionButton *_m_flipCameraButton;
    VOIPVideoRender *_m_localRender;
    XImageViewRenderer *_rciLocalRender;
    VoIPInvitationBreadthView *_breadthView;
    UIImageView *_breadthInviteTransformView;
    VoipForceStartObject *_inviteBreadthShowStatForceStartObject;
    VoipMonoMsg *_inviteMonoMsg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSetupedSceneQuickReplyFromBreadth; // @synthesize isSetupedSceneQuickReplyFromBreadth=_isSetupedSceneQuickReplyFromBreadth;
@property(retain, nonatomic) VoipMonoMsg *inviteMonoMsg; // @synthesize inviteMonoMsg=_inviteMonoMsg;
@property(retain, nonatomic) VoipForceStartObject *inviteBreadthShowStatForceStartObject; // @synthesize inviteBreadthShowStatForceStartObject=_inviteBreadthShowStatForceStartObject;
@property(nonatomic) _Bool isAuthing; // @synthesize isAuthing=_isAuthing;
@property(retain, nonatomic) UIImageView *breadthInviteTransformView; // @synthesize breadthInviteTransformView=_breadthInviteTransformView;
@property(retain, nonatomic) VoIPInvitationBreadthView *breadthView; // @synthesize breadthView=_breadthView;
@property(nonatomic) _Bool m_hasInitCameraDevice; // @synthesize m_hasInitCameraDevice=_m_hasInitCameraDevice;
@property(nonatomic) unsigned int m_timerCnt; // @synthesize m_timerCnt=_m_timerCnt;
@property(retain, nonatomic) XImageViewRenderer *rciLocalRender; // @synthesize rciLocalRender=_rciLocalRender;
@property(retain, nonatomic) VOIPVideoRender *m_localRender; // @synthesize m_localRender=_m_localRender;
@property(retain, nonatomic) VoipDescriptionButton *m_flipCameraButton; // @synthesize m_flipCameraButton=_m_flipCameraButton;
@property(retain, nonatomic) VoipDescriptionButton *m_virtualBackgroundButton; // @synthesize m_virtualBackgroundButton=_m_virtualBackgroundButton;
@property(retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView; // @synthesize acceptIndicatorView=_acceptIndicatorView;
@property _Bool hasRealShowReceiveView; // @synthesize hasRealShowReceiveView;
@property _Bool hasCheckedRoomIsAlive; // @synthesize hasCheckedRoomIsAlive;
@property(nonatomic) _Bool isNeedHangupForInvalidScene; // @synthesize isNeedHangupForInvalidScene;
@property(retain, nonatomic) MMUILabel *m_videoVoipStatusInvitLabel; // @synthesize m_videoVoipStatusInvitLabel;
@property(retain, nonatomic) UIView *m_cameraPreviewView; // @synthesize m_cameraPreviewView;
@property(nonatomic) _Bool hasHangUp; // @synthesize hasHangUp;
@property(nonatomic) _Bool hasAcceptCall; // @synthesize hasAcceptCall;
@property(nonatomic) _Bool isNeedFormSysMsg; // @synthesize isNeedFormSysMsg;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) VoipDescriptionButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) VoipDescriptionButton *m_videoModeButton; // @synthesize m_videoModeButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton;
@property(retain, nonatomic) VoipDescriptionButton *m_acceptBtn; // @synthesize m_acceptBtn;
- (void)UIManagerWillExtendWindow;
- (_Bool)shouldBlockGesture;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)arg1 manually:(_Bool)arg2;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)arg1 manually:(_Bool)arg2;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)arg1;
- (void)setupNormalModeFromBreadthModeWithAnimated:(_Bool)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)onFlipCamera;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (long long)preferredStatusBarStyle;
- (_Bool)useTransparentNavibar;
- (void)OnVoipCXReject;
- (void)OnRemoteEarModeFor2G;
- (void)OnRemoteEarMode;
- (void)switchToAudioModeAnimation;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)changeToRemoteEarModeBeforeAnswer;
- (void)changeToAcceptedAnimation;
- (void)clossLocalNotifyForInvalidInvitation;
- (void)onOtherDeviceHandleTalk:(id)arg1 WithStatus:(unsigned int)arg2;
- (void)OnBeHanguped:(id)arg1;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)doEndCallByCancel;
- (void)endCallByCancel;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldQuitAutomaticallyWhenEndingCall;
- (_Bool)shouldLaunchEndingFeedbackWhenEndingCall;
- (_Bool)isFromMyselfForFormingVOIPMessageWhenCall;
- (_Bool)shouldFormVoIPMessageWhenCall;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (void)checkLostNotifySync;
- (void)startShowView;
- (void)checkAndShowToast;
- (void)layoutSubViews;
- (void)layoutCameraPreview;
- (void)layoutTalkingView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadBreadthInviteTransformView;
- (void)loadBreadthView;
- (void)dealloc;
- (void)unregisterAllExtensions;
- (void)checkIsAnwseredForAliveRoomWithRoomID:(unsigned long long)arg1 RoomKey:(long long)arg2 RoomType:(unsigned int)arg3;
- (void)checkRoomIsAlive;
- (_Bool)isOnCheckingRoomIsAlive;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 monoMsg:(id)arg6 delegate:(id)arg7;
- (long long)roomKey;
- (unsigned long long)roomID;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)didOnVideoVoipViewChangeToMinimizeMode;
- (id)specialTouchAreaView;
- (_Bool)isInBreath;
@property(readonly, nonatomic) _Bool isInBreathQuickReplyScene;
@property(readonly, nonatomic) _Bool isInBreathInviteScene;
- (void)expandVideoVipView;
- (void)resetAddBackgroundView;
- (void)changeToMinimizeView;
- (void)tryToShowViopReceivedCard;
- (void)resetExpandViewElement:(_Bool)arg1;
- (void)setCameraBtnEnable;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionStartComplete;
- (void)changeToMinimizeViewFromBreadth;
- (void)backFromMinimise;
- (void)hangupImmediately:(_Bool)arg1;
- (void)hangup;
- (void)onHangupButtonClick:(id)arg1;
- (void)realAcceptCall;
- (void)reportAllButtonStatus:(int)arg1;
- (void)layoutAcceptIndicatorView;
- (void)acceptCall;
- (void)onChangeVideoMode;
- (void)acceptByVoiceCall;
- (void)onFromBackgroundToForeground;
- (void)asyncPlaySound;
- (void)asyncAcceptAudio;
- (void)asyncAcceptVideo;
- (void)markLastVoipInfo;
- (void)setMonoMsg:(id)arg1;
- (_Bool)isCaller;
- (void)startCamera;
- (void)initCameraDevice;
- (id)getVideoSnapshotViewBeforeTalk;
- (void)initCameraView;
- (void)layoutVideovoipStatusInvitLabel;
- (void)updateProximityWithPort:(id)arg1;
- (void)updateProximityBySpeakerButtonState;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)layoutFlipCameraButton;
- (void)onBackgroundSelect;
- (void)layoutVirtualBackgroundButton;
- (void)updateVideoModeButtonText;
- (void)layoutVideoModeButton;
- (void)layoutVoiceModeButton;
- (void)layoutAcceptButton;
- (void)layoutHangupButton;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (_Bool)accessibilityPerformMagicTap;
- (void)updateStatusLabel;
- (void)autoUpdateMainStatusString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

