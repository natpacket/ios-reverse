//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface SetTeenagerModePwdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *code; // @dynamic code;
@property(retain, nonatomic) NSString *guardianUserName; // @dynamic guardianUserName;
@property(retain, nonatomic) NSString *identityNum; // @dynamic identityNum;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int ticketType; // @dynamic ticketType;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

