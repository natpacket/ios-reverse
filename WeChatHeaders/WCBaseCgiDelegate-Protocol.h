//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, WCBaseCgi, WCBaseNetworkingError, WXPBGeneratedMessage;

@protocol WCBaseCgiDelegate <NSObject>

@optional
- (void)baseCgi:(WCBaseCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2 response:(WXPBGeneratedMessage *)arg3;
- (void)baseCgi:(WCBaseCgi *)arg1 didGetResponseData:(NSData *)arg2;
- (void)baseCgi:(WCBaseCgi *)arg1 didGetResponse:(WXPBGeneratedMessage *)arg2;
- (NSObject *)userDataForBaseCgi:(WCBaseCgi *)arg1;
@end
