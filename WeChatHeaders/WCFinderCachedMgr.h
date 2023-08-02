//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EntranceReportSwitch, MMLRUCache;

@interface WCFinderCachedMgr : NSObject
{
    unsigned long long _discoverySyncTimestamp;
    unsigned long long _foregroundSyncTimestamp;
    unsigned long long _enterSnsSyncTimestamp;
    unsigned long long _exitSnsSyncTimestamp;
    unsigned long long _exposeLastSnsFeedSyncTimestamp;
    unsigned long long _exposeNSnsFeedSyncTimestamp;
    unsigned long long _fetchRedDotSnsDelivery;
    unsigned long long _fetchRedDotAppPush;
    MMLRUCache *_notifyUUIDCache;
    MMLRUCache *_feedPlayInfoCache;
    MMLRUCache *_feedClientReportInfoCache;
    MMLRUCache *_profilePreFetchCache;
    MMLRUCache *_encryptedDataItemChache;
    MMLRUCache *_autoPlayNextFeedSwitchCache;
    EntranceReportSwitch *_syncReport;
    MMLRUCache *_fansProfileUsernameCache;
    MMLRUCache *_subTabCache;
}

+ (id)cachedKeyOfEncryptedFeedID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *subTabCache; // @synthesize subTabCache=_subTabCache;
@property(retain, nonatomic) MMLRUCache *fansProfileUsernameCache; // @synthesize fansProfileUsernameCache=_fansProfileUsernameCache;
@property(retain, nonatomic) EntranceReportSwitch *syncReport; // @synthesize syncReport=_syncReport;
@property(retain, nonatomic) MMLRUCache *autoPlayNextFeedSwitchCache; // @synthesize autoPlayNextFeedSwitchCache=_autoPlayNextFeedSwitchCache;
@property(retain, nonatomic) MMLRUCache *encryptedDataItemChache; // @synthesize encryptedDataItemChache=_encryptedDataItemChache;
@property(retain, nonatomic) MMLRUCache *profilePreFetchCache; // @synthesize profilePreFetchCache=_profilePreFetchCache;
@property(retain, nonatomic) MMLRUCache *feedClientReportInfoCache; // @synthesize feedClientReportInfoCache=_feedClientReportInfoCache;
@property(retain, nonatomic) MMLRUCache *feedPlayInfoCache; // @synthesize feedPlayInfoCache=_feedPlayInfoCache;
@property(retain, nonatomic) MMLRUCache *notifyUUIDCache; // @synthesize notifyUUIDCache=_notifyUUIDCache;
@property(nonatomic) unsigned long long fetchRedDotAppPush; // @synthesize fetchRedDotAppPush=_fetchRedDotAppPush;
@property(nonatomic) unsigned long long fetchRedDotSnsDelivery; // @synthesize fetchRedDotSnsDelivery=_fetchRedDotSnsDelivery;
@property(nonatomic) unsigned long long exposeNSnsFeedSyncTimestamp; // @synthesize exposeNSnsFeedSyncTimestamp=_exposeNSnsFeedSyncTimestamp;
@property(nonatomic) unsigned long long exposeLastSnsFeedSyncTimestamp; // @synthesize exposeLastSnsFeedSyncTimestamp=_exposeLastSnsFeedSyncTimestamp;
@property(nonatomic) unsigned long long exitSnsSyncTimestamp; // @synthesize exitSnsSyncTimestamp=_exitSnsSyncTimestamp;
@property(nonatomic) unsigned long long enterSnsSyncTimestamp; // @synthesize enterSnsSyncTimestamp=_enterSnsSyncTimestamp;
@property(nonatomic) unsigned long long foregroundSyncTimestamp; // @synthesize foregroundSyncTimestamp=_foregroundSyncTimestamp;
@property(nonatomic) unsigned long long discoverySyncTimestamp; // @synthesize discoverySyncTimestamp=_discoverySyncTimestamp;
- (id)getSubTabWithScene:(unsigned long long)arg1;
- (void)cacheSubTab:(id)arg1 scene:(unsigned long long)arg2;
- (id)getFansProfileCacheName:(id)arg1;
- (void)cacheFansProfileUsername:(id)arg1 username:(id)arg2;
- (id)syncConfig;
- (void)updateSyncConfig:(id)arg1;
- (_Bool)getAutoPlayNextFeedSwitchForKey:(id)arg1;
- (void)setAutoPlayNextFeedSwitch:(_Bool)arg1 forKey:(id)arg2;
- (void)updateDataItem:(id)arg1 withEncryptedFeedID:(id)arg2;
- (id)dataItemOfEncryptedFeedID:(id)arg1;
- (_Bool)canProfilePreFetchWithUsername:(id)arg1;
- (void)saveProfilePreFetchTimestampWithUsername:(id)arg1;
- (id)getKeyWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (id)getFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)updateFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2 reportInfo:(id)arg3;
- (id)getPlayInfoWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)updatePlayInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2 playInfo:(id)arg3;
- (void)cacheNotifyUUID:(id)arg1;
- (_Bool)hadCacheNotifyUUID:(id)arg1;
- (id)init;

@end
