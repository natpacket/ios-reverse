//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QVisualLayerDataDownloader : NSObject
{
    NSMutableDictionary *_downloadingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (void)sendVisLayerTaskCancellation:(id)arg1;
- (id)getDownloadTaskFromKey:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)requestData:(id)arg1 withRequestKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadModelLayerData:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadVisualLayerData:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

