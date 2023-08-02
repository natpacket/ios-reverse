//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMLimitedModeExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class JSVirtualMachine, MMWebOptimVideoCacheTask, MPPageFastLoadEventMgr, MPPageResourceDownloader, MPPageTemplateInfoContainer, MemoryMappedKV, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface MPPageFastLoadMgr : MMUserService <MMLimitedModeExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableArray *_downloadingInfoList;
    MPPageTemplateInfoContainer *_templateInfoContainer;
    unsigned int _lastCheckTemplateVersionTime;
    MPPageResourceDownloader *_templateDownloader;
    _Bool _isBatchReporting;
    _Bool _videoPreloadSwitch;
    _Bool _isInDispatchDelay;
    _Bool _enableFastLoadOnLimitedMode;
    NSMutableDictionary *_preloadWebViewDic;
    NSURLSession *_imageDownloadUrlSession;
    NSMutableArray *_imageWaitingQueue;
    NSMutableDictionary *_imageDownloadingTask;
    NSOperationQueue *_offlineCacheWorkQueue;
    unsigned long long _videoPreloadSwitchWithScene;
    MMWebOptimVideoCacheTask *_videoPrefetchTask;
    JSVirtualMachine *_jsVirtualMachine;
    NSMutableDictionary *_pageDataCacheItemDic;
    NSMutableArray *_unfilteredPageDataWaitQueue;
    NSMutableArray *_pageDataWaitQueue;
    NSMutableDictionary *_pageDataRequestDic;
    MemoryMappedKV *_mmkv;
    NSObject<OS_dispatch_queue> *_workQueue;
    MPPageFastLoadEventMgr *_eventMgr;
}

+ (_Bool)canUseMPFastLoadWithUrl:(id)arg1 fastLoadParam:(id)arg2;
+ (_Bool)isUseWebviewChildModePresetUIWithTemplateType:(unsigned int)arg1 enterType:(unsigned int)arg2 isPreload:(_Bool)arg3;
+ (id)webViewChildModePresetUI;
+ (unsigned int)templateTypeFromShowType:(unsigned int)arg1;
+ (_Bool)isKnownItemShowType:(unsigned int)arg1;
+ (_Bool)isSupportedFastload:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 andGetTemplateType:(unsigned int *)arg4;
+ (_Bool)isSupportedFastload:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3;
+ (unsigned long long)useFlagForIsPreCreateWebView:(_Bool)arg1 isSyncGetPageData:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableFastLoadOnLimitedMode; // @synthesize enableFastLoadOnLimitedMode=_enableFastLoadOnLimitedMode;
@property(retain, nonatomic) MPPageFastLoadEventMgr *eventMgr; // @synthesize eventMgr=_eventMgr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool isInDispatchDelay; // @synthesize isInDispatchDelay=_isInDispatchDelay;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSMutableDictionary *pageDataRequestDic; // @synthesize pageDataRequestDic=_pageDataRequestDic;
@property(retain, nonatomic) NSMutableArray *pageDataWaitQueue; // @synthesize pageDataWaitQueue=_pageDataWaitQueue;
@property(retain, nonatomic) NSMutableArray *unfilteredPageDataWaitQueue; // @synthesize unfilteredPageDataWaitQueue=_unfilteredPageDataWaitQueue;
@property(retain, nonatomic) NSMutableDictionary *pageDataCacheItemDic; // @synthesize pageDataCacheItemDic=_pageDataCacheItemDic;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) MMWebOptimVideoCacheTask *videoPrefetchTask; // @synthesize videoPrefetchTask=_videoPrefetchTask;
@property(nonatomic) _Bool videoPreloadSwitch; // @synthesize videoPreloadSwitch=_videoPreloadSwitch;
@property(nonatomic) unsigned long long videoPreloadSwitchWithScene; // @synthesize videoPreloadSwitchWithScene=_videoPreloadSwitchWithScene;
@property(retain, nonatomic) NSOperationQueue *offlineCacheWorkQueue; // @synthesize offlineCacheWorkQueue=_offlineCacheWorkQueue;
@property(retain, nonatomic) NSMutableDictionary *imageDownloadingTask; // @synthesize imageDownloadingTask=_imageDownloadingTask;
@property(retain, nonatomic) NSMutableArray *imageWaitingQueue; // @synthesize imageWaitingQueue=_imageWaitingQueue;
@property(retain, nonatomic) NSURLSession *imageDownloadUrlSession; // @synthesize imageDownloadUrlSession=_imageDownloadUrlSession;
@property(retain, nonatomic) NSMutableDictionary *preloadWebViewDic; // @synthesize preloadWebViewDic=_preloadWebViewDic;
- (void)initIAPServiceIfNeed;
- (void)didBecomeActive;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)pathOfLibraryDir;
- (id)pathOfCacheDir;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)clearPreloadWebViewWithScene:(unsigned long long)arg1;
- (id)generateWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 isPreload:(_Bool)arg3;
- (id)popPreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)preparePreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2;
- (id)userDefaultKeyWithName:(id)arg1;
- (id)changeUrlSchemeToHttps:(id)arg1;
- (void)removePageDataTriggerWithLimitedMode:(unsigned long long)arg1 sceneNote:(id)arg2;
- (void)destoryAllPreloadWebView;
- (void)destoryPreloadWebViewWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (id)webViewControllerWithType:(unsigned int)arg1 itemShowType:(unsigned int)arg2 enterType:(unsigned int)arg3 scene:(unsigned int)arg4 url:(id)arg5 pageDataKeyUrl:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 isUsedFastLoad:(_Bool *)arg9 useOfflineCache:(_Bool)arg10;
- (id)createWebViewCtrlMaybeUseFastLoad:(_Bool)arg1 itemShowType:(unsigned int)arg2 enterType:(unsigned int)arg3 scene:(unsigned int)arg4 urlForReport:(id)arg5 url:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 presetUI:(id)arg9 isUsedFastLoad:(_Bool *)arg10 forceUrl:(id *)arg11 useOfflineCache:(_Bool)arg12;
- (void)asyncPreparePreloadWebViewWithTypeList:(id)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (void)asyncPreparePreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (id)pageFastLoadEventMgr;
- (id)commonCheckTemplateTypeList;
- (unsigned int)templateTypeCommonShare;
- (unsigned int)templateTypeArticle;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2;
- (_Bool)isLowQualityNetworkCondition;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (_Bool)disableFastLoadOnLimitedMode;
- (_Bool)isUseFastLoadCommonShareTemplateWithImageAppMsg;
- (_Bool)isUseFastLoadCommonShareTemplateWithTextAppMsg;
- (_Bool)isUseFastLoadCommonShare;
- (unsigned long long)commonSharsUseFlag;
- (_Bool)isPrepareWebviewWithTemplateTypeIfNeeded:(unsigned int)arg1;
- (_Bool)canUseFastLoadWithEnterType:(unsigned int)arg1 templateType:(unsigned int)arg2 itemShowType:(unsigned int)arg3;
- (_Bool)isUseFastLoadWithEnterType:(unsigned int)arg1;
- (_Bool)isUsePreDownloadPageDataWithEnterType:(unsigned int)arg1;
- (_Bool)isUsePreCreateWebViewWithEnterType:(unsigned int)arg1;
- (unsigned long long)useFlagWithEnterType:(unsigned int)arg1;
- (unsigned long long)allOpenUseFlag;
- (void)onServiceInitWithCategoryCheckSwitch;
- (unsigned int)offlineCache_getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (_Bool)offlineCache_getPageForceUrlFullScreenValidState:(id)arg1;
- (void)checkAndUpdateExpireCacheItems;
- (void)deleteOfflineCacheWithIdentity:(id)arg1;
- (unsigned long long)offlineCachesSize;
- (unsigned long long)clearAllOfflineCaches;
- (id)offlineCache_getPageForceUrlWithUrl:(id)arg1;
- (id)offlineCache_getPageDataCacheItemWithIdentity:(id)arg1;
- (id)offlineCache_getPageDataOfflineCacheItem:(id)arg1;
- (void)offlineCache_addMPPageItemList:(id)arg1;
- (_Bool)offlineCache_isPageDataFileExistWithIdentity:(id)arg1;
- (_Bool)offlineCache_savePageDataContentToDisk:(id)arg1 identity:(id)arg2;
- (void)saveImageData:(id)arg1 forPageUrl:(id)arg2 andImageUrl:(id)arg3;
- (id)imageDataWithPageUrl:(id)arg1 andImageUrl:(id)arg2;
- (void)checkImageWaitingQueue;
- (void)onDownloadEndWithTask:(id)arg1 isSuccess:(_Bool)arg2;
- (void)handleDownloadWithDownloadTask:(id)arg1 Location:(id)arg2 andError:(id)arg3;
- (void)startOneImageDownloadTask:(id)arg1;
- (void)checkTaskExistAndReplaceOrAdd:(id)arg1;
- (void)addDownloadImageUrlList:(id)arg1 forIdentity:(id)arg2;
- (id)offlineCacheImagePathWithPageIdentity:(id)arg1 andFileName:(id)arg2;
- (id)offlineCacheImagePathWithImageDownloadTask:(id)arg1;
- (id)offlineCache_pageDataPathWithIdentity:(id)arg1;
- (id)offlineCacheFileDirWithIdentity:(id)arg1;
- (id)offlineCacheFileDir;
- (_Bool)isSupportOfflineCache;
- (_Bool)supportWxPic;
- (void)onServiceInitWithCategoryOfflineCache;
- (unsigned long long)getPreloadLimitDispatchDelay;
- (void)savePreloadLimitDispatchDelay:(unsigned long long)arg1;
- (id)getSceneControlWithScene:(unsigned int)arg1;
- (void)saveSceneControl:(id)arg1;
- (id)sceneControlStorageKeyWithScene:(unsigned int)arg1;
- (unsigned int)calcOfflineCacheRequestCount:(id)arg1;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3 isOfflineCache:(_Bool)arg4;
- (id)getPageForceUrlWithUrl:(id)arg1 isOfflineCache:(_Bool)arg2;
- (_Bool)getPageForceUrlFullScreenValidState:(id)arg1 isOfflineCache:(_Bool)arg2;
- (id)pageDataFilePathWithIdentity:(id)arg1 isOfflineCache:(_Bool)arg2;
- (_Bool)isPageDataFileExistWithIdentity:(id)arg1 isOfflineCache:(_Bool)arg2;
- (id)getPageDataCacheItem:(id)arg1 isOfflineCache:(_Bool)arg2;
- (_Bool)isPageDataFileExistWithIdentity:(id)arg1;
- (id)pageDataFilePathWithIdentity:(id)arg1;
- (id)pageDataFileDir;
- (void)removeAllMPPageCacheItemsWithScene:(unsigned long long)arg1 sceneNote:(id)arg2;
- (void)addMPPageCacheItemList:(id)arg1;
- (id)getPageDataCacheItemWithIdentity:(id)arg1;
- (id)getPageDataCacheItem:(id)arg1;
- (void)checkAndFilterPageDataWaitQueue;
- (void)checkUnfilteredPageDataWaitQueueAfterDelay;
- (void)addHeadOfUnfilteredPageDataWaitQueue:(id)arg1;
- (void)reportRequestPageDataWithContext:(id)arg1;
- (_Bool)saveResponsePageDataContentToDisk:(id)arg1 identity:(id)arg2;
- (void)updateUrlInfoCountInEnterType:(unsigned int)arg1 bizTimelineCount:(unsigned int *)arg2 bizSessionCount:(unsigned int *)arg3 commSessionCount:(unsigned int *)arg4 snsCount:(unsigned int *)arg5 bizProfileCount:(unsigned int *)arg6 webJSAPICount:(unsigned int *)arg7 kanJSAPICount:(unsigned int *)arg8;
- (void)workQueue_processPageDataResponse:(id)arg1 withUrlToContentInfoDic:(id)arg2 context:(id)arg3;
- (void)workQueue_onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)requestPageData:(id)arg1 scene:(unsigned long long)arg2 templateTypeList:(id)arg3;
- (void)checkPageDataWaitQueue;
- (void)addHeadOfPageDataWaitQueue:(id)arg1;
- (void)removeFromPageDataWaitQueueWithIdentityList:(id)arg1 inQueue:(id)arg2;
- (id)identityListFromPageDataUrlInfoList:(id)arg1;
- (id)filterPageDataRequestUrlInfoList:(id)arg1;
- (id)filterInvalidOrRepeatedUrlInfoList:(id)arg1;
- (void)mainThread_updatePageDataWaitUrlInfoList:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)workQueue_filterAndFillPageDataRequestUrlInfoList:(id)arg1 withTemplateTypeToVersionDictionary:(id)arg2 withTemplateTypeToVersionGroupDictionary:(id)arg3;
- (void)removeAllPageDataWithScene:(unsigned long long)arg1 sceneNote:(id)arg2;
- (void)expirePageDataWithUrl:(id)arg1;
- (id)getPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4 isOfflineCache:(_Bool)arg5;
- (_Bool)hasValidPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4 isOfflineCache:(_Bool)arg5;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (unsigned int)getItemShowTypeWithUrl:(id)arg1;
- (_Bool)hasItemShowTypeWithUrl:(id)arg1;
- (_Bool)getPageForceUrlFullScreenValidState:(id)arg1;
- (id)getPageForceUrlWithUrl:(id)arg1;
- (void)directUpdatePageData:(id)arg1 withTemplateVersion:(unsigned int)arg2 withTemplateVersionGroup:(id)arg3;
- (void)advanceDirectUpdatePageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4 useOfflineCache:(_Bool)arg5;
- (void)priorityUpdatePageData:(id)arg1 enterType:(unsigned int)arg2;
- (void)preloadPageDataWithUrlList:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3;
- (void)preloadPageDataWithUrl:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3;
- (void)onServiceInitWithCategoryPageData;
- (void)reportOfflineCacheWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)onResponseAppMsgReport:(id)arg1 context:(id)arg2;
- (_Bool)requestReportItemWithContext:(id)arg1;
- (_Bool)batchReportItemList:(id)arg1;
- (void)tryBatchReportItemsWithEnterType:(unsigned int)arg1;
- (void)reportLoadPageWithUrl:(id)arg1 a8keyScene:(unsigned int)arg2;
- (void)reportUpdateTemplateWithEnterType:(unsigned int)arg1;
- (void)reportPreCreateWebViewWithEnterType:(unsigned int)arg1 reportId:(unsigned int)arg2;
- (unsigned int)transVideoPreloadSceneToMPDefaultScene:(unsigned int)arg1;
- (unsigned int)transMPEnterTypeToVideoPreloadScene:(unsigned int)arg1;
- (_Bool)checkVideoPreloadSwitchWithMPEnterType:(unsigned int)arg1;
- (_Bool)checkVideoPreloadSwitchWithScene:(unsigned int)arg1;
- (_Bool)checkVideoPreloadSwitch;
- (id)getVideoPrefetchTask;
- (_Bool)getVideoUrlFromMpUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getMediaWrapIdentiferWithUrl:(id)arg1;
- (void)lauchVideoPrefetchTaskWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)onServiceInitWithCategoryTask;
- (void)p_requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (id)p_fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (id)downloadingInfoList;
- (id)downloadingInfoWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (void)reportTemplateDownloadWithParam:(id)arg1 downloadingInfo:(id)arg2 isSuccess:(_Bool)arg3;
- (unsigned long long)convertDownloaderErrorCode2ReportKey:(unsigned long long)arg1;
- (void)onResponseTemplateFileWithParam:(id)arg1 downloadingInfo:(id)arg2;
- (void)requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (void)setupTemplateDownloader;
- (id)dirPathOfTemplateDownload;
- (void)clearInvalidTemplateDonwloadedFile;
- (_Bool)isTemplateFileValidWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateFileWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateDirWithType:(unsigned int)arg1;
- (id)pathOfTemplateStoreDir;
- (_Bool)isResponseTemplateInfoValid:(id)arg1;
- (unsigned int)templateCheckInterval;
- (id)httpHeaderWithType:(unsigned int)arg1 templateVersion:(unsigned int)arg2;
- (id)getAndRemoveInvalidFullVersions:(id)arg1 templateInfo:(id)arg2;
- (void)saveTemplateInfoIfNeed:(id)arg1;
- (_Bool)isCheckTemplateVersionResponseOK:(id)arg1;
- (void)onResponseCheckTemplateVersion:(id)arg1 request:(id)arg2;
- (void)requestCheckTemplateVersionWityTypeList:(id)arg1 scene:(unsigned int)arg2;
- (unsigned long long)isUseZipForTemplageType:(int)arg1;
- (id)typeInfoListForWityTypeList:(id)arg1;
- (id)templateInfoWithTemplateType:(unsigned int)arg1;
- (id)templateTypeToFullVersionDictionary;
- (id)templateTypeToVersionGroupDictionary;
- (id)templateTypeToVersionDictionary;
- (unsigned int)tempalteVersionForInitWebViewWithType:(unsigned int)arg1 andGetFullVersion:(id *)arg2 andGetVersionGroup:(id *)arg3;
- (id)latestTemplateFullVersionWithType:(unsigned int)arg1;
- (unsigned int)minValidTemplateVersionWithType:(unsigned int)arg1;
- (void)clearInvalidTemplateDownloadedRecord;
- (void)saveTemplateInfo;
- (void)loadTemplateInfo;
- (id)pathOfTemplateInfo;
- (void)setupTemplateInfo;
- (id)pageFrameContentWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (void)forceUpdateTemplateFromServerWityType:(unsigned int)arg1;
- (void)updateTemplateFromServerWityTypeList:(id)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (id)localLatestDownloadedFullVersionWithType:(unsigned int)arg1;
- (id)localFullVersionListWithType:(unsigned int)arg1;
- (unsigned int)templateReportIdWithType:(unsigned int)arg1;
- (void)onServiceInitWithCategoryTemplateDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

