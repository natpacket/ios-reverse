//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnTicker;
@protocol OS_dispatch_source;

@interface CdnAppActivationMonitor : NSObject
{
    _Bool _isInForeground;
    _Bool _isActive;
    NSObject<OS_dispatch_source> *_activationCheckTimer;
    CdnTicker *_backgroundTicker;
}

+ (void)logAppState;
+ (_Bool)checkAppActiveState;
+ (_Bool)isAnySceneInForeground;
+ (_Bool)isAnySceneActive;
+ (_Bool)isAppInForeground;
+ (_Bool)isAppActive;
+ (void)start;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CdnTicker *backgroundTicker; // @synthesize backgroundTicker=_backgroundTicker;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *activationCheckTimer; // @synthesize activationCheckTimer=_activationCheckTimer;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property _Bool isInForeground; // @synthesize isInForeground=_isInForeground;
- (void)onSceneResignActive:(id)arg1;
- (void)onSceneEnterBackground:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppEnterBackground:(id)arg1;
- (void)stopActivationCheckTimer;
- (void)startActivationCheckTimer;
- (id)init;

@end

