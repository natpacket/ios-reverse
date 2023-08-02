//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMFICImageCache : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock *_tableLock;
    NSMutableDictionary *_imageTables;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
- (unsigned long long)preGetFICImageCacheSize;
- (unsigned long long)cleanFICImageCache;
- (void)executeEntityCreating:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1;
- (void)clearImgTableWithPrefix:(id)arg1;
- (void)reset;
- (void)deleteImageForEntity:(id)arg1;
- (id)retrieveImageForEntity:(id)arg1 isNeedMemoryCache:(_Bool)arg2;
- (_Bool)addFormatIfNotExist:(id)arg1 imgSize:(struct CGSize)arg2 maxImgCnt:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

