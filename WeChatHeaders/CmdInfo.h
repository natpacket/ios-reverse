//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, PaymentSelectPageData, RetryExtraParam, RouteInfo;

@interface CmdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cmdData; // @dynamic cmdData;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(nonatomic) unsigned int customCmdId; // @dynamic customCmdId;
@property(retain, nonatomic) PaymentSelectPageData *paymentPage; // @dynamic paymentPage;
@property(retain, nonatomic) RetryExtraParam *retryExtraParam; // @dynamic retryExtraParam;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;

@end

