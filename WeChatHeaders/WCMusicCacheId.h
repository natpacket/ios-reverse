//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCMusicCacheId : NSObject <PBCoding>
{
    _Bool _ignoreCache;
    NSString *_innerCacheId;
    NSString *_musicId;
}

+ (id)replacedStringWithInput:(id)arg1 charMap:(id)arg2;
+ (id)base64StringFromSafeFileName:(id)arg1;
+ (id)safeFileNameFromBase64String:(id)arg1;
+ (id)cacheIdFromKSCacheId:(id)arg1;
+ (id)hashForUrl:(id)arg1;
+ (id)cacheIdWithInnerCacheId:(id)arg1 cacheUrl:(id)arg2 dataUrl:(id)arg3;
+ (void)initialize;
+ (void)PBArrayAdd_musicId;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_innerCacheId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(copy, nonatomic) NSString *innerCacheId; // @synthesize innerCacheId=_innerCacheId;
- (id)generateKSCacheId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

