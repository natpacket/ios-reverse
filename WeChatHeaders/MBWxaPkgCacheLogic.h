//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBWAUnpackedPackageInfo, NSMutableDictionary;

@interface MBWxaPkgCacheLogic : NSObject
{
    MBWAUnpackedPackageInfo *mMBWAUnpackedPackageInfo;
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableDictionary *_dicUnpackedPackageInfo;
    long long _unpackTime;
    NSMutableDictionary *_dicCacheFileAccessedTimeRecord;
}

- (void).cxx_destruct;
- (long long)getAccessedTimeWithFullUrl:(id)arg1;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)arg1;
- (long long)getUnpackTime;
- (_Bool)isString:(id)arg1 inArray:(id)arg2;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)getMBCacheFileInfoWithFullUrl:(id)arg1;
- (void)clearAllPkgInfo;
- (_Bool)hasUnpackedPackageWithBizName;
- (_Bool)unpackPkgFromPath:(id)arg1 bizName:(id)arg2;
- (_Bool)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (void)dealloc;
- (id)init;

@end
