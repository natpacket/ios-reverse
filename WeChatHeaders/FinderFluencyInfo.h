//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderFluencyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cgiType; // @dynamic cgiType;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(nonatomic) unsigned long long connectSuccessfulTime; // @dynamic connectSuccessfulTime;
@property(nonatomic) unsigned int dataHandleMs; // @dynamic dataHandleMs;
@property(nonatomic) unsigned int dbOperMs; // @dynamic dbOperMs;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int downloadBeginMs; // @dynamic downloadBeginMs;
@property(nonatomic) int finish; // @dynamic finish;
@property(nonatomic) unsigned int globalInitMs; // @dynamic globalInitMs;
@property(nonatomic) int hot; // @dynamic hot;
@property(nonatomic) unsigned int loadingTimeMs; // @dynamic loadingTimeMs;
@property(nonatomic) int pull; // @dynamic pull;
@property(nonatomic) unsigned int pullCgiMs; // @dynamic pullCgiMs;
@property(nonatomic) unsigned long long readPacketFinishedTime; // @dynamic readPacketFinishedTime;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned int showUiMs; // @dynamic showUiMs;
@property(nonatomic) unsigned long long startConnectTime; // @dynamic startConnectTime;
@property(nonatomic) unsigned long long startReadPacketTime; // @dynamic startReadPacketTime;
@property(nonatomic) unsigned long long startSendPacketTime; // @dynamic startSendPacketTime;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long startTlsHandshakeTime; // @dynamic startTlsHandshakeTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned long long tlsHandshakeSuccessfulTime; // @dynamic tlsHandshakeSuccessfulTime;
@property(nonatomic) unsigned int totalTimeMs; // @dynamic totalTimeMs;

@end

