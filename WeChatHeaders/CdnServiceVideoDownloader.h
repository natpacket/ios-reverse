//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CdnServiceVideoDownloader : NSObject
{
}

+ (id)generateDownloadArgsWrapWithVideoMsg:(id)arg1 percent:(int)arg2;
+ (_Bool)checkPreloadCacheWithMsgWrap:(id)arg1;
+ (void)onDownloadComplete:(id)arg1 argsWrap:(id)arg2;
+ (void)preloadVideoMsg:(id)arg1 behavior:(long long)arg2 percent:(int)arg3 progressBlock:(CDUnknownBlockType)arg4 preloadCompleteBlock:(CDUnknownBlockType)arg5;

@end

