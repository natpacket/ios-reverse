//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EXTPKG_mmpayapplynfccardbo_DeviceInfo, NSString;

@interface OrderCreateOrderRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) long long applyAmount; // @dynamic applyAmount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *fpanId; // @dynamic fpanId;
@property(nonatomic) long long orderAmount; // @dynamic orderAmount;
@property(nonatomic) int orderType; // @dynamic orderType;

@end

