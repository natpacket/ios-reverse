//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface CDNUploadMsgImgPrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *attachedContent; // @dynamic attachedContent;
@property(retain, nonatomic) NSString *clientImgId; // @dynamic clientImgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientStat; // @dynamic clientStat;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *imgDataHash; // @dynamic imgDataHash;
@property(retain, nonatomic) NSString *imgSourceUrl; // @dynamic imgSourceUrl;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *mediaTagName; // @dynamic mediaTagName;
@property(retain, nonatomic) NSString *meesageExt; // @dynamic meesageExt;
@property(retain, nonatomic) NSString *messageAction; // @dynamic messageAction;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int noCommit; // @dynamic noCommit;
@property(retain, nonatomic) NSString *platformSignature; // @dynamic platformSignature;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) int thumbHeight; // @dynamic thumbHeight;
@property(nonatomic) int thumbWidth; // @dynamic thumbWidth;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

