//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRoamServiceBannerExt-Protocol.h"
#import "IRoamServiceExt-Protocol.h"
#import "WXGRoamBackendHandlerDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, WXGRoamBackendHandler;

@interface WXGRoamPanelViewController : MMUIViewController <IRoamServiceExt, IRoamServiceBannerExt, WXGRoamBackendHandlerDelegate>
{
    UIScrollView *_scrollView;
    UILabel *_showInfoLabel;
    WXGRoamBackendHandler *_backendHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXGRoamBackendHandler *backendHandler; // @synthesize backendHandler=_backendHandler;
@property(retain, nonatomic) UILabel *showInfoLabel; // @synthesize showInfoLabel=_showInfoLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)onRoamBackendGetSeruceTunnelResponse:(id)arg1 success:(_Bool)arg2;
- (void)onRoamBackendGenNewEncrytKey:(id)arg1 success:(_Bool)arg2;
- (void)onRoamBackendGetEncrytKey:(id)arg1 success:(_Bool)arg2;
- (void)onRoamServiceSetBannerIcon:(id)arg1 title:(id)arg2;
- (void)onRoamServiceGetChatLogSize:(unsigned long long)arg1;
- (void)onRoamServiceSelectAutoBackupTag:(id)arg1;
- (void)onRoamServiceSelectAutoBackupContact:(id)arg1;
- (void)onRoamServiceSelectRecover:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceSelectBackup:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceGetBackupInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamServiceGetStorageServerInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamServiceDeleteBackupRet:(int)arg1;
- (void)onRoamServiceRestoreCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceResumeFinishRet:(int)arg1;
- (void)onRoamServiceRestoreFinishRet:(int)arg1;
- (void)onRoamServiceBackupCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceBackupFinishRet:(int)arg1;
- (void)onRoamServiceDisconnect;
- (void)onRoamServiceConnectRet:(int)arg1;
- (void)onRoamServiceGetNewDevice:(id)arg1;
- (void)genEncrytKey;
- (void)getEncrytKey;
- (void)getAllBackupSize;
- (void)setBanner;
- (void)closeBanner;
- (void)showBanner;
- (void)goSelectTag;
- (void)goSelectLastTalk;
- (void)getAutoBackup;
- (void)saveAutoBackup;
- (void)deleteBackup;
- (void)goToMainFrame;
- (void)restore;
- (void)backup;
- (_Bool)backupperCanDoSomethin;
- (void)getBackupUserName;
- (void)getInfo;
- (void)selectRestore;
- (void)selectBackup;
- (void)disconnect;
- (void)getStorageServerInfo;
- (void)connectDevice;
- (void)scanDevice;
- (void)getDeviceState;
- (void)getMsg;
- (void)getIncomplteTask;
- (void)resumeAction;
- (void)stopAction;
- (void)pauseAction;
- (void)showLiteApp;
- (void)getNetworkType;
- (void)getDiskFreeSize;
- (void)goToStorageManage;
- (void)getBackupResotoreProgress;
- (void)cleanCache;
- (void)enterRDMDeviceList;
- (void)setupScrollView;
- (void)viewDidLoad;
- (void)onPressRightNavigationButton;
- (void)onPressLeftNavigationButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
