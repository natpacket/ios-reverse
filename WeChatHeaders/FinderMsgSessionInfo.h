//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderMsgSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enableAction; // @dynamic enableAction;
@property(retain, nonatomic) NSData *msgExtInfo; // @dynamic msgExtInfo;
@property(nonatomic) unsigned int rejectMsg; // @dynamic rejectMsg;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end
