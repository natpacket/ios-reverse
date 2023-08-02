//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GCWebViewCacheManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary *_cacheDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (void)removeCacheWebView:(id)arg1;
- (id)showHalfScreenWebViewWithConfig:(id)arg1;
- (long long)mmUIUserInterfaceStyleForVc:(id)arg1;
- (void)handleHalfScreenWebView:(id)arg1 parentVC:(id)arg2 visibleChange:(_Bool)arg3;
- (void)preloadHalfScreenWebViewWithConfig:(id)arg1;
- (id)getCacheItemForUrl:(id)arg1 reuseIdentifier:(id)arg2 isPreload:(_Bool)arg3;
- (void)reCreateWithCacheItem:(id)arg1;
- (void)preloadTransparentWebView:(id)arg1 reuseIdentifier:(id)arg2 reCreateAfterUsed:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

