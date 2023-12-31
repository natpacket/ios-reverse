//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MJTemplateUtilities : NSObject
{
}

+ (unsigned long long)cleanMaasDir;
+ (unsigned long long)preGetMaasDirSize;
+ (_Bool)mergeSubDirectory:(id)arg1 toDestDirectory:(id)arg2;
+ (_Bool)unzipFile:(id)arg1 toDirectory:(id)arg2;
+ (_Bool)removeFile:(id)arg1;
+ (id)maasTempPath;
+ (id)maasResourcePath;
+ (id)maasCachesPath;
+ (id)maasPersistentPath;
+ (id)cameraAuditPath;
+ (id)materialResourcePath;
+ (id)temporaryDirectoryForType:(unsigned int)arg1;
+ (id)temporaryRootDirectory;
+ (id)cachePreviewDirectory;
+ (id)cacheRootDirectory;
+ (id)resourceDirectoryForType:(unsigned int)arg1;
+ (id)resourceRootDirectory;
+ (id)rootDirectory;
+ (void)_onLaunchMJAppWithShareConfigure:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)_checkMomentsRegularForScene:(unsigned long long)arg1 launchType:(long long)arg2 withAssetIds:(id)arg3 checkRegularBlock:(CDUnknownBlockType)arg4;
+ (void)_checkRegularForScene:(unsigned long long)arg1 launchType:(long long)arg2 withAssetIds:(id)arg3 checkRegularBlock:(CDUnknownBlockType)arg4;
+ (void)launchMiaoJianAppFromScene:(unsigned long long)arg1 forLaunchType:(long long)arg2 withAssetIds:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end

