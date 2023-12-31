//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "GroupNoticeItemDownloaderDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class GroupNoticeItemDownloader, NSMutableArray, NSString;

@interface GroupNoticeDownloadMgr : MMUserService <GroupNoticeItemDownloaderDelegate, MMServiceProtocol>
{
    NSMutableArray *m_downloadItemQueue;
    GroupNoticeItemDownloader *m_downloader;
    _Bool m_isDownloading;
}

- (void).cxx_destruct;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)tryDownloadItem;
- (_Bool)isDownloadingData:(id)arg1;
- (void)stopAllDownload;
- (void)stopDownloadItem:(id)arg1;
- (void)startDownloadItem:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

