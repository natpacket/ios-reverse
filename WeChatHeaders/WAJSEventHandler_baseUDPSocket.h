//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@interface WAJSEventHandler_baseUDPSocket : WAJSEventHandler_BaseEvent
{
}

+ (void *)udpClientForSocketId:(id)arg1;
+ (id)socketIdForUdpClient:(void *)arg1;
+ (void)removeAllUdpSocketForAppId:(id)arg1;
+ (void)removePairSocketId:(id)arg1;
- (void)addPairSocketId:(id)arg1 udpClient:(void *)arg2;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)handleJSEvent:(id)arg1 socketId:(id)arg2 udpClient:(void *)arg3;
- (void)handleJSEvent:(id)arg1;

@end

