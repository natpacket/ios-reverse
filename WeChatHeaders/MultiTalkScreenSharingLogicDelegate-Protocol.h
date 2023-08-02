//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class MultiTalkScreenSharingBaseViewController, MultiTalkScreenSharingLogic;

@protocol MultiTalkScreenSharingLogicDelegate <MMUIViewControllerDelegate, NSObject>
- (id)groupForScreenSharingLogic;

@optional
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didResumeSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didPauseSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didStopSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didStartSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
@end

