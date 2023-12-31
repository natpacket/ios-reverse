//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class EmoticonDataDB, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonSetInfoMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock *_oLock;
    EmoticonDataDB *_oEmoticonPackageDB;
    NSMutableDictionary *_setInfoDic;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *setInfoDic; // @synthesize setInfoDic=_setInfoDic;
@property(retain, nonatomic) EmoticonDataDB *oEmoticonPackageDB; // @synthesize oEmoticonPackageDB=_oEmoticonPackageDB;
@property(retain, nonatomic) NSRecursiveLock *oLock; // @synthesize oLock=_oLock;
- (id)getImageForSetKey:(id)arg1 withType:(unsigned long long)arg2;
- (id)getPanelImageForSetKey:(id)arg1;
- (id)getIconImageForSetKey:(id)arg1;
- (void)updateCachedSetInfo:(id)arg1;
- (void)cleanAllCachedSetInfos;
- (_Bool)delSetInfoFor:(id)arg1;
- (_Bool)delAllSetInfo;
- (id)getAllSetInfo;
- (id)getSetInfoFor:(id)arg1;
- (_Bool)update:(id)arg1 panelUrl:(id)arg2;
- (_Bool)update:(id)arg1 iconUrl:(id)arg2;
- (_Bool)update:(id)arg1 desc:(id)arg2;
- (_Bool)update:(id)arg1 title:(id)arg2;
- (_Bool)addSetInfoWith:(id)arg1 title:(id)arg2 desc:(id)arg3 iconUrl:(id)arg4 panelUrl:(id)arg5;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

