//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo, NSString;

@protocol CdnServiceDownloadMgrExt <NSObject>
- (void)onDownloadProgress:(NSString *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)onDownloadFail:(CdnDownloadTaskInfo *)arg1;
@end
