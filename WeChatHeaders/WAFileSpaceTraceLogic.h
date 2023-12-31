//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAFileSpaceStatus;
@protocol WAFileSpaceTraceLogicScanDataSource;

@interface WAFileSpaceTraceLogic : NSObject
{
    WAFileSpaceStatus *m_status;
    unsigned int _updateCountSinceLastScan;
    unsigned int _lastUpdateStatusTime;
    NSString *_localIdPrefix;
    id <WAFileSpaceTraceLogicScanDataSource> _scanSource;
    unsigned long long _scanPhase;
}

- (void).cxx_destruct;
@property unsigned int lastUpdateStatusTime; // @synthesize lastUpdateStatusTime=_lastUpdateStatusTime;
@property(nonatomic) unsigned int updateCountSinceLastScan; // @synthesize updateCountSinceLastScan=_updateCountSinceLastScan;
@property unsigned long long scanPhase; // @synthesize scanPhase=_scanPhase;
@property(nonatomic) __weak id <WAFileSpaceTraceLogicScanDataSource> scanSource; // @synthesize scanSource=_scanSource;
@property(readonly, nonatomic) NSString *localIdPrefix; // @synthesize localIdPrefix=_localIdPrefix;
- (void)scanDirectoryUnrecursively:(id)arg1 retFileCount:(unsigned int *)arg2 retFileSize:(unsigned long long *)arg3;
- (void)reportIDKeyUsrSpaceTraceDiffWithRecordSize:(long long)arg1 actualSize:(long long)arg2;
- (void)scanAndUpdateStatus;
- (void)removeAppIdNotInArray:(id)arg1;
- (id)getAllUsrDirList;
- (_Bool)isTimeForSaveStatus;
- (id)statusKey;
- (id)statusFilePath;
- (id)arrSortAppItem;
- (id)allAppId;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)setStatusAppItemWithAppId:(id)arg1 appItem:(id)arg2;
- (id)getStatusAppItemWithAppId:(id)arg1;
- (unsigned long long)fileSizeOfAppId:(id)arg1;
- (unsigned long long)currentTotalFileSize;
- (void)saveStatusToMMKV;
- (void)saveStatus;
- (void)loadStatus;
- (id)initWithLocalIdPrefix:(id)arg1;

@end

