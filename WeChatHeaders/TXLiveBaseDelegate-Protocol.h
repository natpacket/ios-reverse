//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TXLiveBaseDelegate <NSObject>

@optional
- (void)onLicenceLoaded:(int)arg1 Reason:(NSString *)arg2;
- (void)onUpdateNetworkTime:(int)arg1 message:(NSString *)arg2;
- (void)onLog:(NSString *)arg1 LogLevel:(int)arg2 WhichModule:(NSString *)arg3;
@end

