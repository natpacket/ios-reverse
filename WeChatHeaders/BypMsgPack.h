//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BypMsgAppMsg, BypMsgEmoji, BypMsgImage, BypMsgText, BypMsgVideo, NSData, NSString;

@interface BypMsgPack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BypMsgAppMsg *bypAppmsg; // @dynamic bypAppmsg;
@property(retain, nonatomic) BypMsgEmoji *bypEmoji; // @dynamic bypEmoji;
@property(retain, nonatomic) BypMsgImage *bypImage; // @dynamic bypImage;
@property(retain, nonatomic) BypMsgText *bypText; // @dynamic bypText;
@property(retain, nonatomic) BypMsgVideo *bypVideo; // @dynamic bypVideo;
@property(retain, nonatomic) NSString *cliMsgId; // @dynamic cliMsgId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) NSData *msgExtInfo; // @dynamic msgExtInfo;
@property(retain, nonatomic) NSString *msgSessionId; // @dynamic msgSessionId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

