//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IChatLogDataMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "WCMomentsContactTagListViewControllerDelegate-Protocol.h"
#import "WXGChatLogSessionViewControllerDelegate-Protocol.h"
#import "WXGDownloadSessionViewControllerDelegate-Protocol.h"
#import "WXGRoamDiskBridgeDelegate-Protocol.h"

@class MMTimer, NSArray, NSMutableDictionary, NSString, WXGDownloadSessionSelectViewController, WXGRoamCardViewController, WXGRoamDiskBridge, WXGRoamHalfScreenView, WXGRoamSelectHalfScreenView, WXGRoamWindowViewController;

@interface WXGRoamService : MMUserService <WXGRoamDiskBridgeDelegate, WXGChatLogSessionViewControllerDelegate, WXGDownloadSessionViewControllerDelegate, SessionSelectControllerDelegate, WCMomentsContactTagListViewControllerDelegate, MMKernelExt, IChatLogDataMgrExt, INetworkStatusMgrExt, MMServiceProtocol>
{
    _Bool _isBackup;
    _Bool _hasLastChosen;
    _Bool _hasRangeSelected;
    _Bool _bShowBanner;
    _Bool _isInAutoBackup;
    _Bool _bStopped;
    _Bool _bRetry;
    _Bool _bNeedNotifySpace;
    _Bool _bNeedAutoBackup;
    _Bool _bCheckState;
    _Bool _bShouldNotInteruption;
    int _currentState;
    NSString *_workingDeviceID;
    NSString *_currentDeviceID;
    NSString *_workingNickName;
    unsigned long long _autoBackupRange;
    NSArray *_autoBackupUsers;
    unsigned long long _currentNASFreeSpace;
    WXGRoamDiskBridge *_diskBridge;
    NSString *_curAutoBackupDeviceId;
    NSString *_workingBSSID;
    WXGRoamCardViewController *_roamCardVC;
    WXGRoamWindowViewController *_roamWindwoVC;
    WXGDownloadSessionSelectViewController *_restoreSelectVC;
    WXGRoamHalfScreenView *_roamHalfView;
    WXGRoamSelectHalfScreenView *_roamSelectHalfView;
    MMTimer *_autoBackupTimer;
    NSMutableDictionary *_liteAppDict;
    unsigned long long _curUserAllChatLogSize;
    unsigned long long _curUserSelectedSize;
    CDUnknownBlockType _AfterGetBackupUserName;
    CDUnknownBlockType _AfterConnectTryBackup;
}

+ (void)reportStat:(unsigned long long)arg1 logString:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool bShouldNotInteruption; // @synthesize bShouldNotInteruption=_bShouldNotInteruption;
@property(nonatomic) _Bool bCheckState; // @synthesize bCheckState=_bCheckState;
@property(nonatomic) _Bool bNeedAutoBackup; // @synthesize bNeedAutoBackup=_bNeedAutoBackup;
@property(nonatomic) _Bool bNeedNotifySpace; // @synthesize bNeedNotifySpace=_bNeedNotifySpace;
@property(nonatomic) _Bool bRetry; // @synthesize bRetry=_bRetry;
@property(nonatomic) _Bool bStopped; // @synthesize bStopped=_bStopped;
@property(nonatomic) _Bool isInAutoBackup; // @synthesize isInAutoBackup=_isInAutoBackup;
@property(nonatomic) _Bool bShowBanner; // @synthesize bShowBanner=_bShowBanner;
@property(copy, nonatomic) CDUnknownBlockType AfterConnectTryBackup; // @synthesize AfterConnectTryBackup=_AfterConnectTryBackup;
@property(copy, nonatomic) CDUnknownBlockType AfterGetBackupUserName; // @synthesize AfterGetBackupUserName=_AfterGetBackupUserName;
@property(nonatomic) unsigned long long curUserSelectedSize; // @synthesize curUserSelectedSize=_curUserSelectedSize;
@property(nonatomic) unsigned long long curUserAllChatLogSize; // @synthesize curUserAllChatLogSize=_curUserAllChatLogSize;
@property(retain, nonatomic) NSMutableDictionary *liteAppDict; // @synthesize liteAppDict=_liteAppDict;
@property(retain, nonatomic) MMTimer *autoBackupTimer; // @synthesize autoBackupTimer=_autoBackupTimer;
@property(retain, nonatomic) WXGRoamSelectHalfScreenView *roamSelectHalfView; // @synthesize roamSelectHalfView=_roamSelectHalfView;
@property(retain, nonatomic) WXGRoamHalfScreenView *roamHalfView; // @synthesize roamHalfView=_roamHalfView;
@property(retain, nonatomic) WXGDownloadSessionSelectViewController *restoreSelectVC; // @synthesize restoreSelectVC=_restoreSelectVC;
@property(retain, nonatomic) WXGRoamWindowViewController *roamWindwoVC; // @synthesize roamWindwoVC=_roamWindwoVC;
@property(retain, nonatomic) WXGRoamCardViewController *roamCardVC; // @synthesize roamCardVC=_roamCardVC;
@property(copy, nonatomic) NSString *workingBSSID; // @synthesize workingBSSID=_workingBSSID;
@property(copy, nonatomic) NSString *curAutoBackupDeviceId; // @synthesize curAutoBackupDeviceId=_curAutoBackupDeviceId;
@property(retain, nonatomic) WXGRoamDiskBridge *diskBridge; // @synthesize diskBridge=_diskBridge;
@property(nonatomic) _Bool hasRangeSelected; // @synthesize hasRangeSelected=_hasRangeSelected;
@property(nonatomic) _Bool hasLastChosen; // @synthesize hasLastChosen=_hasLastChosen;
@property(nonatomic) _Bool isBackup; // @synthesize isBackup=_isBackup;
@property(nonatomic) unsigned long long currentNASFreeSpace; // @synthesize currentNASFreeSpace=_currentNASFreeSpace;
@property(retain, nonatomic) NSArray *autoBackupUsers; // @synthesize autoBackupUsers=_autoBackupUsers;
@property(nonatomic) unsigned long long autoBackupRange; // @synthesize autoBackupRange=_autoBackupRange;
@property(retain, nonatomic) NSString *workingNickName; // @synthesize workingNickName=_workingNickName;
@property(retain, nonatomic) NSString *currentDeviceID; // @synthesize currentDeviceID=_currentDeviceID;
@property(retain, nonatomic) NSString *workingDeviceID; // @synthesize workingDeviceID=_workingDeviceID;
- (void)unireport28098With:(int)arg1 action:(int)arg2 device:(id)arg3;
- (int)getCurDeviceType;
- (id)getReportData;
- (void)showLocalNotification;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onManulLogOut;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)setupAutoBackupEvent:(_Bool)arg1;
- (void)setupAutoBackupEvent;
- (void)autoBackup:(id)arg1;
- (void)getChatSizeAndStartAutoBackup:(id)arg1;
- (void)notifyAutoBackupChatLogSize;
- (void)getAutoBackupChatLogSize:(id)arg1 isAll:(_Bool)arg2;
- (void)autoBackupPhase;
- (void)checkRemindLongTimeBanner:(id)arg1;
- (_Bool)p_shouldAutoBackup:(id)arg1;
- (void)onDownloadSessionSelectCancel;
- (void)onDownloadSessionSelectSession:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 isAllSession:(_Bool)arg4;
- (void)onCancelSelectSession;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(_Bool)arg3 selectAllSession:(_Bool)arg4 selectTextOnly:(_Bool)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)onRoamDiskBridgeVersionConflict:(int)arg1 clientVersion:(id)arg2 serverVersion:(id)arg3;
- (void)onRoamDiskBridgeRequireChatSize:(id)arg1 isAll:(_Bool)arg2;
- (void)onRoamDiskBridgeStateChange:(id)arg1 toState:(int)arg2;
- (void)onRoamDiskBridgeGetBackupInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamDiskBridgeGetStorageServerInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamDiskBridgeDeleteBackupRet:(int)arg1;
- (void)onRoamDiskBridgeRestoreCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamDiskBridgeBackupCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamDiskBridgeStopFinishRet:(int)arg1;
- (void)onRoamDiskBridgeResumeFinishRet:(int)arg1;
- (void)onRoamDiskBridgePauseFinishRet:(int)arg1;
- (void)onRoamDiskBridgeRestoreFinishRet:(int)arg1;
- (void)onRoamDiskBridgeStartRestore:(id)arg1;
- (void)onRoamDiskBridgeImportFinish;
- (void)onRoamDiskBridgeBackupFinishRet:(int)arg1;
- (void)onRoamDiskBridgeStartBackup:(id)arg1;
- (void)onRoamDiskBridgeDisconnect;
- (void)onRoamDiskBridgeConnectDeviceID:(id)arg1 error:(int)arg2;
- (void)onRoamDiskBridgeGetNewDevice:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)contactTagListViewControllerCancelSelect:(id)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)showSelectAutoBackupTag:(id)arg1;
- (void)showSelectAutoBackupContact:(id)arg1 withSelected:(id)arg2;
- (void)showSelectAutoBackupContactwithSelected:(id)arg1;
- (void)showNewLiteApp:(id)arg1 pagePath:(id)arg2;
- (void)showLiteAppInRemind:(_Bool)arg1;
- (void)showLiteApp;
- (void)goToStorageManageView:(id)arg1;
- (void)setBannerIcon:(id)arg1 title:(id)arg2;
- (void)closeBannerBtn;
- (void)showBannerBtn;
- (_Bool)isShowBanner:(id)arg1;
- (void)goToMainFrame;
- (void)updateBackupUserInfoWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)selectRestore:(id)arg1 deviceID:(id)arg2;
- (void)selectBackup:(id)arg1 deviceID:(id)arg2;
- (void)removeCacheLiteAppViewController:(id)arg1;
- (void)showRoamSelectHalfScreenView;
- (void)showRoamHalfScreenView;
- (void)minimizeRoamWindowVC;
- (void)hideRoamWindowVC;
- (void)showRoamWindowVC;
- (void)showRoamSelectionIsBackup:(_Bool)arg1;
- (void)showDeleteSelectVC;
- (void)showDeleteVC;
- (id)getRoamCardViewControllerWithDevice:(id)arg1 andQuery:(id)arg2;
- (id)p_liteAppViewController:(id)arg1 query:(id)arg2 pagePath:(id)arg3 cache:(_Bool)arg4;
- (id)getCacheLiteAppViewController:(id)arg1 query:(id)arg2;
- (id)getCacheLiteAppViewController:(id)arg1 pagePath:(id)arg2 query:(id)arg3;
- (id)getLiteAppViewController:(id)arg1 pagePath:(id)arg2 query:(id)arg3;
- (id)getLiteAppViewController:(id)arg1 query:(id)arg2;
- (void)setUpNotifyCodeOnMainThread:(unsigned long long)arg1;
- (void)setUpNotifyCode:(unsigned long long)arg1;
- (void)notifyCompleteSoon;
- (void)notifyNasInfoWithServerInfo:(id)arg1;
- (void)notifyDisconnectDevice;
- (void)notifyCurrentNotify;
- (void)notifyToStop;
- (void)notifyToReConnect;
- (void)notifyToRetry;
- (void)notifyToDisconnect;
- (void)notifyToResume;
- (void)notifyToPause;
- (void)notifyToStart;
- (void)onChatLogCalculateBackupChatLogFilter:(unsigned long long)arg1;
- (void)onChatLogCalculateBackupChatLogEnd:(unsigned long long)arg1;
- (void)checkAutoBackupSpace:(unsigned long long)arg1;
- (void)checkSpaceIsEnouge:(unsigned long long)arg1;
- (unsigned long long)getNetworkState;
- (unsigned long long)getDiskSize;
- (unsigned long long)getDiskFreeSize;
- (void)asyncGetUsersChatLogSize;
- (void)asyncGetChatLogSize;
- (id)getAutoBackupUserName:(id)arg1;
- (void)saveAutoBackup:(id)arg1 of:(id)arg2;
- (void)setAutoBackupRange:(unsigned long long)arg1 of:(id)arg2;
- (void)saveAutoBackupRangeAndUsers;
- (unsigned long long)getAutoBackupRange:(id)arg1;
- (id)curAutoBackupDeviceID;
- (_Bool)isOtherDeviceAutoBackupExcept:(id)arg1;
- (void)asyncGetServerInfo:(id)arg1;
- (int)getStateOfWorkingDevice;
- (int)getDeviceState:(id)arg1;
- (float)getBackupResotoreProgress;
- (id)getTransferStats;
- (void)asyncGetBackupUserInfoFromTime:(unsigned long long)arg1 toTime:(unsigned long long)arg2;
- (void)asyncGetBackupUserInfo;
- (void)resetAutobackupState:(id)arg1;
- (void)deleteBackup:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)deleteBackup;
- (_Bool)haveIncompleteTask:(id)arg1;
- (id)checkIncompleteTask;
- (void)innerStop:(id)arg1;
- (void)stop:(id)arg1;
- (void)resume:(id)arg1;
- (void)pause;
- (void)startRestoreAll;
- (void)startRestore:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)startBackup:(id)arg1 isAuto:(_Bool)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)startBackup:(id)arg1 isAuto:(_Bool)arg2;
- (void)startBackup:(id)arg1;
- (void)startBackupAllAuto:(_Bool)arg1;
- (void)startBackupAll;
- (void)disconnect;
- (void)connect:(id)arg1;
- (void)scanDevice;
- (_Bool)isRoamWorking;
- (void)setCanInterrupt;
- (void)setShouldNoInterrupt;
- (void)checkState;
- (void)dealloc;
- (void)onServiceInit;
- (_Bool)isOpenNASService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

