//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ISysCallCheckExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MonoServiceMsgLogicDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "VoIPInvitationViewControllerDelegate-Protocol.h"

@class MMTipsViewController, NSString, VoIPInvitationInfo, VoIPInvitationViewController;
@protocol VoIPInvitationViewInfo;

@interface VoIPInvitationService : MMUserService <VoIPInvitationViewControllerDelegate, PBMessageObserverDelegate, ISysCallCheckExt, MonoServiceMsgLogicDelegate, MMServiceProtocol>
{
    VoIPInvitationViewController *_viewController;
    VoIPInvitationInfo *_acceptedInvitationInfo;
    MMTipsViewController *_tipsViewController;
}

+ (id)defaultService;
+ (_Bool)isEnable;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTipsViewController *tipsViewController; // @synthesize tipsViewController=_tipsViewController;
@property(retain, nonatomic) VoIPInvitationInfo *acceptedInvitationInfo; // @synthesize acceptedInvitationInfo=_acceptedInvitationInfo;
@property(retain, nonatomic) VoIPInvitationViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)UIManagerDidCloseCompletely;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)voIPInvitationViewControllerDidClear:(id)arg1;
- (void)voIPInvitationViewControllerWillClear:(id)arg1;
- (void)voIPInvitationViewController:(id)arg1 didClickQuickReplyWithInfo:(id)arg2;
- (id)currentAppTopViewController;
- (void)voIPInvitationViewController:(id)arg1 didHangupWithInfo:(id)arg2 manually:(_Bool)arg3;
- (void)voIPInvitationViewController:(id)arg1 didAcceptWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didClickWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 willScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollInWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 willScollInWithInfo:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;
- (void)rejectIfNeedAnimation:(_Bool)arg1;
- (void)acceptInvitationWithInfo:(id)arg1;
- (void)handleAccpetedInvitationInfoIfNeed;
- (void)rejectInvitationWithInfo:(id)arg1;
@property(readonly, nonatomic) id <VoIPInvitationViewInfo> currentViewInfo;
- (void)scrollIn;
- (_Bool)handleCancelMonoMsg:(id)arg1;
- (_Bool)handleInviteMonoMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

