//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizMsgReSortContext, NSMutableArray, NSString;

@interface BizMsgReSortReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bitFlag; // @dynamic bitFlag;
@property(retain, nonatomic) NSString *buffer; // @dynamic buffer;
@property(retain, nonatomic) BizMsgReSortContext *context; // @dynamic context;
@property(nonatomic) unsigned int digestBoldCnt; // @dynamic digestBoldCnt;
@property(nonatomic) unsigned int digestExposeCnt; // @dynamic digestExposeCnt;
@property(nonatomic) _Bool isHeadsetOn; // @dynamic isHeadsetOn;
@property(nonatomic) unsigned int lastFailReason; // @dynamic lastFailReason;
@property(retain, nonatomic) NSMutableArray *msg; // @dynamic msg;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(retain, nonatomic) NSString *recBuffer; // @dynamic recBuffer;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

