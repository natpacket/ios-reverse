//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface GetRedPacketFissionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int msgCreateTime; // @dynamic msgCreateTime;
@property(retain, nonatomic) NSData *packetFissionInfo; // @dynamic packetFissionInfo;
@property(retain, nonatomic) NSString *packetId; // @dynamic packetId;
@property(nonatomic) unsigned int packetSource; // @dynamic packetSource;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(retain, nonatomic) NSString *senderUsername; // @dynamic senderUsername;

@end

