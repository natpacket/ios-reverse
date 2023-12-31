//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class CSetting, CSettingExt, CUpdateInfo, NSRecursiveLock, NSString, SyncBufferInfo;

@interface AccountStorageMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock *m_oLock;
    SyncBufferInfo *m_oSyncBufferInfo;
    NSString *m_nsDocPath;
    _Bool m_testMemoryInvalid;
    _Bool m_testPhysicalInvalid;
    _Bool m_testSettingInvalid;
    CSetting *m_oSetting;
    CSettingExt *m_oSettingExt;
    CUpdateInfo *m_oUpdateInfo;
}

- (void).cxx_destruct;
- (void)internalRemoveSyncBuffer;
- (id)internalReadSyncBuffer;
- (_Bool)internalWriteSyncBuffer:(id)arg1;
- (_Bool)saveSvrSyncBufferKey:(id)arg1;
- (id)loadSvrSyncBufferKey;
- (id)syncBufferMMKV;
- (void)clearSyncBuffer;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)GetSyncBuffer;
- (_Bool)SaveSyncBuffer:(id)arg1;
- (_Bool)MergeAndSaveSyncBuffer:(id)arg1;
- (id)GetUpdateInfo;
- (void)SaveUpdateInfo;
- (void)LoadUpdateInfo;
- (void)SaveSettingExt;
- (void)LoadSettingExt;
- (void)MainThreadSaveSetting;
- (void)DirectSaveSetting;
- (void)LoadSetting;
- (_Bool)ValidForSettingInfo;
- (_Bool)ValidForMemorySyncBuffer;
- (_Bool)ValidForPhysicalSyncBuffer;
- (void)ResetMemorySyncBuffer;
- (void)dealloc;
- (void)closeResource;
- (id)init;
@property(copy, nonatomic) CUpdateInfo *m_oUpdateInfo; // @synthesize m_oUpdateInfo;
@property(copy, nonatomic) CSettingExt *m_oSettingExt; // @synthesize m_oSettingExt;
@property(readonly, nonatomic) CSetting *m_oSetting; // @synthesize m_oSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

