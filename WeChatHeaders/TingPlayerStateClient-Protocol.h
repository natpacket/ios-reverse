//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol TingPlayerStateClient <NSObject>
- (void)onInactivated:(NSString *)arg1 update:(_Bool)arg2;
- (void)onActivated:(NSString *)arg1 taskId:(NSString *)arg2 update:(_Bool)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(NSData *)arg1 event:(int)arg2 msg:(NSData *)arg3;
- (void)onPlayEvent:(NSData *)arg1 event:(int)arg2 msg:(NSData *)arg3;
@end

