//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface EnterTempSessionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSData *sessionFrom; // @dynamic sessionFrom;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

