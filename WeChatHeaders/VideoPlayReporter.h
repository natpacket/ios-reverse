//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VideoPlayReporter : NSObject
{
}

+ (void)reportOnDownloadMsg:(id)arg1 taskInfo:(id)arg2;
+ (id)getActionPrefix:(id)arg1;
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2 totalPlayTime:(unsigned int)arg3 loadingTime:(unsigned long long)arg4;
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2;

@end
