//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, CdnUploadTaskInfo, MMContext;

@protocol CallbackProtocol <NSObject>
- (void)OnRequestGetCdnDistance:(unsigned int)arg1 province:(unsigned int)arg2 city:(unsigned int)arg3;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)OnPreloadCompleted:(CdnProgressInfo *)arg1;
- (void)onDownloadToEnd:(CdnComVideoProcessInfo *)arg1;
- (void)OnMoovReady:(CdnComVideoProcessInfo *)arg1;
- (void)OnM3u8Ready:(CdnComVideoProcessInfo *)arg1;
- (void)OnDownloadPartialVideoData:(CdnComVideoProcessInfo *)arg1;
- (void)OnDownloadEnd:(CdnDownloadTaskInfo *)arg1;
- (void)OnDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnUploadEnd:(CdnUploadTaskInfo *)arg1;
- (void)OnUploadProgress:(CdnProgressInfo *)arg1;
- (MMContext *)context;
@end

