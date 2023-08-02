//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMIlinkLiteAppResourceMgrDelegate-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMLiteAppDownloadMgrDelegate-Protocol.h"
#import "MMPageSheetAdapterDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMIlinkLiteAppResourceMgr, MMLiteAppDownloadMgr, MMLiteAppInfoItem, MMPageSheetAdapter, NSMutableDictionary, NSString, WxaRouterConfig;

@interface MMLiteAppMgr : MMUserService <MMKernelExt, INewSyncExt, IMsgExt, MMPageSheetAdapterDelegate, MMLiteAppDownloadMgrDelegate, MMIlinkLiteAppResourceMgrDelegate, MMServiceProtocol>
{
    NSMutableDictionary *_configKV;
    NSMutableDictionary *_startReports;
    NSMutableDictionary *_checkFromDic;
    NSMutableDictionary *_createLiteAppCallbacks;
    NSMutableDictionary *_createLiteAppstoreInfos;
    _Bool _isGestureEnable;
    _Bool _isExecutingLiteAppCode;
    _Bool _isAllowCreateLiteApp;
    NSMutableDictionary *_configCGI;
    WxaRouterConfig *_config;
    MMLiteAppDownloadMgr *_downloadMgr;
    MMIlinkLiteAppResourceMgr *_resourceMgr;
    NSString *_currentAppId;
    MMPageSheetAdapter *_pageSheetAdapter;
    CDUnknownBlockType _halfScreenClosed;
    MMLiteAppInfoItem *_lastOpenLiteAppInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppInfoItem *lastOpenLiteAppInfo; // @synthesize lastOpenLiteAppInfo=_lastOpenLiteAppInfo;
@property(nonatomic) _Bool isAllowCreateLiteApp; // @synthesize isAllowCreateLiteApp=_isAllowCreateLiteApp;
@property(copy, nonatomic) CDUnknownBlockType halfScreenClosed; // @synthesize halfScreenClosed=_halfScreenClosed;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(nonatomic) _Bool isExecutingLiteAppCode; // @synthesize isExecutingLiteAppCode=_isExecutingLiteAppCode;
@property(nonatomic) _Bool isGestureEnable; // @synthesize isGestureEnable=_isGestureEnable;
@property(retain, nonatomic) MMIlinkLiteAppResourceMgr *resourceMgr; // @synthesize resourceMgr=_resourceMgr;
@property(retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) WxaRouterConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableDictionary *configCGI; // @synthesize configCGI=_configCGI;
- (void)preloadData:(id)arg1 urls:(id)arg2 preloadImages:(id)arg3;
- (id)generateEntryPointArgs;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (int)unsubscribeStore:(id)arg1 pointers:(id)arg2;
- (int)subscribeStore:(id)arg1 pointers:(id)arg2;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 obj:(id)arg3;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3;
- (_Bool)storeIsAlive:(id)arg1;
- (void)releaseStore:(id)arg1;
- (void)createStore:(id)arg1 aliveSeconds:(int)arg2 waitDownload:(_Bool)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)reportUpdateTime:(id)arg1 appId:(id)arg2 costTime:(unsigned long long)arg3 downloadItem:(id)arg4 from:(unsigned long long)arg5;
- (void)reportOpenLiteApp:(id)arg1 switchClose:(_Bool)arg2 withPkg:(_Bool)arg3 type:(unsigned long long)arg4 time:(unsigned long long)arg5;
- (void)dataReporting:(id)arg1 dictData:(id)arg2;
- (void)dataReporting:(id)arg1 data:(id)arg2;
- (id)_getQueryDict:(id)arg1;
- (void)onUpdateCallback:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 downloadItem:(id)arg3 from:(unsigned long long)arg4;
- (void)onUpdateFinish:(id)arg1 appId:(id)arg2 from:(unsigned long long)arg3;
- (_Bool)isReleaseDefaultEngine;
- (void)onExitLiteApp:(id)arg1;
- (void)onEnterLiteApp:(id)arg1;
- (void)onSignalCrash;
- (void)releaseFlutterEngine;
- (void)onDownloadResource:(id)arg1 errorType:(unsigned long long)arg2 errorCode:(int)arg3;
- (void)onCheckResource:(id)arg1 errorType:(unsigned long long)arg2 errorCode:(int)arg3;
- (void)configParameters:(void *)arg1;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (_Bool)reduplicatedRequest:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)onCheckCallback:(id)arg1 appId:(id)arg2 startTime:(unsigned long long)arg3 from:(unsigned long long)arg4;
- (void)checkLiteAppBaseLib:(long long)arg1 from:(unsigned long long)arg2;
- (void)updateLiteAppTable;
- (void)updateBaseLibTable;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNewSyncIPXX:(id)arg1;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)updateLiteApp:(id)arg1;
- (void)onDevQrCodeScaned:(id)arg1;
- (void)onNewDevQrCodeScaned:(id)arg1;
- (_Bool)isPopGestureEnable;
- (void)releaseBaseLib;
- (void)loadBaseLib;
- (id)preparedRouter;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2 ignoreSwitch:(_Bool)arg3 from:(unsigned long long)arg4 isAutoCheck:(_Bool)arg5;
- (void)checkLiteApp:(id)arg1 from:(unsigned long long)arg2;
- (_Bool)isNeedCheck:(id)arg1;
- (void)checkLiteApp:(id)arg1 updateInterval:(long long)arg2;
- (void)startCheckUpdate;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(_Bool)arg2;
- (id)getLiteAppLatestBaseLibInfo;
- (id)getAuthUrl:(id)arg1;
- (_Bool)isOpenLiteAppANR;
- (void)updateOpenLiteAppANR;
- (_Bool)isLiteAppSwitchOn:(id)arg1 forOpen:(_Bool)arg2;
- (_Bool)isLiteAppSwitchOn:(id)arg1;
- (_Bool)getLiteAppSwitch:(id)arg1;
- (_Bool)canDownloadLiteApp:(id)arg1;
- (id)checkAndGetAppInfo:(id)arg1 checkCrash:(_Bool)arg2 forOpen:(_Bool)arg3;
- (_Bool)isLiteAppCanOpen:(id)arg1 checkCrash:(_Bool)arg2;
- (_Bool)isGlobalLiteAppEnable;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)dismissLiteAppHalfScreenWithAnimated:(_Bool)arg1;
- (void)showLiteAppHalfScreenWithAnimated:(_Bool)arg1;
- (void)startLiteAppView:(id)arg1 openInfo:(id)arg2;
- (id)createLiteAppView;
- (id)createLiteAppEmbedView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 isTransparent:(_Bool)arg5 signatureKey:(id)arg6;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 height:(double)arg7 isTransparent:(_Bool)arg8 whenClosed:(CDUnknownBlockType)arg9;
- (id)createLiteAppViewHalfScreen:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 height:(double)arg7 isTransparent:(_Bool)arg8;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 isHalfScreen:(_Bool)arg7 isTransparent:(_Bool)arg8;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 isTransparent:(_Bool)arg7;
- (id)createLiteAppViewController:(id)arg1 localFilePath:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6;
- (void)asyncCreateGameLiteApp:(id)arg1 pkgId:(id)arg2 storeData:(id)arg3 preloadImgUrls:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5;
- (void)asyncCreateLiteApp:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)createLiteApp:(id)arg1 path:(id)arg2 signatureKey:(id)arg3;
- (void)createViewControllerTimeout:(id)arg1 sync:(_Bool)arg2 callback:(CDUnknownBlockType)arg3 info:(id)arg4;
- (_Bool)preloadLiteApp:(id)arg1 page:(id)arg2 onlyPreLoadBaseLib:(_Bool)arg3;
- (void)releasePrepareLiteApp;
- (void)prepareLiteApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

