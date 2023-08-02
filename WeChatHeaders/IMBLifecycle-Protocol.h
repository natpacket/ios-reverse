//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMBLifecycle <NSObject>

@optional
- (void)onJSException:(NSString *)arg1 msg:(NSString *)arg2 extra:(NSDictionary *)arg3;
- (void)onDestroy:(int)arg1;
- (void)onPause;
- (void)onResume;
- (void)onMainScriptInjected:(NSString *)arg1;
- (void)onCreated;
@end

