//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MagicPkgDownload : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary *_dicDownloadingItem;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)unzipDownloadUpdates:(id)arg1 unzipPath:(id)arg2;
- (void)UpdateFinish:(id)arg1 pkgPath:(id)arg2 unzipPath:(id)arg3;
- (void)downloadMagicPkg:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

