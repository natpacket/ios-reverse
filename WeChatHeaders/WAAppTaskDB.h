//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WAAppTaskDB : NSObject
{
    NSString *_appID;
    WCTDatabase *_db;
    WCTTable *_tableLocalStorageMainInfo;
    WCTTable *_tableLocalStorageDataInfo_1;
    WCTTable *_tableLocalStorageLengthInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLocalStorageLengthInfo; // @synthesize tableLocalStorageLengthInfo=_tableLocalStorageLengthInfo;
@property(retain) WCTTable *tableLocalStorageDataInfo_1; // @synthesize tableLocalStorageDataInfo_1=_tableLocalStorageDataInfo_1;
@property(retain) WCTTable *tableLocalStorageMainInfo; // @synthesize tableLocalStorageMainInfo=_tableLocalStorageMainInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
@property(retain) NSString *appID; // @synthesize appID=_appID;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)updateTable;
- (void)openTable;
- (void)openDB;
- (void)clearLocalStorage:(int)arg1;
- (_Bool)removeLocalStorageDataWithKey:(id)arg1 storageId:(int)arg2;
- (_Bool)batchSetLocalStorageDataList:(id)arg1 dataTypeList:(id)arg2 withKeyList:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5 handle:(id)arg6;
- (_Bool)setLocalStorageData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5;
- (id)getLocalStorageAllKeys:(int)arg1;
- (_Bool)setLocalStorageKeyAndDataLengthWithStorageId:(int)arg1 length:(unsigned long long)arg2 lastModifyTime:(unsigned int)arg3;
- (unsigned int)getLocalStorageKeyAndDataLengthWithStorageId:(int)arg1;
- (unsigned long long)getLocalStorageKeyAndDataLengthWithKeyList:(id)arg1 storageId:(int)arg2;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)arg1 storageId:(int)arg2;
- (void)batchGetLocalStorageDataList:(id *)arg1 dataTypeList:(id *)arg2 withKeyList:(id)arg3 storageId:(int)arg4;
- (void)getLocalStorageData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3 storageId:(int)arg4;
- (_Bool)setLocalStorageMainStorageLength:(unsigned long long)arg1 lastModifyTime:(unsigned int)arg2;
- (unsigned long long)getLocalStorageMainStorageLength;
- (void)close;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)open;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

@end

