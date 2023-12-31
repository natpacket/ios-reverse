//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSMFile, MMLRUCache, NSMutableArray, NSRecursiveLock, NSString;

@interface LSMFileStorage : NSObject
{
    NSRecursiveLock *m_lock;
    NSString *m_root;
    unsigned long long m_fileSizeLimit;
    MMLRUCache *m_cache;
    LSMFile *m_levelZeroFile;
    LSMFile *m_levelOneFile;
    _Bool m_isCompacting;
    unsigned int m_intermediateNextID;
    NSMutableArray *m_intermediateFiles;
    _Bool m_hasFinishFirstCheckCompact;
}

+ (void)ReportReadItemFail;
+ (void)ReportWriteItemFail;
+ (void)ReportCompactFileFail;
+ (void)ReportCloneFileFail;
+ (void)ReportRenameFail;
+ (void)ReportLoadFileFail;
+ (void)ReportOpenFail;
- (void).cxx_destruct;
- (id)allFileNames;
- (_Bool)deleteDataOfFile:(id)arg1;
- (_Bool)containsFile:(id)arg1;
- (unsigned int)modifyTimeInSecondsOfFile:(id)arg1;
- (id)dataOfFile:(id)arg1 modifyTimeInSeconds:(unsigned int *)arg2;
- (id)dataOfFile:(id)arg1;
- (_Bool)writeDatasAndFileNames:(id)arg1;
- (_Bool)writeDatas:(id)arg1 toFiles:(id)arg2;
- (_Bool)writeData:(id)arg1 toFile:(id)arg2;
- (_Bool)doCompactLevelOne:(id)arg1 handledKeys:(id)arg2;
- (void)compactLevelOneWithHandledKeys:(id)arg1;
- (void)compactFiles:(id)arg1;
- (void)checkCompactFiles;
- (void)checkExpandFile;
- (void)tryFinishFirstCheckCompactFiles;
- (void)loadFromFile;
- (void)dealloc;
- (id)initWithFolderPath:(id)arg1 cacheCapacity:(unsigned int)arg2 baseFileSize:(unsigned long long)arg3;
- (id)initWithFolderPath:(id)arg1 cacheCapacity:(unsigned int)arg2;

@end

