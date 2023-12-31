//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCPlayerEventExt-Protocol.h"

@class NSString;

@interface RawVideoDownloadMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>
{
}

- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onComplete:(id)arg1 msgWrap:(id)arg2;
- (void)onProgressUpdate:(id)arg1 finishLen:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)generateDownloadArgsWrap:(id)arg1;
- (void)stopDownloadRawDataWithChatName:(id)arg1;
- (void)onDownloadStopWithWithMsg:(id)arg1 taskInfo:(id)arg2;
- (void)stopDownloadRawDataWithMsg:(id)arg1;
- (void)changeMsgWrap:(id)arg1 toDownloadStaus:(unsigned int)arg2;
- (_Bool)startDownloadRawDataWithMsg:(id)arg1;
- (_Bool)isRawDataDownloading:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

