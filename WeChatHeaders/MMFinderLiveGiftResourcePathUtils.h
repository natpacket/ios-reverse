//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMFinderLiveGiftResourcePathUtils : NSObject
{
}

+ (id)giftCacheKey:(id)arg1 animationId:(id)arg2 scenarioKey:(id)arg3;
+ (id)downloadPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)bundlePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)unzipPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)cachePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)getMd5ForURL:(id)arg1;

@end

