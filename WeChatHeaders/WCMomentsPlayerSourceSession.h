//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WCMomentsPlayerSourceConfigurationContext, WCMomentsPlayerSourceDownloadContext;

@interface WCMomentsPlayerSourceSession : NSObject
{
    WCMomentsPlayerSourceConfigurationContext *_configurationContext;
    WCMomentsPlayerSourceDownloadContext *_downloadContextForPreview;
    WCMomentsPlayerSourceDownloadContext *_downloadContextForFullScreen;
    NSDate *_sourceSwitchStartTime;
    NSDate *_sourceSwitchEndTime;
    long long _enterFullScreenCount;
    long long _loadingCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(nonatomic) long long enterFullScreenCount; // @synthesize enterFullScreenCount=_enterFullScreenCount;
@property(retain, nonatomic) NSDate *sourceSwitchEndTime; // @synthesize sourceSwitchEndTime=_sourceSwitchEndTime;
@property(retain, nonatomic) NSDate *sourceSwitchStartTime; // @synthesize sourceSwitchStartTime=_sourceSwitchStartTime;
@property(retain, nonatomic) WCMomentsPlayerSourceDownloadContext *downloadContextForFullScreen; // @synthesize downloadContextForFullScreen=_downloadContextForFullScreen;
@property(retain, nonatomic) WCMomentsPlayerSourceDownloadContext *downloadContextForPreview; // @synthesize downloadContextForPreview=_downloadContextForPreview;
@property(retain, nonatomic) WCMomentsPlayerSourceConfigurationContext *configurationContext; // @synthesize configurationContext=_configurationContext;
- (void)didFinishSwitchingSource;
- (void)willStartSwitchingSource;
- (void)didStopPreloadForFileKey:(id)arg1 progressInfo:(id)arg2 isCompleted:(_Bool)arg3;
- (void)didStopDownloadForFileKey:(id)arg1 taskInfo:(id)arg2 isCompleted:(_Bool)arg3;
- (void)didUpdateDownloadMoovForFileKey:(id)arg1 withProgressInfo:(id)arg2;
- (void)didStartDownloadForFileKey:(id)arg1;
- (id)downloadContextForFileKey:(id)arg1;

@end
