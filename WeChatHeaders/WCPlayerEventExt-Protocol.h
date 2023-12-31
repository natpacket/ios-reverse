//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, WCDownloadArgsWrap, WCPlayerView;

@protocol WCPlayerEventExt <NSObject>

@optional
- (void)onPlayerSwitchDataSource:(WCDownloadArgsWrap *)arg1;
- (void)onPlayerDownloadStop:(WCDownloadArgsWrap *)arg1 downloadInfo:(CdnDownloadTaskInfo *)arg2;
- (void)onPlayerDownloadComplete:(WCDownloadArgsWrap *)arg1 downloadInfo:(CdnDownloadTaskInfo *)arg2;
- (void)onPlayerDownloadProgress:(WCDownloadArgsWrap *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerDownloadMoovReady:(WCDownloadArgsWrap *)arg1 progressInfo:(CdnComVideoProcessInfo *)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(WCDownloadArgsWrap *)arg2;
- (void)onPlayerStartDownload:(WCDownloadArgsWrap *)arg1;
- (void)onMuteForExternalPlaybackMode:(WCPlayerView *)arg1;
- (void)onPlayer:(WCPlayerView *)arg1 muteChanged:(_Bool)arg2;
- (void)onPlayerStopPlay:(WCPlayerView *)arg1;
- (void)onPlayerStartPlay:(WCPlayerView *)arg1;
@end

