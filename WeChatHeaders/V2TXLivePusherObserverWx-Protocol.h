//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "V2TXLivePusherObserver-Protocol.h"

@class NSDictionary, NSString;

@protocol V2TXLivePusherObserverWx <V2TXLivePusherObserver>

@optional
- (void)onNetworkQuality:(long long)arg1;
- (void)onUserAudioAvailable:(NSString *)arg1 available:(_Bool)arg2;
- (void)onUserVideoAvailable:(NSString *)arg1 streamType:(long long)arg2 available:(_Bool)arg3;
- (void)onRemoteUserExit:(NSString *)arg1 reason:(long long)arg2;
- (void)onRemoteUserEnter:(NSString *)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onPushNetStatus:(NSDictionary *)arg1;
- (void)onPushEvent:(long long)arg1 param:(NSDictionary *)arg2;
@end

