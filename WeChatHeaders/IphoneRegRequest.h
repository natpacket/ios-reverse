//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface IphoneRegRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entrance; // @dynamic entrance;
@property(retain, nonatomic) NSString *sound; // @dynamic sound;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned int tokenCert; // @dynamic tokenCert;
@property(nonatomic) unsigned int tokenEnv; // @dynamic tokenEnv;
@property(nonatomic) unsigned int tokenScene; // @dynamic tokenScene;
@property(retain, nonatomic) NSString *voipSound; // @dynamic voipSound;

@end
