//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, TingCgiInfo, TingCgiTransferInfo;

@interface TingFlutterCgiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int funcId; // @dynamic funcId;
@property(retain, nonatomic) TingCgiInfo *ilink; // @dynamic ilink;
@property(retain, nonatomic) NSString *ilinkUrl; // @dynamic ilinkUrl;
@property(retain, nonatomic) NSString *json; // @dynamic json;
@property(nonatomic) _Bool longPolling; // @dynamic longPolling;
@property(nonatomic) unsigned int longPollingTimeout; // @dynamic longPollingTimeout;
@property(retain, nonatomic) TingCgiInfo *mmnet; // @dynamic mmnet;
@property(retain, nonatomic) NSString *mmnetUrl; // @dynamic mmnetUrl;
@property(nonatomic) _Bool transfer; // @dynamic transfer;
@property(retain, nonatomic) TingCgiTransferInfo *transferInfo; // @dynamic transferInfo;

@end

