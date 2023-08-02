//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCPlayerEventExt-Protocol.h"

@class NSObject, NSString, WCCommonCacheDB;
@protocol OS_dispatch_queue;

@interface WCCommonCacheMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_processQueue;
    WCCommonCacheDB *_cacheDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommonCacheDB *cacheDB; // @synthesize cacheDB=_cacheDB;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (_Bool)changeToHardLink:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (void)loadAndDeleteVideoCacheData;
- (void)removeCachesWithFilePath:(id)arg1;
- (void)removeCachesWithAggregateNames:(id)arg1;
- (void)removeCachesWithAggregateName:(id)arg1;
- (_Bool)addCacheWithFileMD5:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (_Bool)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3 consistentSize:(long long)arg4;
- (_Bool)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3;
- (id)getCommonCacheWithMD5:(id)arg1;
- (_Bool)isCloseCommonCache;
- (id)getCommonProcessQueue;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

