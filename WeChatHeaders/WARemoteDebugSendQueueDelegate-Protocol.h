//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WARemoteDebug_SendDebugMessageReq;

@protocol WARemoteDebugSendQueueDelegate <NSObject>
- (void)alterEndReason:(NSString *)arg1;
- (void)serverStateChange:(NSString *)arg1;
- (void)resendCountReachThreshold;
- (void)updateNoConfirmedCount:(unsigned int)arg1 noSendCount:(unsigned int)arg2;
- (void)sendFrameData:(NSData *)arg1 consoleLog:(NSString *)arg2;
- (void)fillSendDebugMsgReq:(WARemoteDebug_SendDebugMessageReq *)arg1;
@end

