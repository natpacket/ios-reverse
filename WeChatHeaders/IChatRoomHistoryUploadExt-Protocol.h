//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, NSString;

@protocol IChatRoomHistoryUploadExt <NSObject>

@optional
- (void)onHistoryUploadProgressChanged:(NSString *)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onHistoryUploadFinish:(NSString *)arg1 uploadInfo:(CdnUploadTaskInfo *)arg2 errMsg:(NSString *)arg3;
@end

