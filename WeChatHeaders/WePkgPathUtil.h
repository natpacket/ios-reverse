//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WePkgPathUtil : MMObject
{
}

+ (id)wePkgHarInterceptFileDir;
+ (id)wePkgHarRecordFileDir;
+ (id)getFilePathIfExisted:(id)arg1 FileName:(id)arg2 ExpectMd5:(id)arg3 ExpectFileSize:(unsigned int)arg4;
+ (id)getVersionListWithSamePkgId:(id)arg1;
+ (id)pathOfPkgFile:(id)arg1 version:(id)arg2 FileName:(id)arg3;
+ (id)bigPkgFilePathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)debugDirectoryPathOfPkgId:(id)arg1;
+ (id)directoryPathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)directoryPathOfPkgId:(id)arg1;
+ (id)wePkgDatabasePath;
+ (id)liteAppFileDir:(id)arg1;
+ (id)wePkgDataDirPath;
+ (id)wePkgLibPath;

@end
