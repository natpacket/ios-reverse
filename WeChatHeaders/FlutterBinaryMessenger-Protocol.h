//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol FlutterBinaryMessenger <NSObject>
- (void)cleanUpConnection:(long long)arg1;
- (long long)setMessageHandlerOnChannel:(NSString *)arg1 binaryMessageHandler:(void (^)(NSData *, void (^)(NSData *)))arg2;
- (void)sendOnChannel:(NSString *)arg1 message:(NSData *)arg2 binaryReply:(void (^)(NSData *))arg3;
- (void)sendOnChannel:(NSString *)arg1 message:(NSData *)arg2;
@end
