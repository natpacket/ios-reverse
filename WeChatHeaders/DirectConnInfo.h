//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, VoipAddrSet;

@interface DirectConnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int connId; // @dynamic connId;
@property(nonatomic) int localNetType; // @dynamic localNetType;
@property(retain, nonatomic) NSString *localNicDeviceId; // @dynamic localNicDeviceId;
@property(nonatomic) int localNicType; // @dynamic localNicType;
@property(retain, nonatomic) NSMutableArray *natDetectSession; // @dynamic natDetectSession;
@property(nonatomic) unsigned int natDetectSessionCnt; // @dynamic natDetectSessionCnt;
@property(retain, nonatomic) VoipAddrSet *punchSvr; // @dynamic punchSvr;
@property(nonatomic) int remoteNetType; // @dynamic remoteNetType;
@property(retain, nonatomic) NSString *remoteNicDeviceId; // @dynamic remoteNicDeviceId;
@property(nonatomic) int remoteNicType; // @dynamic remoteNicType;
@property(nonatomic) int statInterval; // @dynamic statInterval;

@end

