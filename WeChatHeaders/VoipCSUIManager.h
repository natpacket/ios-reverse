//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IVOIPExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMVoipCSMainWindowDelegate-Protocol.h"
#import "VideoVoipCSViewDelegate-Protocol.h"

@class MMVoipCSMainWindow, MMVoipToastWindow, NSString, VideoVoipCSCallerView;

@interface VoipCSUIManager : MMUserService <MMKernelExt, MMVoipCSMainWindowDelegate, VideoVoipCSViewDelegate, MMServiceProtocol, IVOIPExt, MMConfigMgrExt>
{
    MMVoipCSMainWindow *m_mainWindow;
    MMVoipToastWindow *m_voipCSToastWindow;
    VideoVoipCSCallerView *m_videoVoipCSViewController;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VideoVoipCSCallerView *m_videoVoipCSViewController; // @synthesize m_videoVoipCSViewController;
@property(retain, nonatomic) MMVoipToastWindow *m_voipCSToastWindow; // @synthesize m_voipCSToastWindow;
@property(retain, nonatomic) MMVoipCSMainWindow *m_mainWindow; // @synthesize m_mainWindow;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)SendInvite:(int)arg1;
- (void)Cancel;
- (struct CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (_Bool)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (void)onVideoVoipCSViewClose;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;
- (void)clearCurrentString;
- (_Bool)isUsingEarDevice;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (_Bool)isMinimizeMode;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (void)recoverVoipAudioMode;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVideoVoipWorking;
- (_Bool)isVoipWorking;
- (_Bool)isViewEnding;
- (_Bool)showVideoEntranceInMainFrame;
- (_Bool)closeViewWith:(id)arg1;
- (void)hangupForNotSupportVoiceVoip;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)openVideoVoipCSViewWithBizUserName:(id)arg1 andMsgWrap:(id)arg2 isEarMode:(_Bool)arg3 appid:(id)arg4 headUrl:(id)arg5 isAllowBackCamera:(_Bool)arg6 isShowCSVideo:(_Bool)arg7 context:(id)arg8;
- (_Bool)canStartVoip;
- (_Bool)canOpenVoipByTimeLogic:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

