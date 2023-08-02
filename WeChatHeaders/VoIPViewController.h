//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "AVRoutePickerViewDelegate-Protocol.h"
#import "AVVideoDeviceDelegate-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "IVOIPVideoDeviceDelegate-Protocol.h"
#import "MinimizeNewTransitionControllerDelegate-Protocol.h"
#import "SmallCameraViewDelegate-Protocol.h"
#import "VoIPTalkingViewDelegate-Protocol.h"
#import "VoipUIManagerExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCameraModuleDelegate-Protocol.h"

@class AVRoutePickerView, CADisplayLink, CContact, CMessageWrap, MMStringToastView, MMUIButton, MinimizeNewTransitionController, MultiTalkHDHeadView, NSString, RingBackSoundCoordinator, RingDancingButton, RingToneDetail, UIImageView, UILabel, UIView, VoIPHeadImageBlurView, VoIPTalkingView, VoipMinimizeReportObject, WCUIAlertView;
@protocol VoIPViewControllerDelegate;

@interface VoIPViewController : MMWindowViewController <WCActionSheetDelegate, MinimizeNewTransitionControllerDelegate, AVRoutePickerViewDelegate, WCCameraModuleDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VoIPTalkingViewDelegate, IVOIPVideoDeviceDelegate, VoipUIManagerExt>
{
    unsigned int _status;
    CContact *_contact;
    UIImageView *_backgroundView;
    UIImageView *m_profileBackgroundView;
    CMessageWrap *_msgWrap;
    _Bool _isConnectOK;
    _Bool _isAcceptVoice;
    _Bool _canUpdateStatusMachine;
    unsigned int _startTalkingTime;
    int m_viewInitMode;
    UILabel *m_mainStatusLabel;
    _Bool m_forceToVoice;
    _Bool m_hasStopBellSound;
    _Bool m_hasInvokeToAudioAnimation;
    _Bool m_hasCalculateBlurView;
    _Bool m_isMinimizeMode;
    _Bool _isEnding;
    _Bool _lastTalkEnding;
    _Bool _isSpeakModeOpen;
    _Bool _isMicOpen;
    _Bool _isVideoModeOpen;
    _Bool _frontVirtualBackgroundOn;
    _Bool _backVirtualBackgroundOn;
    _Bool _isFrontCamera;
    _Bool _disableVirtualBackground;
    _Bool _disableCameraTurnOffDesign;
    _Bool _isPreAuthorized;
    _Bool _supportToastLocationSame;
    _Bool _supportNewSpeakerBtn;
    _Bool _isShowingAirplay;
    _Bool _isAirplayLoading;
    _Bool _isIlink;
    _Bool _isCameraInterrupt;
    _Bool _m_shouldChange;
    _Bool _m_isLandSpaceMode;
    _Bool _hasDisabledProximityToPresentSettingViewController;
    _Bool _hasShowRingBackInfoView;
    unsigned int initTime;
    unsigned int _deviceStatus;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    VoIPHeadImageBlurView *m_blurView;
    MMUIButton *m_minimizeButton;
    VoIPTalkingView *m_talkingView;
    VoipMinimizeReportObject *m_reportObject;
    UIView *m_warningView;
    id <VoIPViewControllerDelegate> _m_delegate;
    WCUIAlertView *_alertView;
    long long _netStatusTipType;
    RingBackSoundCoordinator *_ringCoordinator;
    RingToneDetail *_ringDetail;
    unsigned long long _openFrom;
    unsigned long long _m_roomId;
    long long _m_roomKey;
    RingDancingButton *_ringDancingButton;
    unsigned long long _exceptionType;
    UILabel *_m_warningLabel;
    double _m_oldOriginY;
    UILabel *_m_netStatusLabel;
    UIView *_netStatusTipView;
    UIImageView *_netStatusArrowIconView;
    CADisplayLink *_ringDisplayLink;
    UIView *_marqueeUponView;
    UILabel *_marqueeUponLabel;
    long long _lastEndRoomKey;
    MinimizeNewTransitionController *_transitionController;
    UIImageView *_m_snapshotBlurView;
    MMStringToastView *_toastView;
    AVRoutePickerView *_avRouteView;
    NSString *_prevPortType;
}

+ (id)getCurrentTopViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prevPortType; // @synthesize prevPortType=_prevPortType;
@property(retain, nonatomic) AVRoutePickerView *avRouteView; // @synthesize avRouteView=_avRouteView;
@property(retain, nonatomic) MMStringToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIImageView *m_snapshotBlurView; // @synthesize m_snapshotBlurView=_m_snapshotBlurView;
@property(retain, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) _Bool hasShowRingBackInfoView; // @synthesize hasShowRingBackInfoView=_hasShowRingBackInfoView;
@property(nonatomic) long long lastEndRoomKey; // @synthesize lastEndRoomKey=_lastEndRoomKey;
@property(nonatomic) __weak UILabel *marqueeUponLabel; // @synthesize marqueeUponLabel=_marqueeUponLabel;
@property(nonatomic) __weak UIView *marqueeUponView; // @synthesize marqueeUponView=_marqueeUponView;
@property(retain, nonatomic) CADisplayLink *ringDisplayLink; // @synthesize ringDisplayLink=_ringDisplayLink;
@property(nonatomic) _Bool hasDisabledProximityToPresentSettingViewController; // @synthesize hasDisabledProximityToPresentSettingViewController=_hasDisabledProximityToPresentSettingViewController;
@property(retain, nonatomic) UIImageView *netStatusArrowIconView; // @synthesize netStatusArrowIconView=_netStatusArrowIconView;
@property(retain, nonatomic) UIView *netStatusTipView; // @synthesize netStatusTipView=_netStatusTipView;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(nonatomic) _Bool m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) double m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(nonatomic) _Bool m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(retain, nonatomic) UILabel *m_warningLabel; // @synthesize m_warningLabel=_m_warningLabel;
@property(nonatomic) _Bool isCameraInterrupt; // @synthesize isCameraInterrupt=_isCameraInterrupt;
@property(nonatomic) _Bool isIlink; // @synthesize isIlink=_isIlink;
@property(nonatomic) _Bool isAirplayLoading; // @synthesize isAirplayLoading=_isAirplayLoading;
@property(nonatomic) unsigned int deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(nonatomic) _Bool isShowingAirplay; // @synthesize isShowingAirplay=_isShowingAirplay;
@property(nonatomic) _Bool supportNewSpeakerBtn; // @synthesize supportNewSpeakerBtn=_supportNewSpeakerBtn;
@property(nonatomic) _Bool supportToastLocationSame; // @synthesize supportToastLocationSame=_supportToastLocationSame;
@property(nonatomic) unsigned long long exceptionType; // @synthesize exceptionType=_exceptionType;
@property(nonatomic) _Bool isPreAuthorized; // @synthesize isPreAuthorized=_isPreAuthorized;
@property(nonatomic) _Bool disableCameraTurnOffDesign; // @synthesize disableCameraTurnOffDesign=_disableCameraTurnOffDesign;
@property(nonatomic) _Bool disableVirtualBackground; // @synthesize disableVirtualBackground=_disableVirtualBackground;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool backVirtualBackgroundOn; // @synthesize backVirtualBackgroundOn=_backVirtualBackgroundOn;
@property(nonatomic) _Bool frontVirtualBackgroundOn; // @synthesize frontVirtualBackgroundOn=_frontVirtualBackgroundOn;
@property(retain, nonatomic) RingDancingButton *ringDancingButton; // @synthesize ringDancingButton=_ringDancingButton;
@property(nonatomic) long long m_roomKey; // @synthesize m_roomKey=_m_roomKey;
@property(nonatomic) unsigned long long m_roomId; // @synthesize m_roomId=_m_roomId;
@property(nonatomic) unsigned long long openFrom; // @synthesize openFrom=_openFrom;
@property(retain, nonatomic) RingToneDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(retain, nonatomic) RingBackSoundCoordinator *ringCoordinator; // @synthesize ringCoordinator=_ringCoordinator;
@property(nonatomic) _Bool isVideoModeOpen; // @synthesize isVideoModeOpen=_isVideoModeOpen;
@property(nonatomic) _Bool isMicOpen; // @synthesize isMicOpen=_isMicOpen;
@property(nonatomic) _Bool isSpeakModeOpen; // @synthesize isSpeakModeOpen=_isSpeakModeOpen;
@property(nonatomic) long long netStatusTipType; // @synthesize netStatusTipType=_netStatusTipType;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <VoIPViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool lastTalkEnding; // @synthesize lastTalkEnding=_lastTalkEnding;
@property(nonatomic) _Bool isEnding; // @synthesize isEnding=_isEnding;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *m_warningView; // @synthesize m_warningView;
@property(nonatomic) unsigned int initTime; // @synthesize initTime;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) VoIPTalkingView *m_talkingView; // @synthesize m_talkingView;
@property(retain, nonatomic) MMUIButton *m_minimizeButton; // @synthesize m_minimizeButton;
@property(nonatomic) _Bool m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) VoIPHeadImageBlurView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (long long)cameraModuleReportScene;
- (void)cameraModuleInterruptionCancel:(id)arg1;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)endCameraInterruption;
- (void)startCameraInterruption;
- (void)onChangeVideoMode;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)showAirplayOvertime;
- (void)showAirplayLoading;
- (void)showAirplay;
- (void)addMultiAudioDeviceView;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(_Bool)arg3;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (_Bool)shouldBlockSlipGesture;
- (id)getVideoSnapshotViewBeforeTalk;
- (id)getSnapshotView;
- (void)onMinimizeTransitionBeginWithoutContext;
- (void)onMinimizeTransitionChanged:(double)arg1 translation:(struct CGPoint)arg2;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (id)getMinimizationTransitionContext;
- (void)onFinishMinimizeCircleInteraction:(_Bool)arg1;
- (_Bool)shouldBeginMinimizeCircleInteraction;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldBlockGesture;
- (void)resetNormalView;
- (void)initMinimizePanGesture;
- (void)clearPanGesture;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (id)specialTouchAreaView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)OnRemoteEarMode;
- (void)OnRemoteVideoMode;
- (_Bool)useTransparentNavibar;
- (void)cancelOrEndCallActionImmediately:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelOrEndCallActionImmediately:(_Bool)arg1;
- (void)cancelOrEndCallAction;
- (void)closeWithCompletion:(CDUnknownBlockType)arg1;
- (void)onVoipFailToAddMinimizeTask;
- (void)backFromMinimise;
- (void)UIManagerWindowWillExtendFromCollapse;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerWillExtendWindow;
- (void)onVoipWarningMsgArrived;
- (void)layoutSubViews;
- (void)viewDidLayoutSubviews;
- (void)onTapNetStatusTipView;
- (void)hideNetStatusTip;
- (void)showNetStatusTipWithType:(long long)arg1;
- (void)layoutNetStatusLabel;
- (void)initNetStatusLabel;
- (void)setToastAlpha:(double)arg1;
- (void)changeVoIPToastOriginY:(double)arg1 height:(double)arg2;
- (void)layoutToastView;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(_Bool)arg4;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (id)getContact;
- (void)switchToAudioModeAnimation;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (_Bool)getIsVoiceMode;
- (int)getModeActionStatus;
- (_Bool)getLocalVideoClosed;
- (_Bool)getRemoteVideoClosed;
- (int)getUse1080pSharpen;
- (int)getUseSharpenFilterConfig;
- (_Bool)getIfEnableRCI;
- (void)HangupWithReason:(int)arg1;
- (_Bool)isInitVideoMode;
- (_Bool)isVideoMode;
- (void)setMainStatusString:(id)arg1;
- (id)getRemoteSourceDevice;
- (unsigned int)getRemoteWxVer;
- (long long)getVideoOrientation;
- (_Bool)getIfThisTalkIlink;
- (void)VideoStatusChange:(_Bool)arg1 update:(_Bool)arg2 notify:(_Bool)arg3;
- (id)getInputVideoRenderView;
- (void)changeInputRenderFrame:(struct CGRect)arg1;
- (id)getOutputVideoRenderLock;
- (id)getInputVideoRenderLock;
- (id)getOutputVideoRenderView;
- (void)changeRenderFrame:(struct CGRect)arg1;
- (void)setRemoteViewRenderer:(id)arg1;
- (void)setLocalViewRenderer:(id)arg1;
- (void)setInputVideoRender:(id)arg1;
- (void)setOutputVideoRender:(id)arg1;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)voipAppGotoBackground;
- (void)voipAppBecomeActive;
- (void)setVideoDelegate:(id)arg1;
- (_Bool)getIsMinimizeView;
- (_Bool)getIsCameraFront;
- (_Bool)isRemoteUsePhone;
- (void)setVirtualBackground:(_Bool)arg1 isFront:(_Bool)arg2;
- (unsigned long long)getDangerRoomKey;
- (unsigned long long)getDangerRoomId;
- (_Bool)getIsDangerTalk;
- (id)getDangerUserTips;
- (long long)getRoomKey;
- (unsigned long long)getRoomId;
- (unsigned int)getRoomType;
- (void)FlipCamera;
- (void)setIsUserAbort:(unsigned int)arg1;
- (_Bool)getIsTalked;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3;
- (void)setIfNeedSupplyExceptionMessage:(int)arg1;
- (_Bool)onVideoVoipTalkingViewIsVoipTalking;
- (_Bool)onVideoVoipTalkingViewRequestMinimizeStatus;
- (void)didOnVideoVoipViewChangeToMinimizeMode;
- (void)onVideoVoipTalkingViewSwitchToSmall;
- (_Bool)isVideoVoipTalkingViewInitWithVideoMode;
- (void)onVideoVoipTalkingViewEndCall;
- (void)onVideoVoipTalkingViewHangUp;
- (void)onVoIPStartCameraInterruption;
- (void)forceEndCall;
- (void)clearRenderView;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldLaunchEndingFeedbackWhenEndingCall;
- (_Bool)shouldQuitAutomaticallyWhenEndingCall;
- (void)updateNetTypeStatus;
- (void)onVoIPChangeExceptionType:(unsigned long long)arg1;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnLocalEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
- (void)processMarquee;
- (void)stopMarquee;
- (void)startMarquee;
- (void)relayoutRingDancingButtonWithRecentStatue;
- (void)layoutRingBackDancingButton;
- (void)endAirplayLoadingState;
- (void)reportAllButtonStatus:(int)arg1;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)switchToTalkingView;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (_Bool)isTalking;
- (_Bool)isCalling;
- (_Bool)isCaller;
- (void)dealloc;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)unregisterAllExtensions;
- (long long)preferredStatusBarStyle;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 delegate:(id)arg6;
- (void)resetExpandViewElement:(_Bool)arg1;
- (void)layoutTalkingView;
- (void)slipToMinimizeView:(id)arg1;
- (void)changeToMinimizeView;
- (void)onSmallSwitchButtonClick;
- (_Bool)accessibilityPerformEscape;
- (void)layoutMinimizeButton;
- (void)initRingCoordinator;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (void)checkAndUpdateProximity;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)layoutMainStatusLabel;
- (double)maxMainStatusLabelWidth;
- (double)minMainStatusLabelWidth;
- (void)layoutWarningView;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutBlurView;
- (void)layoutProfileBackgroundView;
- (void)layoutBackgroundView;
- (struct CGRect)viewRect;
- (struct CGSize)viewSize;
- (void)updateStatusLabel;
- (void)formVOIPMessageWhenCall;
@property(readonly, nonatomic) long long roomKey;
@property(readonly, nonatomic) unsigned long long roomID;
- (void)supplementLocalBubbleMessage;
- (int)wordingType;
- (_Bool)isFromMyselfForFormingVOIPMessageWhenCall;
- (_Bool)shouldFormVoIPMessageWhenCall;
- (void)feedback;
- (_Bool)isForceFullScreen;
- (void)hide;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

