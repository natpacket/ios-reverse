//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MMFinderLiveResDownloadProtocol;

@interface MMFinderLiveResDownloadManager : NSObject
{
    id <MMFinderLiveResDownloadProtocol> _downloadManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMFinderLiveResDownloadProtocol> downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)realStart:(id)arg1 downloadUrlMd5:(id)arg2 fileMD5:(id)arg3 pathManager:(id)arg4 unzipManager:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)start:(id)arg1 fileMD5:(id)arg2 enforceIntegrityCheck:(_Bool)arg3 pathManager:(id)arg4 unzipManager:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)startDownLoad:(id)arg1 enforceIntegrityCheck:(_Bool)arg2 pathManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long pendingTaskCount;

@end
