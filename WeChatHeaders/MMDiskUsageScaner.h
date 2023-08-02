//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMDiskExptConfig, MMDiskUsageScanStat, NSString;
@protocol MMDiskUsageScannerDelegate, OS_dispatch_queue;

@interface MMDiskUsageScaner : NSObject
{
    unsigned int _slowDownCheckSubFileNum;
    unsigned int _slowDownSleepMillisecond;
    int _scannerStatus;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MMDiskUsageScannerDelegate> _delegate;
    NSString *_currentAppRootPath;
    MMDiskUsageScanStat *_scanStat;
    MMDiskExptConfig *_exptConfig;
}

- (void).cxx_destruct;
@property int scannerStatus; // @synthesize scannerStatus=_scannerStatus;
@property(retain, nonatomic) MMDiskExptConfig *exptConfig; // @synthesize exptConfig=_exptConfig;
@property(retain, nonatomic) MMDiskUsageScanStat *scanStat; // @synthesize scanStat=_scanStat;
@property(copy, nonatomic) NSString *currentAppRootPath; // @synthesize currentAppRootPath=_currentAppRootPath;
@property(nonatomic) unsigned int slowDownSleepMillisecond; // @synthesize slowDownSleepMillisecond=_slowDownSleepMillisecond;
@property(nonatomic) unsigned int slowDownCheckSubFileNum; // @synthesize slowDownCheckSubFileNum=_slowDownCheckSubFileNum;
@property(nonatomic) __weak id <MMDiskUsageScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)appDidBecomeActive:(id)arg1;
- (void)onWillSuspend:(id)arg1;
- (void)UnRegisterBackgroundNotifications;
- (void)registerBackgroundNotification;
- (void)reportUnknowPath:(id)arg1 fileNum:(unsigned int)arg2 totalFileSize:(unsigned long long)arg3 latestFileTime:(unsigned int)arg4;
- (void)reportUnknowDir:(id)arg1 fileNum:(unsigned int)arg2 fileSize:(unsigned long long)arg3;
- (void)reportUnknowFile:(id)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5 fileSize:(unsigned long long)arg6;
- (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
- (void)addFileClassStat:(id)arg1 fileClassType:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addFileTypeInUseStat:(id)arg1 fileTypeInUse:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)p_addMsgImageTypeStat:(id)arg1 filePath:(id)arg2 bizType:(long long)arg3 fileSize:(unsigned long long)arg4;
- (void)addSpecialFileStat:(id)arg1 filePath:(id)arg2 bizType:(long long)arg3 fileSize:(unsigned long long)arg4;
- (void)addBizDelFileStat:(id)arg1 bizType:(long long)arg2 delFileSize:(unsigned long long)arg3;
- (void)addBizFileStat:(id)arg1 bizType:(long long)arg2 fileSize:(unsigned long long)arg3 fileInterval:(long long)arg4;
- (_Bool)deleteFile:(id)arg1 matchInfo:(struct MMBizMatchInfo)arg2 inFolder:(id)arg3 withScanConfig:(id)arg4 fileSize:(unsigned long long *)arg5 withScanStat:(id)arg6 latestTimeInterval:(long long *)arg7;
- (void)scanSubFolder:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (void)scanFileInFolder:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4;
- (void)scanFolderBegin:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (void)handleDeleteFolder:(id)arg1 withParentPath:(id)arg2 withScanStat:(id)arg3;
- (_Bool)scanBeginWithRootFolderWithScanConfig:(id)arg1 withScanData:(id)arg2;
- (_Bool)isRunning;
- (void)stop;
- (void)startWithScanConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

