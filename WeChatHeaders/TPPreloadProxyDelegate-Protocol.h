//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TPPreloadProxyDelegate <NSObject>

@optional
- (void)onPreloadDownloadProgressUpdateWithPlayId:(int)arg1 playabelDuration:(int)arg2 downloadSpeed:(int)arg3 currentDownloadSize:(long long)arg4 totalFileSize:(long long)arg5 extInfo:(NSString *)arg6;
- (void)onPreloadErrorWithPlayId:(int)arg1 moduleId:(int)arg2 errorCode:(int)arg3 extInfo:(NSString *)arg4;
- (void)onPreloadSuccessWithPlayId:(int)arg1;
- (void)onPreloadDownloadProgressUpdateWithPlayabelDuration:(int)arg1 downloadSpeed:(int)arg2 currentDownloadSize:(long long)arg3 totalFileSize:(long long)arg4;
- (void)onPreloadError;
- (void)onPreloadSuccess;
@end

