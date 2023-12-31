//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface GameVideoUtils : MMObject
{
}

+ (id)abosultePathForRelativePath:(id)arg1;
+ (id)relativePathForAbosultePath:(id)arg1;
+ (void)showViewControllerWithCreator:(CDUnknownBlockType)arg1;
+ (void)showViewController:(id)arg1;
+ (id)openWebViewWithUrl:(id)arg1;
+ (id)storeByCopyVideoToWebResource:(id)arg1 andThumbPath:(id)arg2;
+ (id)storeVideoToWebResource:(id)arg1;
+ (_Bool)readImagePropertiesWithoutLoadingDataForPath:(id)arg1 thenDo:(CDUnknownBlockType)arg2;
+ (struct CGSize)readImageSizeWithoutLoadingDataForPath:(id)arg1;
+ (id)humanEasyTextOfDataSize:(unsigned long long)arg1;
+ (id)fileExtensionFromMimeType:(id)arg1;
+ (int)getMaxRetryCount;
+ (_Bool)isRetryEnabled;
+ (int)getVideoDuration:(id)arg1;
+ (int)getVideoDurationOfPath:(id)arg1;
+ (id)haowanPostDBPath;
+ (id)postInfoFilePath;
+ (id)gameHaowanDataDir;

@end

