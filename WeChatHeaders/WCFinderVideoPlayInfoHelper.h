//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderVideoPlayInfoHelper : NSObject
{
}

+ (id)getAudioBitrateWithPlayBackInfo:(id)arg1;
+ (id)getVideoSpeedInfoWithContentVM:(id)arg1;
+ (id)getVideoDownloadDebugInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3 playBackInfo:(id)arg4;
+ (id)getVideoPreloadProgressBar;
+ (id)getPreloadProgressBarWithTitle:(id)arg1 len:(double)arg2 buff:(double)arg3 play:(double)arg4 isStreaming:(_Bool)arg5;
+ (id)getVideoDownloadProgressInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;
+ (id)getVideoDownloadProgressSimplifiedInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;

@end

