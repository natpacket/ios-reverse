//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCCdnServiceMgr <NSObject>
+ (_Bool)stopDownloadTaskWithFileKey:(NSString *)arg1 taskInfo:(id *)arg2;
+ (_Bool)stopDownloadTaskWithFileKey:(NSString *)arg1;
+ (int)requestVideoData:(NSString *)arg1 offset:(unsigned long long)arg2 length:(long long)arg3 bitrate:(int)arg4 dataReadyBlock:(void (^)(CdnComVideoProcessInfo *))arg5;
+ (void)setFastCompleteBlock:(NSString *)arg1 block:(void (^)(CdnDownloadTaskInfo *))arg2;
+ (_Bool)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(struct C2CDownloadRequest (^)(void))arg3 progress:(void (^)(CdnProgressInfo *))arg4 m3u8Ready:(void (^)(CdnComVideoProcessInfo *))arg5 moovReady:(void (^)(CdnComVideoProcessInfo *))arg6 complete:(void (^)(CdnDownloadTaskInfo *))arg7;
+ (_Bool)startDownloadWithType:(unsigned long long)arg1 request:(struct C2CDownloadRequest (^)(void))arg2 progress:(void (^)(CdnProgressInfo *))arg3 complete:(void (^)(CdnDownloadTaskInfo *))arg4;
+ (_Bool)startDownloadTaskWithRequest:(struct C2CDownloadRequest (^)(void))arg1 progress:(void (^)(CdnProgressInfo *))arg2 complete:(void (^)(CdnDownloadTaskInfo *))arg3;
@end

