//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WebStorageDb;

@interface WebStorageMgr : MMUserService <MMServiceProtocol>
{
    WebStorageDb *_storageDb;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebStorageDb *storageDb; // @synthesize storageDb=_storageDb;
- (id)getAllFile:(id)arg1;
- (id)getAllGlobalConfig;
- (id)getAllConfig;
- (_Bool)cleanFileAndConfig:(id)arg1 Key:(id)arg2 FilePath:(id)arg3;
- (_Bool)cleanDirAndConfig:(id)arg1 DirPath:(id)arg2;
- (void)tryKickOutForAllAppId;
- (void)tryKickOut:(id)arg1;
- (void)tryKickOutExpireFile;
- (void)kickOutStrategy:(id)arg1;
- (_Bool)setStorage:(id)arg1 Key:(id)arg2 Value:(id)arg3 WeightStr:(id)arg4 ExpireTime:(long long)arg5;
- (_Bool)clearStorage:(id)arg1 Key:(id)arg2;
- (_Bool)clearAllStorage:(id)arg1;
- (id)getStorage:(id)arg1 Key:(id)arg2;
- (_Bool)checkIfSizeExceed:(id)arg1 NeedSize:(unsigned long long)arg2;
- (long long)getMaxSize:(id)arg1;
- (long long)getAllMaxSize;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
