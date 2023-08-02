//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderUploadProgressModel, WCFinderUploadTask;

@protocol WCFinderUploadCdnMgrDelegate <NSObject>

@optional
- (void)onFinderPreStartPostTaskWithUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderStartPostTaskWithUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderFileDumpPostSucces:(WCFinderUploadTask *)arg1;
- (void)onFinderLivePostFail:(NSString *)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onFinderPostProgress:(NSString *)arg1 progress:(WCFinderUploadProgressModel *)arg2;
- (void)onFinderPostFailFromUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderPostSucFromUploadTask:(WCFinderUploadTask *)arg1;
@end

