//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MonoServiceLogic : NSObject
{
}

+ (void)stopWxaVoipIfNeed;
+ (id)getConflictWording;
+ (void)showMonoServiceWorkingConflict;
+ (_Bool)isVideoMonoServiceWorking;
+ (_Bool)isVideoMonoServiceWorkingIgnoreAppScene:(_Bool)arg1 inMainScene:(_Bool)arg2;
+ (_Bool)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1;
+ (_Bool)isAudioMonoServiceWorking;
+ (_Bool)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1 ignoreAppScene:(_Bool)arg2 inMainScene:(_Bool)arg3;

@end
