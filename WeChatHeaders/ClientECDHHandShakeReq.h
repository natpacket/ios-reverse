//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface ClientECDHHandShakeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *device4ServerEcdhPubKey; // @dynamic device4ServerEcdhPubKey;
@property(retain, nonatomic) NSData *device4WxappEcdhPubKey; // @dynamic device4WxappEcdhPubKey;
@property(retain, nonatomic) NSData *localBaseKey; // @dynamic localBaseKey;
@property(retain, nonatomic) NSData *wxapp4DeviceEcdhPubKey; // @dynamic wxapp4DeviceEcdhPubKey;

@end

