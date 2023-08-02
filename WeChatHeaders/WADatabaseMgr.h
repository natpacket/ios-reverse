//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface WADatabaseMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase *_db;
    WCTTable *_tableWeAppInfo;
    WCTTable *_tableWeAppModuleInfo;
    WCTTable *_tableEncryptWeAppInfo;
    WCTTable *_tablePermissionInfo;
    WCTTable *_tablePluginPermissionInfo;
    WCTTable *_tableABTestPermissionInfo;
    WCTTable *_tableContact;
    WCTTable *_tableBizAttrSyncBuffer;
    WCTTable *_tableBackUpContact;
    WCTTable *_tableConfigInfo;
    WCTTable *_tableWeAppListItem;
    WCTTable *_tableWeAppStarItem;
    WCTTable *_tableMainFrameTaskItem;
    WCTTable *_tableWeAppUsageInfo;
    WCTTable *_tableContactRemoteVersion;
    WCTTable *_tableWeAppDecryptKeyInfo;
    WCTTable *_tableIssueLaunchPermissionInfo;
    WCTTable *_tableBlockCgiInfo;
    WCTTable *_tablePrefetchSquenceInfo;
    WCTTable *_tableUpdatableMsgInfo;
    WCTTable *_tablePeriodFetchInfo;
    WCTTable *_tablePeriodFetchToken;
    WCTTable *_tableWeAppPluginCodeUsageLru;
    WCTTable *_tableWeAppRenderCacheInfo;
    WCTTable *_tableWeAppPluginVersionInfo;
    WCTTable *_tableExptPermissionInfo;
}

+ (_Bool)deleteInfoDataWithTable:(id)arg1 where:(const void *)arg2;
+ (_Bool)insertOrUpdateInfoDataWithTable:(id)arg1 infoData:(id)arg2;
+ (id)getInfoDataWithTable:(id)arg1 primaryKey:(id)arg2;
- (void).cxx_destruct;
@property(retain) WCTTable *tableExptPermissionInfo; // @synthesize tableExptPermissionInfo=_tableExptPermissionInfo;
@property(retain) WCTTable *tableWeAppPluginVersionInfo; // @synthesize tableWeAppPluginVersionInfo=_tableWeAppPluginVersionInfo;
@property(retain) WCTTable *tableWeAppRenderCacheInfo; // @synthesize tableWeAppRenderCacheInfo=_tableWeAppRenderCacheInfo;
@property(retain) WCTTable *tableWeAppPluginCodeUsageLru; // @synthesize tableWeAppPluginCodeUsageLru=_tableWeAppPluginCodeUsageLru;
@property(retain) WCTTable *tablePeriodFetchToken; // @synthesize tablePeriodFetchToken=_tablePeriodFetchToken;
@property(retain) WCTTable *tablePeriodFetchInfo; // @synthesize tablePeriodFetchInfo=_tablePeriodFetchInfo;
@property(retain) WCTTable *tableUpdatableMsgInfo; // @synthesize tableUpdatableMsgInfo=_tableUpdatableMsgInfo;
@property(retain) WCTTable *tablePrefetchSquenceInfo; // @synthesize tablePrefetchSquenceInfo=_tablePrefetchSquenceInfo;
@property(retain) WCTTable *tableBlockCgiInfo; // @synthesize tableBlockCgiInfo=_tableBlockCgiInfo;
@property(retain) WCTTable *tableIssueLaunchPermissionInfo; // @synthesize tableIssueLaunchPermissionInfo=_tableIssueLaunchPermissionInfo;
@property(retain) WCTTable *tableWeAppDecryptKeyInfo; // @synthesize tableWeAppDecryptKeyInfo=_tableWeAppDecryptKeyInfo;
@property(retain) WCTTable *tableContactRemoteVersion; // @synthesize tableContactRemoteVersion=_tableContactRemoteVersion;
@property(retain) WCTTable *tableWeAppUsageInfo; // @synthesize tableWeAppUsageInfo=_tableWeAppUsageInfo;
@property(retain) WCTTable *tableMainFrameTaskItem; // @synthesize tableMainFrameTaskItem=_tableMainFrameTaskItem;
@property(retain) WCTTable *tableWeAppStarItem; // @synthesize tableWeAppStarItem=_tableWeAppStarItem;
@property(retain) WCTTable *tableWeAppListItem; // @synthesize tableWeAppListItem=_tableWeAppListItem;
@property(retain) WCTTable *tableConfigInfo; // @synthesize tableConfigInfo=_tableConfigInfo;
@property(retain) WCTTable *tableBackUpContact; // @synthesize tableBackUpContact=_tableBackUpContact;
@property(retain) WCTTable *tableBizAttrSyncBuffer; // @synthesize tableBizAttrSyncBuffer=_tableBizAttrSyncBuffer;
@property(retain) WCTTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain) WCTTable *tableABTestPermissionInfo; // @synthesize tableABTestPermissionInfo=_tableABTestPermissionInfo;
@property(retain) WCTTable *tablePluginPermissionInfo; // @synthesize tablePluginPermissionInfo=_tablePluginPermissionInfo;
@property(retain) WCTTable *tablePermissionInfo; // @synthesize tablePermissionInfo=_tablePermissionInfo;
@property(retain) WCTTable *tableEncryptWeAppInfo; // @synthesize tableEncryptWeAppInfo=_tableEncryptWeAppInfo;
@property(retain) WCTTable *tableWeAppModuleInfo; // @synthesize tableWeAppModuleInfo=_tableWeAppModuleInfo;
@property(retain) WCTTable *tableWeAppInfo; // @synthesize tableWeAppInfo=_tableWeAppInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)closeDB;
- (void)setupTable;
- (void)openDB;
- (_Bool)deleteExptPermissionInfoWithAppID:(id)arg1;
- (_Bool)insertOrUpdateExptPermissionInfo:(id)arg1;
- (id)getExptPermissionInfoWithAppID:(id)arg1;
- (_Bool)deletePluginVersionInfoByAppId:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)insertOrUpdatePluginVersionInfo:(id)arg1;
- (id)getPluginVersionInfosWithAppId:(id)arg1;
- (id)getPluginVersionInfoWithAppId:(id)arg1 version:(unsigned long long)arg2;
- (id)getAllPluginVersionInfo;
- (_Bool)deleteUpdatableMsgInfoWithShareKey:(id)arg1;
- (_Bool)setUpdatableMsgInfo:(id)arg1;
- (id)getUpdatableMsgInfoWithShareKey:(id)arg1;
- (_Bool)deletePrefetchSequenceInfoWithAppID:(id)arg1;
- (_Bool)deletePrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (_Bool)insertOrUpdatePrefetchSequenceInfo:(id)arg1;
- (id)getPrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (id)cmdIdPrimaryKeyWithAppId:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (_Bool)deleteBlockCgiInfoWithAppID:(id)arg1;
- (_Bool)insertOrUpdateBlockCgiInfo:(id)arg1;
- (id)getBlockCgiInfoWithUsername:(id)arg1;
- (id)getBlockCgiInfoWithAppID:(id)arg1;
- (_Bool)deleteDecryptKeyInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (_Bool)insertOrUpdateDecryptKeyInfo:(id)arg1;
- (id)getDecryptInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (_Bool)deleteContactRemoteVersionByUsername:(id)arg1;
- (_Bool)insertOrUpdateContactRemoteVersion:(id)arg1;
- (id)getContactRemoteVersionByUsername:(id)arg1;
- (_Bool)deleteConfigInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateConfigInfo:(id)arg1;
- (id)getConfigInfoByAppID:(id)arg1 andType:(unsigned int)arg2;
- (_Bool)deleteIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (_Bool)setIssueLaunchPermissionInfo:(id)arg1;
- (id)getIssueLaunchPermissionInfoWithUsername:(id)arg1;
- (id)getIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (_Bool)deletePermissionInfoWithAppID:(id)arg1;
- (_Bool)setPermissionInfo:(id)arg1;
- (id)getPermissionInfoWithUsername:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (_Bool)deleteABTestPermissionInfoByAppID:(id)arg1;
- (_Bool)setABTestPermissionInfo:(id)arg1;
- (id)getABTestPermissionInfoByappID:(id)arg1 appType:(int)arg2 versionType:(int)arg3;
- (id)getABTestPermissionInfoByappID:(id)arg1;
- (_Bool)deletePluginPermissionInfoByAppID:(id)arg1;
- (_Bool)setPluginPermissionInfo:(id)arg1;
- (id)getPluginPermissionInfoByPluginID:(id)arg1;
- (_Bool)deleteAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (_Bool)deleteAppModuleInfoInAppidList:(id)arg1;
- (_Bool)deleteAppModuleInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateAppModuleInfo:(id)arg1;
- (id)getAllAppModuleInfoByAppID:(id)arg1;
- (id)getAppModuleInfoByTemplateID:(unsigned int)arg1 packageSum:(id)arg2;
- (id)getAppModuleInfoByAppID:(id)arg1 packageSum:(id)arg2;
- (id)getAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (id)getAllModuleInfoData;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 moduleName:(id)arg2;
- (_Bool)deleteEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (_Bool)insertOrUpdateEncryptAppInfo:(id)arg1;
- (id)getEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 encryptTypeString:(id)arg2 version:(unsigned int)arg3;
- (id)getAllEncryptInfoData;
- (id)getPluginCodeUsageInfoByAppIDAndVersion:(id)arg1 version:(unsigned int)arg2;
- (id)getLeastRecentlyUsedPluginCodeInfo;
- (_Bool)deletePluginCodeLruInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)insertOrUpdatePluginCodeUsage:(id)arg1;
- (_Bool)deletePluginCodeInfoByAppID:(id)arg1;
- (_Bool)deletePluginCodeInfoInAppidList:(id)arg1;
- (_Bool)deletePluginCodeInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (id)getPluginCodeAppInfo:(id)arg1 packageSum:(id)arg2;
- (id)getPluginCodeAppInfo:(id)arg1;
- (_Bool)insertOrUpdatePluginCodeAppInfo:(id)arg1;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 suffix:(id)arg2;
- (_Bool)deleteAppInfoByAppIDAndPackageType:(id)arg1 packageType:(unsigned long long)arg2;
- (_Bool)deleteAppInfoInAppIDList:(id)arg1;
- (_Bool)deleteAppInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateAppInfo:(id)arg1;
- (id)getOriginAppInfoByAppID:(id)arg1;
- (id)getAppInfoByTemplateID:(unsigned int)arg1 packageSum:(id)arg2;
- (id)getAppInfoByAppID:(id)arg1 packageSum:(id)arg2;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getLeastRecentlyUsedInfoDataWithCount:(unsigned int)arg1;
- (id)getAllInfoData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)deleteAllPeriodFetchTokenBefore:(unsigned int)arg1;
- (_Bool)deletePeriodFetchToken:(id)arg1;
- (id)getPeriodFetchToken:(id)arg1;
- (_Bool)insertOrUpdatePeriodFetchToken:(id)arg1 Token:(id)arg2;
- (_Bool)deleteAllPeriodFetchInfoBefore:(unsigned int)arg1;
- (_Bool)deletePeriodFetchInfo:(id)arg1;
- (_Bool)insertOrUpdatePeriodFetchInfo:(id)arg1 FetchData:(id)arg2;
- (id)getAllPeriodFetchBriefInfo;
- (unsigned int)getPeriodFetchInfoLastUpdateTime:(id)arg1;
- (id)getPeriodFetchInfo:(id)arg1;
- (_Bool)deleteAppUsageInfoBeforeTime:(unsigned int)arg1;
- (_Bool)deleteAppUsageInfoByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)insertOrUpdateAppUsageInfo:(id)arg1;
- (id)getUsageInfoWithUsrName:(id)arg1 appType:(unsigned int)arg2;
- (id)getUsageInfoWithUsrName:(id)arg1;
- (id)getLatestAppUsageInfoListOverLastOpenTime:(unsigned int)arg1 isNeedDebugType:(_Bool)arg2 limit:(unsigned int)arg3;
- (_Bool)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (_Bool)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (_Bool)insertOrUpdateMainFrameTaskItem:(id)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;
- (_Bool)deleteLocalBackUpContactWithUsername:(id)arg1;
- (_Bool)saveLocalBackUpContact:(id)arg1;
- (id)getLocalBackUpContactWithAppid:(id)arg1;
- (id)getLocalBackUpContactWithUsername:(id)arg1;
- (_Bool)clearBizAttrSyncBufferList:(id)arg1;
- (_Bool)setBizAttrSyncBufferList:(id)arg1;
- (id)getBizAttrSyncBuffer:(id)arg1;
- (id)dbContactWithContact:(id)arg1;
- (id)contactFromDBContact:(id)arg1;
- (_Bool)modifyLastLaunchTime:(unsigned int)arg1 withUserName:(id)arg2;
- (_Bool)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)modifyWxAppOpt:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (_Bool)deleteContactList:(id)arg1;
- (_Bool)inserOrUpdateContactList:(id)arg1;
- (id)getAllContact;
- (id)getAllNoFocusContact;
- (id)getAllFocusContact;
- (id)getContactWithAppId:(id)arg1;
- (id)getContact:(id)arg1;
- (id)getContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)deleteAllAppStarItem;
- (_Bool)deleteAppStarItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)insertAppStarItemList:(id)arg1;
- (_Bool)insertOrUpdateAppStarItem:(id)arg1;
- (id)getAllAppStarItemByUsername:(id)arg1;
- (id)getAppStarItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getAllAppStarItemOrderByUpdateTime;
- (id)getAppStarItemWithMaxSortFactor;
- (id)getAppStarItemWithMinSortFactor;
- (id)getAllAppStarItemOrderBySortFactor;
- (id)getAllAppStarItem;
- (unsigned int)getAppStarItemCount;
- (_Bool)isItemStared:(id)arg1;
- (_Bool)deleteAllAppListItem;
- (_Bool)deleteAppListItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)updateAppListItemOnStarState:(id)arg1;
- (_Bool)updateAppListItemOnUpdateTime:(id)arg1;
- (_Bool)insertOrUpdateAppListItem:(id)arg1;
- (id)getCurrentAppListItemByLimit:(int)arg1;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getAppListItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2 includeStar:(_Bool)arg3;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getAllAppListItemOrderByUpdateTimeIsIncludeStar:(_Bool)arg1;
- (id)getAllAppListItemOrderByUpdateTime;
- (id)getAllAppListItem;
- (unsigned int)getAppListItemCount;
- (_Bool)mergeAppListItems:(id)arg1 updateTimeOfLastItemAfterMerge:(unsigned int *)arg2;
- (_Bool)mergeAppStarItems:(id)arg1;
- (id)getAllRenderCacheInfoOrderByLastAccessTimeAscending;
- (_Bool)deleteAllRenderCacheInfo;
- (_Bool)deleteAllRenderCacheInfoIfPubVersionNot:(id)arg1;
- (_Bool)deleteAllRenderCacheInfoForUsername:(id)arg1 debugType:(unsigned int)arg2;
- (_Bool)deleteRenderCacheInfoForUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;
- (_Bool)deleteRenderCacheInfo:(id)arg1;
- (_Bool)updateRenderCacheInfoOnLastAccessTime:(id)arg1;
- (_Bool)insertOrUpdateRenderCacheInfo:(id)arg1;
- (id)getRenderCacheInfoWithPubVersionNot:(id)arg1;
- (id)getRenderCacheInfoWithUsername:(id)arg1 debugType:(unsigned int)arg2;
- (id)getRenderCacheInfoWithUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
