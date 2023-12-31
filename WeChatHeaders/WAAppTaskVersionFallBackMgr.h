//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IWALocalCacheMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"

@class NSMutableArray, NSString, WAAppTaskVersionFallBackMarkItem;

@interface WAAppTaskVersionFallBackMgr : MMUserService <WAContactMgrExtension, IWALocalCacheMgrExt, MMServiceProtocol>
{
    NSString *_appid;
    NSString *_username;
    WAAppTaskVersionFallBackMarkItem *_currentLaunchItem;
    NSMutableArray *_markItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *markItems; // @synthesize markItems=_markItems;
@property(retain, nonatomic) WAAppTaskVersionFallBackMarkItem *currentLaunchItem; // @synthesize currentLaunchItem=_currentLaunchItem;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (unsigned int)getLaunchFallbackMinVersionForContact:(id)arg1;
- (void)checkFallbackMinVersionIfValidWithUsername:(id)arg1 appid:(id)arg2;
- (void)markPkgNeedDownloadForUsername:(id)arg1 appid:(id)arg2 needDowndloadInfoDatas:(id)arg3;
- (void)markContactNeedSyncUpdateForUsername:(id)arg1 appid:(id)arg2;
- (void)markStartLaunchUsername:(id)arg1 appid:(id)arg2 instanceId:(id)arg3 openScene:(unsigned long long)arg4 targetAppVersion:(unsigned int)arg5 debugModeType:(unsigned long long)arg6;
- (unsigned int)getFallBackTickGapForUsername:(id)arg1 appid:(id)arg2;
- (void)markCurrentLaunchItemInFallbackList;
- (void)doFallBackLogic;
- (void)stopTick;
- (void)startTickForUsername:(id)arg1 appid:(id)arg2;
- (void)reset;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

