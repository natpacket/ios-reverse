//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "INetworkStatusMgrExt-Protocol.h"

@class MFBannerBtn, MMTimer, NetworkCheckViewController, UIButton, UIViewController;
@protocol MFBanner, MFPushSystemMsgDelegate;

@interface MFPushSystemMsgLogic : MMObject <INetworkStatusMgrExt>
{
    MFBannerBtn *m_banner;
    NetworkCheckViewController *m_networkCheckViewController;
    unsigned int m_uiTipStatus;
    MMTimer *m_progressTimer;
    id <MFPushSystemMsgDelegate> _delegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MFPushSystemMsgDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton<MFBanner> *bannerBtn; // @synthesize bannerBtn=m_banner;
- (void)showDisconnetStatusNetworkTip;
- (id)disconnetStatusBannerDesc;
- (void)updateSystemNetworkNotification:(unsigned int)arg1;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(id)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)dismissSystemMessage;
- (void)updateProgress;
- (void)onBannerClick:(id)arg1;
- (void)makeNewPushSymtemView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

