//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMLiteAppDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase *_db;
    WCTTable *_tableLiteAppInfo;
    WCTTable *_tableLiteAppAuthInfo;
    WCTTable *_tableLiteAppBaseLibInfo;
    WCTTable *_tableIlinkLiteAppResourceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *tableIlinkLiteAppResourceInfo; // @synthesize tableIlinkLiteAppResourceInfo=_tableIlinkLiteAppResourceInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppBaseLibInfo; // @synthesize tableLiteAppBaseLibInfo=_tableLiteAppBaseLibInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppAuthInfo; // @synthesize tableLiteAppAuthInfo=_tableLiteAppAuthInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppInfo; // @synthesize tableLiteAppInfo=_tableLiteAppInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (void)openDB;
- (id)getIlinkLiteAppResourceInfoList;
- (id)getIlinkLiteAppResourceInfoList:(id)arg1;
- (_Bool)insertIlinkLiteAppResourceInfo:(id)arg1;
- (_Bool)deleteIlinkLiteAppResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (id)getIlinkLiteAppResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (_Bool)deleteLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppBundleBaseLibInfo;
- (id)getLatestLiteAppBaseLibInfo;
- (id)getLiteAppBaseLibList;
- (_Bool)insertLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppAuthInfoItemByUrl:(id)arg1;
- (_Bool)insertLiteAppAuthInfoDBItem:(id)arg1;
- (id)getLiteAppList;
- (_Bool)insertLiteAppInfoDBItme:(id)arg1;
- (_Bool)deleteLiteAppInfoItemByAppId:(id)arg1;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(_Bool)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
