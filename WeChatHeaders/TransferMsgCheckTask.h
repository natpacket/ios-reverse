//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MsgCheckReq, NSString;

@interface TransferMsgCheckTask : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int isOpenIm; // @dynamic isOpenIm;
@property(retain, nonatomic) MsgCheckReq *request; // @dynamic request;
@property(nonatomic) unsigned int taskFireTime; // @dynamic taskFireTime;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

