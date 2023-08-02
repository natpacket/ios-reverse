//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, WCFImageCache, WCFImageDownloadQueue;

@interface WCFImageDownloader : NSObject
{
    WCFImageCache *_cache;
    NSOperationQueue *_decodeQueue;
    WCFImageDownloadQueue *_downloadQueue;
    long long _serial;
}

- (void).cxx_destruct;
@property(nonatomic) long long serial; // @synthesize serial=_serial;
@property(retain, nonatomic) WCFImageDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSOperationQueue *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property(readonly, nonatomic) WCFImageCache *cache; // @synthesize cache=_cache;
- (void)reportImageDownloadIDKeyWithOperation:(id)arg1 info:(id)arg2;
- (void)onOperationFinished:(id)arg1 info:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (id)addOperation:(id)arg1 completion:(CDUnknownBlockType)arg2 token:(id)arg3 param:(CDStruct_4b68193d)arg4;
- (id)requestImageWithMedia:(id)arg1 key:(id)arg2 param:(CDStruct_4b68193d)arg3 completion:(CDUnknownBlockType)arg4;
- (id)requestImageWithOperations:(id)arg1 param:(CDStruct_4b68193d)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestImageWithURL:(id)arg1 key:(id)arg2 param:(CDStruct_4b68193d)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cancelToken;
- (void)removeOperation:(id)arg1;
- (id)operationForKey:(id)arg1;
- (_Bool)addOperation:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithCache:(id)arg1;

@end
