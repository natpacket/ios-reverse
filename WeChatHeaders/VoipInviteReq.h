//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, VoipRelayData;

@interface VoipInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int callType; // @dynamic callType;
@property(retain, nonatomic) VoipRelayData *capInfo; // @dynamic capInfo;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) int hdvideo; // @dynamic hdvideo;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(nonatomic) int inviteUserCount; // @dynamic inviteUserCount;
@property(nonatomic) unsigned int ipStack; // @dynamic ipStack;
@property(nonatomic) unsigned int isWksimCard; // @dynamic isWksimCard;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int nicCnt; // @dynamic nicCnt;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
@property(retain, nonatomic) VoipRelayData *peerId; // @dynamic peerId;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;
@property(retain, nonatomic) NSMutableArray *toUsernameList; // @dynamic toUsernameList;

@end

