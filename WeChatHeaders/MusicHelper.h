//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicHelper : NSObject
{
}

+ (_Bool)isWaiting;
+ (_Bool)isIdle;
+ (void)stop;
+ (void)resumeOnlyFromManualPause:(_Bool)arg1;
+ (void)resumeByWechatBiz;
+ (void)resume;
+ (_Bool)pause;
+ (_Bool)pauseWithManually:(_Bool)arg1 reportScene:(unsigned int)arg2;
+ (_Bool)isPaused;
+ (_Bool)isPlaying;

@end

