//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ClientBaseHandShakeReq, ClientECDHHandShakeReq, ClientPSKHandShakeReq;

@interface BuildDeviceSecureChannelReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ClientECDHHandShakeReq *ecdhReq; // @dynamic ecdhReq;
@property(retain, nonatomic) ClientBaseHandShakeReq *handshakeBaseReq; // @dynamic handshakeBaseReq;
@property(retain, nonatomic) ClientPSKHandShakeReq *pskReq; // @dynamic pskReq;
@property(nonatomic) unsigned int reqHandshakeTypeFlag; // @dynamic reqHandshakeTypeFlag;

@end

